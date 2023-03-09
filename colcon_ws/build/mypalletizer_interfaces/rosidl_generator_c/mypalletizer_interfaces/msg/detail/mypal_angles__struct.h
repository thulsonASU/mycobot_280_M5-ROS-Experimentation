// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mypalletizer_interfaces:msg/MypalAngles.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_ANGLES__STRUCT_H_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_ANGLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MypalAngles in the package mypalletizer_interfaces.
typedef struct mypalletizer_interfaces__msg__MypalAngles
{
  float joint_1;
  float joint_2;
  float joint_3;
  float joint_4;
} mypalletizer_interfaces__msg__MypalAngles;

// Struct for a sequence of mypalletizer_interfaces__msg__MypalAngles.
typedef struct mypalletizer_interfaces__msg__MypalAngles__Sequence
{
  mypalletizer_interfaces__msg__MypalAngles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mypalletizer_interfaces__msg__MypalAngles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_ANGLES__STRUCT_H_
