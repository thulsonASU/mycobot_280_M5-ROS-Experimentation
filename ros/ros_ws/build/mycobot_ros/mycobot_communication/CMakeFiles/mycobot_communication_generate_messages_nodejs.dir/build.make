# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tyler/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tyler/catkin_ws/build

# Utility rule file for mycobot_communication_generate_messages_nodejs.

# Include the progress variables for this target.
include mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs.dir/progress.make

mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotAngles.js
mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotCoords.js
mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotSetAngles.js
mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotSetCoords.js
mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotGripperStatus.js
mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotPumpStatus.js
mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/GetAngles.js
mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/SetAngles.js
mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/GetCoords.js
mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/SetCoords.js
mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/GripperStatus.js
mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/PumpStatus.js


/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotAngles.js: /opt/ros/noetic/lib/gennodejs/gen_nodejs.py
/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotAngles.js: /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg/MycobotAngles.msg
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tyler/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating Javascript code from mycobot_communication/MycobotAngles.msg"
	cd /home/tyler/catkin_ws/build/mycobot_ros/mycobot_communication && ../../catkin_generated/env_cached.sh /usr/bin/python3 /opt/ros/noetic/share/gennodejs/cmake/../../../lib/gennodejs/gen_nodejs.py /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg/MycobotAngles.msg -Imycobot_communication:/home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg -Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg -p mycobot_communication -o /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg

/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotCoords.js: /opt/ros/noetic/lib/gennodejs/gen_nodejs.py
/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotCoords.js: /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg/MycobotCoords.msg
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tyler/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating Javascript code from mycobot_communication/MycobotCoords.msg"
	cd /home/tyler/catkin_ws/build/mycobot_ros/mycobot_communication && ../../catkin_generated/env_cached.sh /usr/bin/python3 /opt/ros/noetic/share/gennodejs/cmake/../../../lib/gennodejs/gen_nodejs.py /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg/MycobotCoords.msg -Imycobot_communication:/home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg -Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg -p mycobot_communication -o /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg

/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotSetAngles.js: /opt/ros/noetic/lib/gennodejs/gen_nodejs.py
/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotSetAngles.js: /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg/MycobotSetAngles.msg
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tyler/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating Javascript code from mycobot_communication/MycobotSetAngles.msg"
	cd /home/tyler/catkin_ws/build/mycobot_ros/mycobot_communication && ../../catkin_generated/env_cached.sh /usr/bin/python3 /opt/ros/noetic/share/gennodejs/cmake/../../../lib/gennodejs/gen_nodejs.py /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg/MycobotSetAngles.msg -Imycobot_communication:/home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg -Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg -p mycobot_communication -o /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg

/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotSetCoords.js: /opt/ros/noetic/lib/gennodejs/gen_nodejs.py
/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotSetCoords.js: /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg/MycobotSetCoords.msg
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tyler/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating Javascript code from mycobot_communication/MycobotSetCoords.msg"
	cd /home/tyler/catkin_ws/build/mycobot_ros/mycobot_communication && ../../catkin_generated/env_cached.sh /usr/bin/python3 /opt/ros/noetic/share/gennodejs/cmake/../../../lib/gennodejs/gen_nodejs.py /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg/MycobotSetCoords.msg -Imycobot_communication:/home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg -Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg -p mycobot_communication -o /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg

/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotGripperStatus.js: /opt/ros/noetic/lib/gennodejs/gen_nodejs.py
/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotGripperStatus.js: /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg/MycobotGripperStatus.msg
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tyler/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating Javascript code from mycobot_communication/MycobotGripperStatus.msg"
	cd /home/tyler/catkin_ws/build/mycobot_ros/mycobot_communication && ../../catkin_generated/env_cached.sh /usr/bin/python3 /opt/ros/noetic/share/gennodejs/cmake/../../../lib/gennodejs/gen_nodejs.py /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg/MycobotGripperStatus.msg -Imycobot_communication:/home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg -Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg -p mycobot_communication -o /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg

/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotPumpStatus.js: /opt/ros/noetic/lib/gennodejs/gen_nodejs.py
/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotPumpStatus.js: /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg/MycobotPumpStatus.msg
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tyler/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Generating Javascript code from mycobot_communication/MycobotPumpStatus.msg"
	cd /home/tyler/catkin_ws/build/mycobot_ros/mycobot_communication && ../../catkin_generated/env_cached.sh /usr/bin/python3 /opt/ros/noetic/share/gennodejs/cmake/../../../lib/gennodejs/gen_nodejs.py /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg/MycobotPumpStatus.msg -Imycobot_communication:/home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg -Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg -p mycobot_communication -o /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg

/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/GetAngles.js: /opt/ros/noetic/lib/gennodejs/gen_nodejs.py
/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/GetAngles.js: /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/srv/GetAngles.srv
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tyler/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Generating Javascript code from mycobot_communication/GetAngles.srv"
	cd /home/tyler/catkin_ws/build/mycobot_ros/mycobot_communication && ../../catkin_generated/env_cached.sh /usr/bin/python3 /opt/ros/noetic/share/gennodejs/cmake/../../../lib/gennodejs/gen_nodejs.py /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/srv/GetAngles.srv -Imycobot_communication:/home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg -Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg -p mycobot_communication -o /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv

