// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mypalletizer_interfaces:srv/PumpStatus.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__SRV__DETAIL__PUMP_STATUS__STRUCT_HPP_
#define MYPALLETIZER_INTERFACES__SRV__DETAIL__PUMP_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mypalletizer_interfaces__srv__PumpStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__mypalletizer_interfaces__srv__PumpStatus_Request __declspec(deprecated)
#endif

namespace mypalletizer_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PumpStatus_Request_
{
  using Type = PumpStatus_Request_<ContainerAllocator>;

  explicit PumpStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
      this->pin1 = 0;
      this->pin2 = 0;
    }
  }

  explicit PumpStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mypalletizer_interfaces::srv::PumpStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mypalletizer_interfaces::srv::PumpStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mypalletizer_interfaces::srv::PumpStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mypalletizer_interfaces::srv::PumpStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mypalletizer_interfaces::srv::PumpStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mypalletizer_interfaces::srv::PumpStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mypalletizer_interfaces::srv::PumpStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mypalletizer_interfaces::srv::PumpStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mypalletizer_interfaces::srv::PumpStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mypalletizer_interfaces::srv::PumpStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mypalletizer_interfaces__srv__PumpStatus_Request
    std::shared_ptr<mypalletizer_interfaces::srv::PumpStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mypalletizer_interfaces__srv__PumpStatus_Request
    std::shared_ptr<mypalletizer_interfaces::srv::PumpStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PumpStatus_Request_ & other) const
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
  bool operator!=(const PumpStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PumpStatus_Request_

// alias to use template instance with default allocator
using PumpStatus_Request =
  mypalletizer_interfaces::srv::PumpStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mypalletizer_interfaces


#ifndef _WIN32
# define DEPRECATED__mypalletizer_interfaces__srv__PumpStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__mypalletizer_interfaces__srv__PumpStatus_Response __declspec(deprecated)
#endif

namespace mypalletizer_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PumpStatus_Response_
{
  using Type = PumpStatus_Response_<ContainerAllocator>;

  explicit PumpStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = false;
    }
  }

  explicit PumpStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = false;
    }
  }

  // field types and members
  using _flag_type =
    bool;
  _flag_type flag;

  // setters for named parameter idiom
  Type & set__flag(
    const bool & _arg)
  {
    this->flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mypalletizer_interfaces::srv::PumpStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mypalletizer_interfaces::srv::PumpStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mypalletizer_interfaces::srv::PumpStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mypalletizer_interfaces::srv::PumpStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mypalletizer_interfaces::srv::PumpStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mypalletizer_interfaces::srv::PumpStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mypalletizer_interfaces::srv::PumpStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mypalletizer_interfaces::srv::PumpStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mypalletizer_interfaces::srv::PumpStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mypalletizer_interfaces::srv::PumpStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mypalletizer_interfaces__srv__PumpStatus_Response
    std::shared_ptr<mypalletizer_interfaces::srv::PumpStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mypalletizer_interfaces__srv__PumpStatus_Response
    std::shared_ptr<mypalletizer_interfaces::srv::PumpStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PumpStatus_Response_ & other) const
  {
    if (this->flag != other.flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const PumpStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PumpStatus_Response_

// alias to use template instance with default allocator
using PumpStatus_Response =
  mypalletizer_interfaces::srv::PumpStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mypalletizer_interfaces

namespace mypalletizer_interfaces
{

namespace srv
{

struct PumpStatus
{
  using Request = mypalletizer_interfaces::srv::PumpStatus_Request;
  using Response = mypalletizer_interfaces::srv::PumpStatus_Response;
};

}  // namespace srv

}  // namespace mypalletizer_interfaces

#endif  // MYPALLETIZER_INTERFACES__SRV__DETAIL__PUMP_STATUS__STRUCT_HPP_
