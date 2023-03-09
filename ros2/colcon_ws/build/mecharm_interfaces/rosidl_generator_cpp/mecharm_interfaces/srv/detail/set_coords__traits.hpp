// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mecharm_interfaces:srv/SetCoords.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__SRV__DETAIL__SET_COORDS__TRAITS_HPP_
#define MECHARM_INTERFACES__SRV__DETAIL__SET_COORDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mecharm_interfaces/srv/detail/set_coords__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mecharm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCoords_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: rx
  {
    out << "rx: ";
    rosidl_generator_traits::value_to_yaml(msg.rx, out);
    out << ", ";
  }

  // member: ry
  {
    out << "ry: ";
    rosidl_generator_traits::value_to_yaml(msg.ry, out);
    out << ", ";
  }

  // member: rz
  {
    out << "rz: ";
    rosidl_generator_traits::value_to_yaml(msg.rz, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: model
  {
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCoords_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx: ";
    rosidl_generator_traits::value_to_yaml(msg.rx, out);
    out << "\n";
  }

  // member: ry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ry: ";
    rosidl_generator_traits::value_to_yaml(msg.ry, out);
    out << "\n";
  }

  // member: rz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rz: ";
    rosidl_generator_traits::value_to_yaml(msg.rz, out);
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

  // member: model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCoords_Request & msg, bool use_flow_style = false)
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
  const mecharm_interfaces::srv::SetCoords_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecharm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecharm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mecharm_interfaces::srv::SetCoords_Request & msg)
{
  return mecharm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mecharm_interfaces::srv::SetCoords_Request>()
{
  return "mecharm_interfaces::srv::SetCoords_Request";
}

template<>
inline const char * name<mecharm_interfaces::srv::SetCoords_Request>()
{
  return "mecharm_interfaces/srv/SetCoords_Request";
}

template<>
struct has_fixed_size<mecharm_interfaces::srv::SetCoords_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecharm_interfaces::srv::SetCoords_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecharm_interfaces::srv::SetCoords_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mecharm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCoords_Response & msg,
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
  const SetCoords_Response & msg,
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

inline std::string to_yaml(const SetCoords_Response & msg, bool use_flow_style = false)
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
  const mecharm_interfaces::srv::SetCoords_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecharm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecharm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mecharm_interfaces::srv::SetCoords_Response & msg)
{
  return mecharm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mecharm_interfaces::srv::SetCoords_Response>()
{
  return "mecharm_interfaces::srv::SetCoords_Response";
}

template<>
inline const char * name<mecharm_interfaces::srv::SetCoords_Response>()
{
  return "mecharm_interfaces/srv/SetCoords_Response";
}

template<>
struct has_fixed_size<mecharm_interfaces::srv::SetCoords_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecharm_interfaces::srv::SetCoords_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecharm_interfaces::srv::SetCoords_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mecharm_interfaces::srv::SetCoords>()
{
  return "mecharm_interfaces::srv::SetCoords";
}

template<>
inline const char * name<mecharm_interfaces::srv::SetCoords>()
{
  return "mecharm_interfaces/srv/SetCoords";
}

template<>
struct has_fixed_size<mecharm_interfaces::srv::SetCoords>
  : std::integral_constant<
    bool,
    has_fixed_size<mecharm_interfaces::srv::SetCoords_Request>::value &&
    has_fixed_size<mecharm_interfaces::srv::SetCoords_Response>::value
  >
{
};

template<>
struct has_bounded_size<mecharm_interfaces::srv::SetCoords>
  : std::integral_constant<
    bool,
    has_bounded_size<mecharm_interfaces::srv::SetCoords_Request>::value &&
    has_bounded_size<mecharm_interfaces::srv::SetCoords_Response>::value
  >
{
};

template<>
struct is_service<mecharm_interfaces::srv::SetCoords>
  : std::true_type
{
};

template<>
struct is_service_request<mecharm_interfaces::srv::SetCoords_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mecharm_interfaces::srv::SetCoords_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MECHARM_INTERFACES__SRV__DETAIL__SET_COORDS__TRAITS_HPP_
