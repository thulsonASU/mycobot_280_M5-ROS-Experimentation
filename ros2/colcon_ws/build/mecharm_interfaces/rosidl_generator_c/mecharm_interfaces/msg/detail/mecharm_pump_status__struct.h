// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mecharm_interfaces:msg/MecharmPumpStatus.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__MSG__DETAIL__MECHARM_PUMP_STATUS__STRUCT_H_
#define MECHARM_INTERFACES__MSG__DETAIL__MECHARM_PUMP_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MecharmPumpStatus in the package mecharm_interfaces.
typedef struct mecharm_interfaces__msg__MecharmPumpStatus
{
  bool status;
  int8_t pin1;
  int8_t pin2;
} mecharm_interfaces__msg__MecharmPumpStatus;

// Struct for a sequence of mecharm_interfaces__msg__MecharmPumpStatus.
typedef struct mecharm_interfaces__msg__MecharmPumpStatus__Sequence
{
  mecharm_interfaces__msg__MecharmPumpStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecharm_interfaces__msg__MecharmPumpStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MECHARM_INTERFACES__MSG__DETAIL__MECHARM_PUMP_STATUS__STRUCT_H_