/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/SetAngles.js: /opt/ros/noetic/lib/gennodejs/gen_nodejs.py
/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/SetAngles.js: /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/srv/SetAngles.srv
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tyler/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Generating Javascript code from mycobot_communication/SetAngles.srv"
	cd /home/tyler/catkin_ws/build/mycobot_ros/mycobot_communication && ../../catkin_generated/env_cached.sh /usr/bin/python3 /opt/ros/noetic/share/gennodejs/cmake/../../../lib/gennodejs/gen_nodejs.py /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/srv/SetAngles.srv -Imycobot_communication:/home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg -Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg -p mycobot_communication -o /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv

/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/GetCoords.js: /opt/ros/noetic/lib/gennodejs/gen_nodejs.py
/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/GetCoords.js: /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/srv/GetCoords.srv
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tyler/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Generating Javascript code from mycobot_communication/GetCoords.srv"
	cd /home/tyler/catkin_ws/build/mycobot_ros/mycobot_communication && ../../catkin_generated/env_cached.sh /usr/bin/python3 /opt/ros/noetic/share/gennodejs/cmake/../../../lib/gennodejs/gen_nodejs.py /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/srv/GetCoords.srv -Imycobot_communication:/home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg -Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg -p mycobot_communication -o /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv

/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/SetCoords.js: /opt/ros/noetic/lib/gennodejs/gen_nodejs.py
/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/SetCoords.js: /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/srv/SetCoords.srv
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tyler/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Generating Javascript code from mycobot_communication/SetCoords.srv"
	cd /home/tyler/catkin_ws/build/mycobot_ros/mycobot_communication && ../../catkin_generated/env_cached.sh /usr/bin/python3 /opt/ros/noetic/share/gennodejs/cmake/../../../lib/gennodejs/gen_nodejs.py /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/srv/SetCoords.srv -Imycobot_communication:/home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg -Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg -p mycobot_communication -o /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv

/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/GripperStatus.js: /opt/ros/noetic/lib/gennodejs/gen_nodejs.py
/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/GripperStatus.js: /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/srv/GripperStatus.srv
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tyler/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Generating Javascript code from mycobot_communication/GripperStatus.srv"
	cd /home/tyler/catkin_ws/build/mycobot_ros/mycobot_communication && ../../catkin_generated/env_cached.sh /usr/bin/python3 /opt/ros/noetic/share/gennodejs/cmake/../../../lib/gennodejs/gen_nodejs.py /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/srv/GripperStatus.srv -Imycobot_communication:/home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg -Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg -p mycobot_communication -o /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv

/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/PumpStatus.js: /opt/ros/noetic/lib/gennodejs/gen_nodejs.py
/home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/PumpStatus.js: /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/srv/PumpStatus.srv
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tyler/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Generating Javascript code from mycobot_communication/PumpStatus.srv"
	cd /home/tyler/catkin_ws/build/mycobot_ros/mycobot_communication && ../../catkin_generated/env_cached.sh /usr/bin/python3 /opt/ros/noetic/share/gennodejs/cmake/../../../lib/gennodejs/gen_nodejs.py /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/srv/PumpStatus.srv -Imycobot_communication:/home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication/msg -Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg -p mycobot_communication -o /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv

mycobot_communication_generate_messages_nodejs: mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs
mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotAngles.js
mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotCoords.js
mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotSetAngles.js
mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotSetCoords.js
mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotGripperStatus.js
mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/msg/MycobotPumpStatus.js
mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/GetAngles.js
mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/SetAngles.js
mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/GetCoords.js
mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/SetCoords.js
mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/GripperStatus.js
mycobot_communication_generate_messages_nodejs: /home/tyler/catkin_ws/devel/share/gennodejs/ros/mycobot_communication/srv/PumpStatus.js
mycobot_communication_generate_messages_nodejs: mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs.dir/build.make

.PHONY : mycobot_communication_generate_messages_nodejs

# Rule to build all files generated by this target.
mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs.dir/build: mycobot_communication_generate_messages_nodejs

.PHONY : mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs.dir/build

mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs.dir/clean:
	cd /home/tyler/catkin_ws/build/mycobot_ros/mycobot_communication && $(CMAKE_COMMAND) -P CMakeFiles/mycobot_communication_generate_messages_nodejs.dir/cmake_clean.cmake
.PHONY : mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs.dir/clean

mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs.dir/depend:
	cd /home/tyler/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tyler/catkin_ws/src /home/tyler/catkin_ws/src/mycobot_ros/mycobot_communication /home/tyler/catkin_ws/build /home/tyler/catkin_ws/build/mycobot_ros/mycobot_communication /home/tyler/catkin_ws/build/mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : mycobot_ros/mycobot_communication/CMakeFiles/mycobot_communication_generate_messages_nodejs.dir/depend
