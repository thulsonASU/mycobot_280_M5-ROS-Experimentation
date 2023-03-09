// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mypalletizer_interfaces:msg/MypalSetAngles.idl
// generated code does not contain a copyright notice
#include "mypalletizer_interfaces/msg/detail/mypal_set_angles__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mypalletizer_interfaces/msg/detail/mypal_set_angles__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mypalletizer_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mypalletizer_interfaces
cdr_serialize(
  const mypalletizer_interfaces::msg::MypalSetAngles & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joint_1
  cdr << ros_message.joint_1;
  // Member: joint_2
  cdr << ros_message.joint_2;
  // Member: joint_3
  cdr << ros_message.joint_3;
  // Member: joint_4
  cdr << ros_message.joint_4;
  // Member: speed
  cdr << ros_message.speed;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mypalletizer_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mypalletizer_interfaces::msg::MypalSetAngles & ros_message)
{
  // Member: joint_1
  cdr >> ros_message.joint_1;

  // Member: joint_2
  cdr >> ros_message.joint_2;

  // Member: joint_3
  cdr >> ros_message.joint_3;

  // Member: joint_4
  cdr >> ros_message.joint_4;

  // Member: speed
  cdr >> ros_message.speed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mypalletizer_interfaces
get_serialized_size(
  const mypalletizer_interfaces::msg::MypalSetAngles & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joint_1
  {
    size_t item_size = sizeof(ros_message.joint_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_2
  {
    size_t item_size = sizeof(ros_message.joint_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_3
  {
    size_t item_size = sizeof(ros_message.joint_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_4
  {
    size_t item_size = sizeof(ros_message.joint_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mypalletizer_interfaces
max_serialized_size_MypalSetAngles(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: joint_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: joint_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: joint_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: joint_4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _MypalSetAngles__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mypalletizer_interfaces::msg::MypalSetAngles *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MypalSetAngles__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mypalletizer_interfaces::msg::MypalSetAngles *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MypalSetAngles__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mypalletizer_interfaces::msg::MypalSetAngles *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MypalSetAngles__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MypalSetAngles(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MypalSetAngles__callbacks = {
  "mypalletizer_interfaces::msg",
  "MypalSetAngles",
  _MypalSetAngles__cdr_serialize,
  _MypalSetAngles__cdr_deserialize,
  _MypalSetAngles__get_serialized_size,
  _MypalSetAngles__max_serialized_size
};

static rosidl_message_type_support_t _MypalSetAngles__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MypalSetAngles__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mypalletizer_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mypalletizer_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<mypalletizer_interfaces::msg::MypalSetAngles>()
{
  return &mypalletizer_interfaces::msg::typesupport_fastrtps_cpp::_MypalSetAngles__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mypalletizer_interfaces, msg, MypalSetAngles)() {
  return &mypalletizer_interfaces::msg::typesupport_fastrtps_cpp::_MypalSetAngles__handle;
}

#ifdef __cplusplus
}
#endif
