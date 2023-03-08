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

<br /> ```#makephilproud``` <br />