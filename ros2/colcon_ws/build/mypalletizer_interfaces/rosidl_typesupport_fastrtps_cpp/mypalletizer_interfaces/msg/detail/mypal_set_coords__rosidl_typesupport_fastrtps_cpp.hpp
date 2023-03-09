// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from mypalletizer_interfaces:msg/MypalSetCoords.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_SET_COORDS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_SET_COORDS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mypalletizer_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "mypalletizer_interfaces/msg/detail/mypal_set_coords__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace mypalletizer_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mypalletizer_interfaces
cdr_serialize(
  const mypalletizer_interfaces::msg::MypalSetCoords & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mypalletizer_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mypalletizer_interfaces::msg::MypalSetCoords & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mypalletizer_interfaces
get_serialized_size(
  const mypalletizer_interfaces::msg::MypalSetCoords & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mypalletizer_interfaces
max_serialized_size_MypalSetCoords(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mypalletizer_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mypalletizer_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mypalletizer_interfaces, msg, MypalSetCoords)();

#ifdef __cplusplus
}
#endif

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_SET_COORDS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
