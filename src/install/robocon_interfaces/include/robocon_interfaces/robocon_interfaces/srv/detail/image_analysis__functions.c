// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocon_interfaces:srv/ImageAnalysis.idl
// generated code does not contain a copyright notice
#include "robocon_interfaces/srv/detail/image_analysis__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
robocon_interfaces__srv__ImageAnalysis_Request__init(robocon_interfaces__srv__ImageAnalysis_Request * msg)
{
  if (!msg) {
    return false;
  }
  // analyze_brightness
  // detect_motion
  return true;
}

void
robocon_interfaces__srv__ImageAnalysis_Request__fini(robocon_interfaces__srv__ImageAnalysis_Request * msg)
{
  if (!msg) {
    return;
  }
  // analyze_brightness
  // detect_motion
}

bool
robocon_interfaces__srv__ImageAnalysis_Request__are_equal(const robocon_interfaces__srv__ImageAnalysis_Request * lhs, const robocon_interfaces__srv__ImageAnalysis_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // analyze_brightness
  if (lhs->analyze_brightness != rhs->analyze_brightness) {
    return false;
  }
  // detect_motion
  if (lhs->detect_motion != rhs->detect_motion) {
    return false;
  }
  return true;
}

bool
robocon_interfaces__srv__ImageAnalysis_Request__copy(
  const robocon_interfaces__srv__ImageAnalysis_Request * input,
  robocon_interfaces__srv__ImageAnalysis_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // analyze_brightness
  output->analyze_brightness = input->analyze_brightness;
  // detect_motion
  output->detect_motion = input->detect_motion;
  return true;
}

