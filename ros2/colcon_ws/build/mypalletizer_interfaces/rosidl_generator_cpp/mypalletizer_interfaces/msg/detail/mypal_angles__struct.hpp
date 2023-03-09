// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mypalletizer_interfaces:msg/MypalAngles.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_ANGLES__STRUCT_HPP_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_ANGLES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mypalletizer_interfaces__msg__MypalAngles __attribute__((deprecated))
#else
# define DEPRECATED__mypalletizer_interfaces__msg__MypalAngles __declspec(deprecated)
#endif

namespace mypalletizer_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MypalAngles_
{
  using Type = MypalAngles_<ContainerAllocator>;

  explicit MypalAngles_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_1 = 0.0f;
      this->joint_2 = 0.0f;
      this->joint_3 = 0.0f;
      this->joint_4 = 0.0f;
    }
  }

  explicit MypalAngles_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_1 = 0.0f;
      this->joint_2 = 0.0f;
      this->joint_3 = 0.0f;
      this->joint_4 = 0.0f;
    }
  }

  // field types and members
  using _joint_1_type =
    float;
  _joint_1_type joint_1;
  using _joint_2_type =
    float;
  _joint_2_type joint_2;
  using _joint_3_type =
    float;
  _joint_3_type joint_3;
  using _joint_4_type =
    float;
  _joint_4_type joint_4;

  // setters for named parameter idiom
  Type & set__joint_1(
    const float & _arg)
  {
    this->joint_1 = _arg;
    return *this;
  }
  Type & set__joint_2(
    const float & _arg)
  {
    this->joint_2 = _arg;
    return *this;
  }
  Type & set__joint_3(
    const float & _arg)
  {
    this->joint_3 = _arg;
    return *this;
  }
  Type & set__joint_4(
    const float & _arg)
  {
    this->joint_4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mypalletizer_interfaces::msg::MypalAngles_<ContainerAllocator> *;
  using ConstRawPtr =
    const mypalletizer_interfaces::msg::MypalAngles_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mypalletizer_interfaces::msg::MypalAngles_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mypalletizer_interfaces::msg::MypalAngles_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mypalletizer_interfaces::msg::MypalAngles_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mypalletizer_interfaces::msg::MypalAngles_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mypalletizer_interfaces::msg::MypalAngles_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mypalletizer_interfaces::msg::MypalAngles_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mypalletizer_interfaces::msg::MypalAngles_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mypalletizer_interfaces::msg::MypalAngles_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mypalletizer_interfaces__msg__MypalAngles
    std::shared_ptr<mypalletizer_interfaces::msg::MypalAngles_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mypalletizer_interfaces__msg__MypalAngles
    std::shared_ptr<mypalletizer_interfaces::msg::MypalAngles_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MypalAngles_ & other) const
  {
    if (this->joint_1 != other.joint_1) {
      return false;
    }
    if (this->joint_2 != other.joint_2) {
      return false;
    }
    if (this->joint_3 != other.joint_3) {
      return false;
    }
    if (this->joint_4 != other.joint_4) {
      return false;
    }
    return true;
  }
  bool operator!=(const MypalAngles_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MypalAngles_

// alias to use template instance with default allocator
using MypalAngles =
  mypalletizer_interfaces::msg::MypalAngles_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mypalletizer_interfaces

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_ANGLES__STRUCT_HPP_
