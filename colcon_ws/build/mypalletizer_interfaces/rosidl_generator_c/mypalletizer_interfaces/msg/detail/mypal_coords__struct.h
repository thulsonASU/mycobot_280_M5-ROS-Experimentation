// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mypalletizer_interfaces:msg/MypalCoords.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_COORDS__STRUCT_H_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_COORDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MypalCoords in the package mypalletizer_interfaces.
typedef struct mypalletizer_interfaces__msg__MypalCoords
{
  float x;
  float y;
  float z;
  float rx;
} mypalletizer_interfaces__msg__MypalCoords;

// Struct for a sequence of mypalletizer_interfaces__msg__MypalCoords.
typedef struct mypalletizer_interfaces__msg__MypalCoords__Sequence
{
  mypalletizer_interfaces__msg__MypalCoords * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mypalletizer_interfaces__msg__MypalCoords__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_COORDS__STRUCT_H_
