#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# write an approrpiate comment block that describes this script, what it does, how it works, and its dependancies
"""
This script is used to save the current pose of the end effector to a CSV file. 
It is designed to be used with the Drag_n_Teach ROS package. 

Dependencies:
- rospy
- csv
- moveit_commander
- geometry_msgs.msg.Pose
- sys

How it works:
- The tool_cordtopose class is defined with methods to initialize global variables, get the current pose of the end effector, and run the script.
- When the script is run, it initializes the move_group API, creates a PlanningSceneInterface, and creates a MoveGroupCommander for the arm_group.
- The getPose method is used to get the current pose of the end effector.
- The run method is used to save the current pose to a CSV file.
- The script is designed to be used with the Drag_n_Teach GUI, which sets the guiDir variable to the directory where the CSV file should be saved.

Usage:
- Launch the Drag_n_Teach GUI.
- Run the tool_cordtopose.py script.
- Press the "Save Pose" button in the GUI to save the current pose of the end effector to the CSV file.
"""

import rospy
import csv
import moveit_commander
from geometry_msgs.msg import Pose
import sys

class tool_cordtopose():

    def __init__(self,guiDir):
        self.BTN_flag = False
        self.initalizedGlobals = False
        self.directory = guiDir
    
    def initalizeGlobals(self):
        global planning_scene, group, pose
        # Initialize the move_group API
        moveit_commander.roscpp_initialize(sys.argv) # cpp wrapper for moveit
        # Initialize the move_group API
        planning_scene = moveit_commander.PlanningSceneInterface()
        group = moveit_commander.MoveGroupCommander('arm_group', ns='/')
        pose = Pose()

        with open(self.directory + '/poses.csv', 'w') as csvfile:
            writer = csv.writer(csvfile)
            writer.writerow(['x', 'y', 'z', 'qx', 'qy', 'qz', 'qw'])
        csvfile.close()
        
        self.initalizedGlobals = True

    def getPose(self):
        # Get the current pose of the end effector
        pose = group.get_current_pose().pose
        return pose

    def run(self):
        if self.BTN_flag == True and self.initalizedGlobals == False:
            self.initalizeGlobals()
        elif self.initalizedGlobals == True:
            pass
        else:
            print("Please Launch Teacher First")
            return
        
        with open(self.directory + '/poses.csv', 'a') as csvfile:
            writer = csv.writer(csvfile)
            pose = self.getPose()
            print("Current pose:\n", pose)
            writer.writerow([pose.position.x, pose.position.y, pose.position.z, pose.orientation.x, pose.orientation.y, pose.orientation.z, pose.orientation.w])
            print("Position saved.")
        csvfile.close()

if __name__ == "__main__":
    # Initialize the node
    if not rospy.core.is_initialized():
        rospy.init_node('tool_cordtopose')