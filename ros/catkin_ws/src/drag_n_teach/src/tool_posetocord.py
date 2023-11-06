#!/usr/bin/env python3
# -*- coding: utf-8 -*-
'''
Author: Tyler Hulson
Dependancies: scipy,rospy,csv,moveit_commander,geometry_msgs,moveit_msgs,sensor_msgs,time,sys
How To Use:
Launch 2 terminal windows
depending on .bashrc configuration you will need to sorce devel/setup.bash for each terminal (this assumes a built workspace)

terminal 1: CLI Run: 
roscore

terminal 2: CLI Run: 
roslaunch drag_n_teach tool_posecord.launch

Description:
This script is used to convert poses from the tool_cordtopose.py script into joint angles for the robot to follow.
The joint angles are saved to a csv file for later use.
'''

import rospy
import csv
import moveit_commander
from geometry_msgs.msg import Pose
from moveit_msgs.msg import RobotState
from sensor_msgs.msg import JointState
from moveit_msgs.msg import RobotTrajectory
from moveit_msgs.srv import GetStateValidityRequest, GetStateValidity
import time
import sys
import math
from pathlib import Path

class tool_posetocord():

    def __init__(self,guiDir = None):
        # Initialize the node
        rospy.init_node('train_robot')

        # Get user directory path
        self.home = str(Path.home())

        if guiDir is '':
            self.directory = self.home + '/catkin_ws/src/drag_n_teach/poses'
        else:
            self.directory = guiDir

        # Initialize the move_group API
        self.robot_state = RobotState()
        self.robot_state.joint_state = JointState()
        self.trajectory = RobotTrajectory()
        self.planning_scene = moveit_commander.PlanningSceneInterface()
        self.group = moveit_commander.MoveGroupCommander('arm_group', ns='/')
        self.pose = Pose()

        group_names = ['joint2_to_joint1','joint3_to_joint2','joint4_to_joint3','joint5_to_joint4','joint6_to_joint5','joint6output_to_joint6']
        group_names_vel = ['joint2_to_joint1_vel','joint3_to_joint2_vel','joint4_to_joint3_vel','joint5_to_joint4_vel','joint6_to_joint5_vel','joint6output_to_joint6_vel']    

        # initalize joint_angles.csv to empty
        with open(self.directory + '/joint_vals.csv', 'w') as csvfile:
            csvfile.close()
        
        # List of available planners
        planners = [
            "SBL", "EST", "LBKPIECE", "BKPIECE", "KPIECE", "RRT", "RRTConnect", "RRTstar", "TRRT",
            "PRM", "PRMstar", "FMT", "BFMT", "PDST", "STRIDE", "BiTRRT", "LBTRRT", "BiEST",
            "ProjEST", "LazyPRM", "LazyPRMstar", "SPARS", "SPARStwo"
        ]

        # Print the list of available planners
        print("Available planners:")
        for i, planner in enumerate(planners, start=1):
            print(f"{i}. {planner}")

        # Get the planner ID from the user
        while True:
            try:
                planner_id = int(input("Enter the number of the planner you want to use: "))
                if 1 <= planner_id <= len(planners):
                    print(f"Using {planners[planner_id - 1]}")
                    break
                else:
                    print("Invalid input. Please enter a number between 1 and " + str(len(planners)))
            except ValueError:
                print("Invalid input. Please enter a number.")

        # Set the planner ID
        self.group.set_planner_id(planners[planner_id - 1])

        # Initalize current pose as previous pose
        self.prev_pose = self.group.get_current_pose().pose
    
    def getJoints(self, row):
        # Initialize the move_group API
        moveit_commander.roscpp_initialize(sys.argv) # cpp wrapper for moveit
        # Initialize the MoveGroupCommander for the robot
        # robot = moveit_commander.RobotCommander()
        # row is a list of inputs from comma seperated values and each [i] is a column in the csv file
        self.pose.position.x = float(row[0]) 
        self.pose.position.y = float(row[1])
        self.pose.position.z = float(row[2])
        self.pose.orientation.x = float(row[3])
        self.pose.orientation.y = float(row[4])
        self.pose.orientation.z = float(row[5])
        self.pose.orientation.w = float(row[6])

        # generate waypoints from current pose to target pose
        waypoints = [self.prev_pose, self.pose]

        # Compute a linear move
        (plan, fraction) = self.group.compute_cartesian_path(waypoints, 0.01, 3.5, False) # 0.01 is the step size, 3.5 is the jump threshold and False is without collision checking
        self.trajectory.joint_trajectory = plan.joint_trajectory
        joint_values = plan.joint_trajectory.points

        # If less than 100% of the requested trajectory was followed, plan a joint move instead
        if fraction < 0.98:
            print("Less than 98% of the requested trajectory was followed, planning a joint move instead")
            self.group.set_pose_target(self.pose)
            plan = self.group.plan()
            joint_values = plan[1].joint_trajectory.points
        else:
            # For each point in the loop check if the point is valid and 
            # Compute a joint move if the point is invalid or the distance is greater than 1
            for i, point in enumerate(joint_values):
                # Update robot_state with planned trajectory
                self.robot_state.joint_state.name = plan.joint_trajectory.joint_names
                self.robot_state.joint_state.position = point.positions

                # Create a GetStateValidityRequest message
                gsvr = GetStateValidityRequest()
                gsvr.robot_state = self.robot_state
                gsvr.group_name = self.group.get_name()

                # Create a service client for the /check_state_validity service
                rospy.wait_for_service('/check_state_validity')
                get_state_validity = rospy.ServiceProxy('/check_state_validity', GetStateValidity)

                # Call the service to check the state validity
                response = get_state_validity.call(gsvr)

                if not response.valid:
                    print("Collision detected, planning a joint move instead")
                    self.group.set_pose_target(self.pose)
                    plan = self.group.plan()
                    joint_values = plan[1].joint_trajectory.points
                    break
                
        # joint_values[0].positions[0] returns the joint angle for joint 1
        # joint_values[0].positions returns the joint angles for all joints where positions is an attribute of the joint_values list
        
        # Check if the planned trajectory has any points
        if joint_values:
            target_joint_values = joint_values[-1].positions
        else:
            raise RuntimeError("The planned trajectory has no points")
        
        return joint_values, target_joint_values


    def run(self):
        with open(self.directory + '/poses.csv', 'r') as csvfile:
            reader = csv.reader(csvfile)
            next(reader)
            rowNum = 0
            for row in reader:
                # print(f"\n Row{rowNum}: {row} \n")
                # input checks from csv (if numbers not in row then skip row)

                # convert each row to a joint angle
                joints, target = self.getJoints(row)
                # update previous pose with row
                self.prev_pose.position.x = float(row[0]) 
                self.prev_pose.position.y = float(row[1])
                self.prev_pose.position.z = float(row[2])
                self.prev_pose.orientation.x = float(row[3])
                self.prev_pose.orientation.y = float(row[4])
                self.prev_pose.orientation.z = float(row[5])
                self.prev_pose.orientation.w = float(row[6])

                firstRow = True
                for i, point in enumerate(joints):
                    rowDict = {
                        self.group_names[0]: point.positions[0], 
                        self.group_names[1]: point.positions[1], 
                        self.group_names[2]: point.positions[2], 
                        self.group_names[3]: point.positions[3], 
                        self.group_names[4]: point.positions[4], 
                        self.group_names[5]: point.positions[5],
                        self.group_names_vel[0]: point.velocities[0],
                        self.group_names_vel[1]: point.velocities[1],
                        self.group_names_vel[2]: point.velocities[2],
                        self.group_names_vel[3]: point.velocities[3],
                        self.group_names_vel[4]: point.velocities[4],
                        self.group_names_vel[5]: point.velocities[5]
                        }
                    # write the joint angles to a csv file for later use 'a' is append csv
                    with open(self.directory + '/joint_vals.csv', 'a') as csvfile:
                        writer = csv.writer(csvfile)
                        # write keys as first row
                        if rowNum == 0 and firstRow == True: # use variables to check if first row
                            writer.writerow(rowDict.keys())
                            firstRow = False
                        # for each value key in the dictionary write the value to the csv file
                        writer.writerow(rowDict.values())
                        csvfile.close()
                print(f"\n Row{rowNum}: {rowDict} \n")
                
                # update trajectory start date with target joint values last entry in dictionary
                # Create a RobotState message
                # only first 5 keys are joint angle names and joint angle values
                self.robot_state.joint_state.name = list(rowDict.keys())[:6]
                # update robot state with target joint values last entry in dictionary
                self.robot_state.joint_state.position = list(rowDict.values())[:6]
                # Set the start state to the current state
                self.group.set_start_state(self.robot_state)

                rowNum += 1
                # wait until trajectory is visualized
                # press enter to continue plannning
            csvfile.close()