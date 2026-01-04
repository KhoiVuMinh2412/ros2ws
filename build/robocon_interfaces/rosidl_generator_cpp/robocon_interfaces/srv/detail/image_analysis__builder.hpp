// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocon_interfaces:srv/ImageAnalysis.idl
// generated code does not contain a copyright notice

#ifndef ROBOCON_INTERFACES__SRV__DETAIL__IMAGE_ANALYSIS__BUILDER_HPP_
#define ROBOCON_INTERFACES__SRV__DETAIL__IMAGE_ANALYSIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robocon_interfaces/srv/detail/image_analysis__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robocon_interfaces
{

namespace srv
{

namespace builder
{

class Init_ImageAnalysis_Request_detect_motion
{
public:
  explicit Init_ImageAnalysis_Request_detect_motion(::robocon_interfaces::srv::ImageAnalysis_Request & msg)
  : msg_(msg)
  {}
  ::robocon_interfaces::srv::ImageAnalysis_Request detect_motion(::robocon_interfaces::srv::ImageAnalysis_Request::_detect_motion_type arg)
  {
    msg_.detect_motion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocon_interfaces::srv::ImageAnalysis_Request msg_;
};

class Init_ImageAnalysis_Request_analyze_brightness
{
public:
  Init_ImageAnalysis_Request_analyze_brightness()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageAnalysis_Request_detect_motion analyze_brightness(::robocon_interfaces::srv::ImageAnalysis_Request::_analyze_brightness_type arg)
  {
    msg_.analyze_brightness = std::move(arg);
    return Init_ImageAnalysis_Request_detect_motion(msg_);
  }

private:
  ::robocon_interfaces::srv::ImageAnalysis_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocon_interfaces::srv::ImageAnalysis_Request>()
{
  return robocon_interfaces::srv::builder::Init_ImageAnalysis_Request_analyze_brightness();
}

}  // namespace robocon_interfaces


namespace robocon_interfaces
{

namespace srv
{

namespace builder
{

class Init_ImageAnalysis_Response_analysis_result
{
public:
  explicit Init_ImageAnalysis_Response_analysis_result(::robocon_interfaces::srv::ImageAnalysis_Response & msg)
  : msg_(msg)
  {}
  ::robocon_interfaces::srv::ImageAnalysis_Response analysis_result(::robocon_interfaces::srv::ImageAnalysis_Response::_analysis_result_type arg)
  {
    msg_.analysis_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocon_interfaces::srv::ImageAnalysis_Response msg_;
};

class Init_ImageAnalysis_Response_motion_detected
{
public:
  explicit Init_ImageAnalysis_Response_motion_detected(::robocon_interfaces::srv::ImageAnalysis_Response & msg)
  : msg_(msg)
  {}
  Init_ImageAnalysis_Response_analysis_result motion_detected(::robocon_interfaces::srv::ImageAnalysis_Response::_motion_detected_type arg)
  {
    msg_.motion_detected = std::move(arg);
    return Init_ImageAnalysis_Response_analysis_result(msg_);
  }

private:
  ::robocon_interfaces::srv::ImageAnalysis_Response msg_;
};

class Init_ImageAnalysis_Response_avg_brightness
{
public:
  Init_ImageAnalysis_Response_avg_brightness()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageAnalysis_Response_motion_detected avg_brightness(::robocon_interfaces::srv::ImageAnalysis_Response::_avg_brightness_type arg)
  {
    msg_.avg_brightness = std::move(arg);
    return Init_ImageAnalysis_Response_motion_detected(msg_);
  }

private:
  ::robocon_interfaces::srv::ImageAnalysis_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocon_interfaces::srv::ImageAnalysis_Response>()
{
  return robocon_interfaces::srv::builder::Init_ImageAnalysis_Response_avg_brightness();
}

}  // namespace robocon_interfaces

#endif  // ROBOCON_INTERFACES__SRV__DETAIL__IMAGE_ANALYSIS__BUILDER_HPP_
