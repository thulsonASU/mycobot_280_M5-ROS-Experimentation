// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mecharm_interfaces:msg/MecharmSetAngles.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__MSG__DETAIL__MECHARM_SET_ANGLES__TRAITS_HPP_
#define MECHARM_INTERFACES__MSG__DETAIL__MECHARM_SET_ANGLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mecharm_interfaces/msg/detail/mecharm_set_angles__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mecharm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MecharmSetAngles & msg,
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
    out << ", ";
  }

  // member: joint_5
  {
    out << "joint_5: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_5, out);
    out << ", ";
  }

  // member: joint_6
  {
    out << "joint_6: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_6, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MecharmSetAngles & msg,
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

  // member: joint_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_5: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_5, out);
    out << "\n";
  }

  // member: joint_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_6: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_6, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MecharmSetAngles & msg, bool use_flow_style = false)
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

}  // namespace mecharm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mecharm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mecharm_interfaces::msg::MecharmSetAngles & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecharm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecharm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mecharm_interfaces::msg::MecharmSetAngles & msg)
{
  return mecharm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mecharm_interfaces::msg::MecharmSetAngles>()
{
  return "mecharm_interfaces::msg::MecharmSetAngles";
}

template<>
inline const char * name<mecharm_interfaces::msg::MecharmSetAngles>()
{
  return "mecharm_interfaces/msg/MecharmSetAngles";
}

template<>
struct has_fixed_size<mecharm_interfaces::msg::MecharmSetAngles>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecharm_interfaces::msg::MecharmSetAngles>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecharm_interfaces::msg::MecharmSetAngles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MECHARM_INTERFACES__MSG__DETAIL__MECHARM_SET_ANGLES__TRAITS_HPP_
