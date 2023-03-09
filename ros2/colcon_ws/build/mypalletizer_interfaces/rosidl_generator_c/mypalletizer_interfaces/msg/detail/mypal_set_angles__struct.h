// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mypalletizer_interfaces:msg/MypalSetAngles.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_SET_ANGLES__STRUCT_H_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_SET_ANGLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MypalSetAngles in the package mypalletizer_interfaces.
typedef struct mypalletizer_interfaces__msg__MypalSetAngles
{
  float joint_1;
  float joint_2;
  float joint_3;
  float joint_4;
  /// float32 joint_5
  /// float32 joint_6
  int8_t speed;
} mypalletizer_interfaces__msg__MypalSetAngles;

// Struct for a sequence of mypalletizer_interfaces__msg__MypalSetAngles.
typedef struct mypalletizer_interfaces__msg__MypalSetAngles__Sequence
{
  mypalletizer_interfaces__msg__MypalSetAngles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mypalletizer_interfaces__msg__MypalSetAngles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_SET_ANGLES__STRUCT_H_
