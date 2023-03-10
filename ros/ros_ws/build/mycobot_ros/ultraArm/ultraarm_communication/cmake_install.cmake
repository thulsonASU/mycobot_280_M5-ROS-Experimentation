# Install script for directory: /home/tyler/catkin_ws/src/mycobot_ros/ultraArm/ultraarm_communication

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/tyler/catkin_ws/install")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ultraarm_communication/msg" TYPE FILE FILES
    "/home/tyler/catkin_ws/src/mycobot_ros/ultraArm/ultraarm_communication/msg/ultraArmAngles.msg"
    "/home/tyler/catkin_ws/src/mycobot_ros/ultraArm/ultraarm_communication/msg/ultraArmCoords.msg"
    "/home/tyler/catkin_ws/src/mycobot_ros/ultraArm/ultraarm_communication/msg/ultraArmSetAngles.msg"
    "/home/tyler/catkin_ws/src/mycobot_ros/ultraArm/ultraarm_communication/msg/ultraArmSetCoords.msg"
    "/home/tyler/catkin_ws/src/mycobot_ros/ultraArm/ultraarm_communication/msg/ultraArmGripperStatus.msg"
    "/home/tyler/catkin_ws/src/mycobot_ros/ultraArm/ultraarm_communication/msg/ultraArmPumpStatus.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ultraarm_communication/srv" TYPE FILE FILES
    "/home/tyler/catkin_ws/src/mycobot_ros/ultraArm/ultraarm_communication/srv/GetAngles.srv"
    "/home/tyler/catkin_ws/src/mycobot_ros/ultraArm/ultraarm_communication/srv/SetAngles.srv"
    "/home/tyler/catkin_ws/src/mycobot_ros/ultraArm/ultraarm_communication/srv/GetCoords.srv"
    "/home/tyler/catkin_ws/src/mycobot_ros/ultraArm/ultraarm_communication/srv/SetCoords.srv"
    "/home/tyler/catkin_ws/src/mycobot_ros/ultraArm/ultraarm_communication/srv/GripperStatus.srv"
    "/home/tyler/catkin_ws/src/mycobot_ros/ultraArm/ultraarm_communication/srv/PumpStatus.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ultraarm_communication/cmake" TYPE FILE FILES "/home/tyler/catkin_ws/build/mycobot_ros/ultraArm/ultraarm_communication/catkin_generated/installspace/ultraarm_communication-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/tyler/catkin_ws/devel/include/ultraarm_communication")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/tyler/catkin_ws/devel/share/roseus/ros/ultraarm_communication")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/tyler/catkin_ws/devel/share/common-lisp/ros/ultraarm_communication")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/tyler/catkin_ws/devel/share/gennodejs/ros/ultraarm_communication")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/tyler/catkin_ws/devel/lib/python3/dist-packages/ultraarm_communication")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/tyler/catkin_ws/devel/lib/python3/dist-packages/ultraarm_communication")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/tyler/catkin_ws/build/mycobot_ros/ultraArm/ultraarm_communication/catkin_generated/installspace/ultraarm_communication.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ultraarm_communication/cmake" TYPE FILE FILES "/home/tyler/catkin_ws/build/mycobot_ros/ultraArm/ultraarm_communication/catkin_generated/installspace/ultraarm_communication-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ultraarm_communication/cmake" TYPE FILE FILES
    "/home/tyler/catkin_ws/build/mycobot_ros/ultraArm/ultraarm_communication/catkin_generated/installspace/ultraarm_communicationConfig.cmake"
    "/home/tyler/catkin_ws/build/mycobot_ros/ultraArm/ultraarm_communication/catkin_generated/installspace/ultraarm_communicationConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ultraarm_communication" TYPE FILE FILES "/home/tyler/catkin_ws/src/mycobot_ros/ultraArm/ultraarm_communication/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ultraarm_communication" TYPE PROGRAM FILES "/home/tyler/catkin_ws/build/mycobot_ros/ultraArm/ultraarm_communication/catkin_generated/installspace/ultraArm_services.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ultraarm_communication" TYPE PROGRAM FILES "/home/tyler/catkin_ws/build/mycobot_ros/ultraArm/ultraarm_communication/catkin_generated/installspace/ultraArm_topics.py")
endif()

