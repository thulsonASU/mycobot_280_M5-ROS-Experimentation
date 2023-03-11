#!/usr/bin/env python3.8

import rospy, roslib, sys
import moveit_commander
import geometry_msgs.msg

moveit_commander.roscpp_initialize(sys.argv)
rospy.init_node('Pick_n_Place_my280M5')

robot = moveit_commander.RobotCommander()
arm = moveit_commander.MoveGroupCommander("arm_group")

print(arm)
print(robot)
rospy.sleep(1)

print("= Moving Robot to Home =")
rospy.sleep(1)

# Move to init_pos
arm.set_named_target("init_pose")
home = arm.go()
print("done")
rospy.sleep(2)

print("= Testing Gripper =")
rospy.sleep(1)

grip = moveit_commander.MoveGroupCommander("gripper")
print(grip)
# Open Gripper
grip.set_named_target("open")
grip.go()
print("Open")
rospy.sleep(2)
grip.set_named_target("close")
grip.go()
print("close")
rospy.sleep(1)
print("done")


rospy.sleep(5)
moveit_commander.roscpp_shutdown()