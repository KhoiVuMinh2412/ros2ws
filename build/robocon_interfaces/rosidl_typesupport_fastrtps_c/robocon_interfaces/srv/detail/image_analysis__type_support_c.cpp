// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robocon_interfaces:srv/ImageAnalysis.idl
// generated code does not contain a copyright notice
#include "robocon_interfaces/srv/detail/image_analysis__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robocon_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robocon_interfaces/srv/detail/image_analysis__struct.h"
#include "robocon_interfaces/srv/detail/image_analysis__functions.h"
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


using _ImageAnalysis_Request__ros_msg_type = robocon_interfaces__srv__ImageAnalysis_Request;

static bool _ImageAnalysis_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ImageAnalysis_Request__ros_msg_type * ros_message = static_cast<const _ImageAnalysis_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: analyze_brightness
  {
    cdr << (ros_message->analyze_brightness ? true : false);
  }

  // Field name: detect_motion
  {
    cdr << (ros_message->detect_motion ? true : false);
  }

  return true;
}

static bool _ImageAnalysis_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ImageAnalysis_Request__ros_msg_type * ros_message = static_cast<_ImageAnalysis_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: analyze_brightness
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->analyze_brightness = tmp ? true : false;
  }

  // Field name: detect_motion
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->detect_motion = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robocon_interfaces
size_t get_serialized_size_robocon_interfaces__srv__ImageAnalysis_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ImageAnalysis_Request__ros_msg_type * ros_message = static_cast<const _ImageAnalysis_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name analyze_brightness
  {
    size_t item_size = sizeof(ros_message->analyze_brightness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name detect_motion
  {
    size_t item_size = sizeof(ros_message->detect_motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ImageAnalysis_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robocon_interfaces__srv__ImageAnalysis_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robocon_interfaces
size_t max_serialized_size_robocon_interfaces__srv__ImageAnalysis_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: analyze_brightness
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: detect_motion
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robocon_interfaces__srv__ImageAnalysis_Request;
    is_plain =
      (
      offsetof(DataType, detect_motion) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ImageAnalysis_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robocon_interfaces__srv__ImageAnalysis_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ImageAnalysis_Request = {
  "robocon_interfaces::srv",
  "ImageAnalysis_Request",
  _ImageAnalysis_Request__cdr_serialize,
  _ImageAnalysis_Request__cdr_deserialize,
  _ImageAnalysis_Request__get_serialized_size,
  _ImageAnalysis_Request__max_serialized_size
};

static rosidl_message_type_support_t _ImageAnalysis_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ImageAnalysis_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocon_interfaces, srv, ImageAnalysis_Request)() {
  return &_ImageAnalysis_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "robocon_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "robocon_interfaces/srv/detail/image_analysis__struct.h"
// already included above
// #include "robocon_interfaces/srv/detail/image_analysis__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "rosidl_runtime_c/string.h"  // analysis_result
#include "rosidl_runtime_c/string_functions.h"  // analysis_result

// forward declare type support functions


using _ImageAnalysis_Response__ros_msg_type = robocon_interfaces__srv__ImageAnalysis_Response;

static bool _ImageAnalysis_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ImageAnalysis_Response__ros_msg_type * ros_message = static_cast<const _ImageAnalysis_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: avg_brightness
  {
    cdr << ros_message->avg_brightness;
  }

  // Field name: motion_detected
  {
    cdr << (ros_message->motion_detected ? true : false);
  }

  // Field name: analysis_result
  {
    const rosidl_runtime_c__String * str = &ros_message->analysis_result;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ImageAnalysis_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ImageAnalysis_Response__ros_msg_type * ros_message = static_cast<_ImageAnalysis_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: avg_brightness
  {
    cdr >> ros_message->avg_brightness;
  }

  // Field name: motion_detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->motion_detected = tmp ? true : false;
  }

  // Field name: analysis_result
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->analysis_result.data) {
      rosidl_runtime_c__String__init(&ros_message->analysis_result);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->analysis_result,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'analysis_result'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robocon_interfaces
size_t get_serialized_size_robocon_interfaces__srv__ImageAnalysis_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ImageAnalysis_Response__ros_msg_type * ros_message = static_cast<const _ImageAnalysis_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name avg_brightness
  {
    size_t item_size = sizeof(ros_message->avg_brightness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motion_detected
  {
    size_t item_size = sizeof(ros_message->motion_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name analysis_result
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->analysis_result.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ImageAnalysis_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robocon_interfaces__srv__ImageAnalysis_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robocon_interfaces
size_t max_serialized_size_robocon_interfaces__srv__ImageAnalysis_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: avg_brightness
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motion_detected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: analysis_result
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robocon_interfaces__srv__ImageAnalysis_Response;
    is_plain =
      (
      offsetof(DataType, analysis_result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ImageAnalysis_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robocon_interfaces__srv__ImageAnalysis_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ImageAnalysis_Response = {
  "robocon_interfaces::srv",
  "ImageAnalysis_Response",
  _ImageAnalysis_Response__cdr_serialize,
  _ImageAnalysis_Response__cdr_deserialize,
  _ImageAnalysis_Response__get_serialized_size,
  _ImageAnalysis_Response__max_serialized_size
};

static rosidl_message_type_support_t _ImageAnalysis_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ImageAnalysis_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocon_interfaces, srv, ImageAnalysis_Response)() {
  return &_ImageAnalysis_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "robocon_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robocon_interfaces/srv/image_analysis.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ImageAnalysis__callbacks = {
  "robocon_interfaces::srv",
  "ImageAnalysis",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocon_interfaces, srv, ImageAnalysis_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocon_interfaces, srv, ImageAnalysis_Response)(),
};

static rosidl_service_type_support_t ImageAnalysis__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ImageAnalysis__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocon_interfaces, srv, ImageAnalysis)() {
  return &ImageAnalysis__handle;
}

#if defined(__cplusplus)
}
#endif
