#!/usr/bin/env python3
# -*- coding: utf-8 -*-
'''
Author: Tyler Hulson
Dependancies: mycobot_communication, roscore, pymycobot, geometry_msgs, csv, math, time, rospy
How To Use:
Launch 2 terminal windows
depending on .bashrc configuration you will need to sorce devel/setup.bash for each terminal (this assumes a built workspace)

terminal 1: CLI Run: 
roscore

terminal 2: CLI Run: 
roslaunch drag_n_teach tool_cordtopose.launch

Description:
The script is designed to record poses from the robot after adjusting the joint angle sliders in the joint_state_publisher_gui.
User will press enter to save a position once the sliders have been adjusted.
'''

from typing import Any
import rospy
import csv
import moveit_commander
from geometry_msgs.msg import Pose
import sys
from pathlib import Path

class tool_cordtopose():

    def __init__(self,guiDir = ''):

        # Initialize the node
        rospy.init_node('tool_cordtopose')

        # Get user directory path
        self.home = str(Path.home())

        global pose
        pose = Pose()

        if guiDir == '':
            self.directory = self.home + '/catkin_ws/src/drag_n_teach/poses'
        else:
            self.directory = guiDir

        with open(self.directory + '/poses.csv', 'w') as csvfile:
            writer = csv.writer(csvfile)
            writer.writerow(['x', 'y', 'z', 'qx', 'qy', 'qz', 'qw'])
        csvfile.close()
    
    def getPose(self):
        # use moveit commander to get pose
        # Initialize the move_group API
        moveit_commander.roscpp_initialize(sys.argv) # cpp wrapper for moveit
        # Initialize the MoveGroupCommander for the robot
        # robot = moveit_commander.RobotCommander()
        group = moveit_commander.MoveGroupCommander('arm_group', ns='/')
        # Get the current pose of the end effector
        pose = group.get_current_pose().pose
        return pose

    def run(self):
        with open(self.directory + '/poses.csv', 'a') as csvfile:
            writer = csv.writer(csvfile)
            pose = self.getPose()
            print("Current pose:\n", pose)
            writer.writerow([pose.position.x, pose.position.y, pose.position.z, pose.orientation.x, pose.orientation.y, pose.orientation.z, pose.orientation.w])
            print("Position saved.")
        csvfile.close()