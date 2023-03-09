// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mycobot_interfaces:srv/SetAngles.idl
// generated code does not contain a copyright notice

#ifndef MYCOBOT_INTERFACES__SRV__DETAIL__SET_ANGLES__STRUCT_H_
#define MYCOBOT_INTERFACES__SRV__DETAIL__SET_ANGLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetAngles in the package mycobot_interfaces.
typedef struct mycobot_interfaces__srv__SetAngles_Request
{
  float joint_1;
  float joint_2;
  float joint_3;
  float joint_4;
  float joint_5;
  float joint_6;
  int8_t speed;
} mycobot_interfaces__srv__SetAngles_Request;

// Struct for a sequence of mycobot_interfaces__srv__SetAngles_Request.
typedef struct mycobot_interfaces__srv__SetAngles_Request__Sequence
{
  mycobot_interfaces__srv__SetAngles_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mycobot_interfaces__srv__SetAngles_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetAngles in the package mycobot_interfaces.
typedef struct mycobot_interfaces__srv__SetAngles_Response
{
  bool flag;
} mycobot_interfaces__srv__SetAngles_Response;

// Struct for a sequence of mycobot_interfaces__srv__SetAngles_Response.
typedef struct mycobot_interfaces__srv__SetAngles_Response__Sequence
{
  mycobot_interfaces__srv__SetAngles_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mycobot_interfaces__srv__SetAngles_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYCOBOT_INTERFACES__SRV__DETAIL__SET_ANGLES__STRUCT_H_
