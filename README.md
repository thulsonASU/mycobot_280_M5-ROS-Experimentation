# 280-M5_ROS

<br /> **Basic Description** <br />
Experimenting with a myCobot from Elephant Robotics. The 280-M5.

<br /> **Goal** <br />
To learn the fundamentals of ROS 1 by developing pick and place programs and functions for the 280 with the M5 robot controller in ROS using a linux/unix based operating system.

# How To Use (Basic Start)

## Install Linux Version
You have many options on what you want to do with Linux. You can (A.) follow along with the official tutorial and install VirtualBox and set up a VM Env with part of your drive partitioned. (B.) Dual boot linux with Rufus with half of your drive partitioned to the new OS. You will be able to use both operating systems on your machine. WARNING: I AM NOT RESPONSIBLE FOR ANY LOSS OF DATA, BE CAREFUL AND CLOSELY FOLLOW TUTORIALS IF DUAL BOOTING. (C.) Install Linux OS onto an old left over laptop or other computer you can use. <br />
<br />

## Calibrate myCobot 280-M5
To disclose, the robot I used to make this git repo was not calibrated myself. I am borrowing it and I am unable to install the necessary software on my machine to calibrate it. For this stage my best suggestion is to follow the official [tutorial](https://docs.elephantrobotics.com/docs/gitbook-en/4-BasicApplication/) closely to assure you have set up myCobot 280-M5.

## Set up ROS Environment
This was straight forward for me. As long as you are using the correct Ubuntu distro supported by ROS installing ROS and setting up the environment should be as simple as following the tutorial provided by the [gitbook](https://docs.elephantrobotics.com/docs/gitbook-en/12-ApplicationBaseROS/) from Elephant Robotics. After installing ROS, MoveIt, Git, and the necessary precondition steps, we can move onto learning how to use my pick and place script.

## Custom Pick and Place Package
The script itself is located in ros/catkin_ws/src/pick_n_place/src/ titled pick_n_place.py. To run te script you will need 5 terminals open. All terminals need to be in the catkin_ws. If you made any modifications to the script you will need to rebuild the ws using ```catkin_make```. If your USB port is named differently you will have to change the port that the robot is connected to. Use ```dmesg``` to find the port.
* Terminal 1 will run: ```roscore # The master for ROS```
* Terminal 2 will run: ```roslaunch mycobot_280_moveit mycobot_moveit.launch # activates moveit motion planning```
* Terminal 3 will run: ```rosrun mycobot_280_moveit sync_plan.py _port:=/dev/ttyACM0 _baud:=115200 # connects robot to moveit motion planner```
* Terminal 4 will run: ```roslaunch pick_n_place picknplace.launch # activates services```
* Terminal 5 will execute the script by running: ```rosrun pick_n_place pick_n_place.py # main script executing commands```

# Personal ELog

### Day 1: Linux
Linux was the first big challenge/hurdle to this project. I started out using an old Dell Inspirion laptop running an older version of BIOS evidently before UEFI. This presented the challenge of how to boot a Linux Distribution, in my case Ubuntu, onto the laptop. The laptop itself is running Windows 7 Home Professional. After attempting a work around with several different versions of Rufus to hopefully find one that would work with the older BIOS; I ended up formatting the Ubuntu image onto a USB and made it bootable using Rufus 3.21 on a Lenovo Thinkpad.

### Day 2: Github
This usually isn't a major process to make note of for me, but I learned a new way to use github that I think is worth documenting. In short, I learned how to set up Github on a Linux system as well as set up an SSH (Secure Shell) key for use between the Linux machine and the Github site. This allows me to push git commits to Github via command line interface from Linux. I learned this due to Github removing password authentication via command line, forcing me to learn a new method to authenticate Git. I first followed the provided link in the command line when suggesting other authentication methods. I was overloaded with information, so I took a step back and researched on Google how to authenticate Git on a Linux Distro. I found out that most easy to follow tutorials used the password method, which evidently was the very method I could not use. So, I went back to the documentation the link provided and browsed. I went ahead and started a session of ChatGPT to try and get a better understanding of what I was reading in a more layman's terms sort of way. By doing so I can get a better grasp on how the systems work. What I learned is I can generate an SSH key by using ```ssh-keygen```. However, my home/user path did not have the correct permissions for a key gen. The permissions were set to 0750 for the directory with '5' referring to read and execute, I believe, and 7 being, read, write, and execute. Since I needed to write to generate an SSH key I had to update the permissions of that path using the terminal. In the terminal, to update the permissions, I used ```chmod 700 /path/to/home/dir```. Once updated, I tracked back to generate my key. I had to generate my key three times in total during the learning process. The first time I generated it I kept it simple and didn't include an email going off of what ChatGPT was suggesting. What I got in return was a private and public key. At the time, I didn't know the difference and attempted to use the private key on Github, which in turn lead me to research OpenSSH as Github denied the key due to formatting. Essentially, I go two steps forward, realize I am skipping ahead too far, and go one step backwards, or entirely to review the material again with my new knowledge on how it works of a coffee break of course :D. On my third attempt I utilized the Github documentation on how to authenticate with SSH, and behold it worked as the documentation said it would :O. I generated my key with an email attached that links to my Github account. got the public key by doing ```ssh-keygen -y -f path/to/key``` copied that from the terminal and fed it to Github. From there I should be good to go right? Wrong, I still needed to link the key to the SSH Agent. What is an SSH Agent? In short, it is a program that helps to manage SSH keys. What it does is authenticate a private key to a public key where the private key is stored on the local machine and stores that private key in memory, so a passphrase is not required each time the key is used as long as it is unlocked in the agent's memory. Basic network security stuff. Very cool and important. Anyways, now that Github is set up and the repository is cloned with SSH I am good to go!

### Day 3: Setting up ROS

<br /> **3.1 Accidental Learning** <br />
Installed FUSE and learned how to run appImages. This is necessary for myStudio to run so I can set up the necessary firmware and drivers for the robot. This path put me off track. I ran into some issues trying to run the appimage for the software and was uncomfortable installing it via just the tar.gz source code. I decided to check the ROS 1 Gitbook and start off from there and back track as needed for setting it up. Note to self and others: ROS 1 Gitbook will provide documentation on how to set up a VM with Virtual Box so anyone can set up a Linux VM to run the 280-M5 cobot with ROS in a Linux VM.

<br /> **3.2 ROS 1 Environment Setup** <br />
Installing ROS 1 for Ubuntu versions 20+ via: http://wiki.ros.org/noetic/Installation/Ubuntu <br />
Chose Desktop-Full Install for ROS 1 Noetic. <br />
Problem. I am running Ubuntu Jammy (22.04) and trying to install ROS 1 Noetic for Ubuntu Focal (20.04). Work arounds -> Install Ubuntu Focal or Install manually. Will attempt manual install. Did additional research. Decided to adjust scope to ROS2 Humble which works with Ubuntu Jammy (22.04). Note ROS 2 Foxy Maintnance Period on May 2023.

<br /> **3.3 ROS 2 Environment Setup** <br />
Installing ROS 2 for Ubuntu Jammy via: 
<br /> https://docs.elephantrobotics.com/docs/gitbook-en/12-ApplicationBaseROS/12.2-ROS2/12.2.1-ROS2%E7%9A%84%E5%AE%89%E8%A3%85.html
<br /> http://docs.ros.org/en/humble/Installation.html <br />

Problem. While attempting install ran into a roadblock with adding the ROS 2 repo to APT. Problem Repo is malformed entry. Removed APT line with the following.
```bash
sudo rm /etc/apt/sources.list.d/ros2.list
sudo apt update
sudo apt autoremove
# Consider upgrading for packages previously shadowed.
sudo apt upgrade
```
Resotred system to working order. Looking at other ways to add the apt line either via fish-shell or the GUI. Well fun fact. Bash ins preinstalled! and to use it with fish-shell simply do ```bash -c 'command'```. I spent the last 3 hours trying to find out I can just do a simple bash -c command. Oh well.

<br />

ROS2 Humble is installed! setup to work with bash. To enter bash via fish-shell simply type ```bash``` to enter. 
![Example of ROS2 Installation](https://github.com/thulsonASU/280-M5_ROS/blob/main/ROS2Install.jpg?raw=true)

<br /> 
To finish up I installed moveit2. 
<br />

Next, I set up a ROS2 workspace.
```bash
# Create a folder
mkdir -p Documents/Github/280-M5_ROS/colcon_ws/src
# compile workspace
cd ~/colcon_ws
colcon build
```

### Day 4: Basic ROS2 Humble Tutorial
/#/ ETutorial = Elephant Tutorials /-/ OTutorials = ROS2 Official Tutorials /#/ <br />
ETutorial: https://docs.elephantrobotics.com/docs/gitbook-en/12-ApplicationBaseROS/12.2-ROS2/12.2.2-%E5%9F%BA%E7%A1%80%E6%95%99%E7%A8%8B.html <br />

#### 4.1 Topics 
OTutorial: https://docs.ros.org/en/foxy/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Topics/Understanding-ROS2-Topics.html <br /> 
![Topic Example](https://user-images.githubusercontent.com/100303302/223836350-3c7bb3b8-6619-4f86-8d3a-0656ce834d57.gif)
##### Topic list/echo/info/interface
Using command line you can disply information on specific topics as the messages pass through.
```bash
ros2 topic list -t # Display topics and the corresponding message type

# ros2 topic echo <topic_name>
ros2 topic echo /turtle1/cmd_vel # Echos the turtles x, y, z and angular pitch, roll, yaw in command line. View Topic Content

ros2 topic info /turtle1/cmd_vel # Output /turtle1/cmd_vel topic related information. Topic-related information.

# ros2 interface show <msg_type>
# Output geometry_msgs/msg/Twist interface related information
ros2 interface show geometry_msgs/msg/Twist # Display interface related information
```
![Turtle_Topic-eg](https://user-images.githubusercontent.com/100303302/223841649-fd570292-9d78-4309-9e68-8aaa725e64cf.gif)
##### Topic pub
You can also issue orders for autonomous control. My previous example was TeleOp via a Keyboard.
```bash
# ros2 topic pub <topic_name> <msg_type> '<args>' 
# Issue speed command (--once plays command once on a single line) (x: is speed 2 in x dir, z: 1.8 is rotation in z dir.)
# Using ```pub``` you can send information to the topic to control the turtle sim. Rather than taking the keyboard input.
ros2 topic pub --once /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1}}"
ros2 topic pub --once /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.2}}"
ros2 topic pub --once /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.4}}"
ros2 topic pub --once /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.8}}"
# Issue speed commands at a certain frequency (--rate will dictate the frequency this line is reposted until user breaks out of loop)
ros2 topic pub --rate 1 /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.8}}"
```
![Turtle_Pub-eg](https://user-images.githubusercontent.com/100303302/223846429-e1f64ea8-10ba-4b23-afd4-d6a448c55569.gif)

#### 4.2 Nodes
OTutorial: https://docs.ros.org/en/foxy/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Nodes/Understanding-ROS2-Nodes.html <br />
![Nodes-TopicandService](https://user-images.githubusercontent.com/100303302/223847918-0c22e7f9-c80a-48af-b8ea-070dcd8e979f.gif)
##### Node list/relationships/remapping/information
```bash
# Listing Nodes
ros2 node list

# Node Relationships
rqt_graph

# Remapping Nodes
ros2 run turtlesim turtlesim_node --ros-args --remap __node:=my_turtle
ros2 node list

# View Node Information
# ros2 node info <node_name>
ros2 node info /my_turtle
```
![Turtle_Nodes-eg](https://user-images.githubusercontent.com/100303302/223849519-0c54f605-4fe9-4154-ba1f-a92f9cc74900.gif)

#### 4.3 Services
OTutorial: https://docs.ros.org/en/foxy/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Services/Understanding-ROS2-Services.html
![Service-MultipleServiceClient](https://user-images.githubusercontent.com/100303302/223851333-3c2cf768-8166-486f-b30f-195f6d87040b.gif)
##### Service list/vmessage/fservice/messagedef/turtspawner
```bash
# View service list
# ros2 service list
ros2 service list -t # Display service list and message type

# View the message types recieved by the service
# ros2 service type <service_name>
ros2 service type /clear

# Find services that use a certain message type 
# ros2 service find <type_name>
ros2 service find std_srvs/srv/Empty

# View message service type definitions
# ros2 interface show <type_name>.srv
ros2 interface show std_srvs/srv/Empty.srv

# Call the service command to clear the walking track
# ros2 service call <service_name> <service_type>
ros2 service call /clear std_srvs/srv/Empty

# Spawn a new Turtle
ros2 service call /spawn turtlesim/srv/Spawn "{x: 2, y: 2, theta: 0.2, name: 'turtle2'}"

# Use a infinite loop to make a Turtle Spawner
# $RANDOM generates a random number in bash
# $RANDOM/32768*(b-a) + a generates a range of [a,b)
for ((;;)) do 
ros2 service call /spawn turtlesim/srv/Spawn "{x: 2, y: 3, theta: 0.2, name: 'turtle$RANDOM'}"
sleep 5s 
done
```
![Turtle_Service-eg](https://user-images.githubusercontent.com/100303302/223870255-c3bbf5ed-831f-4703-b369-8b7795a7aea1.gif)
![Turtle_Service-Spawner](https://user-images.githubusercontent.com/100303302/223870059-48daf454-eb15-4a56-9924-56a017e821ff.gif)

#### 4.4 Parameters
OTutorial: https://docs.ros.org/en/foxy/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Parameters/Understanding-ROS2-Parameters.html <br />
Simply put. A parameter is a configuration value for a node typically defined as an integer, float, boolean, string, and etc. <br />
##### Parameters list/valueSet/valueExport/independency/import
```bash
# View service list for params
ros2 param list

# Get the parameter value
# ros2 param get <node_name> <parameter_name>
ros2 param get /turtlesim background_g

# Set parameter values
# ros2 param set <node_name> <parameter_name> <value>
ros2 param set /turtlesim background_g 150

# Export parameter values
# ros2 param dump <node_name>
ros2 param dump /turtlesim

# Import parameters independently
# ros2 param load <node_name> <parameter_file>
ros2 param load /turtlesim ./turtlesim.yaml

# Start the node and import parameters at the same time
# ros2 run <package_name> <executable_name> --ros-args --params-file <file_name>
ros2 run turtlesim turtlesim_node --ros-args --params-file ./turtlesim2.yaml
```
![Turtle_Param-eg](https://user-images.githubusercontent.com/100303302/223875107-43c31f33-882c-4fc9-9232-8fe15b1cb626.gif)

#### 4.5 Actions
OTutorial: https://docs.ros.org/en/foxy/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Actions/Understanding-ROS2-Actions.html
![Action-SingleActionClient](https://user-images.githubusercontent.com/100303302/223875515-42e60cd6-2d88-4ee2-b3c2-887572159407.gif)
##### Actions info/list/message/target/send_goal
```bash
# View the server and client of the node action
ros2 node info /turtlesim

# View action list
# ros2 action list
ros2 action list -t # show action type

# view action info
# ros2 action info <action>
ros2 action info /turtle1/rotate_absolute

# View action message content
ros2 interface show turtlesim/action/RotateAbsolute

# Send action target information
# ros2 action send_goal <action_name> <action_type>
ros2 action send_goal /turtle1/rotate_absolute turtlesim/action/RotateAbsolute "{theta: 1.57}"

# With feedback information
ros2 action send_goal /turtle1/rotate_absolute turtlesim/action/RotateAbsolute "{theta: 0}" --feedback
```
![Turtle_Actions-eg](https://user-images.githubusercontent.com/100303302/223880666-1a07179a-c641-4ddb-a3c3-eea3b3cdee6b.gif)

#### 4.6 RQt
OTutorial: https://docs.ros.org/en/foxy/Concepts/About-RQt.html
Simply put. RQt is a Graphical User Interface (GUI) framework. RQt is a quality of life upgrade to a command line terminal.  <br />
```bash
# For tools/plugins
rqt

# Action Type Browser: / Plugins -> Actions ->Action Type Browser
# parameter reconfiguration: / Plugins -> configuration ->Parameter Reconfigure
# Node grap: /Node Graph
# control steering: /Plugins -> Robot Tools -> Robot Steering
# service invocation: /Plugins -> Services -> Service Caller
# Service Type Browser: Plugins -> Services -> Service Type Browser
# message release: Plugins -> Topics -> Message Publisher
# Message Type Browser: Plugins -> Topics -> Message Type Browser
# topic list: Plugins -> Topics -> Topic Monitor
# draw a graph: Plugins -> Visualization -> Plot

# View logs with RQt Console
# Init turtlesim env
ros2 run rqt_console rqt_console
ros2 run turtlesim turtlesim_node

# Spawn 5 Turtles
# $i hsa to be converted to a float to do a math operation in the service call
for i in {2..5} ; do
ros2 service call /spawn turtlesim/srv/Spawn "{x: 2, y: $(($i + 2)), theta: 0.2, name: 'turtle$i'}"
sleep 1s 
done

# Publishing topics are not logged but the service of spawning each turtle above is logged in the RQt Console window.

# Publish message to all turtles to move
for i in {1..5} ; do
# Using ```pub``` you can send information to the topic to control the turtle sim. Rather than taking the keyboard input.
ros2 topic pub --once /turtle$i/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1}}"
ros2 topic pub --once /turtle$i/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.2}}"
ros2 topic pub --once /turtle$i/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.4}}"
ros2 topic pub --once /turtle$i/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.8}}"
sleep 1s 
done

for j in {1..10} ; do # loop 10 times
# ROS2 common practice: publishing to different topics at the same time. Example below
# ros2 topic pub <topic1> <msg_type1> <message1> --once & ros2 topic pub <topic2> <msg_type2> <message2> --once & ... ros2 topic pub <topicN> <msg_typeN> <messageN> --once &
# Fun fact & can be dangerous if not used correctly. Alright this works fine as long as it is not inside an indefinite loop. Uses way to much CPU with. 
# Background processes.
ros2 topic pub /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.8}}" --once & 
ros2 topic pub /turtle2/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.8}}" --once & 
ros2 topic pub /turtle3/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.8}}" --once & 
ros2 topic pub /turtle4/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.8}}" --once & 
ros2 topic pub /turtle5/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.8}}" --once & 
sleep 1s # Let it catch up
done

sleep 5s

# Reset the service after 5s
ros2 service call /reset std_srvs/srv/Empty
```
![Turtle_RQt-eg](https://user-images.githubusercontent.com/100303302/223904785-4332f2e9-915a-4d28-9a7e-8226d0c555cc.gif)

#### 4.7 TF2
OTutorial: https://docs.ros.org/en/foxy/Tutorials/Intermediate/Tf2/Introduction-To-Tf2.html
```bash
# Install demo package and dependencies
sudo apt-get install ros-humble-turtle-tf2-py ros-humble-tf2-tools ros-humble-tf-transformations

# follow
# launch starts 2 little turtles, the first little turtle automatically follows the second one
ros2 launch turtle_tf2_py turtle_tf2_demo.launch.py

# Control the movement of the first little turtle through the keyboard
ros2 run turtlesim turtle_teleop_key

# View TF tree
ros2 run tf2_tools view_frames.py
evince frames.pdf

# View the relationship between two coordinate systems
# ros2 run tf2_ros tf2_echo [reference_frame] [target_frame]
ros2 run tf2_ros tf2_echo turtle2 turtle1

# View TF relationships on rviz
ros2 run rviz2 rviz2 -d $(ros2 pkg prefix --share turtle_tf2_py)/rviz/turtle_rviz.rviz
```
![Turtle_TF2-eg](https://user-images.githubusercontent.com/100303302/223906716-8a86d95e-8c28-44bd-9b84-9ce3466a34d2.gif)

#### 4.8 URDF (Unified Robot Description Format)
OTutorial: https://docs.ros.org/en/foxy/Tutorials/Intermediate/URDF/Adding-Physical-and-Collision-Properties-to-a-URDF-Model.html
```bash
# Install dependent Libraries
sudo apt install ros-humble-joint-state-publisher-gui ros-humble-joint-state-publisher
sudo apt install ros-humble-xacro

# Download the source code
cd ~/dev_ws
git clone -b ros2 https://github.com/ros/urdf_tutorial.git src/urdf_tutorial

# Compiling the source code
colcon build --packages-select urdf_tutorial

# Source install

# Running the example
# Enter build folder
ros2 launch urdf_tutorial display.launch.py model:=urdf/01-myfirst.urdf
# Was unable to find the package and launch. May come back to.
```
```bash

# COMPLETE SYNTAX

<robot>
    # describe:
    # Parameters: name=""
    #  Child node:
        <link>
            # Description:
            # Parameters：name=""
            # Child node:
                <visual>
                    # describe:
                    # Parameters:
                    # child nodes: 
                        <geometry>
                            # description
                            # parameters
                            # Child node: 
                                <cylinder />
                                    # Description:
                                    # Parameters:
                                        # length="0.6"
                                        # radius="0.2"
                                <box />
                                    # description
                                    # Parameters:size="0.6 0.1 0.2"
                                <mesh />
                                    #  Description
                                    #Parameters: filename="package://urdf_tutorial/meshes/l_finger_tip.dae"
                        <collision>
                            # Description: collision element, prioritized
                            # parameters
                            # child node 
                                <geometry>
                        <inertial>
                            # description
                            # parameters
                            # Child nodes: 
                                <mass />
                                    # description: mass
                                    # Parameters: value=10
                                <inertia />
                                    # Description: Inertia
                                    # Parameters: i+"Cartesian product of xyz" (9 in total)="0.4"
                        <origin />
                            # Description:
                            # Parameters:
                                # rpy="0 1.5 0"
                                # xyz="0 0 -0.3"
                        <material />
                            # Description
                            # Parameters：name="blue"
        <joint>
            # Description
            # Parameters：
                # name=""
                # type=""
                    # fixed
                    # prismatic
            # child node
                <parent />
                    # Description
                    # Parameters：link=""
                <child />
                    # Description：
                    # Parameters：link=""
                <origin />
                    # Description：
                    # Parameters：xyz="0 -0.2 0.25"
                <limit />
                    # Description
                    # Parameters：
                        # effort="1000.0"    maximum effort
                        # lower="-0.38"      Joint upper limit (radians)
                        # upper="0"          Joint lower limit (radians)
                        # velocity="0.5"     Maximum velocity 
                <axis />
                    # Description： Press ? axis rotation
                    # Parameters：xyz="0 0 1"，along the Z axis
        <material>
            # Description：
            # Parameters：name="blue"
            # child node：
                <color />
                    # description：
                    # Parameters：rgba="0 0 0.8 1"
```
#### 4.9 Launch
OTutorial: https://docs.ros.org/en/foxy/Tutorials/Intermediate/Launch/Creating-Launch-Files.html
```py
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='turtlesim',
            namespace='turtlesim1',
            executable='turtlesim_node',
            name='sim'
        ),
        Node(
            package='turtlesim',
            namespace='turtlesim2',
            executable='turtlesim_node',
            name='sim'
        ),
        Node(
            package='turtlesim',
            executable='mimic',
            name='mimic',
            remappings=[
                ('/input/pose', '/turtlesim1/turtle1/pose'),
                ('/output/cmd_vel', '/turtlesim2/turtle1/cmd_vel'),
            ]
        )
    ])
```
```bash
# After creating the launch dir and making the launch .py file
# ros2 launch <package_name> <launch_file_name>
cd launch
ros2 launch turtlesim_mimic_launch.py

# launch help
ros2 launch -h

# running node
ros2 launch turtlesim multisim.launch.py

# Check the parameters of the launc file
ros2 launch turtlebot3_fake_node turtlebot3_fake_node.launch.py -s
ros2 launch turtlebot3_fake_node turtlebot3_fake_node.launch.py --show-arguments
ros2 launch turtlebot3_bringup robot.launch.launch.py -s

# Run the launch file with parameters
ros2 launch turtlebot3_bringup robot.launch.launch.py usb_port:=/dev/opencr

# Run the node and debug
ros2 launch turtlesim turtlesim_node.launch.py -d

# Only output node description
ros2 launch turtlesim turtlesim_node.launch.py -p

# running components
ros2 launch composition composition_demo.launch.py
```
<br /> **Hours Wasted on 4.8 and 4.9 (~ 6 hr)** <br />
HOL UP A MOMENT. I MESSED UP BAD. most of my packages are not building correctly causing them not the be found when launching. Attempting to debug as I move towards using rviz2 with the mycobot 280. I asked Perplexity.ai for troubleshooting tips. Got the following.

```bash
To diagnose and fix this issue, you can follow these steps:

1. Check the build log: The build log generated by Colcon contains detailed information about the build process and any errors that occurred. You can find the log file in the build directory of your workspace. Look for any error messages or warnings related to the package that had stderr output.

2. Fix compilation errors: If there are any compilation errors, you need to fix them before attempting to rebuild the package. Check if all dependencies are installed correctly and if there are any missing header files or libraries.

3. Check package configuration: Make sure that the package is configured correctly and all required environment variables are set up properly.

4. Rebuild the package: Once you have fixed any issues, try rebuilding the package using colcon build --packages-select <package_name> command.

5. Repeat steps 1-4 for other packages with stderr output: If there are other packages with stderr output, repeat steps 1-4 for each of them until all packages have been successfully built without any errors.
Here's an example command to rebuild a specific package with Colcon:

colcon build --packages-select my_package

This will rebuild only the my_package package and show any error messages on the console.
By following these steps, you should be able to diagnose and fix any "package had stderr output" errors in Colcon builds[2][3][4][5].
```
### Day 5: The Big Reset
Pick this back up tomorrow by first combing the build log located here: ```/home/tyler/colcon_ws/log/build_2023-03-09_01-51-10``` <br />
Minor fix. Updating my global $PATH variable to path to all available workspaces. For the sake of not getting confused I will not path my git repo at this time unless used for a tutorial. Will use nano to edit ~/.bashrc to add dir to my path variable using a simple if statement as shown below.
```bash
### PATH
if [ -d "path/to/ws" ] ;
then PATH="path/to/ws:$PATH"
fi
```
Problem. Python3 version is not compatible with current colcon. Solution: Downgrade python 3.10 to 3.8 -> https://answers.ros.org/question/396439/setuptoolsdeprecationwarning-setuppy-install-is-deprecated-use-build-and-pip-and-other-standards-based-tools/ <br />
Problem. Python3 version is not compatible. Setuptools use dashes rather than underscores. Solution: Edit dist.py to use underscores. Generally located in the setup.cfg file for the packages in the src dir. <br />
Fixed. Able to package and launch. Will continue forward with the my_cobot. 
<br /> **CATASTROPHIC MISTAKE** <br />
Just learned a great deal about how crucial python 3.10 is to the Ubuntu distro version I was operating on. I now will reimage and install Ubuntu and install all packages. Including cloning this git.reimaed and now operating on Ubuntu 20.04 with Python3.8. this enables me to not only learn ROS2, but also I can rescope back to ROS1 and utilize the tutorials by elephant. I will update the github to reflect ROS1 and ROS2 respectively. 
<br /> **Finally I can now start Step 1!** <br />
Got side tracked picking a theme for my new favorite shell -> fish-shell. I installed oh my fish and set up Lambda theme. This note will help me remember if I want to set it back up on a new machine. Also tilix is a good emulator for multiple shell windows :D <br />
<br />
Installed ROS1/Catkin/Python3 Dependancies/my_cobot repo. Followed tutorial here: https://docs.elephantrobotics.com/docs/gitbook-en/12-ApplicationBaseROS/12.1-ROS1/12.1.2-%E7%8E%AF%E5%A2%83%E6%90%AD%E5%BB%BA.html#m5-version <br />
Thanks to using a supported OS it was MUCH easier to do with little to no noteable problems. Just make sure to set up PATH for python and update bashrc to source correctly! <br />

#### 5.1 Service and Topic in ROS
Otutorial: https://docs.elephantrobotics.com/docs/gitbook-en/12-ApplicationBaseROS/12.1-ROS1/12.1.3-ROS%E5%9F%BA%E7%A1%80.html
```bash
# check USB Connects with
dmesg
# Take name of USB and set up ttyACM0 to all scripts

# How to build and use Catkin
catkin_make # Build the code in the workspace
# must be in ws path to build

# launch communication service from ros_ws
roslaunch mycobot_communication communication_service.launch

# Upon execution I ran into the problem of my ttyUSB0 not being set up correctly as a param. I went to the traceback and 
# where the param was declared in '$HOME/catkin_ws/src/mycobot_ros/mycobot_communications_launch'. I then access terminal 
# and identified the USB port with dmesg and unplugging and plugging it back in. I then ran into a permission error. I was 
# concerned, but in the FAQ it suggested giving full read write execute permissions. I went ahead with the sudo chmod 777 
# dev/ttyACM0 which gave it full crwxrwxrwx permissions as listed in ls -al /dev/.

# We are now connected

# Display active service information
rosservice list

#/get_joint_angles
#/get_joint_coords
#/set_joint_angles
#/set_joint_coords
#/switch_gripper_status
#/switch_pump_status

# Display active service information
rostopic list

#/mycobot/angles_goal
#/mycobot/coords_goal
#/mycobot/angles_real
#/mycobot/coords_real
#/mycobot/pump_status
#/mycobot/gripper_status
```
![Robot_Comms](https://user-images.githubusercontent.com/100303302/224211342-c8aa07a6-daab-48b4-852d-a70e2ae5f37f.gif)
#### 5.2 Intro to msg and srv
```bash
# rosmsg -------------------------------------------------------------
rosmsg show       # Show message description
rosmsg info       # Display message information
rosmsg list       # list all messages
rosmsg md5        # Display md5 encrypted message
rosmsg package    # Display all messages under a feature pack
rosmsg packages   # List feature packs that contain messages

# rosmsg package  # Package names
rosmsg package turtlesim
# result:
#turtlesim/Color
#turtlesim/Pose

# rosmsg show # message name
rosmsg show turtlesim/Pose
# result:
#float32 x
#float32 y
#float32 theta
#float32 linear_velocity
#float32 angular_velocity

# rossrv -------------------------------------------------------------
rossrv show       # Display service message details
rossrv info       # Display information about service messages
rossrv list       # List all service information
rossrv md5        # Display md5 encrypted service messages
rossrv package    # Display all service messages under a package
rossrv packages   # Show all packages that contain service messages

# rossrv package # Package names
rossrv package turtlesim

# rossrv show # message name
rossrv show turtlesim/Spawn
# result:
#float32 x
#float32 y
#float32 theta
#string name
#---
#string name
```
![Robot_msgsrv](https://user-images.githubusercontent.com/100303302/224215465-ef7d42aa-7463-4fd0-aace-c3004f02d113.gif)
#### 5.3 Introduction to URDF
```xml
# Example Code

<?xml version="1.0"?>
<robot  xmlns:xacro="http://www.ros.org/wiki/xacro" name="mycobot_ai_with" >

  <xacro:property name="width" value=".2" />

  <link name="env">
  <inertial>
    <origin xyz="0 0 0" rpy="0 0 0"/>
      <mass value="10"/>
      <inertia
        ixx="1.0" ixy="0.0" ixz="0.0"
        iyy="1.0" iyz="0.0"
        izz="1.0"/>
  </inertial>
    <visual>
      <geometry>
         <!--- 0.0 0 -0.04  1.5708 3.14159-->
       <mesh filename="package://mycobot_description/urdf/mycobot/suit_env.dae"/>
      </geometry>
      <origin xyz = "0 0 0.0" rpy = "1.5708 0 -1.5708"/>
    </visual>
  </link>

  <link name="joint1">
    <inertial>
    <origin xyz="0 0 0.1" rpy="0 0 0"/>
      <mass value="0.2"/>
      <inertia
        ixx="1.0" ixy="0.0" ixz="0.0"
        iyy="1.0" iyz="0.0"
        izz="1.0"/>
  </inertial>
    <visual>
      <geometry>
         <!--- 0.0 0 -0.04  1.5708 3.14159-->
       <mesh filename="package://mycobot_description/urdf/mycobot/joint1.dae"/>
      </geometry>
      <origin xyz = "0.0 0 0.02 " rpy = " 0 0 -1.5708"/>
    </visual>
    <collision>
      <geometry>
         <!--- 0.0 0 -0.04  1.5708 3.14159-->
       <mesh filename="package://mycobot_description/urdf/mycobot/joint1.dae"/>
        </geometry>
        <origin xyz = "0.0 0 0.02 " rpy = " 0 0 -1.5708"/>
    </collision>
  </link>

  <joint name="vision_joint" type="fixed">
    <axis xyz="0 0 0"/>
    <limit effort = "1000.0" lower = "-3.14" upper = "3.14159" velocity = "0"/>
    <parent link="env"/>
    <child link="joint1"/>
    <origin xyz= "0 0 0" rpy = "0 0 0"/>
  </joint>

<link name="world"/>
<joint name="fixed" type="fixed">
  <parent link="world"/>
  <child link="env"/>
</joint>

</robot>
```
#### 5.4 Intro to rvis
OTutorial: https://docs.elephantrobotics.com/docs/gitbook-en/12-ApplicationBaseROS/12.1-ROS1/12.1.4-rivz%E4%BB%8B%E7%BB%8D%E5%8F%8A%E4%BD%BF%E7%94%A8/
```bash
# Ubuntu20.04
sudo apt-get install ros-noetic-rviz
# The above is to install the rviz software package

roscore
rviz

roslaunch mycobot_280 test.launch   

# M5 Version Prereqs. Wound have been nice to know these earlier when launching services, oh well.

# View the device name of the robotic arm
ls /dev/ttyUSB* # old version myCobot280 M5   

# If the terminal does not display the /dev/ttyUSB related name, you need to use the following command
ls /dev/ttyACM* # new version myCobot280 M5

# The default device name is /dev/ttyUSB0, if the device name is not the default value, it needs to be modified.
sudo chmod 777 /dev/ttyUSB0 # old version myCobot280 M5 

sudo chmod 777 /dev/ttyACM0 # new version myCobot280 M5
```
![Robot_rviz](https://user-images.githubusercontent.com/100303302/224233177-db6707f1-b037-482d-b9ba-845502ce23f4.gif)
#### 5.5 This is Where the Fun Begins
##### 5.5.1 Slider Control
```bash
# Launches slider control for 280-M5 Cobot
roslaunch mycobot_280 slider_control.launch port:=/dev/ttyACM0 baud:=115200

# Launched Digital Twin to Move with Rvis
rosrun mycobot_280 slider_control.py _port:=/dev/ttyACM0 _baud:=115200

# Note to embbed a video it must be less than 10MB.
```
https://user-images.githubusercontent.com/100303302/224243892-c788c789-79ac-4815-9fbe-c8da4b5d9a5e.mp4
##### 5.5.2 Model Following
```bash
# Run this line first to boot rviz before connecting to cobot
roslaunch mycobot_280 mycobot_follow.launch

# The default serial port name of mycobot 280-M5 version is "/dev/ttyUSB0", and the baud rate is 115200. The serial port name of some models is "dev/ttyACM0". If the default serial port name is wrong, you can change the serial port name to "/dev/ttyACM0".
rosrun mycobot_280 follow_display.py _port:=/dev/ttyACM0 _baud:=115200
```
https://user-images.githubusercontent.com/100303302/224437783-f04c1ce2-5b66-4b04-a5c3-3ffa6e16fa2e.mp4 

<br />

![Robot-Mdlfllw](https://user-images.githubusercontent.com/100303302/224437005-ce8892fa-abcd-4b85-bb4e-c765382a7808.gif)
##### 5.5.3 GUI Control
```bash
# Launch roscore
roscore

# Launches some GUI to control the robot.
roslaunch mycobot_280 simple_gui.launch port:=/dev/ttyACM0 baud:=115200

# Missing a module to run this. Something called Tkinter gonna pip install it and try again.
# Funny issue that is. Typo I think. Will track and see if it fixes it. Also made sure rospy was installed.
sudo apt install python3-rospy
# Bug fixed! Will upload my ws in the ros github for those also learning. I did delete the .STEP for the pi version I 
# believe thoug due to the file size constraints. Otherwise the ws should be good to go. Highly recommend installing via  
# official tutorials.

# New Bug! YAY! Bad Geomoetry line 36 in simple_gui.py -> Unsure on how to proceed atm. Comeback to later.

# Fixed bad geometry with manual input. Translated Chinese to English. Had to go digging and modify the simple_gui.py and .launch file
```
Tkinter post: https://answers.ros.org/question/353902/no-module-named-tkinter/

<br />

https://user-images.githubusercontent.com/100303302/224446870-f5473694-beb6-479f-928d-de2dc6db6e30.mp4

<br />

![Robot_GUIcntrl](https://user-images.githubusercontent.com/100303302/224448420-a4dd2624-3754-45aa-b639-035b1e9105c4.gif)
##### 5.5.4 Keyboard Control
```bash
# Launch roscore
roscore

# The default serial port name of mycobot 280-M5 version is "/dev/ttyUSB0", and the baud rate is 115200. The serial port name of some models is "dev/ttyACM0". If the default serial port name is wrong, you can change the serial port name to "/dev/ttyACM0".
roslaunch mycobot_280 teleop_keyboard.launch port:=/dev/ttyACM0 baud:=115200

# Connect to Robot
rosrun mycobot_280 teleop_keyboard.py _speed:=50


#Mycobot Teleop Keyboard Controller
#---------------------------
#Movimg options(control coordinations [x,y,z,rx,ry,rz]):
#              w(x+)
#
#    a(y-)     s(x-)     d(y+)
#
#    z(z-) x(z+)
#
#u(rx+)   i(ry+)   o(rz+)
#j(rx-)   k(ry-)   l(rz-)
#
#Gripper control:
#    g - open
#    h - close
#
#Other:
#    1 - Go to init pose
#    2 - Go to home pose
#    3 - Resave home pose
#    q - Quit
#
#currently:      speed: 50       change percent 5
```

#### Day 6: Moveit
```bash
#launch roscore
roscore

# Launch Moveit
roslaunch mycobot_280_moveit mycobot_moveit.launch

#moveit is a motion planning tool that allows the operator to move the robot end effector to a desired position and use waypoints to plan the full movement operation.

# The default serial port name of mycobot 280-M5 version is "/dev/ttyUSB0", and the baud rate is 115200. The serial port name of some models is "dev/ttyACM0". If the default serial port name is wrong, you can change the serial port name to "/dev/ttyACM0".
#Connecting Robot to Moveit
rosrun mycobot_280_moveit sync_plan.py _port:=/dev/ttyACM0 _baud:=115200

# This is the end to the official guide. Time to poke around some more.

rosrun mycobot_280_moveit path_planning_and_obstacle_avoidance_demo.py _port:=/dev/ttyACM0 _baud:=115200
```
https://user-images.githubusercontent.com/100303302/224466370-8e94fe91-e4f4-4e72-9f3d-82d8debc8253.mp4

<br />

![Robot_Moveit](https://user-images.githubusercontent.com/100303302/224466366-06779ff5-1a61-4c95-b56f-f1c8d86ed1b1.gif)

<br />

The above is just a basic example. I still have a ways to go before I can do any pick and place with this robot. Unsure if I will complete my goal in the time allocated to me. I am borrowing this robot and the laptop I am working on.

##### 6.1 Pick and Place
<br />

ROS Dev Pick Lesson: https://www.youtube.com/watch?v=ySceuKCS5mE&t=925s

<br />
The above tutorial will help assist me in writing a pick and place script in python for myCobot 280M5 using ROS and Moveit. <br />
Step 1: Create a pakage using Catkin to write my script in.

```bash
cd ~/catkin_ws/src

tyler@RoboWiz:~/catkin_ws/src$ catkin_create_pkg pick_n_place rospy
Created file pick_n_place/package.xml
Created file pick_n_place/CMakeLists.txt
Created folder pick_n_place/src
Successfully created files in /home/tyler/catkin_ws/pick_n_place. Please adjust the values in package.xml.
tyler@RoboWiz:~/catkin_ws/src$ cd pick_n_place
tyler@RoboWiz:~/catkin_ws/src/pick_n_place$ ls
CMakeLists.txt  package.xml  src
tyler@RoboWiz:~/catkin_ws/src/pick_n_place$ cd src
tyler@RoboWiz:~/catkin_ws/src/pick_n_place/src$ ls
tyler@RoboWiz:~/catkin_ws//pick_n_place/src$ touch pick_n_place.py
tyler@RoboWiz:~/catkin_ws/src/pick_n_place/src$ ls
pick_n_place.py
tyler@RoboWiz:~/catkin_ws/src/pick_n_place/src$ chmod +x pick_n_place.py
tyler@RoboWiz:~/catkin_ws/src/pick_n_place/src$ ls -la
total 8
drwxrwxr-x 2 tyler tyler 4096 Mar 11 01:11 .
drwxrwxr-x 3 tyler tyler 4096 Mar 11 01:10 ..
-rwxrwxr-x 1 tyler tyler    0 Mar 11 01:11 pick_n_place.py
tyler@RoboWiz:~/catkin_ws/src/pick_n_place/src$ 
```
<br /> Set up pick_n_place.py

```
# /usr/bin/env python
import sys
import rospy
import moveit_commander
import geometry_msgs.msg

moveit_commander.roscpp_initialize(sys.argv)
rospy.init_node('move_group_python_interface_tutorial', anonymous=True)
robot = moveit_commander.RobotCommander()
```

<br />

In order to test this you must first run the following three command lines in 3 terminals below,
```bash
# When reinserting USB from robot this must be ran once in terminal.
sudo chmod 777 /dev/ttyACM0 # new version myCobot280 M5

#launch roscore
roscore

# Launch Moveit
roslaunch mycobot_280_moveit mycobot_moveit.launch

#moveit is a motion planning tool that allows the operator to move the robot end effector to a desired position and use waypoints to plan the full movement operation.

# The default serial port name of mycobot 280-M5 version is "/dev/ttyUSB0", and the baud rate is 115200. The serial port name of some models is "dev/ttyACM0". If the default serial port name is wrong, you can change the serial port name to "/dev/ttyACM0".
#Connecting Robot to Moveit
rosrun mycobot_280_moveit sync_plan.py _port:=/dev/ttyACM0 _baud:=115200

# roscore is the main master this is required for ROS 1 system architecture.
# mycobot_moveit.launch launches rviz moveit GUI that allows you to plan and utilize moveit commands
# sync_plan.py will connect the physical robot to the moveit planner allowing scripts to sync across both.

# Now that those three terminals are running lets try our new script to set the robot to the init_pose position

rosrun pick_n_place pick_n_place.py
```

<br />

I do have another challenge to overcome if I want to generate a pick and place program. I have to custom make a URDF for the gripper end effector, define it as such, generate a moveit config package, and test the gripper. I am stll very new to all this and I'm hopping to find something I can just import first and foremost. Luckily I have AI tools like Perlexity.ai and ChatGPT to help search for steps to complete this task. Future me go to this link and give it a try: https://www.perplexity.ai/?s=u&uuid=01174bde-d468-44c3-b0fa-74540597c0fd

<br />

the hardest part of any project is the build up to the actual scripting. Kind of like making the workflow sort of deal. It can suck, but it is apart of the process! OH WAIT. I can propably skip that process to reverse engineer th gripper from the GUI demo. Might make my life easier. It is not explicitly required for me to model it for a simple pick and place. Jank, but the important part is I understand the process. I can get the gripper status from the mycobot_communication.srv. Anyways, did some basic setup. Need to make it a class and do it using an __init__ for all the main setup and a run/move to get it going kinda mashing the service for the gripper from the GUI class with the path_planning demo. End of Day 6... HAHAH NO! Couldn't sleep. I love this too much. 4am and it is time to get this working my friend. I need to set up a launch file to also activate the services for ROS so I can use the gripper. So instead of running the .py file I will roslaunch a .launch file that sets up the service then runs my pick_n_place.py file. Coffee Break!
```bash
# In total this script needs 5 terminal instances open

# Instance 1 runs roscore
roscore

# Instance 2 runs 
roslaunch mycobot_280_moveit mycobot_moveit.launch # activates moveit motion planning

# Instance 3 runs
rosrun mycobot_280_moveit sync_plan.py _port:=/dev/ttyACM0 _baud:=115200 # connects robot to moveit motion planner

# Instance 4 runs
roslaunch pick_n_place picknplace.launch # activates services

# Instance 5 runs
rosrun pick_n_place pick_n_place.py # main script executing commands
```
##### 6.2 Moveit and Calibrations
Firstly, this is my capstone to this week long project. I came into this project having never touched Linux and in the span of 6 long days have learned not only some of the mechanisism for the mycobot_280-M5, but also a greater understanding of Bash, Linux, Python, ROS, ROS2, Moveit, and more. Secondly, I couldn't have been able to do this if it wasn't for the opportunity given to me by Dr. Redkar and a friend who decided to drag me along (thanks Tatwik). Now without further ado, time to go over some things.

<br /> **General Workflow** <br />
When working on the script I would often refer to the 5.5.2 Model Following demo to disengage the robots PID's and allow me to position the arm where I want it. I would then launch my picknplace.launch file to set up services to then get the robots cords. With those cords I put them in a custom function that would mathematically put it into a pose position for the robot. I would consider this hand calibration and a sort of drag and teach kind of scenario. As for the gripper that required me to reverse engineer the 5.5.3 GUI Control demo and learn how to open and close the gripper semi reliably with services. I was not in a position with the time allocated to set up a whole URDF from scratch for moveit. It added some small jank, but it worked enough for the desired results of picking and placing a cube. Full script can be found in ```bash cd ⌁/catkin_ws/src/pick_n_place/src```

<br />

https://user-images.githubusercontent.com/100303302/224509749-d5c73bf9-b2f6-4ef0-9d5c-7e9cf05b7939.mp4

<br />

![Robot_PicknPlaceF](https://user-images.githubusercontent.com/100303302/224509486-a2d47ba8-f053-438e-8db7-744ff1fbf8e0.gif)
Robot Blooper Reel: https://youtu.be/PgStfSTXCNo
## Additional Reasources

### URL Archive
<br /> Elephant Gitbook:  https://docs.elephantrobotics.com/docs/gitbook-en/2-serialproduct/2.1-280/2.1.1-M5.html <br />
<br /> Elephant ROS 1 Gitbook: https://docs.elephantrobotics.com/docs/gitbook-en/12-ApplicationBaseROS/12.1-ROS1/12.1.2-%E7%8E%AF%E5%A2%83%E6%90%AD%E5%BB%BA.html <br />
<br /> ROS2 Humble Install: https://www.youtube.com/watch?v=0aPbWsyENA8 <br />
<br /> Elephant ROS2 Github: https://github.com/elephantrobotics/mycobot_ros2 <br />
<br /> Markdown Cheat Sheet: https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet#links <br />
<br />

<br /> Elephant ROS YouTube: https://www.youtube.com/playlist?list=PLzq8qjbxJS3hp6Uu_H6-fL9ALs7sAeTnP <br />
<br /> Elephant myCobot 280 M5 Tutorials Reasource: https://shop.elephantrobotics.com/pages/tutorials <br />
<br /> Elephant Support for myCobot 280 M5: https://www.elephantrobotics.com/en/support-280-m5-en/ <br />	

### Helpful Git Commands to Remember
<br /> ``` git clone [link] ``` <br />
	<br /> *Clones a git repo to your local computer for use. Link referes to the link you can copy from the green code drop down.*<br />
<br /> ``` git status ``` <br />
	<br /> *Status of the current local repo.*<br />
<br /> ``` git add ``` <br />
	<br /> *Add files to push "." adds all files.<br />
<br /> ``` git branch "branch name" ``` <br />
	<br /> *Generate a new timeline to branch to.*<br />
<br /> ``` git checkout "branch name" ``` <br />
	<br /> *Choose what branch to swap to and work with.<br />
<br /> ``` git commit -m "message" ``` <br />
	<br /> *Adds a single line message to files being commited to the branch.* <br />
<br /> ``` git push [link] ```<br />
	<br /> *Git push sends the current updates to the github repo. Link is used to copy the destination for the push.* <br />
<br /> ``` git pull [link] ``` <br />
	<br /> *Git pull sends the data from the git repo to your local repository.* <br />
<br /> ``` rm -fr .git ``` <br />
	<br /> *Delete .git folder in repo to remove it from git* <br />


<br /> ```#makephilproud``` <br />
