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

# Get user directory path
from pathlib import Path
home = str(Path.home())

def getJoints(pose):
    # Initialize the move_group API
    moveit_commander.roscpp_initialize(sys.argv) # cpp wrapper for moveit
    # Initialize the MoveGroupCommander for the robot
    # robot = moveit_commander.RobotCommander()
    pose = Pose()
    # row is a list of inputs from comma seperated values and each [i] is a column in the csv file
    pose.position.x = float(row[0]) 
    pose.position.y = float(row[1])
    pose.position.z = float(row[2])
    pose.orientation.x = float(row[3])
    pose.orientation.y = float(row[4])
    pose.orientation.z = float(row[5])
    pose.orientation.w = float(row[6])

    # generate waypoints from current pose to target pose
    waypoints = [prev_pose, pose]

    # Compute a linear move
    (plan, fraction) = group.compute_cartesian_path(waypoints, 0.01, 0.0)
    trajectory.joint_trajectory = plan.joint_trajectory
    joint_values = plan.joint_trajectory.points

    # If less than 100% of the requested trajectory was followed, plan a joint move instead
    if fraction < 1:
        print("Less than 100% of the requested trajectory was followed, planning a joint move instead")
        group.set_pose_target(pose)
        plan = group.plan()
        joint_values = plan[1].joint_trajectory.points
    else:
        # For each point in the loop check if the point is valid and 
        # Compute a joint move if the point is invalid or the distance is greater than 1
        for i, point in enumerate(joint_values):
            # Update robot_state with planned trajectory
            robot_state.joint_state.name = plan.joint_trajectory.joint_names
            robot_state.joint_state.position = point.positions

            # Create a GetStateValidityRequest message
            gsvr = GetStateValidityRequest()
            gsvr.robot_state = robot_state
            gsvr.group_name = group.get_name()

            # Create a service client for the /check_state_validity service
            rospy.wait_for_service('/check_state_validity')
            get_state_validity = rospy.ServiceProxy('/check_state_validity', GetStateValidity)

            # Call the service to check the state validity
            response = get_state_validity.call(gsvr)

            if not response.valid:
                print("Collision detected, planning a joint move instead")
                group.set_pose_target(pose)
                plan = group.plan()
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


if __name__ == '__main__':
    rospy.init_node('teach_robot')

    # Initialize the move_group API
    robot_state = RobotState()
    robot_state.joint_state = JointState()
    trajectory = RobotTrajectory()
    planning_scene = moveit_commander.PlanningSceneInterface()
    group = moveit_commander.MoveGroupCommander('arm_group', ns='/')
    group.set_planner_id('RRTConnect')

    # Initalize current pose as previous pose
    prev_pose = group.get_current_pose().pose

    # initalize joint_angles.csv to empty
    with open(home + '/catkin_ws/src/drag_n_teach/poses/joint_angles.csv', 'w') as csvfile:
        csvfile.close()
    
    with open(home + '/catkin_ws/src/drag_n_teach/poses/pose.csv', 'r') as csvfile:
        reader = csv.reader(csvfile)
        next(reader)
        group_names = ['joint2_to_joint1','joint3_to_joint2','joint4_to_joint3','joint5_to_joint4','joint6_to_joint5','joint6output_to_joint6']
        rowNum = 0
        for row in reader:
            # print(f"\n Row{rowNum}: {row} \n")
            # input checks from csv (if numbers not in row then skip row)

            # convert each row to a joint angle
            joints, target = getJoints(row)
            # update previous pose with row
            prev_pose.position.x = float(row[0]) 
            prev_pose.position.y = float(row[1])
            prev_pose.position.z = float(row[2])
            prev_pose.orientation.x = float(row[3])
            prev_pose.orientation.y = float(row[4])
            prev_pose.orientation.z = float(row[5])
            prev_pose.orientation.w = float(row[6])

            firstRow = True
            for i, point in enumerate(joints):
                rowDict = {
                    group_names[0]: point.positions[0], 
                    group_names[1]: point.positions[1], 
                    group_names[2]: point.positions[2], 
                    group_names[3]: point.positions[3], 
                    group_names[4]: point.positions[4], 
                    group_names[5]: point.positions[5]
                    }
                # write the joint angles to a csv file for later use 'a' is append csv
                with open(home + '/catkin_ws/src/drag_n_teach/poses/joint_angles.csv', 'a') as csvfile:
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
            robot_state.joint_state.name = list(rowDict.keys())
            # update robot state with target joint values last entry in dictionary
            robot_state.joint_state.position = list(rowDict.values())
            # Set the start state to the current state
            group.set_start_state(robot_state)

            rowNum += 1
            # wait until trajectory is visualized
            # press enter to continue plannning
            try: 
                print("Press Enter to record a pose.")
                input()
            except KeyboardInterrupt:
                print("Shutting down")
                rospy.signal_shutdown("KeyboardInterrupt")
                moveit_commander.roscpp_shutdown()
                break
        csvfile.close()
    rospy.spin()