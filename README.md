# 280-M5_ROS

<br /> **Basic Description** <br />
Experimenting with a myCobot from Elephant Robotics. The 280-M5

<br /> **Goal** <br />
To learn the fundamentals of ROS 1 by developing pick and place programs and functions for the 280 with the M5 robot controller in ROS using a linux/unix based operating system.

## What I Learned Since Starting this Project

<br /> **Linux** <br />
Linux was the first big challenge/hurdle to this project. I started out using an old Dell Inspirion laptop running an older version of BIOS evidently before UEFI. This presented the challenge of how to boot a Linux Distribution, in my case Ubuntu, onto the laptop. The laptop itself is running Windows 7 Home Professional. After attempting a work around with several different versions of Rufus to hopefully find one that would work with the older BIOS; I ended up formatting the Ubuntu image onto a USB and made it bootable using Rufus 3.21 on a Lenovo Thinkpad. (~ 6hr)

<br /> **Github** <br />
This usually isn't a major process to make note of for me, but I learned a new way to use github that I think is worth documenting. In short, I learned how to set up Github on a Linux system as well as set up an SSH (Secure Shell) key for use between the Linux machine and the Github site. This allows me to push git commits to Github via command line interface from Linux. I learned this due to Github removing password authentication via command line, forcing me to learn a new method to authenticate Git. I first followed the provided link in the command line when suggesting other authentication methods. I was overloaded with information, so I took a step back and researched on Google how to authenticate Git on a Linux Distro. I found out that most easy to follow tutorials used the password method, which evidently was the very method I could not use. So, I went back to the documentation the link provided and browsed. I went ahead and started a session of ChatGPT to try and get a better understanding of what I was reading in a more layman's terms sort of way. By doing so I can get a better grasp on how the systems work. What I learned is I can generate an SSH key by using ```ssh-keygen```. However, my home/user path did not have the correct permissions for a key gen. The permissions were set to 0750 for the directory with '5' referring to read and execute, I believe, and 7 being, read, write, and execute. Since I needed to write to generate an SSH key I had to update the permissions of that path using the terminal. In the terminal, to update the permissions, I used ```chmod 700 /path/to/home/dir```. Once updated, I tracked back to generate my key. I had to generate my key three times in total during the learning process. The first time I generated it I kept it simple and didn't include an email going off of what ChatGPT was suggesting. What I got in return was a private and public key. At the time, I didn't know the difference and attempted to use the private key on Github, which in turn lead me to research OpenSSH as Github denied the key due to formatting. Essentially, I go two steps forward, realize I am skipping ahead too far, and go one step backwards, or entirely to review the material again with my new knowledge on how it works of a coffee break of course :D. On my third attempt I utilized the Github documentation on how to authenticate with SSH, and behold it worked as the documentation said it would :O. I generated my key with an email attached that links to my Github account. got the public key by doing ```ssh-keygen -y -f path/to/key``` copied that from the terminal and fed it to Github. From there I should be good to go right? Wrong, I still needed to link the key to the SSH Agent. What is an SSH Agent? In short, it is a program that helps to manage SSH keys. What it does is authenticate a private key to a public key where the private key is stored on the local machine and stores that private key in memory, so a passphrase is not required each time the key is used as long as it is unlocked in the agent's memory. Basic network security stuff. Very cool and important. Anyways, now that Github is set up and the repository is cloned with SSH I am good to go! (~ 8hr)

## How To Use
idk yet. I will update basic documentation as I go. 

## Additional Reasources

### Useful URL's
<br /> Elephant Documentation:  https://docs.elephantrobotics.com/docs/gitbook-en/2-serialproduct/2.1-280/2.1.1-M5.html <br />
<br /> Elephant ROS YouTube: https://www.youtube.com/playlist?list=PLzq8qjbxJS3hp6Uu_H6-fL9ALs7sAeTnP <br />
<br /> Elephant myCobot 280 M5 Tutorials Reasource: https://shop.elephantrobotics.com/pages/tutorials <br />
<br /> Elephant Support for myCobot 280 M5: https://www.elephantrobotics.com/en/support-280-m5-en/ <br />	

### Helpful Git Bash Commands to Remember
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