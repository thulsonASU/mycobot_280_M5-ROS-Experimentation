// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mypalletizer_interfaces:srv/PumpStatus.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__SRV__DETAIL__PUMP_STATUS__TRAITS_HPP_
#define MYPALLETIZER_INTERFACES__SRV__DETAIL__PUMP_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mypalletizer_interfaces/srv/detail/pump_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mypalletizer_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PumpStatus_Request & msg,
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
  const PumpStatus_Request & msg,
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

inline std::string to_yaml(const PumpStatus_Request & msg, bool use_flow_style = false)
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

}  // namespace mypalletizer_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mypalletizer_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mypalletizer_interfaces::srv::PumpStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mypalletizer_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mypalletizer_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mypalletizer_interfaces::srv::PumpStatus_Request & msg)
{
  return mypalletizer_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mypalletizer_interfaces::srv::PumpStatus_Request>()
{
  return "mypalletizer_interfaces::srv::PumpStatus_Request";
}

template<>
inline const char * name<mypalletizer_interfaces::srv::PumpStatus_Request>()
{
  return "mypalletizer_interfaces/srv/PumpStatus_Request";
}

template<>
struct has_fixed_size<mypalletizer_interfaces::srv::PumpStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mypalletizer_interfaces::srv::PumpStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mypalletizer_interfaces::srv::PumpStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mypalletizer_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PumpStatus_Response & msg,
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
  const PumpStatus_Response & msg,
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

inline std::string to_yaml(const PumpStatus_Response & msg, bool use_flow_style = false)
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

}  // namespace mypalletizer_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mypalletizer_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mypalletizer_interfaces::srv::PumpStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mypalletizer_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mypalletizer_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mypalletizer_interfaces::srv::PumpStatus_Response & msg)
{
  return mypalletizer_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mypalletizer_interfaces::srv::PumpStatus_Response>()
{
  return "mypalletizer_interfaces::srv::PumpStatus_Response";
}

template<>
inline const char * name<mypalletizer_interfaces::srv::PumpStatus_Response>()
{
  return "mypalletizer_interfaces/srv/PumpStatus_Response";
}

template<>
struct has_fixed_size<mypalletizer_interfaces::srv::PumpStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mypalletizer_interfaces::srv::PumpStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mypalletizer_interfaces::srv::PumpStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mypalletizer_interfaces::srv::PumpStatus>()
{
  return "mypalletizer_interfaces::srv::PumpStatus";
}

template<>
inline const char * name<mypalletizer_interfaces::srv::PumpStatus>()
{
  return "mypalletizer_interfaces/srv/PumpStatus";
}

template<>
struct has_fixed_size<mypalletizer_interfaces::srv::PumpStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<mypalletizer_interfaces::srv::PumpStatus_Request>::value &&
    has_fixed_size<mypalletizer_interfaces::srv::PumpStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<mypalletizer_interfaces::srv::PumpStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<mypalletizer_interfaces::srv::PumpStatus_Request>::value &&
    has_bounded_size<mypalletizer_interfaces::srv::PumpStatus_Response>::value
  >
{
};

template<>
struct is_service<mypalletizer_interfaces::srv::PumpStatus>
  : std::true_type
{
};

template<>
struct is_service_request<mypalletizer_interfaces::srv::PumpStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mypalletizer_interfaces::srv::PumpStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MYPALLETIZER_INTERFACES__SRV__DETAIL__PUMP_STATUS__TRAITS_HPP_
