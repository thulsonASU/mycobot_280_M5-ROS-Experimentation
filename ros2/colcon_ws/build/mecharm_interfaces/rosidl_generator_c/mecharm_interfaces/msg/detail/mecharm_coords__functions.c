// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mecharm_interfaces:msg/MecharmCoords.idl
// generated code does not contain a copyright notice
#include "mecharm_interfaces/msg/detail/mecharm_coords__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mecharm_interfaces__msg__MecharmCoords__init(mecharm_interfaces__msg__MecharmCoords * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // rx
  // ry
  // rz
  return true;
}

void
mecharm_interfaces__msg__MecharmCoords__fini(mecharm_interfaces__msg__MecharmCoords * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // rx
  // ry
  // rz
}

bool
mecharm_interfaces__msg__MecharmCoords__are_equal(const mecharm_interfaces__msg__MecharmCoords * lhs, const mecharm_interfaces__msg__MecharmCoords * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // rx
  if (lhs->rx != rhs->rx) {
    return false;
  }
  // ry
  if (lhs->ry != rhs->ry) {
    return false;
  }
  // rz
  if (lhs->rz != rhs->rz) {
    return false;
  }
  return true;
}

bool
mecharm_interfaces__msg__MecharmCoords__copy(
  const mecharm_interfaces__msg__MecharmCoords * input,
  mecharm_interfaces__msg__MecharmCoords * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // rx
  output->rx = input->rx;
  // ry
  output->ry = input->ry;
  // rz
  output->rz = input->rz;
  return true;
}

mecharm_interfaces__msg__MecharmCoords *
mecharm_interfaces__msg__MecharmCoords__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecharm_interfaces__msg__MecharmCoords * msg = (mecharm_interfaces__msg__MecharmCoords *)allocator.allocate(sizeof(mecharm_interfaces__msg__MecharmCoords), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mecharm_interfaces__msg__MecharmCoords));
  bool success = mecharm_interfaces__msg__MecharmCoords__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mecharm_interfaces__msg__MecharmCoords__destroy(mecharm_interfaces__msg__MecharmCoords * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mecharm_interfaces__msg__MecharmCoords__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mecharm_interfaces__msg__MecharmCoords__Sequence__init(mecharm_interfaces__msg__MecharmCoords__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecharm_interfaces__msg__MecharmCoords * data = NULL;

  if (size) {
    data = (mecharm_interfaces__msg__MecharmCoords *)allocator.zero_allocate(size, sizeof(mecharm_interfaces__msg__MecharmCoords), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mecharm_interfaces__msg__MecharmCoords__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mecharm_interfaces__msg__MecharmCoords__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mecharm_interfaces__msg__MecharmCoords__Sequence__fini(mecharm_interfaces__msg__MecharmCoords__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mecharm_interfaces__msg__MecharmCoords__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mecharm_interfaces__msg__MecharmCoords__Sequence *
mecharm_interfaces__msg__MecharmCoords__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecharm_interfaces__msg__MecharmCoords__Sequence * array = (mecharm_interfaces__msg__MecharmCoords__Sequence *)allocator.allocate(sizeof(mecharm_interfaces__msg__MecharmCoords__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mecharm_interfaces__msg__MecharmCoords__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mecharm_interfaces__msg__MecharmCoords__Sequence__destroy(mecharm_interfaces__msg__MecharmCoords__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mecharm_interfaces__msg__MecharmCoords__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mecharm_interfaces__msg__MecharmCoords__Sequence__are_equal(const mecharm_interfaces__msg__MecharmCoords__Sequence * lhs, const mecharm_interfaces__msg__MecharmCoords__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mecharm_interfaces__msg__MecharmCoords__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mecharm_interfaces__msg__MecharmCoords__Sequence__copy(
  const mecharm_interfaces__msg__MecharmCoords__Sequence * input,
  mecharm_interfaces__msg__MecharmCoords__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mecharm_interfaces__msg__MecharmCoords);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mecharm_interfaces__msg__MecharmCoords * data =
      (mecharm_interfaces__msg__MecharmCoords *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mecharm_interfaces__msg__MecharmCoords__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mecharm_interfaces__msg__MecharmCoords__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mecharm_interfaces__msg__MecharmCoords__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
