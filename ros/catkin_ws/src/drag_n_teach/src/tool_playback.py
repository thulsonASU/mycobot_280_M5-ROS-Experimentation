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
roslaunch drag_n_teach tool_playback.launch

Description:
This script is designed to playback the joint angles from the joint_vals.csv file.
It will playback using the joint_state_publisher
'''
import rospy
import csv
from sensor_msgs.msg import JointState
import time
from pymycobot.mycobot import MyCobot
from pathlib import Path

class tool_playback():
    
    def __init__(self, guiDir = None) -> None:
        # Get user directory path
        self.home = str(Path.home())

        if guiDir is None:
            self.directory = self.home + '/catkin_ws/src/drag_n_teach/poses'
        else:
            self.directory = guiDir
        
        # Initialize the node
        rospy.init_node('joint_state_publisher')
    
        # Create a JointState message
        self.joint_state = JointState()
        
        global mc
        # Initialize robot if it exists
        if rospy.has_param('robot'):
            port = rospy.get_param("~port", "/dev/ttyACM0")
            baud = rospy.get_param("~baud", 115200)
            print(port, baud)
            self.mc = MyCobot(port, baud)
        else:
            self.mc = None

    # Custom node to publish joint states
    def publish_joint_states(self,joint_values):

        # Create a publisher
        pub = rospy.Publisher('/joint_states', JointState, queue_size=10)

        self.joint_state.name = ['joint2_to_joint1','joint3_to_joint2','joint4_to_joint3','joint5_to_joint4','joint6_to_joint5','joint6output_to_joint6']  # Replace with your joint names
        # slice the first 5 elements for positional values
        self.joint_state.position = joint_values[:6]
        # slice the last 5 elements for velocity values
        self.joint_state.velocity = joint_values[6:]

        self.joint_state.header.stamp = rospy.Time.now()
        print("Publishing joint_state:\n", self.joint_state)
        pub.publish(self.joint_state)

    # From Slider Control demo
    def callback(self,data):
        print(data.position)
        data_list = []
        for index, value in enumerate(data.position):
            data_list.append(value)

        self.mc.send_radians(data_list, 80)

    def run(self):
        # read in joint angles from csv file
        with open(self.directory + '/joint_vals.csv', 'r') as csvfile:
            reader = csv.reader(csvfile)
            joint_vals = []
            for row in reader:
                joint_vals.append(row)
        csvfile.close()
        
        # remove first row of labels
        joint_vals.pop(0)
        # convert string to float
        joint_vals = [[float(j) for j in i] for i in joint_vals]
        # wait for rviz to load
        time.sleep(3)
        # set initial joint angle for robot model
        self.publish_joint_states([0,0,0,0,0,0])
        input("Press Enter to playback joint angles.")
        try:
            for joint in joint_vals:
                # Check if interrupted and shutting down
                if rospy.is_shutdown():
                    break

                # publish joints to robot (if linked to joint_state_publisher)
                self.publish_joint_states(joint)

                # # if a robot is connected then subscribe to the joint_states
                if self.mc is not None:
                    rospy.Subscriber("/joint_states", JointState, self.callback)

                time.sleep(0.05)  # Add a delay for visualization and sample rate
            print("Playback Complete")
        except KeyboardInterrupt:
            print("Shutting down")
            rospy.signal_shutdown("KeyboardInterrupt")

if __name__ == '__main__':
    tool = tool_playback()
    tool.run()