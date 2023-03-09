// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mecharm_interfaces:msg/MecharmGripperStatus.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__MSG__DETAIL__MECHARM_GRIPPER_STATUS__STRUCT_H_
#define MECHARM_INTERFACES__MSG__DETAIL__MECHARM_GRIPPER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MecharmGripperStatus in the package mecharm_interfaces.
typedef struct mecharm_interfaces__msg__MecharmGripperStatus
{
  bool status;
} mecharm_interfaces__msg__MecharmGripperStatus;

// Struct for a sequence of mecharm_interfaces__msg__MecharmGripperStatus.
typedef struct mecharm_interfaces__msg__MecharmGripperStatus__Sequence
{
  mecharm_interfaces__msg__MecharmGripperStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecharm_interfaces__msg__MecharmGripperStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MECHARM_INTERFACES__MSG__DETAIL__MECHARM_GRIPPER_STATUS__STRUCT_H_
