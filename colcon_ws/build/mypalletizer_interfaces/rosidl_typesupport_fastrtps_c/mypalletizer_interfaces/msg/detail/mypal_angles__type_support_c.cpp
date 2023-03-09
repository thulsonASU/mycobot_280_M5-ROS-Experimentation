// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mypalletizer_interfaces:msg/MypalAngles.idl
// generated code does not contain a copyright notice
#include "mypalletizer_interfaces/msg/detail/mypal_angles__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mypalletizer_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mypalletizer_interfaces/msg/detail/mypal_angles__struct.h"
#include "mypalletizer_interfaces/msg/detail/mypal_angles__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MypalAngles__ros_msg_type = mypalletizer_interfaces__msg__MypalAngles;

static bool _MypalAngles__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MypalAngles__ros_msg_type * ros_message = static_cast<const _MypalAngles__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_1
  {
    cdr << ros_message->joint_1;
  }

  // Field name: joint_2
  {
    cdr << ros_message->joint_2;
  }

  // Field name: joint_3
  {
    cdr << ros_message->joint_3;
  }

  // Field name: joint_4
  {
    cdr << ros_message->joint_4;
  }

  return true;
}

static bool _MypalAngles__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MypalAngles__ros_msg_type * ros_message = static_cast<_MypalAngles__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_1
  {
    cdr >> ros_message->joint_1;
  }

  // Field name: joint_2
  {
    cdr >> ros_message->joint_2;
  }

  // Field name: joint_3
  {
    cdr >> ros_message->joint_3;
  }

  // Field name: joint_4
  {
    cdr >> ros_message->joint_4;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mypalletizer_interfaces
size_t get_serialized_size_mypalletizer_interfaces__msg__MypalAngles(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MypalAngles__ros_msg_type * ros_message = static_cast<const _MypalAngles__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint_1
  {
    size_t item_size = sizeof(ros_message->joint_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_2
  {
    size_t item_size = sizeof(ros_message->joint_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_3
  {
    size_t item_size = sizeof(ros_message->joint_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_4
  {
    size_t item_size = sizeof(ros_message->joint_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MypalAngles__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mypalletizer_interfaces__msg__MypalAngles(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mypalletizer_interfaces
size_t max_serialized_size_mypalletizer_interfaces__msg__MypalAngles(
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

  // member: joint_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MypalAngles__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mypalletizer_interfaces__msg__MypalAngles(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MypalAngles = {
  "mypalletizer_interfaces::msg",
  "MypalAngles",
  _MypalAngles__cdr_serialize,
  _MypalAngles__cdr_deserialize,
  _MypalAngles__get_serialized_size,
  _MypalAngles__max_serialized_size
};

static rosidl_message_type_support_t _MypalAngles__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MypalAngles,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mypalletizer_interfaces, msg, MypalAngles)() {
  return &_MypalAngles__type_support;
}

#if defined(__cplusplus)
}
#endif
