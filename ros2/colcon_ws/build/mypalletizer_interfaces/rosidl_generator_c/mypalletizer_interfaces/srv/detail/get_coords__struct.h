// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mypalletizer_interfaces:srv/GetCoords.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__SRV__DETAIL__GET_COORDS__STRUCT_H_
#define MYPALLETIZER_INTERFACES__SRV__DETAIL__GET_COORDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetCoords in the package mypalletizer_interfaces.
typedef struct mypalletizer_interfaces__srv__GetCoords_Request
{
  uint8_t structure_needs_at_least_one_member;
} mypalletizer_interfaces__srv__GetCoords_Request;

// Struct for a sequence of mypalletizer_interfaces__srv__GetCoords_Request.
typedef struct mypalletizer_interfaces__srv__GetCoords_Request__Sequence
{
  mypalletizer_interfaces__srv__GetCoords_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mypalletizer_interfaces__srv__GetCoords_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GetCoords in the package mypalletizer_interfaces.
typedef struct mypalletizer_interfaces__srv__GetCoords_Response
{
  float x;
  float y;
  float z;
  float rx;
} mypalletizer_interfaces__srv__GetCoords_Response;

// Struct for a sequence of mypalletizer_interfaces__srv__GetCoords_Response.
typedef struct mypalletizer_interfaces__srv__GetCoords_Response__Sequence
{
  mypalletizer_interfaces__srv__GetCoords_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mypalletizer_interfaces__srv__GetCoords_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYPALLETIZER_INTERFACES__SRV__DETAIL__GET_COORDS__STRUCT_H_
