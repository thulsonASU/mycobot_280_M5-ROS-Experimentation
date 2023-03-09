# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mypalletizer_interfaces:srv/GetAngles.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetAngles_Request(type):
    """Metaclass of message 'GetAngles_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mypalletizer_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mypalletizer_interfaces.srv.GetAngles_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_angles__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_angles__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_angles__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_angles__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_angles__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetAngles_Request(metaclass=Metaclass_GetAngles_Request):
    """Message class 'GetAngles_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetAngles_Response(type):
    """Metaclass of message 'GetAngles_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mypalletizer_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mypalletizer_interfaces.srv.GetAngles_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_angles__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_angles__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_angles__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_angles__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_angles__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetAngles_Response(metaclass=Metaclass_GetAngles_Response):
    """Message class 'GetAngles_Response'."""

    __slots__ = [
        '_joint_1',
        '_joint_2',
        '_joint_3',
        '_joint_4',
    ]

    _fields_and_field_types = {
        'joint_1': 'float',
        'joint_2': 'float',
        'joint_3': 'float',
        'joint_4': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint_1 = kwargs.get('joint_1', float())
        self.joint_2 = kwargs.get('joint_2', float())
        self.joint_3 = kwargs.get('joint_3', float())
        self.joint_4 = kwargs.get('joint_4', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.joint_1 != other.joint_1:
            return False
        if self.joint_2 != other.joint_2:
            return False
        if self.joint_3 != other.joint_3:
            return False
        if self.joint_4 != other.joint_4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint_1(self):
        """Message field 'joint_1'."""
        return self._joint_1

    @joint_1.setter
    def joint_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint_1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'joint_1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._joint_1 = value

    @builtins.property
    def joint_2(self):
        """Message field 'joint_2'."""
        return self._joint_2

    @joint_2.setter
    def joint_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint_2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'joint_2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._joint_2 = value

    @builtins.property
    def joint_3(self):
        """Message field 'joint_3'."""
        return self._joint_3

    @joint_3.setter
    def joint_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint_3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'joint_3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._joint_3 = value

    @builtins.property
    def joint_4(self):
        """Message field 'joint_4'."""
        return self._joint_4

    @joint_4.setter
    def joint_4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint_4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'joint_4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._joint_4 = value


class Metaclass_GetAngles(type):
    """Metaclass of service 'GetAngles'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mypalletizer_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mypalletizer_interfaces.srv.GetAngles')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_angles

            from mypalletizer_interfaces.srv import _get_angles
            if _get_angles.Metaclass_GetAngles_Request._TYPE_SUPPORT is None:
                _get_angles.Metaclass_GetAngles_Request.__import_type_support__()
            if _get_angles.Metaclass_GetAngles_Response._TYPE_SUPPORT is None:
                _get_angles.Metaclass_GetAngles_Response.__import_type_support__()


class GetAngles(metaclass=Metaclass_GetAngles):
    from mypalletizer_interfaces.srv._get_angles import GetAngles_Request as Request
    from mypalletizer_interfaces.srv._get_angles import GetAngles_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
