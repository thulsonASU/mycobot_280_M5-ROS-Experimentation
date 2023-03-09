// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mecharm_interfaces:srv/PumpStatus.idl
// generated code does not contain a copyright notice
#include "mecharm_interfaces/srv/detail/pump_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
mecharm_interfaces__srv__PumpStatus_Request__init(mecharm_interfaces__srv__PumpStatus_Request * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // pin1
  // pin2
  return true;
}

void
mecharm_interfaces__srv__PumpStatus_Request__fini(mecharm_interfaces__srv__PumpStatus_Request * msg)
{
  if (!msg) {
    return;
  }
  // status
  // pin1
  // pin2
}

bool
mecharm_interfaces__srv__PumpStatus_Request__are_equal(const mecharm_interfaces__srv__PumpStatus_Request * lhs, const mecharm_interfaces__srv__PumpStatus_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // pin1
  if (lhs->pin1 != rhs->pin1) {
    return false;
  }
  // pin2
  if (lhs->pin2 != rhs->pin2) {
    return false;
  }
  return true;
}

bool
mecharm_interfaces__srv__PumpStatus_Request__copy(
  const mecharm_interfaces__srv__PumpStatus_Request * input,
  mecharm_interfaces__srv__PumpStatus_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // pin1
  output->pin1 = input->pin1;
  // pin2
  output->pin2 = input->pin2;
  return true;
}

