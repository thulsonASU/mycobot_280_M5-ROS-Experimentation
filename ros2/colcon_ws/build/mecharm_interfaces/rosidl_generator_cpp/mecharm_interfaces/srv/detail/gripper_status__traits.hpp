// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mecharm_interfaces:srv/GripperStatus.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__SRV__DETAIL__GRIPPER_STATUS__TRAITS_HPP_
#define MECHARM_INTERFACES__SRV__DETAIL__GRIPPER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mecharm_interfaces/srv/detail/gripper_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mecharm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GripperStatus_Request & msg,
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
  const GripperStatus_Request & msg,
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

inline std::string to_yaml(const GripperStatus_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mecharm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mecharm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mecharm_interfaces::srv::GripperStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecharm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecharm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mecharm_interfaces::srv::GripperStatus_Request & msg)
{
  return mecharm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mecharm_interfaces::srv::GripperStatus_Request>()
{
  return "mecharm_interfaces::srv::GripperStatus_Request";
}

template<>
inline const char * name<mecharm_interfaces::srv::GripperStatus_Request>()
{
  return "mecharm_interfaces/srv/GripperStatus_Request";
}

template<>
struct has_fixed_size<mecharm_interfaces::srv::GripperStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecharm_interfaces::srv::GripperStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecharm_interfaces::srv::GripperStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mecharm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GripperStatus_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: flag
  {
    out << "flag: ";
    rosidl_generator_traits::value_to_yaml(msg.flag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag: ";
    rosidl_generator_traits::value_to_yaml(msg.flag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperStatus_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mecharm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mecharm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mecharm_interfaces::srv::GripperStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecharm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecharm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mecharm_interfaces::srv::GripperStatus_Response & msg)
{
  return mecharm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mecharm_interfaces::srv::GripperStatus_Response>()
{
  return "mecharm_interfaces::srv::GripperStatus_Response";
}

template<>
inline const char * name<mecharm_interfaces::srv::GripperStatus_Response>()
{
  return "mecharm_interfaces/srv/GripperStatus_Response";
}

template<>
struct has_fixed_size<mecharm_interfaces::srv::GripperStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecharm_interfaces::srv::GripperStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecharm_interfaces::srv::GripperStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mecharm_interfaces::srv::GripperStatus>()
{
  return "mecharm_interfaces::srv::GripperStatus";
}

template<>
inline const char * name<mecharm_interfaces::srv::GripperStatus>()
{
  return "mecharm_interfaces/srv/GripperStatus";
}

template<>
struct has_fixed_size<mecharm_interfaces::srv::GripperStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<mecharm_interfaces::srv::GripperStatus_Request>::value &&
    has_fixed_size<mecharm_interfaces::srv::GripperStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<mecharm_interfaces::srv::GripperStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<mecharm_interfaces::srv::GripperStatus_Request>::value &&
    has_bounded_size<mecharm_interfaces::srv::GripperStatus_Response>::value
  >
{
};

template<>
struct is_service<mecharm_interfaces::srv::GripperStatus>
  : std::true_type
{
};

template<>
struct is_service_request<mecharm_interfaces::srv::GripperStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mecharm_interfaces::srv::GripperStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MECHARM_INTERFACES__SRV__DETAIL__GRIPPER_STATUS__TRAITS_HPP_
