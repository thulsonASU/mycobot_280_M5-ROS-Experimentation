// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mypalletizer_interfaces:msg/MypalSetCoords.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_SET_COORDS__STRUCT_H_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_SET_COORDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MypalSetCoords in the package mypalletizer_interfaces.
typedef struct mypalletizer_interfaces__msg__MypalSetCoords
{
  float x;
  float y;
  float z;
  float rx;
  /// float32 ry
  /// float32 rz
  int8_t speed;
  int8_t model;
} mypalletizer_interfaces__msg__MypalSetCoords;

// Struct for a sequence of mypalletizer_interfaces__msg__MypalSetCoords.
typedef struct mypalletizer_interfaces__msg__MypalSetCoords__Sequence
{
  mypalletizer_interfaces__msg__MypalSetCoords * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mypalletizer_interfaces__msg__MypalSetCoords__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_SET_COORDS__STRUCT_H_
