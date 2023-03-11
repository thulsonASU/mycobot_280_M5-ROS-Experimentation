import math
from geometry_msgs.msg import Pose

# Set Cartesian coordinates
x = 0.5
y = 0.5
z = 0.5

# Set Euler angles (in radians)
roll = math.pi / 4  # 45 degrees
pitch = 0
yaw = math.pi / 2  # 90 degrees

# Create a Pose message
pose = Pose()

# Set the position
pose.position.x = x
pose.position.y = y
pose.position.z = z

# Convert Euler angles to quaternion
cy = math.cos(yaw * 0.5)
sy = math.sin(yaw * 0.5)
cp = math.cos(pitch * 0.5)
sp = math.sin(pitch * 0.5)
cr = math.cos(roll * 0.5)
sr = math.sin(roll * 0.5)

qw = cy * cp * cr + sy * sp * sr
qx = cy * cp * sr - sy * sp * cr
qy = sy * cp * sr + cy * sp * cr
qz = sy * cp * cr - cy * sp * sr

# Set the orientation
pose.orientation.nrx = qx
pose.orientation.y = qy
pose.orientation.z = qz
pose.orientation.w = qw
