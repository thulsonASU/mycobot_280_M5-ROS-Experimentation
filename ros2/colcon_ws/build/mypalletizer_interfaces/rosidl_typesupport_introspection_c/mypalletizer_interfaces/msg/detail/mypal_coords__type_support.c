// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mypalletizer_interfaces:msg/MypalCoords.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mypalletizer_interfaces/msg/detail/mypal_coords__rosidl_typesupport_introspection_c.h"
#include "mypalletizer_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mypalletizer_interfaces/msg/detail/mypal_coords__functions.h"
#include "mypalletizer_interfaces/msg/detail/mypal_coords__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mypalletizer_interfaces__msg__MypalCoords__rosidl_typesupport_introspection_c__MypalCoords_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mypalletizer_interfaces__msg__MypalCoords__init(message_memory);
}

void mypalletizer_interfaces__msg__MypalCoords__rosidl_typesupport_introspection_c__MypalCoords_fini_function(void * message_memory)
{
  mypalletizer_interfaces__msg__MypalCoords__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mypalletizer_interfaces__msg__MypalCoords__rosidl_typesupport_introspection_c__MypalCoords_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mypalletizer_interfaces__msg__MypalCoords, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mypalletizer_interfaces__msg__MypalCoords, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mypalletizer_interfaces__msg__MypalCoords, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mypalletizer_interfaces__msg__MypalCoords, rx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mypalletizer_interfaces__msg__MypalCoords__rosidl_typesupport_introspection_c__MypalCoords_message_members = {
  "mypalletizer_interfaces__msg",  // message namespace
  "MypalCoords",  // message name
  4,  // number of fields
  sizeof(mypalletizer_interfaces__msg__MypalCoords),
  mypalletizer_interfaces__msg__MypalCoords__rosidl_typesupport_introspection_c__MypalCoords_message_member_array,  // message members
  mypalletizer_interfaces__msg__MypalCoords__rosidl_typesupport_introspection_c__MypalCoords_init_function,  // function to initialize message memory (memory has to be allocated)
  mypalletizer_interfaces__msg__MypalCoords__rosidl_typesupport_introspection_c__MypalCoords_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mypalletizer_interfaces__msg__MypalCoords__rosidl_typesupport_introspection_c__MypalCoords_message_type_support_handle = {
  0,
  &mypalletizer_interfaces__msg__MypalCoords__rosidl_typesupport_introspection_c__MypalCoords_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mypalletizer_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mypalletizer_interfaces, msg, MypalCoords)() {
  if (!mypalletizer_interfaces__msg__MypalCoords__rosidl_typesupport_introspection_c__MypalCoords_message_type_support_handle.typesupport_identifier) {
    mypalletizer_interfaces__msg__MypalCoords__rosidl_typesupport_introspection_c__MypalCoords_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mypalletizer_interfaces__msg__MypalCoords__rosidl_typesupport_introspection_c__MypalCoords_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
