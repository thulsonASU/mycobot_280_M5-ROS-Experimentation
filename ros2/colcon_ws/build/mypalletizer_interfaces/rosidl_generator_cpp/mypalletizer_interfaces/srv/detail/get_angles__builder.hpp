// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mypalletizer_interfaces:srv/GetAngles.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__SRV__DETAIL__GET_ANGLES__BUILDER_HPP_
#define MYPALLETIZER_INTERFACES__SRV__DETAIL__GET_ANGLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mypalletizer_interfaces/srv/detail/get_angles__struct.hpp"
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
auto build<::mypalletizer_interfaces::srv::GetAngles_Request>()
{
  return ::mypalletizer_interfaces::srv::GetAngles_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mypalletizer_interfaces


namespace mypalletizer_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetAngles_Response_joint_4
{
public:
  explicit Init_GetAngles_Response_joint_4(::mypalletizer_interfaces::srv::GetAngles_Response & msg)
  : msg_(msg)
  {}
  ::mypalletizer_interfaces::srv::GetAngles_Response joint_4(::mypalletizer_interfaces::srv::GetAngles_Response::_joint_4_type arg)
  {
    msg_.joint_4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::GetAngles_Response msg_;
};

class Init_GetAngles_Response_joint_3
{
public:
  explicit Init_GetAngles_Response_joint_3(::mypalletizer_interfaces::srv::GetAngles_Response & msg)
  : msg_(msg)
  {}
  Init_GetAngles_Response_joint_4 joint_3(::mypalletizer_interfaces::srv::GetAngles_Response::_joint_3_type arg)
  {
    msg_.joint_3 = std::move(arg);
    return Init_GetAngles_Response_joint_4(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::GetAngles_Response msg_;
};

class Init_GetAngles_Response_joint_2
{
public:
  explicit Init_GetAngles_Response_joint_2(::mypalletizer_interfaces::srv::GetAngles_Response & msg)
  : msg_(msg)
  {}
  Init_GetAngles_Response_joint_3 joint_2(::mypalletizer_interfaces::srv::GetAngles_Response::_joint_2_type arg)
  {
    msg_.joint_2 = std::move(arg);
    return Init_GetAngles_Response_joint_3(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::GetAngles_Response msg_;
};

class Init_GetAngles_Response_joint_1
{
public:
  Init_GetAngles_Response_joint_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAngles_Response_joint_2 joint_1(::mypalletizer_interfaces::srv::GetAngles_Response::_joint_1_type arg)
  {
    msg_.joint_1 = std::move(arg);
    return Init_GetAngles_Response_joint_2(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::GetAngles_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mypalletizer_interfaces::srv::GetAngles_Response>()
{
  return mypalletizer_interfaces::srv::builder::Init_GetAngles_Response_joint_1();
}

}  // namespace mypalletizer_interfaces

#endif  // MYPALLETIZER_INTERFACES__SRV__DETAIL__GET_ANGLES__BUILDER_HPP_
