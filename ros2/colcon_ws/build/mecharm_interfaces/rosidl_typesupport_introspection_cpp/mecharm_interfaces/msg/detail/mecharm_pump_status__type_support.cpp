// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mecharm_interfaces:msg/MecharmPumpStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mecharm_interfaces/msg/detail/mecharm_pump_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mecharm_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MecharmPumpStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mecharm_interfaces::msg::MecharmPumpStatus(_init);
}

void MecharmPumpStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mecharm_interfaces::msg::MecharmPumpStatus *>(message_memory);
  typed_message->~MecharmPumpStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MecharmPumpStatus_message_member_array[3] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecharm_interfaces::msg::MecharmPumpStatus, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pin1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecharm_interfaces::msg::MecharmPumpStatus, pin1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pin2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecharm_interfaces::msg::MecharmPumpStatus, pin2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MecharmPumpStatus_message_members = {
  "mecharm_interfaces::msg",  // message namespace
  "MecharmPumpStatus",  // message name
  3,  // number of fields
  sizeof(mecharm_interfaces::msg::MecharmPumpStatus),
  MecharmPumpStatus_message_member_array,  // message members
  MecharmPumpStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  MecharmPumpStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MecharmPumpStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MecharmPumpStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mecharm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mecharm_interfaces::msg::MecharmPumpStatus>()
{
  return &::mecharm_interfaces::msg::rosidl_typesupport_introspection_cpp::MecharmPumpStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mecharm_interfaces, msg, MecharmPumpStatus)() {
  return &::mecharm_interfaces::msg::rosidl_typesupport_introspection_cpp::MecharmPumpStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
