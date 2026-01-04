// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robocon_interfaces:srv/ImageAnalysis.idl
// generated code does not contain a copyright notice
#include "robocon_interfaces/srv/detail/image_analysis__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robocon_interfaces/srv/detail/image_analysis__struct.hpp"

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

namespace robocon_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robocon_interfaces
cdr_serialize(
  const robocon_interfaces::srv::ImageAnalysis_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: analyze_brightness
  cdr << (ros_message.analyze_brightness ? true : false);
  // Member: detect_motion
  cdr << (ros_message.detect_motion ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robocon_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robocon_interfaces::srv::ImageAnalysis_Request & ros_message)
{
  // Member: analyze_brightness
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.analyze_brightness = tmp ? true : false;
  }

  // Member: detect_motion
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.detect_motion = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robocon_interfaces
get_serialized_size(
  const robocon_interfaces::srv::ImageAnalysis_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: analyze_brightness
  {
    size_t item_size = sizeof(ros_message.analyze_brightness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: detect_motion
  {
    size_t item_size = sizeof(ros_message.detect_motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robocon_interfaces
max_serialized_size_ImageAnalysis_Request(
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


  // Member: analyze_brightness
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: detect_motion
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
    using DataType = robocon_interfaces::srv::ImageAnalysis_Request;
    is_plain =
      (
      offsetof(DataType, detect_motion) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ImageAnalysis_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robocon_interfaces::srv::ImageAnalysis_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ImageAnalysis_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robocon_interfaces::srv::ImageAnalysis_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ImageAnalysis_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robocon_interfaces::srv::ImageAnalysis_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ImageAnalysis_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ImageAnalysis_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ImageAnalysis_Request__callbacks = {
  "robocon_interfaces::srv",
  "ImageAnalysis_Request",
  _ImageAnalysis_Request__cdr_serialize,
  _ImageAnalysis_Request__cdr_deserialize,
  _ImageAnalysis_Request__get_serialized_size,
  _ImageAnalysis_Request__max_serialized_size
};

static rosidl_message_type_support_t _ImageAnalysis_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ImageAnalysis_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace robocon_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robocon_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<robocon_interfaces::srv::ImageAnalysis_Request>()
{
  return &robocon_interfaces::srv::typesupport_fastrtps_cpp::_ImageAnalysis_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robocon_interfaces, srv, ImageAnalysis_Request)() {
  return &robocon_interfaces::srv::typesupport_fastrtps_cpp::_ImageAnalysis_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace robocon_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robocon_interfaces
cdr_serialize(
  const robocon_interfaces::srv::ImageAnalysis_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: avg_brightness
  cdr << ros_message.avg_brightness;
  // Member: motion_detected
  cdr << (ros_message.motion_detected ? true : false);
  // Member: analysis_result
  cdr << ros_message.analysis_result;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robocon_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robocon_interfaces::srv::ImageAnalysis_Response & ros_message)
{
  // Member: avg_brightness
  cdr >> ros_message.avg_brightness;

  // Member: motion_detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.motion_detected = tmp ? true : false;
  }

  // Member: analysis_result
  cdr >> ros_message.analysis_result;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robocon_interfaces
get_serialized_size(
  const robocon_interfaces::srv::ImageAnalysis_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: avg_brightness
  {
    size_t item_size = sizeof(ros_message.avg_brightness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motion_detected
  {
    size_t item_size = sizeof(ros_message.motion_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analysis_result
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.analysis_result.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robocon_interfaces
max_serialized_size_ImageAnalysis_Response(
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


  // Member: avg_brightness
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motion_detected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: analysis_result
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
    using DataType = robocon_interfaces::srv::ImageAnalysis_Response;
    is_plain =
      (
      offsetof(DataType, analysis_result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ImageAnalysis_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robocon_interfaces::srv::ImageAnalysis_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ImageAnalysis_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robocon_interfaces::srv::ImageAnalysis_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ImageAnalysis_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robocon_interfaces::srv::ImageAnalysis_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ImageAnalysis_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ImageAnalysis_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ImageAnalysis_Response__callbacks = {
  "robocon_interfaces::srv",
  "ImageAnalysis_Response",
  _ImageAnalysis_Response__cdr_serialize,
  _ImageAnalysis_Response__cdr_deserialize,
  _ImageAnalysis_Response__get_serialized_size,
  _ImageAnalysis_Response__max_serialized_size
};

static rosidl_message_type_support_t _ImageAnalysis_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ImageAnalysis_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace robocon_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robocon_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<robocon_interfaces::srv::ImageAnalysis_Response>()
{
  return &robocon_interfaces::srv::typesupport_fastrtps_cpp::_ImageAnalysis_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robocon_interfaces, srv, ImageAnalysis_Response)() {
  return &robocon_interfaces::srv::typesupport_fastrtps_cpp::_ImageAnalysis_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace robocon_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ImageAnalysis__callbacks = {
  "robocon_interfaces::srv",
  "ImageAnalysis",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robocon_interfaces, srv, ImageAnalysis_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robocon_interfaces, srv, ImageAnalysis_Response)(),
};

static rosidl_service_type_support_t _ImageAnalysis__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ImageAnalysis__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace robocon_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robocon_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<robocon_interfaces::srv::ImageAnalysis>()
{
  return &robocon_interfaces::srv::typesupport_fastrtps_cpp::_ImageAnalysis__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robocon_interfaces, srv, ImageAnalysis)() {
  return &robocon_interfaces::srv::typesupport_fastrtps_cpp::_ImageAnalysis__handle;
}

#ifdef __cplusplus
}
#endif
