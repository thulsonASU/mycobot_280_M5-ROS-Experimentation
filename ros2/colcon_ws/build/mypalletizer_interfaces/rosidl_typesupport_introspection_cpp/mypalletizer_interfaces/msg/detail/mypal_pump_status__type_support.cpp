// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mypalletizer_interfaces:msg/MypalPumpStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mypalletizer_interfaces/msg/detail/mypal_pump_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mypalletizer_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MypalPumpStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mypalletizer_interfaces::msg::MypalPumpStatus(_init);
}

void MypalPumpStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mypalletizer_interfaces::msg::MypalPumpStatus *>(message_memory);
  typed_message->~MypalPumpStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MypalPumpStatus_message_member_array[3] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mypalletizer_interfaces::msg::MypalPumpStatus, status),  // bytes offset in struct
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
    offsetof(mypalletizer_interfaces::msg::MypalPumpStatus, pin1),  // bytes offset in struct
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
    offsetof(mypalletizer_interfaces::msg::MypalPumpStatus, pin2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MypalPumpStatus_message_members = {
  "mypalletizer_interfaces::msg",  // message namespace
  "MypalPumpStatus",  // message name
  3,  // number of fields
  sizeof(mypalletizer_interfaces::msg::MypalPumpStatus),
  MypalPumpStatus_message_member_array,  // message members
  MypalPumpStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  MypalPumpStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MypalPumpStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MypalPumpStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mypalletizer_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mypalletizer_interfaces::msg::MypalPumpStatus>()
{
  return &::mypalletizer_interfaces::msg::rosidl_typesupport_introspection_cpp::MypalPumpStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mypalletizer_interfaces, msg, MypalPumpStatus)() {
  return &::mypalletizer_interfaces::msg::rosidl_typesupport_introspection_cpp::MypalPumpStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
