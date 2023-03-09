# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mycobot_interfaces:srv/PumpStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PumpStatus_Request(type):
    """Metaclass of message 'PumpStatus_Request'."""

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
            module = import_type_support('mycobot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mycobot_interfaces.srv.PumpStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pump_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pump_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pump_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pump_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pump_status__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PumpStatus_Request(metaclass=Metaclass_PumpStatus_Request):
    """Message class 'PumpStatus_Request'."""

    __slots__ = [
        '_status',
        '_pin1',
        '_pin2',
    ]

    _fields_and_field_types = {
        'status': 'boolean',
        'pin1': 'int8',
        'pin2': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', bool())
        self.pin1 = kwargs.get('pin1', int())
        self.pin2 = kwargs.get('pin2', int())

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
        if self.status != other.status:
            return False
        if self.pin1 != other.pin1:
            return False
        if self.pin2 != other.pin2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status' field must be of type 'bool'"
        self._status = value

    @builtins.property
    def pin1(self):
        """Message field 'pin1'."""
        return self._pin1

    @pin1.setter
    def pin1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pin1' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pin1' field must be an integer in [-128, 127]"
        self._pin1 = value

    @builtins.property
    def pin2(self):
        """Message field 'pin2'."""
        return self._pin2

    @pin2.setter
    def pin2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pin2' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pin2' field must be an integer in [-128, 127]"
        self._pin2 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PumpStatus_Response(type):
    """Metaclass of message 'PumpStatus_Response'."""

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
            module = import_type_support('mycobot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mycobot_interfaces.srv.PumpStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pump_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pump_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pump_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pump_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pump_status__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PumpStatus_Response(metaclass=Metaclass_PumpStatus_Response):
    """Message class 'PumpStatus_Response'."""

    __slots__ = [
        '_flag',
    ]

    _fields_and_field_types = {
        'flag': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.flag = kwargs.get('flag', bool())

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
        if self.flag != other.flag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def flag(self):
        """Message field 'flag'."""
        return self._flag

    @flag.setter
    def flag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag' field must be of type 'bool'"
        self._flag = value


class Metaclass_PumpStatus(type):
    """Metaclass of service 'PumpStatus'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mycobot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mycobot_interfaces.srv.PumpStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__pump_status

            from mycobot_interfaces.srv import _pump_status
            if _pump_status.Metaclass_PumpStatus_Request._TYPE_SUPPORT is None:
                _pump_status.Metaclass_PumpStatus_Request.__import_type_support__()
            if _pump_status.Metaclass_PumpStatus_Response._TYPE_SUPPORT is None:
                _pump_status.Metaclass_PumpStatus_Response.__import_type_support__()


class PumpStatus(metaclass=Metaclass_PumpStatus):
    from mycobot_interfaces.srv._pump_status import PumpStatus_Request as Request
    from mycobot_interfaces.srv._pump_status import PumpStatus_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')