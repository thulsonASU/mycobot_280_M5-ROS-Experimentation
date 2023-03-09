// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecharm_interfaces:srv/SetCoords.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__SRV__DETAIL__SET_COORDS__BUILDER_HPP_
#define MECHARM_INTERFACES__SRV__DETAIL__SET_COORDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecharm_interfaces/srv/detail/set_coords__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecharm_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCoords_Request_model
{
public:
  explicit Init_SetCoords_Request_model(::mecharm_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  ::mecharm_interfaces::srv::SetCoords_Request model(::mecharm_interfaces::srv::SetCoords_Request::_model_type arg)
  {
    msg_.model = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecharm_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_speed
{
public:
  explicit Init_SetCoords_Request_speed(::mecharm_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  Init_SetCoords_Request_model speed(::mecharm_interfaces::srv::SetCoords_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_SetCoords_Request_model(msg_);
  }

private:
  ::mecharm_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_rz
{
public:
  explicit Init_SetCoords_Request_rz(::mecharm_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  Init_SetCoords_Request_speed rz(::mecharm_interfaces::srv::SetCoords_Request::_rz_type arg)
  {
    msg_.rz = std::move(arg);
    return Init_SetCoords_Request_speed(msg_);
  }

private:
  ::mecharm_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_ry
{
public:
  explicit Init_SetCoords_Request_ry(::mecharm_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  Init_SetCoords_Request_rz ry(::mecharm_interfaces::srv::SetCoords_Request::_ry_type arg)
  {
    msg_.ry = std::move(arg);
    return Init_SetCoords_Request_rz(msg_);
  }

private:
  ::mecharm_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_rx
{
public:
  explicit Init_SetCoords_Request_rx(::mecharm_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  Init_SetCoords_Request_ry rx(::mecharm_interfaces::srv::SetCoords_Request::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return Init_SetCoords_Request_ry(msg_);
  }

private:
  ::mecharm_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_z
{
public:
  explicit Init_SetCoords_Request_z(::mecharm_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  Init_SetCoords_Request_rx z(::mecharm_interfaces::srv::SetCoords_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_SetCoords_Request_rx(msg_);
  }

private:
  ::mecharm_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_y
{
public:
  explicit Init_SetCoords_Request_y(::mecharm_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  Init_SetCoords_Request_z y(::mecharm_interfaces::srv::SetCoords_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SetCoords_Request_z(msg_);
  }

private:
  ::mecharm_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_x
{
public:
  Init_SetCoords_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCoords_Request_y x(::mecharm_interfaces::srv::SetCoords_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SetCoords_Request_y(msg_);
  }

private:
  ::mecharm_interfaces::srv::SetCoords_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecharm_interfaces::srv::SetCoords_Request>()
{
  return mecharm_interfaces::srv::builder::Init_SetCoords_Request_x();
}

}  // namespace mecharm_interfaces


namespace mecharm_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCoords_Response_flag
{
public:
  Init_SetCoords_Response_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mecharm_interfaces::srv::SetCoords_Response flag(::mecharm_interfaces::srv::SetCoords_Response::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecharm_interfaces::srv::SetCoords_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecharm_interfaces::srv::SetCoords_Response>()
{
  return mecharm_interfaces::srv::builder::Init_SetCoords_Response_flag();
}

}  // namespace mecharm_interfaces

#endif  // MECHARM_INTERFACES__SRV__DETAIL__SET_COORDS__BUILDER_HPP_
