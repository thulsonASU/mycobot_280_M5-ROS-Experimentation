// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mypalletizer_interfaces:msg/MypalGripperStatus.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_GRIPPER_STATUS__STRUCT_HPP_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_GRIPPER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mypalletizer_interfaces__msg__MypalGripperStatus __attribute__((deprecated))
#else
# define DEPRECATED__mypalletizer_interfaces__msg__MypalGripperStatus __declspec(deprecated)
#endif

namespace mypalletizer_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MypalGripperStatus_
{
  using Type = MypalGripperStatus_<ContainerAllocator>;

  explicit MypalGripperStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit MypalGripperStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mypalletizer_interfaces::msg::MypalGripperStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mypalletizer_interfaces::msg::MypalGripperStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mypalletizer_interfaces::msg::MypalGripperStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mypalletizer_interfaces::msg::MypalGripperStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mypalletizer_interfaces::msg::MypalGripperStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mypalletizer_interfaces::msg::MypalGripperStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mypalletizer_interfaces::msg::MypalGripperStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mypalletizer_interfaces::msg::MypalGripperStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mypalletizer_interfaces::msg::MypalGripperStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mypalletizer_interfaces::msg::MypalGripperStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mypalletizer_interfaces__msg__MypalGripperStatus
    std::shared_ptr<mypalletizer_interfaces::msg::MypalGripperStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mypalletizer_interfaces__msg__MypalGripperStatus
    std::shared_ptr<mypalletizer_interfaces::msg::MypalGripperStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MypalGripperStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const MypalGripperStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MypalGripperStatus_

// alias to use template instance with default allocator
using MypalGripperStatus =
  mypalletizer_interfaces::msg::MypalGripperStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mypalletizer_interfaces

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_GRIPPER_STATUS__STRUCT_HPP_
