// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mypalletizer_interfaces:msg/MypalAngles.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_ANGLES__BUILDER_HPP_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_ANGLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mypalletizer_interfaces/msg/detail/mypal_angles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mypalletizer_interfaces
{

namespace msg
{

namespace builder
{

class Init_MypalAngles_joint_4
{
public:
  explicit Init_MypalAngles_joint_4(::mypalletizer_interfaces::msg::MypalAngles & msg)
  : msg_(msg)
  {}
  ::mypalletizer_interfaces::msg::MypalAngles joint_4(::mypalletizer_interfaces::msg::MypalAngles::_joint_4_type arg)
  {
    msg_.joint_4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mypalletizer_interfaces::msg::MypalAngles msg_;
};

class Init_MypalAngles_joint_3
{
public:
  explicit Init_MypalAngles_joint_3(::mypalletizer_interfaces::msg::MypalAngles & msg)
  : msg_(msg)
  {}
  Init_MypalAngles_joint_4 joint_3(::mypalletizer_interfaces::msg::MypalAngles::_joint_3_type arg)
  {
    msg_.joint_3 = std::move(arg);
    return Init_MypalAngles_joint_4(msg_);
  }

private:
  ::mypalletizer_interfaces::msg::MypalAngles msg_;
};

class Init_MypalAngles_joint_2
{
public:
  explicit Init_MypalAngles_joint_2(::mypalletizer_interfaces::msg::MypalAngles & msg)
  : msg_(msg)
  {}
  Init_MypalAngles_joint_3 joint_2(::mypalletizer_interfaces::msg::MypalAngles::_joint_2_type arg)
  {
    msg_.joint_2 = std::move(arg);
    return Init_MypalAngles_joint_3(msg_);
  }

private:
  ::mypalletizer_interfaces::msg::MypalAngles msg_;
};

class Init_MypalAngles_joint_1
{
public:
  Init_MypalAngles_joint_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MypalAngles_joint_2 joint_1(::mypalletizer_interfaces::msg::MypalAngles::_joint_1_type arg)
  {
    msg_.joint_1 = std::move(arg);
    return Init_MypalAngles_joint_2(msg_);
  }

private:
  ::mypalletizer_interfaces::msg::MypalAngles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mypalletizer_interfaces::msg::MypalAngles>()
{
  return mypalletizer_interfaces::msg::builder::Init_MypalAngles_joint_1();
}

}  // namespace mypalletizer_interfaces

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_ANGLES__BUILDER_HPP_
