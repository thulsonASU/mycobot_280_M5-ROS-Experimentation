// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mypalletizer_interfaces:msg/MypalSetCoords.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_SET_COORDS__BUILDER_HPP_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_SET_COORDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mypalletizer_interfaces/msg/detail/mypal_set_coords__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mypalletizer_interfaces
{

namespace msg
{

namespace builder
{

class Init_MypalSetCoords_model
{
public:
  explicit Init_MypalSetCoords_model(::mypalletizer_interfaces::msg::MypalSetCoords & msg)
  : msg_(msg)
  {}
  ::mypalletizer_interfaces::msg::MypalSetCoords model(::mypalletizer_interfaces::msg::MypalSetCoords::_model_type arg)
  {
    msg_.model = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mypalletizer_interfaces::msg::MypalSetCoords msg_;
};

class Init_MypalSetCoords_speed
{
public:
  explicit Init_MypalSetCoords_speed(::mypalletizer_interfaces::msg::MypalSetCoords & msg)
  : msg_(msg)
  {}
  Init_MypalSetCoords_model speed(::mypalletizer_interfaces::msg::MypalSetCoords::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MypalSetCoords_model(msg_);
  }

private:
  ::mypalletizer_interfaces::msg::MypalSetCoords msg_;
};

class Init_MypalSetCoords_rx
{
public:
  explicit Init_MypalSetCoords_rx(::mypalletizer_interfaces::msg::MypalSetCoords & msg)
  : msg_(msg)
  {}
  Init_MypalSetCoords_speed rx(::mypalletizer_interfaces::msg::MypalSetCoords::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return Init_MypalSetCoords_speed(msg_);
  }

private:
  ::mypalletizer_interfaces::msg::MypalSetCoords msg_;
};

class Init_MypalSetCoords_z
{
public:
  explicit Init_MypalSetCoords_z(::mypalletizer_interfaces::msg::MypalSetCoords & msg)
  : msg_(msg)
  {}
  Init_MypalSetCoords_rx z(::mypalletizer_interfaces::msg::MypalSetCoords::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_MypalSetCoords_rx(msg_);
  }

private:
  ::mypalletizer_interfaces::msg::MypalSetCoords msg_;
};

class Init_MypalSetCoords_y
{
public:
  explicit Init_MypalSetCoords_y(::mypalletizer_interfaces::msg::MypalSetCoords & msg)
  : msg_(msg)
  {}
  Init_MypalSetCoords_z y(::mypalletizer_interfaces::msg::MypalSetCoords::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MypalSetCoords_z(msg_);
  }

private:
  ::mypalletizer_interfaces::msg::MypalSetCoords msg_;
};

class Init_MypalSetCoords_x
{
public:
  Init_MypalSetCoords_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MypalSetCoords_y x(::mypalletizer_interfaces::msg::MypalSetCoords::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MypalSetCoords_y(msg_);
  }

private:
  ::mypalletizer_interfaces::msg::MypalSetCoords msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mypalletizer_interfaces::msg::MypalSetCoords>()
{
  return mypalletizer_interfaces::msg::builder::Init_MypalSetCoords_x();
}

}  // namespace mypalletizer_interfaces

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_SET_COORDS__BUILDER_HPP_
