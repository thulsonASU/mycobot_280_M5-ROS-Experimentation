// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mecharm_interfaces:msg/MecharmSetAngles.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__MSG__DETAIL__MECHARM_SET_ANGLES__STRUCT_H_
#define MECHARM_INTERFACES__MSG__DETAIL__MECHARM_SET_ANGLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MecharmSetAngles in the package mecharm_interfaces.
typedef struct mecharm_interfaces__msg__MecharmSetAngles
{
  float joint_1;
  float joint_2;
  float joint_3;
  float joint_4;
  float joint_5;
  float joint_6;
  int8_t speed;
} mecharm_interfaces__msg__MecharmSetAngles;

// Struct for a sequence of mecharm_interfaces__msg__MecharmSetAngles.
typedef struct mecharm_interfaces__msg__MecharmSetAngles__Sequence
{
  mecharm_interfaces__msg__MecharmSetAngles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecharm_interfaces__msg__MecharmSetAngles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MECHARM_INTERFACES__MSG__DETAIL__MECHARM_SET_ANGLES__STRUCT_H_
