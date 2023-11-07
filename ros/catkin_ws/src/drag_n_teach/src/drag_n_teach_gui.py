import subprocess
import re
import tkinter as tk
from tkinter import filedialog
import rospy
import moveit_commander
import tool_cordtopose
import tool_posetocord
import tool_playback
from pathlib import Path

class WorkingDirectoryWindow:
    def __init__(self):
        self.window = tk.Tk()
        self.window.title("Select Working Directory")
        
        self.directory = tk.StringVar()
        self.directory.set("")
        
        tk.Label(self.window, text="Working Directory:").grid(row=0, column=0)
        tk.Entry(self.window, textvariable=self.directory).grid(row=0, column=1)
        tk.Button(self.window, text="Browse", command=self.browse_directory).grid(row=0, column=2)
        tk.Button(self.window, text="Done", command=self.close_window).grid(row=1, column=1)
        
    def browse_directory(self):
        directory = filedialog.askdirectory()
        self.directory.set(directory)
        
    def close_window(self):
        self.window.destroy()

class RosLaunchWindow:

    def __init__(self, working_directory):

        # Start roscore if not already running
        running_nodes = subprocess.check_output(["rosnode", "list"]).decode('utf-8')
        if "/rosout" not in running_nodes:
            subprocess.Popen(["roscore"])

        self.window = tk.Tk()
        self.window.title("ROS Launcher")
        
        self.working_directory = working_directory

        # Initialize the node
        rospy.init_node('drag_n_teach_gui')

        self.tcp = tool_cordtopose.tool_cordtopose(guiDir=working_directory)
        self.tpc = tool_posetocord.tool_posetocord(guiDir=working_directory)
        self.tp = tool_playback.tool_playback(guiDir=working_directory)

        # Add text that tells the user to launch and shutdown one at a time
        tk.Label(self.window, text="Launch and shutdown one at a time.").grid(row=0, column=2)

        ########################
        # Teacher GUI Elements #
        ########################
        tk.Button(self.window, text="Launch Teacher", command=self.launchTeach).grid(row=1, column=0)
        # Add a button that records the pose of the robot
        tk.Button(self.window, text="Teach Pose", command=self.tcp.run).grid(row=2, column=0)
        tk.Button(self.window, text="Shutdown Teaher", command=self.shutdown).grid(row=3, column=0)
        
        ########################
        # Trainer GUI Elements #
        ########################
        tk.Button(self.window, text="Launch Trainer", command=self.launchTrain).grid(row=1, column=2)

        # Create a drop down menu for the user to select a motion planner
        planners = [
            "SBL", "EST", "LBKPIECE", "BKPIECE", "KPIECE", "RRT", "RRTConnect", "RRTstar", "TRRT",
            "PRM", "PRMstar", "FMT", "BFMT", "PDST", "STRIDE", "BiTRRT", "LBTRRT", "BiEST"
            "ProjEST", "LazyPRM", "LazyPRMstar", "SPARS", "SPARStwo"
        ]
        self.planner = tk.StringVar()
        self.planner.set(planners[0])
        tk.OptionMenu(self.window, self.planner, *planners, command=lambda choice: self.tpc.setPlanner(choice)).grid(row=2, column=2)

        # add text that tells the user to select a motion planner from the drop down
        # tk.Label(self.window, text="Select a motion planner =>").grid(row=1, column=1)

        # Add a button to Train a trajectory
        tk.Button(self.window, text="Train Trajectory", command=self.tpc.run).grid(row=3, column=2)

        tk.Button(self.window, text="Shutdown Trainer", command=self.shutdown).grid(row=4, column=2)

        #########################
        # Playback GUI Elements #
        #########################
        tk.Button(self.window, text="Launch Player", command=self.launchPlay).grid(row=1, column=3)
        # Button for playback
        tk.Button(self.window, text="Playback Trajectories", command=self.tp.run).grid(row=2, column=3)
        tk.Button(self.window, text="Shutdown Player", command=self.shutdown).grid(row=3, column=3)

        # Quit GUI button
        tk.Button(self.window, text="Quit", command=self.quit).grid(row=5, column=3)

    def launchTeach(self):
        subprocess.Popen(["roslaunch", "drag_n_teach", "tool_cordpose.launch"], cwd=self.working_directory)
        self.tcp.BTN_flag = True
    def launchTrain(self):
        subprocess.Popen(["roslaunch", "drag_n_teach", "tool_posecord.launch"], cwd=self.working_directory)
        self.tpc.initalizeReader()
        self.tpc.BTN_flag = True
    def launchPlay(self):
        subprocess.Popen(["roslaunch", "drag_n_teach", "tool_playback.launch"], cwd=self.working_directory)
        self.tp.BTN_flag = True
        
    def shutdown(self):
        # check if node is running if running then kill
        self.kill_node_if_running("/tool_cordtopose")
        self.kill_node_if_running("/tool_posetocord")
        self.kill_node_if_running("/joint_state_publisher")
        self.kill_node_if_running("/robot_state_publisher")
        self.kill_node_if_running("/move_group")
        self.kill_node_if_running("/rviz") # May carry over between launches by launching the gui with rviz config?
        # moveit_commander.roscpp_shutdown()
    
    def quit(self):
        # check if node is running if running then kill
        self.kill_node_if_running("/drag_n_teach_gui")
        self.kill_node_if_running("/tool_cordtopose")
        self.kill_node_if_running("/tool_posetocord")
        self.kill_node_if_running("/joint_state_publisher")
        self.kill_node_if_running("/robot_state_publisher")
        self.kill_node_if_running("/move_group")
        self.kill_node_if_running("/rviz")  # May carry over between launches by launching the gui with rviz config?

        # The below are respawned by roscore and are impossible to kill outright
        # self.kill_node_if_running("/joint_state_publisher_gui")
        # kill moveit_python wrappers
        # self.kill_nodes_matching_pattern("/moveit_python_wrappers_")
        # kill move group command wrappers
        # self.kill_nodes_matching_pattern("/move_group_commander_wrappers_")
        
        # Solution: Shutdown roscore
        self.kill_node_if_running("/rosout")
        
        rospy.signal_shutdown("Application Shutdown")
        moveit_commander.roscpp_shutdown()
        self.window.destroy()
    
    def kill_node_if_running(self, node_name):
        running_nodes = subprocess.check_output(["rosnode", "list"]).decode('utf-8')
        if node_name in running_nodes:
            result = subprocess.run(["rosnode", "kill", node_name], capture_output=True, text=True)
            if "killed" not in result.stdout:
                print(f"Failed to kill node {node_name}: {result.stdout}")
                print("Node is possibly already dead.")
    
    # def kill_nodes_matching_pattern(self, pattern):
    #     # Get a list of all running nodes
    #     nodes = subprocess.check_output("rosnode list", shell=True).decode('utf-8').split('\n')

    #     # Iterate over the nodes
    #     for node in nodes:
    #         # If the node name matches the pattern, kill it
    #         if re.search(pattern, node):
    #             self.kill_node_if_running(node)
        
if __name__ == "__main__":
    working_directory_window = WorkingDirectoryWindow()
    working_directory_window.window.mainloop()
    working_directory = working_directory_window.directory.get()
    
    # If working_directory is empty, set it to a default value
    if not working_directory:
        # Get user directory path
        home = str(Path.home())
        working_directory = home + '/catkin_ws/src/drag_n_teach/poses'
    
    ros_launch_window = RosLaunchWindow(working_directory)
    ros_launch_window.window.mainloop()
