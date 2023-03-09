// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mypalletizer_interfaces:msg/MypalPumpStatus.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_PUMP_STATUS__STRUCT_HPP_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_PUMP_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mypalletizer_interfaces__msg__MypalPumpStatus __attribute__((deprecated))
#else
# define DEPRECATED__mypalletizer_interfaces__msg__MypalPumpStatus __declspec(deprecated)
#endif

namespace mypalletizer_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MypalPumpStatus_
{
  using Type = MypalPumpStatus_<ContainerAllocator>;

  explicit MypalPumpStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
      this->pin1 = 0;
      this->pin2 = 0;
    }
  }

  explicit MypalPumpStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
      this->pin1 = 0;
      this->pin2 = 0;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;
  using _pin1_type =
    int8_t;
  _pin1_type pin1;
  using _pin2_type =
    int8_t;
  _pin2_type pin2;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__pin1(
    const int8_t & _arg)
  {
    this->pin1 = _arg;
    return *this;
  }
  Type & set__pin2(
    const int8_t & _arg)
  {
    this->pin2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mypalletizer_interfaces::msg::MypalPumpStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mypalletizer_interfaces::msg::MypalPumpStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mypalletizer_interfaces::msg::MypalPumpStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mypalletizer_interfaces::msg::MypalPumpStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mypalletizer_interfaces::msg::MypalPumpStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mypalletizer_interfaces::msg::MypalPumpStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mypalletizer_interfaces::msg::MypalPumpStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mypalletizer_interfaces::msg::MypalPumpStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mypalletizer_interfaces::msg::MypalPumpStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mypalletizer_interfaces::msg::MypalPumpStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mypalletizer_interfaces__msg__MypalPumpStatus
    std::shared_ptr<mypalletizer_interfaces::msg::MypalPumpStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mypalletizer_interfaces__msg__MypalPumpStatus
    std::shared_ptr<mypalletizer_interfaces::msg::MypalPumpStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MypalPumpStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->pin1 != other.pin1) {
      return false;
    }
    if (this->pin2 != other.pin2) {
      return false;
    }
    return true;
  }
  bool operator!=(const MypalPumpStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MypalPumpStatus_

// alias to use template instance with default allocator
using MypalPumpStatus =
  mypalletizer_interfaces::msg::MypalPumpStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mypalletizer_interfaces

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_PUMP_STATUS__STRUCT_HPP_