robocon_interfaces__srv__ImageAnalysis_Request *
robocon_interfaces__srv__ImageAnalysis_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocon_interfaces__srv__ImageAnalysis_Request * msg = (robocon_interfaces__srv__ImageAnalysis_Request *)allocator.allocate(sizeof(robocon_interfaces__srv__ImageAnalysis_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocon_interfaces__srv__ImageAnalysis_Request));
  bool success = robocon_interfaces__srv__ImageAnalysis_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocon_interfaces__srv__ImageAnalysis_Request__destroy(robocon_interfaces__srv__ImageAnalysis_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocon_interfaces__srv__ImageAnalysis_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocon_interfaces__srv__ImageAnalysis_Request__Sequence__init(robocon_interfaces__srv__ImageAnalysis_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocon_interfaces__srv__ImageAnalysis_Request * data = NULL;

  if (size) {
    data = (robocon_interfaces__srv__ImageAnalysis_Request *)allocator.zero_allocate(size, sizeof(robocon_interfaces__srv__ImageAnalysis_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocon_interfaces__srv__ImageAnalysis_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocon_interfaces__srv__ImageAnalysis_Request__fini(&data[i - 1]);
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
robocon_interfaces__srv__ImageAnalysis_Request__Sequence__fini(robocon_interfaces__srv__ImageAnalysis_Request__Sequence * array)
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
      robocon_interfaces__srv__ImageAnalysis_Request__fini(&array->data[i]);
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

robocon_interfaces__srv__ImageAnalysis_Request__Sequence *
robocon_interfaces__srv__ImageAnalysis_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocon_interfaces__srv__ImageAnalysis_Request__Sequence * array = (robocon_interfaces__srv__ImageAnalysis_Request__Sequence *)allocator.allocate(sizeof(robocon_interfaces__srv__ImageAnalysis_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocon_interfaces__srv__ImageAnalysis_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocon_interfaces__srv__ImageAnalysis_Request__Sequence__destroy(robocon_interfaces__srv__ImageAnalysis_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocon_interfaces__srv__ImageAnalysis_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocon_interfaces__srv__ImageAnalysis_Request__Sequence__are_equal(const robocon_interfaces__srv__ImageAnalysis_Request__Sequence * lhs, const robocon_interfaces__srv__ImageAnalysis_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocon_interfaces__srv__ImageAnalysis_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocon_interfaces__srv__ImageAnalysis_Request__Sequence__copy(
  const robocon_interfaces__srv__ImageAnalysis_Request__Sequence * input,
  robocon_interfaces__srv__ImageAnalysis_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocon_interfaces__srv__ImageAnalysis_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robocon_interfaces__srv__ImageAnalysis_Request * data =
      (robocon_interfaces__srv__ImageAnalysis_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocon_interfaces__srv__ImageAnalysis_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robocon_interfaces__srv__ImageAnalysis_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robocon_interfaces__srv__ImageAnalysis_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `analysis_result`
#include "rosidl_runtime_c/string_functions.h"

bool
robocon_interfaces__srv__ImageAnalysis_Response__init(robocon_interfaces__srv__ImageAnalysis_Response * msg)
{
  if (!msg) {
    return false;
  }
  // avg_brightness
  // motion_detected
  // analysis_result
  if (!rosidl_runtime_c__String__init(&msg->analysis_result)) {
    robocon_interfaces__srv__ImageAnalysis_Response__fini(msg);
    return false;
  }
  return true;
}

void
robocon_interfaces__srv__ImageAnalysis_Response__fini(robocon_interfaces__srv__ImageAnalysis_Response * msg)
{
  if (!msg) {
    return;
  }
  // avg_brightness
  // motion_detected
  // analysis_result
  rosidl_runtime_c__String__fini(&msg->analysis_result);
}

bool
robocon_interfaces__srv__ImageAnalysis_Response__are_equal(const robocon_interfaces__srv__ImageAnalysis_Response * lhs, const robocon_interfaces__srv__ImageAnalysis_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // avg_brightness
  if (lhs->avg_brightness != rhs->avg_brightness) {
    return false;
  }
  // motion_detected
  if (lhs->motion_detected != rhs->motion_detected) {
    return false;
  }
  // analysis_result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->analysis_result), &(rhs->analysis_result)))
  {
    return false;
  }
  return true;
}

bool
robocon_interfaces__srv__ImageAnalysis_Response__copy(
  const robocon_interfaces__srv__ImageAnalysis_Response * input,
  robocon_interfaces__srv__ImageAnalysis_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // avg_brightness
  output->avg_brightness = input->avg_brightness;
  // motion_detected
  output->motion_detected = input->motion_detected;
  // analysis_result
  if (!rosidl_runtime_c__String__copy(
      &(input->analysis_result), &(output->analysis_result)))
  {
    return false;
  }
  return true;
}

robocon_interfaces__srv__ImageAnalysis_Response *
robocon_interfaces__srv__ImageAnalysis_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocon_interfaces__srv__ImageAnalysis_Response * msg = (robocon_interfaces__srv__ImageAnalysis_Response *)allocator.allocate(sizeof(robocon_interfaces__srv__ImageAnalysis_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocon_interfaces__srv__ImageAnalysis_Response));
  bool success = robocon_interfaces__srv__ImageAnalysis_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocon_interfaces__srv__ImageAnalysis_Response__destroy(robocon_interfaces__srv__ImageAnalysis_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocon_interfaces__srv__ImageAnalysis_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocon_interfaces__srv__ImageAnalysis_Response__Sequence__init(robocon_interfaces__srv__ImageAnalysis_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocon_interfaces__srv__ImageAnalysis_Response * data = NULL;

  if (size) {
    data = (robocon_interfaces__srv__ImageAnalysis_Response *)allocator.zero_allocate(size, sizeof(robocon_interfaces__srv__ImageAnalysis_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocon_interfaces__srv__ImageAnalysis_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocon_interfaces__srv__ImageAnalysis_Response__fini(&data[i - 1]);
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
robocon_interfaces__srv__ImageAnalysis_Response__Sequence__fini(robocon_interfaces__srv__ImageAnalysis_Response__Sequence * array)
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
      robocon_interfaces__srv__ImageAnalysis_Response__fini(&array->data[i]);
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

robocon_interfaces__srv__ImageAnalysis_Response__Sequence *
robocon_interfaces__srv__ImageAnalysis_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocon_interfaces__srv__ImageAnalysis_Response__Sequence * array = (robocon_interfaces__srv__ImageAnalysis_Response__Sequence *)allocator.allocate(sizeof(robocon_interfaces__srv__ImageAnalysis_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocon_interfaces__srv__ImageAnalysis_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocon_interfaces__srv__ImageAnalysis_Response__Sequence__destroy(robocon_interfaces__srv__ImageAnalysis_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocon_interfaces__srv__ImageAnalysis_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocon_interfaces__srv__ImageAnalysis_Response__Sequence__are_equal(const robocon_interfaces__srv__ImageAnalysis_Response__Sequence * lhs, const robocon_interfaces__srv__ImageAnalysis_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocon_interfaces__srv__ImageAnalysis_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocon_interfaces__srv__ImageAnalysis_Response__Sequence__copy(
  const robocon_interfaces__srv__ImageAnalysis_Response__Sequence * input,
  robocon_interfaces__srv__ImageAnalysis_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocon_interfaces__srv__ImageAnalysis_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robocon_interfaces__srv__ImageAnalysis_Response * data =
      (robocon_interfaces__srv__ImageAnalysis_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocon_interfaces__srv__ImageAnalysis_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robocon_interfaces__srv__ImageAnalysis_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robocon_interfaces__srv__ImageAnalysis_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
