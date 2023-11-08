# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from myarm_communication/MyArmAngles.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class MyArmAngles(genpy.Message):
  _md5sum = "a5ee1c157b4205d64d317ae102e83e8c"
  _type = "myarm_communication/MyArmAngles"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float32 joint_1
float32 joint_2
float32 joint_3
float32 joint_4
float32 joint_5
float32 joint_6
float32 joint_7
"""
  __slots__ = ['joint_1','joint_2','joint_3','joint_4','joint_5','joint_6','joint_7']
  _slot_types = ['float32','float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       joint_1,joint_2,joint_3,joint_4,joint_5,joint_6,joint_7

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MyArmAngles, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.joint_1 is None:
        self.joint_1 = 0.
      if self.joint_2 is None:
        self.joint_2 = 0.
      if self.joint_3 is None:
        self.joint_3 = 0.
      if self.joint_4 is None:
        self.joint_4 = 0.
      if self.joint_5 is None:
        self.joint_5 = 0.
      if self.joint_6 is None:
        self.joint_6 = 0.
      if self.joint_7 is None:
        self.joint_7 = 0.
    else:
      self.joint_1 = 0.
      self.joint_2 = 0.
      self.joint_3 = 0.
      self.joint_4 = 0.
      self.joint_5 = 0.
      self.joint_6 = 0.
      self.joint_7 = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_7f().pack(_x.joint_1, _x.joint_2, _x.joint_3, _x.joint_4, _x.joint_5, _x.joint_6, _x.joint_7))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 28
      (_x.joint_1, _x.joint_2, _x.joint_3, _x.joint_4, _x.joint_5, _x.joint_6, _x.joint_7,) = _get_struct_7f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_7f().pack(_x.joint_1, _x.joint_2, _x.joint_3, _x.joint_4, _x.joint_5, _x.joint_6, _x.joint_7))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 28
      (_x.joint_1, _x.joint_2, _x.joint_3, _x.joint_4, _x.joint_5, _x.joint_6, _x.joint_7,) = _get_struct_7f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_7f = None
def _get_struct_7f():
    global _struct_7f
    if _struct_7f is None:
        _struct_7f = struct.Struct("<7f")
    return _struct_7f
