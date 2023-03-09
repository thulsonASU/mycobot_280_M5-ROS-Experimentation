// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mycobot_interfaces:srv/GetCoords.idl
// generated code does not contain a copyright notice

#ifndef MYCOBOT_INTERFACES__SRV__DETAIL__GET_COORDS__BUILDER_HPP_
#define MYCOBOT_INTERFACES__SRV__DETAIL__GET_COORDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mycobot_interfaces/srv/detail/get_coords__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mycobot_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mycobot_interfaces::srv::GetCoords_Request>()
{
  return ::mycobot_interfaces::srv::GetCoords_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mycobot_interfaces


namespace mycobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetCoords_Response_rz
{
public:
  explicit Init_GetCoords_Response_rz(::mycobot_interfaces::srv::GetCoords_Response & msg)
  : msg_(msg)
  {}
  ::mycobot_interfaces::srv::GetCoords_Response rz(::mycobot_interfaces::srv::GetCoords_Response::_rz_type arg)
  {
    msg_.rz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mycobot_interfaces::srv::GetCoords_Response msg_;
};

class Init_GetCoords_Response_ry
{
public:
  explicit Init_GetCoords_Response_ry(::mycobot_interfaces::srv::GetCoords_Response & msg)
  : msg_(msg)
  {}
  Init_GetCoords_Response_rz ry(::mycobot_interfaces::srv::GetCoords_Response::_ry_type arg)
  {
    msg_.ry = std::move(arg);
    return Init_GetCoords_Response_rz(msg_);
  }

private:
  ::mycobot_interfaces::srv::GetCoords_Response msg_;
};

class Init_GetCoords_Response_rx
{
public:
  explicit Init_GetCoords_Response_rx(::mycobot_interfaces::srv::GetCoords_Response & msg)
  : msg_(msg)
  {}
  Init_GetCoords_Response_ry rx(::mycobot_interfaces::srv::GetCoords_Response::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return Init_GetCoords_Response_ry(msg_);
  }

private:
  ::mycobot_interfaces::srv::GetCoords_Response msg_;
};

class Init_GetCoords_Response_z
{
public:
  explicit Init_GetCoords_Response_z(::mycobot_interfaces::srv::GetCoords_Response & msg)
  : msg_(msg)
  {}
  Init_GetCoords_Response_rx z(::mycobot_interfaces::srv::GetCoords_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_GetCoords_Response_rx(msg_);
  }

private:
  ::mycobot_interfaces::srv::GetCoords_Response msg_;
};

class Init_GetCoords_Response_y
{
public:
  explicit Init_GetCoords_Response_y(::mycobot_interfaces::srv::GetCoords_Response & msg)
  : msg_(msg)
  {}
  Init_GetCoords_Response_z y(::mycobot_interfaces::srv::GetCoords_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_GetCoords_Response_z(msg_);
  }

private:
  ::mycobot_interfaces::srv::GetCoords_Response msg_;
};

class Init_GetCoords_Response_x
{
public:
  Init_GetCoords_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCoords_Response_y x(::mycobot_interfaces::srv::GetCoords_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GetCoords_Response_y(msg_);
  }

private:
  ::mycobot_interfaces::srv::GetCoords_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mycobot_interfaces::srv::GetCoords_Response>()
{
  return mycobot_interfaces::srv::builder::Init_GetCoords_Response_x();
}

}  // namespace mycobot_interfaces

#endif  // MYCOBOT_INTERFACES__SRV__DETAIL__GET_COORDS__BUILDER_HPP_
