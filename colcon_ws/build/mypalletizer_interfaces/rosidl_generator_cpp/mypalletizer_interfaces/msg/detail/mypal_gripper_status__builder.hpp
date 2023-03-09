// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mypalletizer_interfaces:msg/MypalGripperStatus.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_GRIPPER_STATUS__BUILDER_HPP_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_GRIPPER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mypalletizer_interfaces/msg/detail/mypal_gripper_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mypalletizer_interfaces
{

namespace msg
{

namespace builder
{

class Init_MypalGripperStatus_status
{
public:
  Init_MypalGripperStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mypalletizer_interfaces::msg::MypalGripperStatus status(::mypalletizer_interfaces::msg::MypalGripperStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mypalletizer_interfaces::msg::MypalGripperStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mypalletizer_interfaces::msg::MypalGripperStatus>()
{
  return mypalletizer_interfaces::msg::builder::Init_MypalGripperStatus_status();
}

}  // namespace mypalletizer_interfaces

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_GRIPPER_STATUS__BUILDER_HPP_
