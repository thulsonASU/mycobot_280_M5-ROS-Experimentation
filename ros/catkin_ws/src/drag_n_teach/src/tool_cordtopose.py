#!/usr/bin/env python3
# -*- coding: utf-8 -*-
'''
Author: Tyler Hulson
Dependancies: mycobot_communication, roscore, pymycobot, geometry_msgs, csv, math, time, rospy
How To Use:
Launch 2 terminal windows
depending on .bashrc configuration you will need to sorce devel/setup.bash for each terminal (this assumes a built workspace)

terminal 1: CLI Run: 
roslaunch mycobot_280 slider_control.launch

terminal 2: CLI Run: 
roslaunch drag_n_teach tool_cordtopose.launch

TODO:
- Add an ID to the file name so that it can be saved multiple times
- Condense the slider_control.launch and tool_cordtopose.launch into one launch file
'''

import rospy
import csv
from geometry_msgs.msg import Pose
import time
import tf

def getPose():
    global pose
    # Define the frame names for the robot
    frame_names = ['joint1', 'joint2', 'joint3', 'joint4', 'joint5', 'joint6', 'joint6_flange']
    # Define the transform listener
    listener = tf.TransformListener()
    # Wait for the transform to become available
    listener.waitForTransform(frame_names[0], frame_names[-1], rospy.Time(), rospy.Duration(4.0))
    # Get the transform from the base link to the end effector
    (trans, rot) = listener.lookupTransform(frame_names[0], frame_names[-1], rospy.Time(0)) # perform FK transformation
    # Create the pose message
    pose = Pose()
    # Set the position of the pose message
    pose.position.x = trans[0]
    pose.position.y = trans[1]
    pose.position.z = trans[2]
    pose.orientation.x = rot[0]
    pose.orientation.y = rot[1]
    pose.orientation.z = rot[2]
    pose.orientation.w = rot[3]

if __name__ == '__main__':
    rospy.init_node('drag_robot')
    pose = Pose()
    with open('/home/thulson/catkin_ws/src/drag_n_teach/poses/pose.csv', 'w') as csvfile:
        writer = csv.writer(csvfile)
        writer.writerow(['x', 'y', 'z', 'qx', 'qy', 'qz', 'qw'])
        print("Press Enter to start recording poses.")
        input()
        while not rospy.is_shutdown():
            getPose()
            time.sleep(0.5)
            writer.writerow([pose.position.x, pose.position.y, pose.position.z, pose.orientation.x, pose.orientation.y, pose.orientation.z, pose.orientation.w])
            print("Position saved.")
        csvfile.close()
    rospy.spin()