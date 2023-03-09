// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecharm_interfaces:msg/MecharmSetAngles.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__MSG__DETAIL__MECHARM_SET_ANGLES__BUILDER_HPP_
#define MECHARM_INTERFACES__MSG__DETAIL__MECHARM_SET_ANGLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecharm_interfaces/msg/detail/mecharm_set_angles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecharm_interfaces
{

namespace msg
{

namespace builder
{

class Init_MecharmSetAngles_speed
{
public:
  explicit Init_MecharmSetAngles_speed(::mecharm_interfaces::msg::MecharmSetAngles & msg)
  : msg_(msg)
  {}
  ::mecharm_interfaces::msg::MecharmSetAngles speed(::mecharm_interfaces::msg::MecharmSetAngles::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmSetAngles msg_;
};

class Init_MecharmSetAngles_joint_6
{
public:
  explicit Init_MecharmSetAngles_joint_6(::mecharm_interfaces::msg::MecharmSetAngles & msg)
  : msg_(msg)
  {}
  Init_MecharmSetAngles_speed joint_6(::mecharm_interfaces::msg::MecharmSetAngles::_joint_6_type arg)
  {
    msg_.joint_6 = std::move(arg);
    return Init_MecharmSetAngles_speed(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmSetAngles msg_;
};

class Init_MecharmSetAngles_joint_5
{
public:
  explicit Init_MecharmSetAngles_joint_5(::mecharm_interfaces::msg::MecharmSetAngles & msg)
  : msg_(msg)
  {}
  Init_MecharmSetAngles_joint_6 joint_5(::mecharm_interfaces::msg::MecharmSetAngles::_joint_5_type arg)
  {
    msg_.joint_5 = std::move(arg);
    return Init_MecharmSetAngles_joint_6(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmSetAngles msg_;
};

class Init_MecharmSetAngles_joint_4
{
public:
  explicit Init_MecharmSetAngles_joint_4(::mecharm_interfaces::msg::MecharmSetAngles & msg)
  : msg_(msg)
  {}
  Init_MecharmSetAngles_joint_5 joint_4(::mecharm_interfaces::msg::MecharmSetAngles::_joint_4_type arg)
  {
    msg_.joint_4 = std::move(arg);
    return Init_MecharmSetAngles_joint_5(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmSetAngles msg_;
};

class Init_MecharmSetAngles_joint_3
{
public:
  explicit Init_MecharmSetAngles_joint_3(::mecharm_interfaces::msg::MecharmSetAngles & msg)
  : msg_(msg)
  {}
  Init_MecharmSetAngles_joint_4 joint_3(::mecharm_interfaces::msg::MecharmSetAngles::_joint_3_type arg)
  {
    msg_.joint_3 = std::move(arg);
    return Init_MecharmSetAngles_joint_4(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmSetAngles msg_;
};

class Init_MecharmSetAngles_joint_2
{
public:
  explicit Init_MecharmSetAngles_joint_2(::mecharm_interfaces::msg::MecharmSetAngles & msg)
  : msg_(msg)
  {}
  Init_MecharmSetAngles_joint_3 joint_2(::mecharm_interfaces::msg::MecharmSetAngles::_joint_2_type arg)
  {
    msg_.joint_2 = std::move(arg);
    return Init_MecharmSetAngles_joint_3(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmSetAngles msg_;
};

class Init_MecharmSetAngles_joint_1
{
public:
  Init_MecharmSetAngles_joint_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MecharmSetAngles_joint_2 joint_1(::mecharm_interfaces::msg::MecharmSetAngles::_joint_1_type arg)
  {
    msg_.joint_1 = std::move(arg);
    return Init_MecharmSetAngles_joint_2(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmSetAngles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecharm_interfaces::msg::MecharmSetAngles>()
{
  return mecharm_interfaces::msg::builder::Init_MecharmSetAngles_joint_1();
}

}  // namespace mecharm_interfaces

#endif  // MECHARM_INTERFACES__MSG__DETAIL__MECHARM_SET_ANGLES__BUILDER_HPP_
