# Install script for directory: /home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/src/mycobot_ros/mycobot_280/mycobot_280jn

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/mycobot_280/mycobot_280jn/catkin_generated/installspace/mycobot_280jn.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mycobot_280jn/cmake" TYPE FILE FILES
    "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/mycobot_280/mycobot_280jn/catkin_generated/installspace/mycobot_280jnConfig.cmake"
    "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/mycobot_280/mycobot_280jn/catkin_generated/installspace/mycobot_280jnConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mycobot_280jn" TYPE FILE FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/src/mycobot_ros/mycobot_280/mycobot_280jn/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mycobot_280jn" TYPE PROGRAM FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/mycobot_280/mycobot_280jn/catkin_generated/installspace/follow_display.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mycobot_280jn" TYPE PROGRAM FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/mycobot_280/mycobot_280jn/catkin_generated/installspace/slider_control.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mycobot_280jn" TYPE PROGRAM FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/mycobot_280/mycobot_280jn/catkin_generated/installspace/teleop_keyboard.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mycobot_280jn" TYPE PROGRAM FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/mycobot_280/mycobot_280jn/catkin_generated/installspace/listen_real.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mycobot_280jn" TYPE PROGRAM FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/mycobot_280/mycobot_280jn/catkin_generated/installspace/listen_real_of_topic.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mycobot_280jn" TYPE PROGRAM FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/mycobot_280/mycobot_280jn/catkin_generated/installspace/detect_marker.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mycobot_280jn" TYPE PROGRAM FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/mycobot_280/mycobot_280jn/catkin_generated/installspace/following_marker.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mycobot_280jn" TYPE PROGRAM FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/mycobot_280/mycobot_280jn/catkin_generated/installspace/follow_and_pump.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mycobot_280jn" TYPE PROGRAM FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/mycobot_280/mycobot_280jn/catkin_generated/installspace/simple_gui.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mycobot_280jn" TYPE DIRECTORY FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/src/mycobot_ros/mycobot_280/mycobot_280jn/launch" REGEX "/setup\\_assistant\\.launch$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mycobot_280jn" TYPE DIRECTORY FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/src/mycobot_ros/mycobot_280/mycobot_280jn/config")
endif()

