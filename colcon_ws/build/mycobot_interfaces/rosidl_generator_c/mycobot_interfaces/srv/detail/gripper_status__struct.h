// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mycobot_interfaces:srv/GripperStatus.idl
// generated code does not contain a copyright notice

#ifndef MYCOBOT_INTERFACES__SRV__DETAIL__GRIPPER_STATUS__STRUCT_H_
#define MYCOBOT_INTERFACES__SRV__DETAIL__GRIPPER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GripperStatus in the package mycobot_interfaces.
typedef struct mycobot_interfaces__srv__GripperStatus_Request
{
  bool status;
} mycobot_interfaces__srv__GripperStatus_Request;

// Struct for a sequence of mycobot_interfaces__srv__GripperStatus_Request.
typedef struct mycobot_interfaces__srv__GripperStatus_Request__Sequence
{
  mycobot_interfaces__srv__GripperStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mycobot_interfaces__srv__GripperStatus_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GripperStatus in the package mycobot_interfaces.
typedef struct mycobot_interfaces__srv__GripperStatus_Response
{
  bool flag;
} mycobot_interfaces__srv__GripperStatus_Response;

// Struct for a sequence of mycobot_interfaces__srv__GripperStatus_Response.
typedef struct mycobot_interfaces__srv__GripperStatus_Response__Sequence
{
  mycobot_interfaces__srv__GripperStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mycobot_interfaces__srv__GripperStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYCOBOT_INTERFACES__SRV__DETAIL__GRIPPER_STATUS__STRUCT_H_
