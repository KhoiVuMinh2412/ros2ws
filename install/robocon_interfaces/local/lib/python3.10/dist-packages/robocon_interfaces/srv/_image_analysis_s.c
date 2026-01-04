// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robocon_interfaces:srv/ImageAnalysis.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "robocon_interfaces/srv/detail/image_analysis__struct.h"
#include "robocon_interfaces/srv/detail/image_analysis__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robocon_interfaces__srv__image_analysis__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robocon_interfaces.srv._image_analysis.ImageAnalysis_Request", full_classname_dest, 60) == 0);
  }
  robocon_interfaces__srv__ImageAnalysis_Request * ros_message = _ros_message;
  {  // analyze_brightness
    PyObject * field = PyObject_GetAttrString(_pymsg, "analyze_brightness");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->analyze_brightness = (Py_True == field);
    Py_DECREF(field);
  }
  {  // detect_motion
    PyObject * field = PyObject_GetAttrString(_pymsg, "detect_motion");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->detect_motion = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robocon_interfaces__srv__image_analysis__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ImageAnalysis_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robocon_interfaces.srv._image_analysis");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ImageAnalysis_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robocon_interfaces__srv__ImageAnalysis_Request * ros_message = (robocon_interfaces__srv__ImageAnalysis_Request *)raw_ros_message;
  {  // analyze_brightness
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->analyze_brightness ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "analyze_brightness", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // detect_motion
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->detect_motion ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "detect_motion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "robocon_interfaces/srv/detail/image_analysis__struct.h"
// already included above
// #include "robocon_interfaces/srv/detail/image_analysis__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robocon_interfaces__srv__image_analysis__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robocon_interfaces.srv._image_analysis.ImageAnalysis_Response", full_classname_dest, 61) == 0);
  }
  robocon_interfaces__srv__ImageAnalysis_Response * ros_message = _ros_message;
  {  // avg_brightness
    PyObject * field = PyObject_GetAttrString(_pymsg, "avg_brightness");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->avg_brightness = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // motion_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion_detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->motion_detected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // analysis_result
    PyObject * field = PyObject_GetAttrString(_pymsg, "analysis_result");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->analysis_result, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robocon_interfaces__srv__image_analysis__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ImageAnalysis_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robocon_interfaces.srv._image_analysis");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ImageAnalysis_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robocon_interfaces__srv__ImageAnalysis_Response * ros_message = (robocon_interfaces__srv__ImageAnalysis_Response *)raw_ros_message;
  {  // avg_brightness
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->avg_brightness);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avg_brightness", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motion_detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->motion_detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analysis_result
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->analysis_result.data,
      strlen(ros_message->analysis_result.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "analysis_result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
