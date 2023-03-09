// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mecharm_interfaces:msg/MecharmCoords.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__MSG__DETAIL__MECHARM_COORDS__STRUCT_H_
#define MECHARM_INTERFACES__MSG__DETAIL__MECHARM_COORDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MecharmCoords in the package mecharm_interfaces.
typedef struct mecharm_interfaces__msg__MecharmCoords
{
  float x;
  float y;
  float z;
  float rx;
  float ry;
  float rz;
} mecharm_interfaces__msg__MecharmCoords;

// Struct for a sequence of mecharm_interfaces__msg__MecharmCoords.
typedef struct mecharm_interfaces__msg__MecharmCoords__Sequence
{
  mecharm_interfaces__msg__MecharmCoords * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecharm_interfaces__msg__MecharmCoords__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MECHARM_INTERFACES__MSG__DETAIL__MECHARM_COORDS__STRUCT_H_
