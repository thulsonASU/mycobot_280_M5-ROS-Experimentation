// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mecharm_interfaces:msg/MecharmSetCoords.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__MSG__DETAIL__MECHARM_SET_COORDS__FUNCTIONS_H_
#define MECHARM_INTERFACES__MSG__DETAIL__MECHARM_SET_COORDS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mecharm_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "mecharm_interfaces/msg/detail/mecharm_set_coords__struct.h"

/// Initialize msg/MecharmSetCoords message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mecharm_interfaces__msg__MecharmSetCoords
 * )) before or use
 * mecharm_interfaces__msg__MecharmSetCoords__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mecharm_interfaces
bool
mecharm_interfaces__msg__MecharmSetCoords__init(mecharm_interfaces__msg__MecharmSetCoords * msg);

/// Finalize msg/MecharmSetCoords message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecharm_interfaces
void
mecharm_interfaces__msg__MecharmSetCoords__fini(mecharm_interfaces__msg__MecharmSetCoords * msg);

/// Create msg/MecharmSetCoords message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mecharm_interfaces__msg__MecharmSetCoords__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecharm_interfaces
mecharm_interfaces__msg__MecharmSetCoords *
mecharm_interfaces__msg__MecharmSetCoords__create();

/// Destroy msg/MecharmSetCoords message.
/**
 * It calls
 * mecharm_interfaces__msg__MecharmSetCoords__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecharm_interfaces
void
mecharm_interfaces__msg__MecharmSetCoords__destroy(mecharm_interfaces__msg__MecharmSetCoords * msg);

/// Check for msg/MecharmSetCoords message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecharm_interfaces
bool
mecharm_interfaces__msg__MecharmSetCoords__are_equal(const mecharm_interfaces__msg__MecharmSetCoords * lhs, const mecharm_interfaces__msg__MecharmSetCoords * rhs);

/// Copy a msg/MecharmSetCoords message.
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
ROSIDL_GENERATOR_C_PUBLIC_mecharm_interfaces
bool
mecharm_interfaces__msg__MecharmSetCoords__copy(
  const mecharm_interfaces__msg__MecharmSetCoords * input,
  mecharm_interfaces__msg__MecharmSetCoords * output);

/// Initialize array of msg/MecharmSetCoords messages.
/**
 * It allocates the memory for the number of elements and calls
 * mecharm_interfaces__msg__MecharmSetCoords__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecharm_interfaces
bool
mecharm_interfaces__msg__MecharmSetCoords__Sequence__init(mecharm_interfaces__msg__MecharmSetCoords__Sequence * array, size_t size);

/// Finalize array of msg/MecharmSetCoords messages.
/**
 * It calls
 * mecharm_interfaces__msg__MecharmSetCoords__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecharm_interfaces
void
mecharm_interfaces__msg__MecharmSetCoords__Sequence__fini(mecharm_interfaces__msg__MecharmSetCoords__Sequence * array);

/// Create array of msg/MecharmSetCoords messages.
/**
 * It allocates the memory for the array and calls
 * mecharm_interfaces__msg__MecharmSetCoords__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecharm_interfaces
mecharm_interfaces__msg__MecharmSetCoords__Sequence *
mecharm_interfaces__msg__MecharmSetCoords__Sequence__create(size_t size);

/// Destroy array of msg/MecharmSetCoords messages.
/**
 * It calls
 * mecharm_interfaces__msg__MecharmSetCoords__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecharm_interfaces
void
mecharm_interfaces__msg__MecharmSetCoords__Sequence__destroy(mecharm_interfaces__msg__MecharmSetCoords__Sequence * array);

/// Check for msg/MecharmSetCoords message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecharm_interfaces
bool
mecharm_interfaces__msg__MecharmSetCoords__Sequence__are_equal(const mecharm_interfaces__msg__MecharmSetCoords__Sequence * lhs, const mecharm_interfaces__msg__MecharmSetCoords__Sequence * rhs);

/// Copy an array of msg/MecharmSetCoords messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mecharm_interfaces
bool
mecharm_interfaces__msg__MecharmSetCoords__Sequence__copy(
  const mecharm_interfaces__msg__MecharmSetCoords__Sequence * input,
  mecharm_interfaces__msg__MecharmSetCoords__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MECHARM_INTERFACES__MSG__DETAIL__MECHARM_SET_COORDS__FUNCTIONS_H_
