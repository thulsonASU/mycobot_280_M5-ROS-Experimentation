// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mypalletizer_interfaces:msg/MypalGripperStatus.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_GRIPPER_STATUS__TRAITS_HPP_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_GRIPPER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mypalletizer_interfaces/msg/detail/mypal_gripper_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mypalletizer_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MypalGripperStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MypalGripperStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MypalGripperStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mypalletizer_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mypalletizer_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mypalletizer_interfaces::msg::MypalGripperStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mypalletizer_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mypalletizer_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mypalletizer_interfaces::msg::MypalGripperStatus & msg)
{
  return mypalletizer_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mypalletizer_interfaces::msg::MypalGripperStatus>()
{
  return "mypalletizer_interfaces::msg::MypalGripperStatus";
}

template<>
inline const char * name<mypalletizer_interfaces::msg::MypalGripperStatus>()
{
  return "mypalletizer_interfaces/msg/MypalGripperStatus";
}

template<>
struct has_fixed_size<mypalletizer_interfaces::msg::MypalGripperStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mypalletizer_interfaces::msg::MypalGripperStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mypalletizer_interfaces::msg::MypalGripperStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_GRIPPER_STATUS__TRAITS_HPP_
