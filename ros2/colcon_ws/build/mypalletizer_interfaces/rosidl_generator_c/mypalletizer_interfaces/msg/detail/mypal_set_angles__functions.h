// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mypalletizer_interfaces:msg/MypalSetAngles.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_SET_ANGLES__FUNCTIONS_H_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_SET_ANGLES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mypalletizer_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "mypalletizer_interfaces/msg/detail/mypal_set_angles__struct.h"

/// Initialize msg/MypalSetAngles message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mypalletizer_interfaces__msg__MypalSetAngles
 * )) before or use
 * mypalletizer_interfaces__msg__MypalSetAngles__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
bool
mypalletizer_interfaces__msg__MypalSetAngles__init(mypalletizer_interfaces__msg__MypalSetAngles * msg);

/// Finalize msg/MypalSetAngles message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
void
mypalletizer_interfaces__msg__MypalSetAngles__fini(mypalletizer_interfaces__msg__MypalSetAngles * msg);

/// Create msg/MypalSetAngles message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mypalletizer_interfaces__msg__MypalSetAngles__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
mypalletizer_interfaces__msg__MypalSetAngles *
mypalletizer_interfaces__msg__MypalSetAngles__create();

/// Destroy msg/MypalSetAngles message.
/**
 * It calls
 * mypalletizer_interfaces__msg__MypalSetAngles__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
void
mypalletizer_interfaces__msg__MypalSetAngles__destroy(mypalletizer_interfaces__msg__MypalSetAngles * msg);

/// Check for msg/MypalSetAngles message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
bool
mypalletizer_interfaces__msg__MypalSetAngles__are_equal(const mypalletizer_interfaces__msg__MypalSetAngles * lhs, const mypalletizer_interfaces__msg__MypalSetAngles * rhs);

/// Copy a msg/MypalSetAngles message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
bool
mypalletizer_interfaces__msg__MypalSetAngles__copy(
  const mypalletizer_interfaces__msg__MypalSetAngles * input,
  mypalletizer_interfaces__msg__MypalSetAngles * output);

/// Initialize array of msg/MypalSetAngles messages.
/**
 * It allocates the memory for the number of elements and calls
 * mypalletizer_interfaces__msg__MypalSetAngles__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
bool
mypalletizer_interfaces__msg__MypalSetAngles__Sequence__init(mypalletizer_interfaces__msg__MypalSetAngles__Sequence * array, size_t size);

/// Finalize array of msg/MypalSetAngles messages.
/**
 * It calls
 * mypalletizer_interfaces__msg__MypalSetAngles__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
void
mypalletizer_interfaces__msg__MypalSetAngles__Sequence__fini(mypalletizer_interfaces__msg__MypalSetAngles__Sequence * array);

/// Create array of msg/MypalSetAngles messages.
/**
 * It allocates the memory for the array and calls
 * mypalletizer_interfaces__msg__MypalSetAngles__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
mypalletizer_interfaces__msg__MypalSetAngles__Sequence *
mypalletizer_interfaces__msg__MypalSetAngles__Sequence__create(size_t size);

/// Destroy array of msg/MypalSetAngles messages.
/**
 * It calls
 * mypalletizer_interfaces__msg__MypalSetAngles__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
void
mypalletizer_interfaces__msg__MypalSetAngles__Sequence__destroy(mypalletizer_interfaces__msg__MypalSetAngles__Sequence * array);

/// Check for msg/MypalSetAngles message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
bool
mypalletizer_interfaces__msg__MypalSetAngles__Sequence__are_equal(const mypalletizer_interfaces__msg__MypalSetAngles__Sequence * lhs, const mypalletizer_interfaces__msg__MypalSetAngles__Sequence * rhs);

/// Copy an array of msg/MypalSetAngles messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
bool
mypalletizer_interfaces__msg__MypalSetAngles__Sequence__copy(
  const mypalletizer_interfaces__msg__MypalSetAngles__Sequence * input,
  mypalletizer_interfaces__msg__MypalSetAngles__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_SET_ANGLES__FUNCTIONS_H_
