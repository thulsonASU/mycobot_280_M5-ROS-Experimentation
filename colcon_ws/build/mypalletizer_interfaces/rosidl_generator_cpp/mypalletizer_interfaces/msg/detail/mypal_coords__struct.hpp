// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mypalletizer_interfaces:msg/MypalCoords.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_COORDS__STRUCT_HPP_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_COORDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mypalletizer_interfaces__msg__MypalCoords __attribute__((deprecated))
#else
# define DEPRECATED__mypalletizer_interfaces__msg__MypalCoords __declspec(deprecated)
#endif

namespace mypalletizer_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MypalCoords_
{
  using Type = MypalCoords_<ContainerAllocator>;

  explicit MypalCoords_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->rx = 0.0f;
    }
  }

  explicit MypalCoords_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->rx = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _rx_type =
    float;
  _rx_type rx;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__rx(
    const float & _arg)
  {
    this->rx = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mypalletizer_interfaces::msg::MypalCoords_<ContainerAllocator> *;
  using ConstRawPtr =
    const mypalletizer_interfaces::msg::MypalCoords_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mypalletizer_interfaces::msg::MypalCoords_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mypalletizer_interfaces::msg::MypalCoords_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mypalletizer_interfaces::msg::MypalCoords_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mypalletizer_interfaces::msg::MypalCoords_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mypalletizer_interfaces::msg::MypalCoords_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mypalletizer_interfaces::msg::MypalCoords_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mypalletizer_interfaces::msg::MypalCoords_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mypalletizer_interfaces::msg::MypalCoords_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mypalletizer_interfaces__msg__MypalCoords
    std::shared_ptr<mypalletizer_interfaces::msg::MypalCoords_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mypalletizer_interfaces__msg__MypalCoords
    std::shared_ptr<mypalletizer_interfaces::msg::MypalCoords_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MypalCoords_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->rx != other.rx) {
      return false;
    }
    return true;
  }
  bool operator!=(const MypalCoords_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MypalCoords_

// alias to use template instance with default allocator
using MypalCoords =
  mypalletizer_interfaces::msg::MypalCoords_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mypalletizer_interfaces

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_COORDS__STRUCT_HPP_
