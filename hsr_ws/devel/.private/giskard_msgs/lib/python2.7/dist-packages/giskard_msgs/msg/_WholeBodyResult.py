# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from giskard_msgs/WholeBodyResult.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy
import giskard_msgs.msg
import std_msgs.msg

class WholeBodyResult(genpy.Message):
  _md5sum = "116144890e2eab71ae9010a22d3d9149"
  _type = "giskard_msgs/WholeBodyResult"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# result
giskard_msgs/WholeBodyState state

================================================================================
MSG: giskard_msgs/WholeBodyState
# only using timestamp for the moment
std_msgs/Header header

# feature values used to make decisions about succeeded actions
duration running_time
float64 left_arm_max_vel
float64 right_arm_max_vel
float64 torso_vel
giskard_msgs/SemanticFloat64[] convergence_values # internal values used to decide convergence

# classification results used to decide whether action succeeded
bool motion_started # true, as soon low-level controller has started execution the command
bool motion_old # true, if time passed since start of motion is above threshold
bool torso_moving # true, if torso velocity is above threshold
bool left_arm_moving # true, if velocity of any joint of left arm is above threshold
bool right_arm_moving # true, if velocity of any joint of right arm is above threshold
giskard_msgs/SemanticBool[] convergence_flags # true, if the corresponding feature values are below a threshold

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: giskard_msgs/SemanticFloat64
# A floating-point with semantics hint attached.
# Note: I know this is not much but better than just the number. ;)

# Hint about the semantics of this number. Examples: frame_id, joint-name, or task dimension.
string semantics
# The actual value communicated.
float64 value

================================================================================
MSG: giskard_msgs/SemanticBool
# A bool with semantics hint attached.
# Note: I know this is not much but better than just the bool. ;)

