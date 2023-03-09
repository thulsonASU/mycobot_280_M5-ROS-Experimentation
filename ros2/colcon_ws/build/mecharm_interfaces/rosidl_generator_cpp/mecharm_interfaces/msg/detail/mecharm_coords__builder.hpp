// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecharm_interfaces:msg/MecharmCoords.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__MSG__DETAIL__MECHARM_COORDS__BUILDER_HPP_
#define MECHARM_INTERFACES__MSG__DETAIL__MECHARM_COORDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecharm_interfaces/msg/detail/mecharm_coords__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecharm_interfaces
{

namespace msg
{

namespace builder
{

class Init_MecharmCoords_rz
{
public:
  explicit Init_MecharmCoords_rz(::mecharm_interfaces::msg::MecharmCoords & msg)
  : msg_(msg)
  {}
  ::mecharm_interfaces::msg::MecharmCoords rz(::mecharm_interfaces::msg::MecharmCoords::_rz_type arg)
  {
    msg_.rz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmCoords msg_;
};

class Init_MecharmCoords_ry
{
public:
  explicit Init_MecharmCoords_ry(::mecharm_interfaces::msg::MecharmCoords & msg)
  : msg_(msg)
  {}
  Init_MecharmCoords_rz ry(::mecharm_interfaces::msg::MecharmCoords::_ry_type arg)
  {
    msg_.ry = std::move(arg);
    return Init_MecharmCoords_rz(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmCoords msg_;
};

class Init_MecharmCoords_rx
{
public:
  explicit Init_MecharmCoords_rx(::mecharm_interfaces::msg::MecharmCoords & msg)
  : msg_(msg)
  {}
  Init_MecharmCoords_ry rx(::mecharm_interfaces::msg::MecharmCoords::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return Init_MecharmCoords_ry(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmCoords msg_;
};

class Init_MecharmCoords_z
{
public:
  explicit Init_MecharmCoords_z(::mecharm_interfaces::msg::MecharmCoords & msg)
  : msg_(msg)
  {}
  Init_MecharmCoords_rx z(::mecharm_interfaces::msg::MecharmCoords::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_MecharmCoords_rx(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmCoords msg_;
};

class Init_MecharmCoords_y
{
public:
  explicit Init_MecharmCoords_y(::mecharm_interfaces::msg::MecharmCoords & msg)
  : msg_(msg)
  {}
  Init_MecharmCoords_z y(::mecharm_interfaces::msg::MecharmCoords::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MecharmCoords_z(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmCoords msg_;
};

class Init_MecharmCoords_x
{
public:
  Init_MecharmCoords_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MecharmCoords_y x(::mecharm_interfaces::msg::MecharmCoords::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MecharmCoords_y(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmCoords msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecharm_interfaces::msg::MecharmCoords>()
{
  return mecharm_interfaces::msg::builder::Init_MecharmCoords_x();
}

}  // namespace mecharm_interfaces

#endif  // MECHARM_INTERFACES__MSG__DETAIL__MECHARM_COORDS__BUILDER_HPP_
