// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mypalletizer_interfaces:msg/MypalCoords.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_COORDS__BUILDER_HPP_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_COORDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mypalletizer_interfaces/msg/detail/mypal_coords__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mypalletizer_interfaces
{

namespace msg
{

namespace builder
{

class Init_MypalCoords_rx
{
public:
  explicit Init_MypalCoords_rx(::mypalletizer_interfaces::msg::MypalCoords & msg)
  : msg_(msg)
  {}
  ::mypalletizer_interfaces::msg::MypalCoords rx(::mypalletizer_interfaces::msg::MypalCoords::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mypalletizer_interfaces::msg::MypalCoords msg_;
};

class Init_MypalCoords_z
{
public:
  explicit Init_MypalCoords_z(::mypalletizer_interfaces::msg::MypalCoords & msg)
  : msg_(msg)
  {}
  Init_MypalCoords_rx z(::mypalletizer_interfaces::msg::MypalCoords::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_MypalCoords_rx(msg_);
  }

private:
  ::mypalletizer_interfaces::msg::MypalCoords msg_;
};

class Init_MypalCoords_y
{
public:
  explicit Init_MypalCoords_y(::mypalletizer_interfaces::msg::MypalCoords & msg)
  : msg_(msg)
  {}
  Init_MypalCoords_z y(::mypalletizer_interfaces::msg::MypalCoords::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MypalCoords_z(msg_);
  }

private:
  ::mypalletizer_interfaces::msg::MypalCoords msg_;
};

class Init_MypalCoords_x
{
public:
  Init_MypalCoords_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MypalCoords_y x(::mypalletizer_interfaces::msg::MypalCoords::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MypalCoords_y(msg_);
  }

private:
  ::mypalletizer_interfaces::msg::MypalCoords msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mypalletizer_interfaces::msg::MypalCoords>()
{
  return mypalletizer_interfaces::msg::builder::Init_MypalCoords_x();
}

}  // namespace mypalletizer_interfaces

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_COORDS__BUILDER_HPP_
