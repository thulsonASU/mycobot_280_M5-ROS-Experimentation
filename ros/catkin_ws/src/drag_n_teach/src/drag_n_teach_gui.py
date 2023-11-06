import subprocess
import tkinter as tk
from tkinter import filedialog
import rospy
import moveit_commander
import tool_cordtopose
import tool_posetocord
import tool_playback


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

        # initialize the class instances
        self.tcp = tool_cordtopose.tool_cordtopose(guiDir=working_directory)
        # self.tpc = tool_posetocord.tool_posetocord(guiDir=working_directory)
        # self.tp = tool_playback.tool_playback(guiDir=working_directory)

        self.window = tk.Tk()
        self.window.title("ROS Launcher")
        
        self.working_directory = working_directory
        # Add text that tells the user to launch and shutdown one at a time
        tk.Label(self.window, text="Launch and shutdown one at a time.").grid(row=0, column=1)
        tk.Button(self.window, text="Launch Teacher", command=self.launchTeach).grid(row=1, column=0)
        # Add a button that records the pose of the robot
        tk.Button(self.window, text="Teach Pose", command=self.tcp.run).grid(row=2, column=0)
        
        tk.Button(self.window, text="Launch Trainer", command=self.launchTrain).grid(row=2, column=1)
        tk.Button(self.window, text="Launch Player", command=self.launchPlay).grid(row=2, column=2)
        tk.Button(self.window, text="Shutdown Teaher", command=self.shutdown1).grid(row=3, column=0)
        tk.Button(self.window, text="Shutdown Trainer", command=self.shutdown2).grid(row=3, column=1)
        tk.Button(self.window, text="Shutdown Player", command=self.shutdown3).grid(row=3, column=2)
        
    def launchTeach(self):
        subprocess.Popen(["roslaunch", "drag_n_teach", "tool_cordpose.launch"], cwd=self.working_directory)
        
    def launchTrain(self):
        subprocess.Popen(["roslaunch", "drag_n_teach", "tool_posecord.launch"], cwd=self.working_directory)
        
    def launchPlay(self):
        subprocess.Popen(["roslaunch", "drag_n_teach", "tool_playback.launch"], cwd=self.working_directory)
        
    def shutdown1(self):
        subprocess.run(["rosnode", "kill", "/tool_cordtopose"])
        subprocess.run(["rosnode", "kill", "/rviz"])
        subprocess.run(["rosnode", "kill", "/robot_state_publisher"])
        subprocess.run(["rosnode", "kill", "/move_group"])
        # subprocess.run(["rosnode", "kill", "/joint_state_publisher_gui"])
        rospy.signal_shutdown("KeyboardInterrupt")
        moveit_commander.roscpp_shutdown()
        
    def shutdown2(self):
        subprocess.run(["rosnode", "kill", "/train_robot"])
        rospy.signal_shutdown()
        moveit_commander.roscpp_shutdown()
        
    def shutdown3(self):
        subprocess.run(["rosnode", "kill", "/joint_state_publisher"])
        rospy.signal_shutdown()
        moveit_commander.roscpp_shutdown()
        
if __name__ == "__main__":
    working_directory_window = WorkingDirectoryWindow()
    working_directory_window.window.mainloop()
    working_directory = working_directory_window.directory.get()
    
    ros_launch_window = RosLaunchWindow(working_directory)
    ros_launch_window.window.mainloop()
