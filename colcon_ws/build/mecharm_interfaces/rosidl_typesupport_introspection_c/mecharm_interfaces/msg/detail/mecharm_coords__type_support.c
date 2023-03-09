// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mecharm_interfaces:msg/MecharmCoords.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mecharm_interfaces/msg/detail/mecharm_coords__rosidl_typesupport_introspection_c.h"
#include "mecharm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mecharm_interfaces/msg/detail/mecharm_coords__functions.h"
#include "mecharm_interfaces/msg/detail/mecharm_coords__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mecharm_interfaces__msg__MecharmCoords__rosidl_typesupport_introspection_c__MecharmCoords_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mecharm_interfaces__msg__MecharmCoords__init(message_memory);
}

void mecharm_interfaces__msg__MecharmCoords__rosidl_typesupport_introspection_c__MecharmCoords_fini_function(void * message_memory)
{
  mecharm_interfaces__msg__MecharmCoords__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mecharm_interfaces__msg__MecharmCoords__rosidl_typesupport_introspection_c__MecharmCoords_message_member_array[6] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecharm_interfaces__msg__MecharmCoords, x),  // bytes offset in struct
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
    offsetof(mecharm_interfaces__msg__MecharmCoords, y),  // bytes offset in struct
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
    offsetof(mecharm_interfaces__msg__MecharmCoords, z),  // bytes offset in struct
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
    offsetof(mecharm_interfaces__msg__MecharmCoords, rx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ry",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecharm_interfaces__msg__MecharmCoords, ry),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecharm_interfaces__msg__MecharmCoords, rz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mecharm_interfaces__msg__MecharmCoords__rosidl_typesupport_introspection_c__MecharmCoords_message_members = {
  "mecharm_interfaces__msg",  // message namespace
  "MecharmCoords",  // message name
  6,  // number of fields
  sizeof(mecharm_interfaces__msg__MecharmCoords),
  mecharm_interfaces__msg__MecharmCoords__rosidl_typesupport_introspection_c__MecharmCoords_message_member_array,  // message members
  mecharm_interfaces__msg__MecharmCoords__rosidl_typesupport_introspection_c__MecharmCoords_init_function,  // function to initialize message memory (memory has to be allocated)
  mecharm_interfaces__msg__MecharmCoords__rosidl_typesupport_introspection_c__MecharmCoords_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mecharm_interfaces__msg__MecharmCoords__rosidl_typesupport_introspection_c__MecharmCoords_message_type_support_handle = {
  0,
  &mecharm_interfaces__msg__MecharmCoords__rosidl_typesupport_introspection_c__MecharmCoords_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mecharm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecharm_interfaces, msg, MecharmCoords)() {
  if (!mecharm_interfaces__msg__MecharmCoords__rosidl_typesupport_introspection_c__MecharmCoords_message_type_support_handle.typesupport_identifier) {
    mecharm_interfaces__msg__MecharmCoords__rosidl_typesupport_introspection_c__MecharmCoords_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mecharm_interfaces__msg__MecharmCoords__rosidl_typesupport_introspection_c__MecharmCoords_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
