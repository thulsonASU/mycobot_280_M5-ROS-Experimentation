// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mypalletizer_interfaces:srv/SetAngles.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__SRV__DETAIL__SET_ANGLES__STRUCT_H_
#define MYPALLETIZER_INTERFACES__SRV__DETAIL__SET_ANGLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetAngles in the package mypalletizer_interfaces.
typedef struct mypalletizer_interfaces__srv__SetAngles_Request
{
  float joint_1;
  float joint_2;
  float joint_3;
  float joint_4;
  /// float32 joint_5
  /// float32 joint_6
  int8_t speed;
} mypalletizer_interfaces__srv__SetAngles_Request;

// Struct for a sequence of mypalletizer_interfaces__srv__SetAngles_Request.
typedef struct mypalletizer_interfaces__srv__SetAngles_Request__Sequence
{
  mypalletizer_interfaces__srv__SetAngles_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mypalletizer_interfaces__srv__SetAngles_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetAngles in the package mypalletizer_interfaces.
typedef struct mypalletizer_interfaces__srv__SetAngles_Response
{
  bool flag;
} mypalletizer_interfaces__srv__SetAngles_Response;

// Struct for a sequence of mypalletizer_interfaces__srv__SetAngles_Response.
typedef struct mypalletizer_interfaces__srv__SetAngles_Response__Sequence
{
  mypalletizer_interfaces__srv__SetAngles_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mypalletizer_interfaces__srv__SetAngles_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYPALLETIZER_INTERFACES__SRV__DETAIL__SET_ANGLES__STRUCT_H_
