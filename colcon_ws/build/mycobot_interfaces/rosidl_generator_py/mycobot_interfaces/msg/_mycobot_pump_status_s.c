// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mycobot_interfaces:msg/MycobotPumpStatus.idl
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
#include "mycobot_interfaces/msg/detail/mycobot_pump_status__struct.h"
#include "mycobot_interfaces/msg/detail/mycobot_pump_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mycobot_interfaces__msg__mycobot_pump_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("mycobot_interfaces.msg._mycobot_pump_status.MycobotPumpStatus", full_classname_dest, 61) == 0);
  }
  mycobot_interfaces__msg__MycobotPumpStatus * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pin1
    PyObject * field = PyObject_GetAttrString(_pymsg, "pin1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pin1 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pin2
    PyObject * field = PyObject_GetAttrString(_pymsg, "pin2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pin2 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mycobot_interfaces__msg__mycobot_pump_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MycobotPumpStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mycobot_interfaces.msg._mycobot_pump_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MycobotPumpStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mycobot_interfaces__msg__MycobotPumpStatus * ros_message = (mycobot_interfaces__msg__MycobotPumpStatus *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pin1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pin1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pin1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pin2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pin2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pin2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