# Hint about the semantics of this number. Examples: frame_id, joint-name, or task dimension.
string semantics
# The actual value communicated.
bool value
"""
  __slots__ = ['state']
  _slot_types = ['giskard_msgs/WholeBodyState']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       state

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(WholeBodyResult, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.state is None:
        self.state = giskard_msgs.msg.WholeBodyState()
    else:
      self.state = giskard_msgs.msg.WholeBodyState()

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
      buff.write(_get_struct_3I().pack(_x.state.header.seq, _x.state.header.stamp.secs, _x.state.header.stamp.nsecs))
      _x = self.state.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2i3d().pack(_x.state.running_time.secs, _x.state.running_time.nsecs, _x.state.left_arm_max_vel, _x.state.right_arm_max_vel, _x.state.torso_vel))
      length = len(self.state.convergence_values)
      buff.write(_struct_I.pack(length))
      for val1 in self.state.convergence_values:
        _x = val1.semantics
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_d().pack(val1.value))
      _x = self
      buff.write(_get_struct_5B().pack(_x.state.motion_started, _x.state.motion_old, _x.state.torso_moving, _x.state.left_arm_moving, _x.state.right_arm_moving))
      length = len(self.state.convergence_flags)
      buff.write(_struct_I.pack(length))
      for val1 in self.state.convergence_flags:
        _x = val1.semantics
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_B().pack(val1.value))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.state is None:
        self.state = giskard_msgs.msg.WholeBodyState()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.state.header.seq, _x.state.header.stamp.secs, _x.state.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.state.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.state.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 32
      (_x.state.running_time.secs, _x.state.running_time.nsecs, _x.state.left_arm_max_vel, _x.state.right_arm_max_vel, _x.state.torso_vel,) = _get_struct_2i3d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.state.convergence_values = []
      for i in range(0, length):
        val1 = giskard_msgs.msg.SemanticFloat64()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.semantics = str[start:end].decode('utf-8')
        else:
          val1.semantics = str[start:end]
        start = end
        end += 8
        (val1.value,) = _get_struct_d().unpack(str[start:end])
        self.state.convergence_values.append(val1)
      _x = self
      start = end
      end += 5
      (_x.state.motion_started, _x.state.motion_old, _x.state.torso_moving, _x.state.left_arm_moving, _x.state.right_arm_moving,) = _get_struct_5B().unpack(str[start:end])
      self.state.motion_started = bool(self.state.motion_started)
      self.state.motion_old = bool(self.state.motion_old)
      self.state.torso_moving = bool(self.state.torso_moving)
      self.state.left_arm_moving = bool(self.state.left_arm_moving)
      self.state.right_arm_moving = bool(self.state.right_arm_moving)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.state.convergence_flags = []
      for i in range(0, length):
        val1 = giskard_msgs.msg.SemanticBool()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.semantics = str[start:end].decode('utf-8')
        else:
          val1.semantics = str[start:end]
        start = end
        end += 1
        (val1.value,) = _get_struct_B().unpack(str[start:end])
        val1.value = bool(val1.value)
        self.state.convergence_flags.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.state.header.seq, _x.state.header.stamp.secs, _x.state.header.stamp.nsecs))
      _x = self.state.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2i3d().pack(_x.state.running_time.secs, _x.state.running_time.nsecs, _x.state.left_arm_max_vel, _x.state.right_arm_max_vel, _x.state.torso_vel))
      length = len(self.state.convergence_values)
      buff.write(_struct_I.pack(length))
      for val1 in self.state.convergence_values:
        _x = val1.semantics
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_d().pack(val1.value))
      _x = self
      buff.write(_get_struct_5B().pack(_x.state.motion_started, _x.state.motion_old, _x.state.torso_moving, _x.state.left_arm_moving, _x.state.right_arm_moving))
      length = len(self.state.convergence_flags)
      buff.write(_struct_I.pack(length))
      for val1 in self.state.convergence_flags:
        _x = val1.semantics
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_B().pack(val1.value))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.state is None:
        self.state = giskard_msgs.msg.WholeBodyState()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.state.header.seq, _x.state.header.stamp.secs, _x.state.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.state.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.state.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 32
      (_x.state.running_time.secs, _x.state.running_time.nsecs, _x.state.left_arm_max_vel, _x.state.right_arm_max_vel, _x.state.torso_vel,) = _get_struct_2i3d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.state.convergence_values = []
      for i in range(0, length):
        val1 = giskard_msgs.msg.SemanticFloat64()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.semantics = str[start:end].decode('utf-8')
        else:
          val1.semantics = str[start:end]
        start = end
        end += 8
        (val1.value,) = _get_struct_d().unpack(str[start:end])
        self.state.convergence_values.append(val1)
      _x = self
      start = end
      end += 5
      (_x.state.motion_started, _x.state.motion_old, _x.state.torso_moving, _x.state.left_arm_moving, _x.state.right_arm_moving,) = _get_struct_5B().unpack(str[start:end])
      self.state.motion_started = bool(self.state.motion_started)
      self.state.motion_old = bool(self.state.motion_old)
      self.state.torso_moving = bool(self.state.torso_moving)
      self.state.left_arm_moving = bool(self.state.left_arm_moving)
      self.state.right_arm_moving = bool(self.state.right_arm_moving)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.state.convergence_flags = []
      for i in range(0, length):
        val1 = giskard_msgs.msg.SemanticBool()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.semantics = str[start:end].decode('utf-8')
        else:
          val1.semantics = str[start:end]
        start = end
        end += 1
        (val1.value,) = _get_struct_B().unpack(str[start:end])
        val1.value = bool(val1.value)
        self.state.convergence_flags.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_5B = None
def _get_struct_5B():
    global _struct_5B
    if _struct_5B is None:
        _struct_5B = struct.Struct("<5B")
    return _struct_5B
_struct_2i3d = None
def _get_struct_2i3d():
    global _struct_2i3d
    if _struct_2i3d is None:
        _struct_2i3d = struct.Struct("<2i3d")
    return _struct_2i3d
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_d = None
def _get_struct_d():
    global _struct_d
    if _struct_d is None:
        _struct_d = struct.Struct("<d")
    return _struct_d