mecharm_interfaces__srv__PumpStatus_Request *
mecharm_interfaces__srv__PumpStatus_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecharm_interfaces__srv__PumpStatus_Request * msg = (mecharm_interfaces__srv__PumpStatus_Request *)allocator.allocate(sizeof(mecharm_interfaces__srv__PumpStatus_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mecharm_interfaces__srv__PumpStatus_Request));
  bool success = mecharm_interfaces__srv__PumpStatus_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mecharm_interfaces__srv__PumpStatus_Request__destroy(mecharm_interfaces__srv__PumpStatus_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mecharm_interfaces__srv__PumpStatus_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mecharm_interfaces__srv__PumpStatus_Request__Sequence__init(mecharm_interfaces__srv__PumpStatus_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecharm_interfaces__srv__PumpStatus_Request * data = NULL;

  if (size) {
    data = (mecharm_interfaces__srv__PumpStatus_Request *)allocator.zero_allocate(size, sizeof(mecharm_interfaces__srv__PumpStatus_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mecharm_interfaces__srv__PumpStatus_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mecharm_interfaces__srv__PumpStatus_Request__fini(&data[i - 1]);
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
mecharm_interfaces__srv__PumpStatus_Request__Sequence__fini(mecharm_interfaces__srv__PumpStatus_Request__Sequence * array)
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
      mecharm_interfaces__srv__PumpStatus_Request__fini(&array->data[i]);
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

mecharm_interfaces__srv__PumpStatus_Request__Sequence *
mecharm_interfaces__srv__PumpStatus_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecharm_interfaces__srv__PumpStatus_Request__Sequence * array = (mecharm_interfaces__srv__PumpStatus_Request__Sequence *)allocator.allocate(sizeof(mecharm_interfaces__srv__PumpStatus_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mecharm_interfaces__srv__PumpStatus_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mecharm_interfaces__srv__PumpStatus_Request__Sequence__destroy(mecharm_interfaces__srv__PumpStatus_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mecharm_interfaces__srv__PumpStatus_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mecharm_interfaces__srv__PumpStatus_Request__Sequence__are_equal(const mecharm_interfaces__srv__PumpStatus_Request__Sequence * lhs, const mecharm_interfaces__srv__PumpStatus_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mecharm_interfaces__srv__PumpStatus_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mecharm_interfaces__srv__PumpStatus_Request__Sequence__copy(
  const mecharm_interfaces__srv__PumpStatus_Request__Sequence * input,
  mecharm_interfaces__srv__PumpStatus_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mecharm_interfaces__srv__PumpStatus_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mecharm_interfaces__srv__PumpStatus_Request * data =
      (mecharm_interfaces__srv__PumpStatus_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mecharm_interfaces__srv__PumpStatus_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mecharm_interfaces__srv__PumpStatus_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mecharm_interfaces__srv__PumpStatus_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mecharm_interfaces__srv__PumpStatus_Response__init(mecharm_interfaces__srv__PumpStatus_Response * msg)
{
  if (!msg) {
    return false;
  }
  // flag
  return true;
}

void
mecharm_interfaces__srv__PumpStatus_Response__fini(mecharm_interfaces__srv__PumpStatus_Response * msg)
{
  if (!msg) {
    return;
  }
  // flag
}

bool
mecharm_interfaces__srv__PumpStatus_Response__are_equal(const mecharm_interfaces__srv__PumpStatus_Response * lhs, const mecharm_interfaces__srv__PumpStatus_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // flag
  if (lhs->flag != rhs->flag) {
    return false;
  }
  return true;
}

bool
mecharm_interfaces__srv__PumpStatus_Response__copy(
  const mecharm_interfaces__srv__PumpStatus_Response * input,
  mecharm_interfaces__srv__PumpStatus_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // flag
  output->flag = input->flag;
  return true;
}

mecharm_interfaces__srv__PumpStatus_Response *
mecharm_interfaces__srv__PumpStatus_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecharm_interfaces__srv__PumpStatus_Response * msg = (mecharm_interfaces__srv__PumpStatus_Response *)allocator.allocate(sizeof(mecharm_interfaces__srv__PumpStatus_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mecharm_interfaces__srv__PumpStatus_Response));
  bool success = mecharm_interfaces__srv__PumpStatus_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mecharm_interfaces__srv__PumpStatus_Response__destroy(mecharm_interfaces__srv__PumpStatus_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mecharm_interfaces__srv__PumpStatus_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mecharm_interfaces__srv__PumpStatus_Response__Sequence__init(mecharm_interfaces__srv__PumpStatus_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecharm_interfaces__srv__PumpStatus_Response * data = NULL;

  if (size) {
    data = (mecharm_interfaces__srv__PumpStatus_Response *)allocator.zero_allocate(size, sizeof(mecharm_interfaces__srv__PumpStatus_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mecharm_interfaces__srv__PumpStatus_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mecharm_interfaces__srv__PumpStatus_Response__fini(&data[i - 1]);
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
mecharm_interfaces__srv__PumpStatus_Response__Sequence__fini(mecharm_interfaces__srv__PumpStatus_Response__Sequence * array)
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
      mecharm_interfaces__srv__PumpStatus_Response__fini(&array->data[i]);
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

mecharm_interfaces__srv__PumpStatus_Response__Sequence *
mecharm_interfaces__srv__PumpStatus_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecharm_interfaces__srv__PumpStatus_Response__Sequence * array = (mecharm_interfaces__srv__PumpStatus_Response__Sequence *)allocator.allocate(sizeof(mecharm_interfaces__srv__PumpStatus_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mecharm_interfaces__srv__PumpStatus_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mecharm_interfaces__srv__PumpStatus_Response__Sequence__destroy(mecharm_interfaces__srv__PumpStatus_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mecharm_interfaces__srv__PumpStatus_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mecharm_interfaces__srv__PumpStatus_Response__Sequence__are_equal(const mecharm_interfaces__srv__PumpStatus_Response__Sequence * lhs, const mecharm_interfaces__srv__PumpStatus_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mecharm_interfaces__srv__PumpStatus_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mecharm_interfaces__srv__PumpStatus_Response__Sequence__copy(
  const mecharm_interfaces__srv__PumpStatus_Response__Sequence * input,
  mecharm_interfaces__srv__PumpStatus_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mecharm_interfaces__srv__PumpStatus_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mecharm_interfaces__srv__PumpStatus_Response * data =
      (mecharm_interfaces__srv__PumpStatus_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mecharm_interfaces__srv__PumpStatus_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mecharm_interfaces__srv__PumpStatus_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mecharm_interfaces__srv__PumpStatus_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
