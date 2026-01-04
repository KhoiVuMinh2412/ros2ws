// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocon_interfaces:srv/ImageAnalysis.idl
// generated code does not contain a copyright notice

#ifndef ROBOCON_INTERFACES__SRV__DETAIL__IMAGE_ANALYSIS__STRUCT_H_
#define ROBOCON_INTERFACES__SRV__DETAIL__IMAGE_ANALYSIS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ImageAnalysis in the package robocon_interfaces.
typedef struct robocon_interfaces__srv__ImageAnalysis_Request
{
  bool analyze_brightness;
  bool detect_motion;
} robocon_interfaces__srv__ImageAnalysis_Request;

// Struct for a sequence of robocon_interfaces__srv__ImageAnalysis_Request.
typedef struct robocon_interfaces__srv__ImageAnalysis_Request__Sequence
{
  robocon_interfaces__srv__ImageAnalysis_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocon_interfaces__srv__ImageAnalysis_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'analysis_result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ImageAnalysis in the package robocon_interfaces.
typedef struct robocon_interfaces__srv__ImageAnalysis_Response
{
  float avg_brightness;
  bool motion_detected;
  rosidl_runtime_c__String analysis_result;
} robocon_interfaces__srv__ImageAnalysis_Response;

// Struct for a sequence of robocon_interfaces__srv__ImageAnalysis_Response.
typedef struct robocon_interfaces__srv__ImageAnalysis_Response__Sequence
{
  robocon_interfaces__srv__ImageAnalysis_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocon_interfaces__srv__ImageAnalysis_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCON_INTERFACES__SRV__DETAIL__IMAGE_ANALYSIS__STRUCT_H_
