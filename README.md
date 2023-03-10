# 280-M5_ROS

<br /> **Basic Description** <br />
Experimenting with a myCobot from Elephant Robotics. The 280-M5.

<br /> **Goal** <br />
To learn the fundamentals of ROS 1 by developing pick and place programs and functions for the 280 with the M5 robot controller in ROS using a linux/unix based operating system.

# How To Use (Basic Start)
I will put a basic quick start guide here and my personnel log below. I plan to make a quick start guide after I go through and learn the basics. ELog will be done before a start guide.

## What I Learned Since Starting this Project (ELog)

### Day 1: Linux
Linux was the first big challenge/hurdle to this project. I started out using an old Dell Inspirion laptop running an older version of BIOS evidently before UEFI. This presented the challenge of how to boot a Linux Distribution, in my case Ubuntu, onto the laptop. The laptop itself is running Windows 7 Home Professional. After attempting a work around with several different versions of Rufus to hopefully find one that would work with the older BIOS; I ended up formatting the Ubuntu image onto a USB and made it bootable using Rufus 3.21 on a Lenovo Thinkpad. (~ 6hr)

### Day 2: Github
This usually isn't a major process to make note of for me, but I learned a new way to use github that I think is worth documenting. In short, I learned how to set up Github on a Linux system as well as set up an SSH (Secure Shell) key for use between the Linux machine and the Github site. This allows me to push git commits to Github via command line interface from Linux. I learned this due to Github removing password authentication via command line, forcing me to learn a new method to authenticate Git. I first followed the provided link in the command line when suggesting other authentication methods. I was overloaded with information, so I took a step back and researched on Google how to authenticate Git on a Linux Distro. I found out that most easy to follow tutorials used the password method, which evidently was the very method I could not use. So, I went back to the documentation the link provided and browsed. I went ahead and started a session of ChatGPT to try and get a better understanding of what I was reading in a more layman's terms sort of way. By doing so I can get a better grasp on how the systems work. What I learned is I can generate an SSH key by using ```ssh-keygen```. However, my home/user path did not have the correct permissions for a key gen. The permissions were set to 0750 for the directory with '5' referring to read and execute, I believe, and 7 being, read, write, and execute. Since I needed to write to generate an SSH key I had to update the permissions of that path using the terminal. In the terminal, to update the permissions, I used ```chmod 700 /path/to/home/dir```. Once updated, I tracked back to generate my key. I had to generate my key three times in total during the learning process. The first time I generated it I kept it simple and didn't include an email going off of what ChatGPT was suggesting. What I got in return was a private and public key. At the time, I didn't know the difference and attempted to use the private key on Github, which in turn lead me to research OpenSSH as Github denied the key due to formatting. Essentially, I go two steps forward, realize I am skipping ahead too far, and go one step backwards, or entirely to review the material again with my new knowledge on how it works of a coffee break of course :D. On my third attempt I utilized the Github documentation on how to authenticate with SSH, and behold it worked as the documentation said it would :O. I generated my key with an email attached that links to my Github account. got the public key by doing ```ssh-keygen -y -f path/to/key``` copied that from the terminal and fed it to Github. From there I should be good to go right? Wrong, I still needed to link the key to the SSH Agent. What is an SSH Agent? In short, it is a program that helps to manage SSH keys. What it does is authenticate a private key to a public key where the private key is stored on the local machine and stores that private key in memory, so a passphrase is not required each time the key is used as long as it is unlocked in the agent's memory. Basic network security stuff. Very cool and important. Anyways, now that Github is set up and the repository is cloned with SSH I am good to go! (~ 8hr)

### Day 3: Setting up ROS

<br /> **3.1 Accidental Learning** <br />
Installed FUSE and learned how to run appImages. This is necessary for myStudio to run so I can set up the necessary firmware and drivers for the robot. This path put me off track. I ran into some issues trying to run the appimage for the software and was uncomfortable installing it via just the tar.gz source code. I decided to check the ROS 1 Gitbook and start off from there and back track as needed for setting it up. Note to self and others: ROS 1 Gitbook will provide documentation on how to set up a VM with Virtual Box so anyone can set up a Linux VM to run the 280-M5 cobot with ROS in a Linux VM. (~ 2hr)

<br /> **3.2 ROS 1 Environment Setup** <br />
Installing ROS 1 for Ubuntu versions 20+ via: http://wiki.ros.org/noetic/Installation/Ubuntu <br />
Chose Desktop-Full Install for ROS 1 Noetic. <br />
Problem. I am running Ubuntu Jammy (22.04) and trying to install ROS 1 Noetic for Ubuntu Focal (20.04). Work arounds -> Install Ubuntu Focal or Install manually. Will attempt manual install. Did additional research. Decided to adjust scope to ROS2 Humble which works with Ubuntu Jammy (22.04). Note ROS 2 Foxy Maintnance Period on May 2023. (~ 2hr)

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

Next, I set up a ROS2 workspace. (~ 4hr)
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
# 
roslaunch mycobot_280 mycobot_follow.launch

# The default serial port name of mycobot 280-M5 version is "/dev/ttyUSB0", and the baud rate is 115200. The serial port name of some models is "dev/ttyACM0". If the default serial port name is wrong, you can change the serial port name to "/dev/ttyACM0".
rosrun mycobot_280 follow_display.py _port:=/dev/ttyACM0 _baud:=115200
```
![Robot-Mdlfllw](https://user-images.githubusercontent.com/100303302/224437005-ce8892fa-abcd-4b85-bb4e-c765382a7808.gif)
https://user-images.githubusercontent.com/100303302/224437228-42c63df9-694c-445b-9481-5afc5d7bf551.mp4
##### 5.5.3 GUI Control
```bash
# Launches some GUI to control the robot.
roslaunch mycobot_280 simple_gui.launch port:=/dev/ttyACM0 baud:=115200

# Missing a module to run this. Something called Tkinter gonna pip install it and try again.
# Funny issue that is. Typo I think. Will track and see if it fixes it. Also made sure rospy was installed.
sudo apt install python3-rospy
# Bug fixed! Will upload my ws in the ros github for those also learning. I did delete the .STEP for the pi version I 
# believe thoug due to the file size constraints. Otherwise the ws should be good to go. Highly recommend installing via  
# official tutorials.
# New Bug! YAY! Bad Gemoetry line 36 in simple_gui.py -> Unsure on how to proceed atm. Comeback to later.
```
Tkinter post: https://answers.ros.org/question/353902/no-module-named-tkinter/
##### 5.5.4 Keyboard Control
```bash
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




## Additional Reasources

### Useful URL's
<br /> Elephant Gitbook:  https://docs.elephantrobotics.com/docs/gitbook-en/2-serialproduct/2.1-280/2.1.1-M5.html <br />
<br /> Elephant ROS 1 Gitbook: https://docs.elephantrobotics.com/docs/gitbook-en/12-ApplicationBaseROS/12.1-ROS1/12.1.2-%E7%8E%AF%E5%A2%83%E6%90%AD%E5%BB%BA.html <br />
<br /> ROS2 Humble Install: https://www.youtube.com/watch?v=0aPbWsyENA8 <br />
<br /> Elephant ROS2 Github: https://github.com/elephantrobotics/mycobot_ros2 <br />
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
