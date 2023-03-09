// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mypalletizer_interfaces:srv/GripperStatus.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__SRV__DETAIL__GRIPPER_STATUS__STRUCT_H_
#define MYPALLETIZER_INTERFACES__SRV__DETAIL__GRIPPER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GripperStatus in the package mypalletizer_interfaces.
typedef struct mypalletizer_interfaces__srv__GripperStatus_Request
{
  bool status;
} mypalletizer_interfaces__srv__GripperStatus_Request;

// Struct for a sequence of mypalletizer_interfaces__srv__GripperStatus_Request.
typedef struct mypalletizer_interfaces__srv__GripperStatus_Request__Sequence
{
  mypalletizer_interfaces__srv__GripperStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mypalletizer_interfaces__srv__GripperStatus_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GripperStatus in the package mypalletizer_interfaces.
typedef struct mypalletizer_interfaces__srv__GripperStatus_Response
{
  bool flag;
} mypalletizer_interfaces__srv__GripperStatus_Response;

// Struct for a sequence of mypalletizer_interfaces__srv__GripperStatus_Response.
typedef struct mypalletizer_interfaces__srv__GripperStatus_Response__Sequence
{
  mypalletizer_interfaces__srv__GripperStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mypalletizer_interfaces__srv__GripperStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYPALLETIZER_INTERFACES__SRV__DETAIL__GRIPPER_STATUS__STRUCT_H_
