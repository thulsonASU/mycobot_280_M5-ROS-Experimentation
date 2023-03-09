// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mecharm_interfaces:msg/MecharmPumpStatus.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__MSG__DETAIL__MECHARM_PUMP_STATUS__TRAITS_HPP_
#define MECHARM_INTERFACES__MSG__DETAIL__MECHARM_PUMP_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mecharm_interfaces/msg/detail/mecharm_pump_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mecharm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MecharmPumpStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: pin1
  {
    out << "pin1: ";
    rosidl_generator_traits::value_to_yaml(msg.pin1, out);
    out << ", ";
  }

  // member: pin2
  {
    out << "pin2: ";
    rosidl_generator_traits::value_to_yaml(msg.pin2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MecharmPumpStatus & msg,
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

  // member: pin1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pin1: ";
    rosidl_generator_traits::value_to_yaml(msg.pin1, out);
    out << "\n";
  }

  // member: pin2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pin2: ";
    rosidl_generator_traits::value_to_yaml(msg.pin2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MecharmPumpStatus & msg, bool use_flow_style = false)
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
  const mecharm_interfaces::msg::MecharmPumpStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecharm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecharm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mecharm_interfaces::msg::MecharmPumpStatus & msg)
{
  return mecharm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mecharm_interfaces::msg::MecharmPumpStatus>()
{
  return "mecharm_interfaces::msg::MecharmPumpStatus";
}

template<>
inline const char * name<mecharm_interfaces::msg::MecharmPumpStatus>()
{
  return "mecharm_interfaces/msg/MecharmPumpStatus";
}

template<>
struct has_fixed_size<mecharm_interfaces::msg::MecharmPumpStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecharm_interfaces::msg::MecharmPumpStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecharm_interfaces::msg::MecharmPumpStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MECHARM_INTERFACES__MSG__DETAIL__MECHARM_PUMP_STATUS__TRAITS_HPP_
