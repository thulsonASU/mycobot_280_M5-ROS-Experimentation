// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mypalletizer_interfaces:msg/MypalGripperStatus.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_GRIPPER_STATUS__STRUCT_H_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_GRIPPER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MypalGripperStatus in the package mypalletizer_interfaces.
typedef struct mypalletizer_interfaces__msg__MypalGripperStatus
{
  bool status;
} mypalletizer_interfaces__msg__MypalGripperStatus;

// Struct for a sequence of mypalletizer_interfaces__msg__MypalGripperStatus.
typedef struct mypalletizer_interfaces__msg__MypalGripperStatus__Sequence
{
  mypalletizer_interfaces__msg__MypalGripperStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mypalletizer_interfaces__msg__MypalGripperStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_GRIPPER_STATUS__STRUCT_H_
