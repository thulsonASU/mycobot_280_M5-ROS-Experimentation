// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mypalletizer_interfaces:msg/MypalSetAngles.idl
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
#include "mypalletizer_interfaces/msg/detail/mypal_set_angles__struct.h"
#include "mypalletizer_interfaces/msg/detail/mypal_set_angles__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mypalletizer_interfaces__msg__mypal_set_angles__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("mypalletizer_interfaces.msg._mypal_set_angles.MypalSetAngles", full_classname_dest, 60) == 0);
  }
  mypalletizer_interfaces__msg__MypalSetAngles * ros_message = _ros_message;
  {  // joint_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joint_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joint_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joint_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint_4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speed = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mypalletizer_interfaces__msg__mypal_set_angles__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MypalSetAngles */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mypalletizer_interfaces.msg._mypal_set_angles");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MypalSetAngles");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mypalletizer_interfaces__msg__MypalSetAngles * ros_message = (mypalletizer_interfaces__msg__MypalSetAngles *)raw_ros_message;
  {  // joint_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
