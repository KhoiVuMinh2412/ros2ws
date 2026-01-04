// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robocon_interfaces:srv/ImageAnalysis.idl
// generated code does not contain a copyright notice

#ifndef ROBOCON_INTERFACES__SRV__DETAIL__IMAGE_ANALYSIS__TRAITS_HPP_
#define ROBOCON_INTERFACES__SRV__DETAIL__IMAGE_ANALYSIS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robocon_interfaces/srv/detail/image_analysis__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robocon_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ImageAnalysis_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: analyze_brightness
  {
    out << "analyze_brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.analyze_brightness, out);
    out << ", ";
  }

  // member: detect_motion
  {
    out << "detect_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.detect_motion, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImageAnalysis_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: analyze_brightness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "analyze_brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.analyze_brightness, out);
    out << "\n";
  }

  // member: detect_motion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detect_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.detect_motion, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImageAnalysis_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robocon_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robocon_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robocon_interfaces::srv::ImageAnalysis_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robocon_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robocon_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robocon_interfaces::srv::ImageAnalysis_Request & msg)
{
  return robocon_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robocon_interfaces::srv::ImageAnalysis_Request>()
{
  return "robocon_interfaces::srv::ImageAnalysis_Request";
}

template<>
inline const char * name<robocon_interfaces::srv::ImageAnalysis_Request>()
{
  return "robocon_interfaces/srv/ImageAnalysis_Request";
}

template<>
struct has_fixed_size<robocon_interfaces::srv::ImageAnalysis_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robocon_interfaces::srv::ImageAnalysis_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robocon_interfaces::srv::ImageAnalysis_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robocon_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ImageAnalysis_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: avg_brightness
  {
    out << "avg_brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_brightness, out);
    out << ", ";
  }

  // member: motion_detected
  {
    out << "motion_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_detected, out);
    out << ", ";
  }

  // member: analysis_result
  {
    out << "analysis_result: ";
    rosidl_generator_traits::value_to_yaml(msg.analysis_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImageAnalysis_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: avg_brightness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avg_brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_brightness, out);
    out << "\n";
  }

  // member: motion_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_detected, out);
    out << "\n";
  }

  // member: analysis_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "analysis_result: ";
    rosidl_generator_traits::value_to_yaml(msg.analysis_result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImageAnalysis_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robocon_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robocon_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robocon_interfaces::srv::ImageAnalysis_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robocon_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robocon_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robocon_interfaces::srv::ImageAnalysis_Response & msg)
{
  return robocon_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robocon_interfaces::srv::ImageAnalysis_Response>()
{
  return "robocon_interfaces::srv::ImageAnalysis_Response";
}

template<>
inline const char * name<robocon_interfaces::srv::ImageAnalysis_Response>()
{
  return "robocon_interfaces/srv/ImageAnalysis_Response";
}

template<>
struct has_fixed_size<robocon_interfaces::srv::ImageAnalysis_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robocon_interfaces::srv::ImageAnalysis_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robocon_interfaces::srv::ImageAnalysis_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robocon_interfaces::srv::ImageAnalysis>()
{
  return "robocon_interfaces::srv::ImageAnalysis";
}

template<>
inline const char * name<robocon_interfaces::srv::ImageAnalysis>()
{
  return "robocon_interfaces/srv/ImageAnalysis";
}

template<>
struct has_fixed_size<robocon_interfaces::srv::ImageAnalysis>
  : std::integral_constant<
    bool,
    has_fixed_size<robocon_interfaces::srv::ImageAnalysis_Request>::value &&
    has_fixed_size<robocon_interfaces::srv::ImageAnalysis_Response>::value
  >
{
};

template<>
struct has_bounded_size<robocon_interfaces::srv::ImageAnalysis>
  : std::integral_constant<
    bool,
    has_bounded_size<robocon_interfaces::srv::ImageAnalysis_Request>::value &&
    has_bounded_size<robocon_interfaces::srv::ImageAnalysis_Response>::value
  >
{
};

template<>
struct is_service<robocon_interfaces::srv::ImageAnalysis>
  : std::true_type
{
};

template<>
struct is_service_request<robocon_interfaces::srv::ImageAnalysis_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robocon_interfaces::srv::ImageAnalysis_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOCON_INTERFACES__SRV__DETAIL__IMAGE_ANALYSIS__TRAITS_HPP_
