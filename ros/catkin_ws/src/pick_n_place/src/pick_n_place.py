#!/usr/bin/env python3.8

import rospy, roslib, sys
import moveit_commander
import geometry_msgs.msg
from mycobot_communication.srv import GripperStatus

moveit_commander.roscpp_initialize(sys.argv)

# Connect to Gripper Service... I think

rospy.init_node("simple_gripper")

rospy.wait_for_service("switch_gripper_status")
try:
    switch_gripper = rospy.ServiceProxy(
        "switch_gripper_status", GripperStatus
    )
except:
    print("start error ...")
    exit(1)

print("Connect service success.")

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

# Open Gripper
print("Open")
switch_gripper(True)
rospy.sleep(2)
# Close Gripper
print("close")
switch_gripper(False)
rospy.sleep(1)
print("done")

rospy.sleep(5)
moveit_commander.roscpp_shutdown()