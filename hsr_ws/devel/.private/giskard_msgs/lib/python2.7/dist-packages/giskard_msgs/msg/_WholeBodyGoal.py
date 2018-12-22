# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from giskard_msgs/WholeBodyGoal.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import giskard_msgs.msg
import std_msgs.msg

class WholeBodyGoal(genpy.Message):
  _md5sum = "9b97f32e56852874fece424a12234894"
  _type = "giskard_msgs/WholeBodyGoal"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# goal
giskard_msgs/WholeBodyCommand command

================================================================================
MSG: giskard_msgs/WholeBodyCommand
# A whole-body command message for a mobile manipulator with a morphology 
# compatible with the PR2 robot. The message was designed to support alternative
# ways of specifying a command.

# definitions of possible values to use as type
uint8 STANDARD_CONTROLLER=0
uint8 YAML_CONTROLLER=1

# use of the above constants to indicate the type of command
uint8 type

# standard controllers
giskard_msgs/ArmCommand right_ee # command for right arm
giskard_msgs/ArmCommand left_ee # command for left arm

# yaml controllers
string yaml_spec # complete specification of controller
giskard_msgs/SemanticFloat64[] convergence_thresholds # thresholds used to decide convergence of motion

================================================================================
MSG: giskard_msgs/ArmCommand
# A command message for robotic manipulators that exposes a couple
# of alternative ways of specifying commands.

# Definitions of possible values used for type
uint8 IGNORE_GOAL=0 # Ignore the rest of this command.
uint8 CARTESIAN_GOAL=1 # Use the PoseStamped.
uint8 JOINT_GOAL=2 # Use the list of floats.

# use one of the above constants to indicate the type of command
uint8 type

# Cartesian goal for the arm.
# Note: The header will be used to resolve goal using tf.
geometry_msgs/PoseStamped goal_pose

# Joint goal for the arm.
float64[] goal_configuration

# List of internal double expressions with thresholds to decide convergence
giskard_msgs/SemanticFloat64[] convergence_thresholds

================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

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
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: giskard_msgs/SemanticFloat64
# A floating-point with semantics hint attached.
# Note: I know this is not much but better than just the number. ;)

