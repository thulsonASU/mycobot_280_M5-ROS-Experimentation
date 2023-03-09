// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mecharm_interfaces:srv/SetAngles.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__SRV__DETAIL__SET_ANGLES__STRUCT_HPP_
#define MECHARM_INTERFACES__SRV__DETAIL__SET_ANGLES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mecharm_interfaces__srv__SetAngles_Request __attribute__((deprecated))
#else
# define DEPRECATED__mecharm_interfaces__srv__SetAngles_Request __declspec(deprecated)
#endif

namespace mecharm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetAngles_Request_
{
  using Type = SetAngles_Request_<ContainerAllocator>;

  explicit SetAngles_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_1 = 0.0f;
      this->joint_2 = 0.0f;
      this->joint_3 = 0.0f;
      this->joint_4 = 0.0f;
      this->joint_5 = 0.0f;
      this->joint_6 = 0.0f;
      this->speed = 0;
    }
  }

  explicit SetAngles_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_1 = 0.0f;
      this->joint_2 = 0.0f;
      this->joint_3 = 0.0f;
      this->joint_4 = 0.0f;
      this->joint_5 = 0.0f;
      this->joint_6 = 0.0f;
      this->speed = 0;
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
  using _joint_5_type =
    float;
  _joint_5_type joint_5;
  using _joint_6_type =
    float;
  _joint_6_type joint_6;
  using _speed_type =
    int8_t;
  _speed_type speed;

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
  Type & set__joint_5(
    const float & _arg)
  {
    this->joint_5 = _arg;
    return *this;
  }
  Type & set__joint_6(
    const float & _arg)
  {
    this->joint_6 = _arg;
    return *this;
  }
  Type & set__speed(
    const int8_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mecharm_interfaces::srv::SetAngles_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecharm_interfaces::srv::SetAngles_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecharm_interfaces::srv::SetAngles_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecharm_interfaces::srv::SetAngles_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecharm_interfaces::srv::SetAngles_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecharm_interfaces::srv::SetAngles_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecharm_interfaces::srv::SetAngles_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecharm_interfaces::srv::SetAngles_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecharm_interfaces::srv::SetAngles_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecharm_interfaces::srv::SetAngles_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecharm_interfaces__srv__SetAngles_Request
    std::shared_ptr<mecharm_interfaces::srv::SetAngles_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecharm_interfaces__srv__SetAngles_Request
    std::shared_ptr<mecharm_interfaces::srv::SetAngles_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAngles_Request_ & other) const
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
    if (this->joint_5 != other.joint_5) {
      return false;
    }
    if (this->joint_6 != other.joint_6) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAngles_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAngles_Request_

// alias to use template instance with default allocator
using SetAngles_Request =
  mecharm_interfaces::srv::SetAngles_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mecharm_interfaces


#ifndef _WIN32
# define DEPRECATED__mecharm_interfaces__srv__SetAngles_Response __attribute__((deprecated))
#else
# define DEPRECATED__mecharm_interfaces__srv__SetAngles_Response __declspec(deprecated)
#endif

namespace mecharm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetAngles_Response_
{
  using Type = SetAngles_Response_<ContainerAllocator>;

  explicit SetAngles_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = false;
    }
  }

  explicit SetAngles_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mecharm_interfaces::srv::SetAngles_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecharm_interfaces::srv::SetAngles_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecharm_interfaces::srv::SetAngles_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecharm_interfaces::srv::SetAngles_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecharm_interfaces::srv::SetAngles_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecharm_interfaces::srv::SetAngles_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecharm_interfaces::srv::SetAngles_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecharm_interfaces::srv::SetAngles_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecharm_interfaces::srv::SetAngles_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecharm_interfaces::srv::SetAngles_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecharm_interfaces__srv__SetAngles_Response
    std::shared_ptr<mecharm_interfaces::srv::SetAngles_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecharm_interfaces__srv__SetAngles_Response
    std::shared_ptr<mecharm_interfaces::srv::SetAngles_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAngles_Response_ & other) const
  {
    if (this->flag != other.flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAngles_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAngles_Response_

// alias to use template instance with default allocator
using SetAngles_Response =
  mecharm_interfaces::srv::SetAngles_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mecharm_interfaces

namespace mecharm_interfaces
{

namespace srv
{

struct SetAngles
{
  using Request = mecharm_interfaces::srv::SetAngles_Request;
  using Response = mecharm_interfaces::srv::SetAngles_Response;
};

}  // namespace srv

}  // namespace mecharm_interfaces

#endif  // MECHARM_INTERFACES__SRV__DETAIL__SET_ANGLES__STRUCT_HPP_
