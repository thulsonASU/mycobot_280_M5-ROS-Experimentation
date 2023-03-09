// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mecharm_interfaces:msg/MecharmPumpStatus.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__MSG__DETAIL__MECHARM_PUMP_STATUS__STRUCT_HPP_
#define MECHARM_INTERFACES__MSG__DETAIL__MECHARM_PUMP_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mecharm_interfaces__msg__MecharmPumpStatus __attribute__((deprecated))
#else
# define DEPRECATED__mecharm_interfaces__msg__MecharmPumpStatus __declspec(deprecated)
#endif

namespace mecharm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MecharmPumpStatus_
{
  using Type = MecharmPumpStatus_<ContainerAllocator>;

  explicit MecharmPumpStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
      this->pin1 = 0;
      this->pin2 = 0;
    }
  }

  explicit MecharmPumpStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mecharm_interfaces::msg::MecharmPumpStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecharm_interfaces::msg::MecharmPumpStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecharm_interfaces::msg::MecharmPumpStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecharm_interfaces::msg::MecharmPumpStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecharm_interfaces::msg::MecharmPumpStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecharm_interfaces::msg::MecharmPumpStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecharm_interfaces::msg::MecharmPumpStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecharm_interfaces::msg::MecharmPumpStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecharm_interfaces::msg::MecharmPumpStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecharm_interfaces::msg::MecharmPumpStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecharm_interfaces__msg__MecharmPumpStatus
    std::shared_ptr<mecharm_interfaces::msg::MecharmPumpStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecharm_interfaces__msg__MecharmPumpStatus
    std::shared_ptr<mecharm_interfaces::msg::MecharmPumpStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MecharmPumpStatus_ & other) const
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
  bool operator!=(const MecharmPumpStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MecharmPumpStatus_

// alias to use template instance with default allocator
using MecharmPumpStatus =
  mecharm_interfaces::msg::MecharmPumpStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mecharm_interfaces

#endif  // MECHARM_INTERFACES__MSG__DETAIL__MECHARM_PUMP_STATUS__STRUCT_HPP_