# Hint about the semantics of this number. Examples: frame_id, joint-name, or task dimension.
string semantics
# The actual value communicated.
float64 value
"""
  __slots__ = ['command']
  _slot_types = ['giskard_msgs/WholeBodyCommand']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       command

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(WholeBodyGoal, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.command is None:
        self.command = giskard_msgs.msg.WholeBodyCommand()
    else:
      self.command = giskard_msgs.msg.WholeBodyCommand()

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
      buff.write(_get_struct_2B3I().pack(_x.command.type, _x.command.right_ee.type, _x.command.right_ee.goal_pose.header.seq, _x.command.right_ee.goal_pose.header.stamp.secs, _x.command.right_ee.goal_pose.header.stamp.nsecs))
      _x = self.command.right_ee.goal_pose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_7d().pack(_x.command.right_ee.goal_pose.pose.position.x, _x.command.right_ee.goal_pose.pose.position.y, _x.command.right_ee.goal_pose.pose.position.z, _x.command.right_ee.goal_pose.pose.orientation.x, _x.command.right_ee.goal_pose.pose.orientation.y, _x.command.right_ee.goal_pose.pose.orientation.z, _x.command.right_ee.goal_pose.pose.orientation.w))
      length = len(self.command.right_ee.goal_configuration)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.command.right_ee.goal_configuration))
      length = len(self.command.right_ee.convergence_thresholds)
      buff.write(_struct_I.pack(length))
      for val1 in self.command.right_ee.convergence_thresholds:
        _x = val1.semantics
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_d().pack(val1.value))
      _x = self
      buff.write(_get_struct_B3I().pack(_x.command.left_ee.type, _x.command.left_ee.goal_pose.header.seq, _x.command.left_ee.goal_pose.header.stamp.secs, _x.command.left_ee.goal_pose.header.stamp.nsecs))
      _x = self.command.left_ee.goal_pose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_7d().pack(_x.command.left_ee.goal_pose.pose.position.x, _x.command.left_ee.goal_pose.pose.position.y, _x.command.left_ee.goal_pose.pose.position.z, _x.command.left_ee.goal_pose.pose.orientation.x, _x.command.left_ee.goal_pose.pose.orientation.y, _x.command.left_ee.goal_pose.pose.orientation.z, _x.command.left_ee.goal_pose.pose.orientation.w))
      length = len(self.command.left_ee.goal_configuration)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.command.left_ee.goal_configuration))
      length = len(self.command.left_ee.convergence_thresholds)
      buff.write(_struct_I.pack(length))
      for val1 in self.command.left_ee.convergence_thresholds:
        _x = val1.semantics
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_d().pack(val1.value))
      _x = self.command.yaml_spec
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.command.convergence_thresholds)
      buff.write(_struct_I.pack(length))
      for val1 in self.command.convergence_thresholds:
        _x = val1.semantics
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_d().pack(val1.value))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.command is None:
        self.command = giskard_msgs.msg.WholeBodyCommand()
      end = 0
      _x = self
      start = end
      end += 14
      (_x.command.type, _x.command.right_ee.type, _x.command.right_ee.goal_pose.header.seq, _x.command.right_ee.goal_pose.header.stamp.secs, _x.command.right_ee.goal_pose.header.stamp.nsecs,) = _get_struct_2B3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.command.right_ee.goal_pose.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.command.right_ee.goal_pose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.command.right_ee.goal_pose.pose.position.x, _x.command.right_ee.goal_pose.pose.position.y, _x.command.right_ee.goal_pose.pose.position.z, _x.command.right_ee.goal_pose.pose.orientation.x, _x.command.right_ee.goal_pose.pose.orientation.y, _x.command.right_ee.goal_pose.pose.orientation.z, _x.command.right_ee.goal_pose.pose.orientation.w,) = _get_struct_7d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.command.right_ee.goal_configuration = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.command.right_ee.convergence_thresholds = []
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
        self.command.right_ee.convergence_thresholds.append(val1)
      _x = self
      start = end
      end += 13
      (_x.command.left_ee.type, _x.command.left_ee.goal_pose.header.seq, _x.command.left_ee.goal_pose.header.stamp.secs, _x.command.left_ee.goal_pose.header.stamp.nsecs,) = _get_struct_B3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.command.left_ee.goal_pose.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.command.left_ee.goal_pose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.command.left_ee.goal_pose.pose.position.x, _x.command.left_ee.goal_pose.pose.position.y, _x.command.left_ee.goal_pose.pose.position.z, _x.command.left_ee.goal_pose.pose.orientation.x, _x.command.left_ee.goal_pose.pose.orientation.y, _x.command.left_ee.goal_pose.pose.orientation.z, _x.command.left_ee.goal_pose.pose.orientation.w,) = _get_struct_7d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.command.left_ee.goal_configuration = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.command.left_ee.convergence_thresholds = []
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
        self.command.left_ee.convergence_thresholds.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.command.yaml_spec = str[start:end].decode('utf-8')
      else:
        self.command.yaml_spec = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.command.convergence_thresholds = []
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
        self.command.convergence_thresholds.append(val1)
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
      buff.write(_get_struct_2B3I().pack(_x.command.type, _x.command.right_ee.type, _x.command.right_ee.goal_pose.header.seq, _x.command.right_ee.goal_pose.header.stamp.secs, _x.command.right_ee.goal_pose.header.stamp.nsecs))
      _x = self.command.right_ee.goal_pose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_7d().pack(_x.command.right_ee.goal_pose.pose.position.x, _x.command.right_ee.goal_pose.pose.position.y, _x.command.right_ee.goal_pose.pose.position.z, _x.command.right_ee.goal_pose.pose.orientation.x, _x.command.right_ee.goal_pose.pose.orientation.y, _x.command.right_ee.goal_pose.pose.orientation.z, _x.command.right_ee.goal_pose.pose.orientation.w))
      length = len(self.command.right_ee.goal_configuration)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.command.right_ee.goal_configuration.tostring())
      length = len(self.command.right_ee.convergence_thresholds)
      buff.write(_struct_I.pack(length))
      for val1 in self.command.right_ee.convergence_thresholds:
        _x = val1.semantics
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_d().pack(val1.value))
      _x = self
      buff.write(_get_struct_B3I().pack(_x.command.left_ee.type, _x.command.left_ee.goal_pose.header.seq, _x.command.left_ee.goal_pose.header.stamp.secs, _x.command.left_ee.goal_pose.header.stamp.nsecs))
      _x = self.command.left_ee.goal_pose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_7d().pack(_x.command.left_ee.goal_pose.pose.position.x, _x.command.left_ee.goal_pose.pose.position.y, _x.command.left_ee.goal_pose.pose.position.z, _x.command.left_ee.goal_pose.pose.orientation.x, _x.command.left_ee.goal_pose.pose.orientation.y, _x.command.left_ee.goal_pose.pose.orientation.z, _x.command.left_ee.goal_pose.pose.orientation.w))
      length = len(self.command.left_ee.goal_configuration)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.command.left_ee.goal_configuration.tostring())
      length = len(self.command.left_ee.convergence_thresholds)
      buff.write(_struct_I.pack(length))
      for val1 in self.command.left_ee.convergence_thresholds:
        _x = val1.semantics
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_d().pack(val1.value))
      _x = self.command.yaml_spec
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.command.convergence_thresholds)
      buff.write(_struct_I.pack(length))
      for val1 in self.command.convergence_thresholds:
        _x = val1.semantics
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_d().pack(val1.value))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.command is None:
        self.command = giskard_msgs.msg.WholeBodyCommand()
      end = 0
      _x = self
      start = end
      end += 14
      (_x.command.type, _x.command.right_ee.type, _x.command.right_ee.goal_pose.header.seq, _x.command.right_ee.goal_pose.header.stamp.secs, _x.command.right_ee.goal_pose.header.stamp.nsecs,) = _get_struct_2B3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.command.right_ee.goal_pose.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.command.right_ee.goal_pose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.command.right_ee.goal_pose.pose.position.x, _x.command.right_ee.goal_pose.pose.position.y, _x.command.right_ee.goal_pose.pose.position.z, _x.command.right_ee.goal_pose.pose.orientation.x, _x.command.right_ee.goal_pose.pose.orientation.y, _x.command.right_ee.goal_pose.pose.orientation.z, _x.command.right_ee.goal_pose.pose.orientation.w,) = _get_struct_7d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.command.right_ee.goal_configuration = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.command.right_ee.convergence_thresholds = []
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
        self.command.right_ee.convergence_thresholds.append(val1)
      _x = self
      start = end
      end += 13
      (_x.command.left_ee.type, _x.command.left_ee.goal_pose.header.seq, _x.command.left_ee.goal_pose.header.stamp.secs, _x.command.left_ee.goal_pose.header.stamp.nsecs,) = _get_struct_B3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.command.left_ee.goal_pose.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.command.left_ee.goal_pose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.command.left_ee.goal_pose.pose.position.x, _x.command.left_ee.goal_pose.pose.position.y, _x.command.left_ee.goal_pose.pose.position.z, _x.command.left_ee.goal_pose.pose.orientation.x, _x.command.left_ee.goal_pose.pose.orientation.y, _x.command.left_ee.goal_pose.pose.orientation.z, _x.command.left_ee.goal_pose.pose.orientation.w,) = _get_struct_7d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.command.left_ee.goal_configuration = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.command.left_ee.convergence_thresholds = []
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
        self.command.left_ee.convergence_thresholds.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.command.yaml_spec = str[start:end].decode('utf-8')
      else:
        self.command.yaml_spec = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.command.convergence_thresholds = []
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
        self.command.convergence_thresholds.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2B3I = None
def _get_struct_2B3I():
    global _struct_2B3I
    if _struct_2B3I is None:
        _struct_2B3I = struct.Struct("<2B3I")
    return _struct_2B3I
_struct_7d = None
def _get_struct_7d():
    global _struct_7d
    if _struct_7d is None:
        _struct_7d = struct.Struct("<7d")
    return _struct_7d
_struct_d = None
def _get_struct_d():
    global _struct_d
    if _struct_d is None:
        _struct_d = struct.Struct("<d")
    return _struct_d
_struct_B3I = None
def _get_struct_B3I():
    global _struct_B3I
    if _struct_B3I is None:
        _struct_B3I = struct.Struct("<B3I")
    return _struct_B3I
