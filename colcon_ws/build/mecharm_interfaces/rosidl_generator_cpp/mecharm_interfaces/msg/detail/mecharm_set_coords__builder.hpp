// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecharm_interfaces:msg/MecharmSetCoords.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__MSG__DETAIL__MECHARM_SET_COORDS__BUILDER_HPP_
#define MECHARM_INTERFACES__MSG__DETAIL__MECHARM_SET_COORDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecharm_interfaces/msg/detail/mecharm_set_coords__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecharm_interfaces
{

namespace msg
{

namespace builder
{

class Init_MecharmSetCoords_model
{
public:
  explicit Init_MecharmSetCoords_model(::mecharm_interfaces::msg::MecharmSetCoords & msg)
  : msg_(msg)
  {}
  ::mecharm_interfaces::msg::MecharmSetCoords model(::mecharm_interfaces::msg::MecharmSetCoords::_model_type arg)
  {
    msg_.model = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmSetCoords msg_;
};

class Init_MecharmSetCoords_speed
{
public:
  explicit Init_MecharmSetCoords_speed(::mecharm_interfaces::msg::MecharmSetCoords & msg)
  : msg_(msg)
  {}
  Init_MecharmSetCoords_model speed(::mecharm_interfaces::msg::MecharmSetCoords::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MecharmSetCoords_model(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmSetCoords msg_;
};

class Init_MecharmSetCoords_rz
{
public:
  explicit Init_MecharmSetCoords_rz(::mecharm_interfaces::msg::MecharmSetCoords & msg)
  : msg_(msg)
  {}
  Init_MecharmSetCoords_speed rz(::mecharm_interfaces::msg::MecharmSetCoords::_rz_type arg)
  {
    msg_.rz = std::move(arg);
    return Init_MecharmSetCoords_speed(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmSetCoords msg_;
};

class Init_MecharmSetCoords_ry
{
public:
  explicit Init_MecharmSetCoords_ry(::mecharm_interfaces::msg::MecharmSetCoords & msg)
  : msg_(msg)
  {}
  Init_MecharmSetCoords_rz ry(::mecharm_interfaces::msg::MecharmSetCoords::_ry_type arg)
  {
    msg_.ry = std::move(arg);
    return Init_MecharmSetCoords_rz(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmSetCoords msg_;
};

class Init_MecharmSetCoords_rx
{
public:
  explicit Init_MecharmSetCoords_rx(::mecharm_interfaces::msg::MecharmSetCoords & msg)
  : msg_(msg)
  {}
  Init_MecharmSetCoords_ry rx(::mecharm_interfaces::msg::MecharmSetCoords::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return Init_MecharmSetCoords_ry(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmSetCoords msg_;
};

class Init_MecharmSetCoords_z
{
public:
  explicit Init_MecharmSetCoords_z(::mecharm_interfaces::msg::MecharmSetCoords & msg)
  : msg_(msg)
  {}
  Init_MecharmSetCoords_rx z(::mecharm_interfaces::msg::MecharmSetCoords::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_MecharmSetCoords_rx(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmSetCoords msg_;
};

class Init_MecharmSetCoords_y
{
public:
  explicit Init_MecharmSetCoords_y(::mecharm_interfaces::msg::MecharmSetCoords & msg)
  : msg_(msg)
  {}
  Init_MecharmSetCoords_z y(::mecharm_interfaces::msg::MecharmSetCoords::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MecharmSetCoords_z(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmSetCoords msg_;
};

class Init_MecharmSetCoords_x
{
public:
  Init_MecharmSetCoords_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MecharmSetCoords_y x(::mecharm_interfaces::msg::MecharmSetCoords::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MecharmSetCoords_y(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmSetCoords msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecharm_interfaces::msg::MecharmSetCoords>()
{
  return mecharm_interfaces::msg::builder::Init_MecharmSetCoords_x();
}

}  // namespace mecharm_interfaces

#endif  // MECHARM_INTERFACES__MSG__DETAIL__MECHARM_SET_COORDS__BUILDER_HPP_
