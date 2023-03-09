// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mypalletizer_interfaces:msg/MypalPumpStatus.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_PUMP_STATUS__BUILDER_HPP_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_PUMP_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mypalletizer_interfaces/msg/detail/mypal_pump_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mypalletizer_interfaces
{

namespace msg
{

namespace builder
{

class Init_MypalPumpStatus_pin2
{
public:
  explicit Init_MypalPumpStatus_pin2(::mypalletizer_interfaces::msg::MypalPumpStatus & msg)
  : msg_(msg)
  {}
  ::mypalletizer_interfaces::msg::MypalPumpStatus pin2(::mypalletizer_interfaces::msg::MypalPumpStatus::_pin2_type arg)
  {
    msg_.pin2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mypalletizer_interfaces::msg::MypalPumpStatus msg_;
};

class Init_MypalPumpStatus_pin1
{
public:
  explicit Init_MypalPumpStatus_pin1(::mypalletizer_interfaces::msg::MypalPumpStatus & msg)
  : msg_(msg)
  {}
  Init_MypalPumpStatus_pin2 pin1(::mypalletizer_interfaces::msg::MypalPumpStatus::_pin1_type arg)
  {
    msg_.pin1 = std::move(arg);
    return Init_MypalPumpStatus_pin2(msg_);
  }

private:
  ::mypalletizer_interfaces::msg::MypalPumpStatus msg_;
};

class Init_MypalPumpStatus_status
{
public:
  Init_MypalPumpStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MypalPumpStatus_pin1 status(::mypalletizer_interfaces::msg::MypalPumpStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MypalPumpStatus_pin1(msg_);
  }

private:
  ::mypalletizer_interfaces::msg::MypalPumpStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mypalletizer_interfaces::msg::MypalPumpStatus>()
{
  return mypalletizer_interfaces::msg::builder::Init_MypalPumpStatus_status();
}

}  // namespace mypalletizer_interfaces

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_PUMP_STATUS__BUILDER_HPP_
