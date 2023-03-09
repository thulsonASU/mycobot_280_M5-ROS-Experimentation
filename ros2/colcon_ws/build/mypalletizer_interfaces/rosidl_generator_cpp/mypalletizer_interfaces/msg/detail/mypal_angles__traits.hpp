// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mypalletizer_interfaces:msg/MypalAngles.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_ANGLES__TRAITS_HPP_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_ANGLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mypalletizer_interfaces/msg/detail/mypal_angles__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mypalletizer_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MypalAngles & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_1
  {
    out << "joint_1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_1, out);
    out << ", ";
  }

  // member: joint_2
  {
    out << "joint_2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_2, out);
    out << ", ";
  }

  // member: joint_3
  {
    out << "joint_3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_3, out);
    out << ", ";
  }

  // member: joint_4
  {
    out << "joint_4: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MypalAngles & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_1, out);
    out << "\n";
  }

  // member: joint_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_2, out);
    out << "\n";
  }

  // member: joint_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_3, out);
    out << "\n";
  }

  // member: joint_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_4: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MypalAngles & msg, bool use_flow_style = false)
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
  const mypalletizer_interfaces::msg::MypalAngles & msg,
  std::ostream & out, size_t indentation = 0)
{
  mypalletizer_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mypalletizer_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mypalletizer_interfaces::msg::MypalAngles & msg)
{
  return mypalletizer_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mypalletizer_interfaces::msg::MypalAngles>()
{
  return "mypalletizer_interfaces::msg::MypalAngles";
}

template<>
inline const char * name<mypalletizer_interfaces::msg::MypalAngles>()
{
  return "mypalletizer_interfaces/msg/MypalAngles";
}

template<>
struct has_fixed_size<mypalletizer_interfaces::msg::MypalAngles>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mypalletizer_interfaces::msg::MypalAngles>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mypalletizer_interfaces::msg::MypalAngles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_ANGLES__TRAITS_HPP_
