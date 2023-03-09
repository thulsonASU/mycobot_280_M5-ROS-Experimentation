// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mycobot_interfaces:srv/PumpStatus.idl
// generated code does not contain a copyright notice

#ifndef MYCOBOT_INTERFACES__SRV__DETAIL__PUMP_STATUS__STRUCT_H_
#define MYCOBOT_INTERFACES__SRV__DETAIL__PUMP_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PumpStatus in the package mycobot_interfaces.
typedef struct mycobot_interfaces__srv__PumpStatus_Request
{
  bool status;
  int8_t pin1;
  int8_t pin2;
} mycobot_interfaces__srv__PumpStatus_Request;

// Struct for a sequence of mycobot_interfaces__srv__PumpStatus_Request.
typedef struct mycobot_interfaces__srv__PumpStatus_Request__Sequence
{
  mycobot_interfaces__srv__PumpStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mycobot_interfaces__srv__PumpStatus_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PumpStatus in the package mycobot_interfaces.
typedef struct mycobot_interfaces__srv__PumpStatus_Response
{
  bool flag;
} mycobot_interfaces__srv__PumpStatus_Response;

// Struct for a sequence of mycobot_interfaces__srv__PumpStatus_Response.
typedef struct mycobot_interfaces__srv__PumpStatus_Response__Sequence
{
  mycobot_interfaces__srv__PumpStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mycobot_interfaces__srv__PumpStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYCOBOT_INTERFACES__SRV__DETAIL__PUMP_STATUS__STRUCT_H_
