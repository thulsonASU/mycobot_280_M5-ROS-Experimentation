// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mypalletizer_interfaces:srv/SetCoords.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__SRV__DETAIL__SET_COORDS__BUILDER_HPP_
#define MYPALLETIZER_INTERFACES__SRV__DETAIL__SET_COORDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mypalletizer_interfaces/srv/detail/set_coords__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mypalletizer_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCoords_Request_model
{
public:
  explicit Init_SetCoords_Request_model(::mypalletizer_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  ::mypalletizer_interfaces::srv::SetCoords_Request model(::mypalletizer_interfaces::srv::SetCoords_Request::_model_type arg)
  {
    msg_.model = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_speed
{
public:
  explicit Init_SetCoords_Request_speed(::mypalletizer_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  Init_SetCoords_Request_model speed(::mypalletizer_interfaces::srv::SetCoords_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_SetCoords_Request_model(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_rx
{
public:
  explicit Init_SetCoords_Request_rx(::mypalletizer_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  Init_SetCoords_Request_speed rx(::mypalletizer_interfaces::srv::SetCoords_Request::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return Init_SetCoords_Request_speed(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_z
{
public:
  explicit Init_SetCoords_Request_z(::mypalletizer_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  Init_SetCoords_Request_rx z(::mypalletizer_interfaces::srv::SetCoords_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_SetCoords_Request_rx(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_y
{
public:
  explicit Init_SetCoords_Request_y(::mypalletizer_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  Init_SetCoords_Request_z y(::mypalletizer_interfaces::srv::SetCoords_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SetCoords_Request_z(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_x
{
public:
  Init_SetCoords_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCoords_Request_y x(::mypalletizer_interfaces::srv::SetCoords_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SetCoords_Request_y(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::SetCoords_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mypalletizer_interfaces::srv::SetCoords_Request>()
{
  return mypalletizer_interfaces::srv::builder::Init_SetCoords_Request_x();
}

}  // namespace mypalletizer_interfaces


namespace mypalletizer_interfaces
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
  ::mypalletizer_interfaces::srv::SetCoords_Response flag(::mypalletizer_interfaces::srv::SetCoords_Response::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::SetCoords_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mypalletizer_interfaces::srv::SetCoords_Response>()
{
  return mypalletizer_interfaces::srv::builder::Init_SetCoords_Response_flag();
}

}  // namespace mypalletizer_interfaces

#endif  // MYPALLETIZER_INTERFACES__SRV__DETAIL__SET_COORDS__BUILDER_HPP_
