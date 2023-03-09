// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecharm_interfaces:msg/MecharmPumpStatus.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__MSG__DETAIL__MECHARM_PUMP_STATUS__BUILDER_HPP_
#define MECHARM_INTERFACES__MSG__DETAIL__MECHARM_PUMP_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecharm_interfaces/msg/detail/mecharm_pump_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecharm_interfaces
{

namespace msg
{

namespace builder
{

class Init_MecharmPumpStatus_pin2
{
public:
  explicit Init_MecharmPumpStatus_pin2(::mecharm_interfaces::msg::MecharmPumpStatus & msg)
  : msg_(msg)
  {}
  ::mecharm_interfaces::msg::MecharmPumpStatus pin2(::mecharm_interfaces::msg::MecharmPumpStatus::_pin2_type arg)
  {
    msg_.pin2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmPumpStatus msg_;
};

class Init_MecharmPumpStatus_pin1
{
public:
  explicit Init_MecharmPumpStatus_pin1(::mecharm_interfaces::msg::MecharmPumpStatus & msg)
  : msg_(msg)
  {}
  Init_MecharmPumpStatus_pin2 pin1(::mecharm_interfaces::msg::MecharmPumpStatus::_pin1_type arg)
  {
    msg_.pin1 = std::move(arg);
    return Init_MecharmPumpStatus_pin2(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmPumpStatus msg_;
};

class Init_MecharmPumpStatus_status
{
public:
  Init_MecharmPumpStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MecharmPumpStatus_pin1 status(::mecharm_interfaces::msg::MecharmPumpStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MecharmPumpStatus_pin1(msg_);
  }

private:
  ::mecharm_interfaces::msg::MecharmPumpStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecharm_interfaces::msg::MecharmPumpStatus>()
{
  return mecharm_interfaces::msg::builder::Init_MecharmPumpStatus_status();
}

}  // namespace mecharm_interfaces

#endif  // MECHARM_INTERFACES__MSG__DETAIL__MECHARM_PUMP_STATUS__BUILDER_HPP_
