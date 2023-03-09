// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mecharm_interfaces:srv/GripperStatus.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__SRV__DETAIL__GRIPPER_STATUS__STRUCT_HPP_
#define MECHARM_INTERFACES__SRV__DETAIL__GRIPPER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mecharm_interfaces__srv__GripperStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__mecharm_interfaces__srv__GripperStatus_Request __declspec(deprecated)
#endif

namespace mecharm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GripperStatus_Request_
{
  using Type = GripperStatus_Request_<ContainerAllocator>;

  explicit GripperStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit GripperStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mecharm_interfaces::srv::GripperStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecharm_interfaces::srv::GripperStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecharm_interfaces::srv::GripperStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecharm_interfaces::srv::GripperStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecharm_interfaces::srv::GripperStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecharm_interfaces::srv::GripperStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecharm_interfaces::srv::GripperStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecharm_interfaces::srv::GripperStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecharm_interfaces::srv::GripperStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecharm_interfaces::srv::GripperStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecharm_interfaces__srv__GripperStatus_Request
    std::shared_ptr<mecharm_interfaces::srv::GripperStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecharm_interfaces__srv__GripperStatus_Request
    std::shared_ptr<mecharm_interfaces::srv::GripperStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperStatus_Request_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperStatus_Request_

// alias to use template instance with default allocator
using GripperStatus_Request =
  mecharm_interfaces::srv::GripperStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mecharm_interfaces


#ifndef _WIN32
# define DEPRECATED__mecharm_interfaces__srv__GripperStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__mecharm_interfaces__srv__GripperStatus_Response __declspec(deprecated)
#endif

namespace mecharm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GripperStatus_Response_
{
  using Type = GripperStatus_Response_<ContainerAllocator>;

  explicit GripperStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = false;
    }
  }

  explicit GripperStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mecharm_interfaces::srv::GripperStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecharm_interfaces::srv::GripperStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecharm_interfaces::srv::GripperStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecharm_interfaces::srv::GripperStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecharm_interfaces::srv::GripperStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecharm_interfaces::srv::GripperStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecharm_interfaces::srv::GripperStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecharm_interfaces::srv::GripperStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecharm_interfaces::srv::GripperStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecharm_interfaces::srv::GripperStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecharm_interfaces__srv__GripperStatus_Response
    std::shared_ptr<mecharm_interfaces::srv::GripperStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecharm_interfaces__srv__GripperStatus_Response
    std::shared_ptr<mecharm_interfaces::srv::GripperStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperStatus_Response_ & other) const
  {
    if (this->flag != other.flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperStatus_Response_

// alias to use template instance with default allocator
using GripperStatus_Response =
  mecharm_interfaces::srv::GripperStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mecharm_interfaces

namespace mecharm_interfaces
{

namespace srv
{

struct GripperStatus
{
  using Request = mecharm_interfaces::srv::GripperStatus_Request;
  using Response = mecharm_interfaces::srv::GripperStatus_Response;
};

}  // namespace srv

}  // namespace mecharm_interfaces

#endif  // MECHARM_INTERFACES__SRV__DETAIL__GRIPPER_STATUS__STRUCT_HPP_
