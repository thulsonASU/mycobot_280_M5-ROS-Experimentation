// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mypalletizer_interfaces:srv/GetCoords.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__SRV__DETAIL__GET_COORDS__BUILDER_HPP_
#define MYPALLETIZER_INTERFACES__SRV__DETAIL__GET_COORDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mypalletizer_interfaces/srv/detail/get_coords__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mypalletizer_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mypalletizer_interfaces::srv::GetCoords_Request>()
{
  return ::mypalletizer_interfaces::srv::GetCoords_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mypalletizer_interfaces


namespace mypalletizer_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetCoords_Response_rx
{
public:
  explicit Init_GetCoords_Response_rx(::mypalletizer_interfaces::srv::GetCoords_Response & msg)
  : msg_(msg)
  {}
  ::mypalletizer_interfaces::srv::GetCoords_Response rx(::mypalletizer_interfaces::srv::GetCoords_Response::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::GetCoords_Response msg_;
};

class Init_GetCoords_Response_z
{
public:
  explicit Init_GetCoords_Response_z(::mypalletizer_interfaces::srv::GetCoords_Response & msg)
  : msg_(msg)
  {}
  Init_GetCoords_Response_rx z(::mypalletizer_interfaces::srv::GetCoords_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_GetCoords_Response_rx(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::GetCoords_Response msg_;
};

class Init_GetCoords_Response_y
{
public:
  explicit Init_GetCoords_Response_y(::mypalletizer_interfaces::srv::GetCoords_Response & msg)
  : msg_(msg)
  {}
  Init_GetCoords_Response_z y(::mypalletizer_interfaces::srv::GetCoords_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_GetCoords_Response_z(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::GetCoords_Response msg_;
};

class Init_GetCoords_Response_x
{
public:
  Init_GetCoords_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCoords_Response_y x(::mypalletizer_interfaces::srv::GetCoords_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GetCoords_Response_y(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::GetCoords_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mypalletizer_interfaces::srv::GetCoords_Response>()
{
  return mypalletizer_interfaces::srv::builder::Init_GetCoords_Response_x();
}

}  // namespace mypalletizer_interfaces

#endif  // MYPALLETIZER_INTERFACES__SRV__DETAIL__GET_COORDS__BUILDER_HPP_
