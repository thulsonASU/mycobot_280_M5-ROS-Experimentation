// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mypalletizer_interfaces:msg/MypalPumpStatus.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_PUMP_STATUS__STRUCT_H_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_PUMP_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MypalPumpStatus in the package mypalletizer_interfaces.
typedef struct mypalletizer_interfaces__msg__MypalPumpStatus
{
  bool status;
  int8_t pin1;
  int8_t pin2;
} mypalletizer_interfaces__msg__MypalPumpStatus;

// Struct for a sequence of mypalletizer_interfaces__msg__MypalPumpStatus.
typedef struct mypalletizer_interfaces__msg__MypalPumpStatus__Sequence
{
  mypalletizer_interfaces__msg__MypalPumpStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mypalletizer_interfaces__msg__MypalPumpStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_PUMP_STATUS__STRUCT_H_
