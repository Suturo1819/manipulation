# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from giskard_msgs/ControllerListGoal.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import sensor_msgs.msg
import geometry_msgs.msg
import giskard_msgs.msg
import std_msgs.msg

class ControllerListGoal(genpy.Message):
  _md5sum = "582aca5a6624e5c5864af311c24b71bf"
  _type = "giskard_msgs/ControllerListGoal"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# goal message

# definitions of possible values to use as type
uint8 STANDARD_CONTROLLER=0
uint8 YAML_CONTROLLER=1

# use of the above constants to indicate the type of command
uint8 type

# list of controller specifications to run
# will only be interpreted if type==STANDARD_CONTROLLER
giskard_msgs/Controller[] controllers

# YAML description of a controller to run
# will only be interpreted if type==YAML_CONTROLLER
string yaml

================================================================================
MSG: giskard_msgs/Controller
# definitions of possible values to use as type
uint8 UNDEFINED=0
uint8 JOINT=1
uint8 TRANSLATION_3D=2
uint8 ROTATION_3D=3

# use of the above constants to indicate the type of controller
uint8 type

# Name of the link that is at the start of the controlled kinematic chain
string root_link

# Name of the link that is at the end of the controlled kinematic chain
string tip_link 

# Proportional gain used by the controller
float64 p_gain

# Weight assigned to the controller within the cost-function solved in each cycle
float64 weight

# Maximum speed
# m/s if type==TRANSLATION_3D
# rad/s if type==ROTATION_3D
# min(max_speed, joint_velocity_limit_specified_in_urdf) if type==JOINT
float64 max_speed

# controller goal, interpretation depends on value in type field
# JOINT: ignores this field
# TRANSLATION_3D: desired translation of tip_link relative to root_link
# ROTATION_3D: desired orientation of tip_link relative to root_link
geometry_msgs/PoseStamped goal_pose

# controller goal, interpretation depends on value in type field
# JOINT: reads the position values for all joints in the kinematic chain between root_link and tip_link
# TRANSLATION_3D: ignores this field
# ROTATION_3D: ignores this field
sensor_msgs/JointState goal_state

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
MSG: sensor_msgs/JointState
# This is a message that holds data to describe the state of a set of torque controlled joints. 
#
# The state of each joint (revolute or prismatic) is defined by:
#  * the position of the joint (rad or m),
#  * the velocity of the joint (rad/s or m/s) and 
#  * the effort that is applied in the joint (Nm or N).
#
# Each joint is uniquely identified by its name
# The header specifies the time at which the joint states were recorded. All the joint states
# in one message have to be recorded at the same time.
#
# This message consists of a multiple arrays, one for each part of the joint state. 
# The goal is to make each of the fields optional. When e.g. your joints have no
# effort associated with them, you can leave the effort array empty. 
#
# All arrays in this message should have the same size, or be empty.
# This is the only way to uniquely associate the joint name with the correct
# states.


Header header

string[] name
float64[] position
float64[] velocity
float64[] effort
"""
  # Pseudo-constants
  STANDARD_CONTROLLER = 0
  YAML_CONTROLLER = 1

  __slots__ = ['type','controllers','yaml']
  _slot_types = ['uint8','giskard_msgs/Controller[]','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       type,controllers,yaml

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ControllerListGoal, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.type is None:
        self.type = 0
      if self.controllers is None:
        self.controllers = []
      if self.yaml is None:
        self.yaml = ''
    else:
      self.type = 0
      self.controllers = []
      self.yaml = ''

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
      buff.write(_get_struct_B().pack(self.type))
      length = len(self.controllers)
      buff.write(_struct_I.pack(length))
      for val1 in self.controllers:
        buff.write(_get_struct_B().pack(val1.type))
        _x = val1.root_link
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.tip_link
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_get_struct_3d().pack(_x.p_gain, _x.weight, _x.max_speed))
        _v1 = val1.goal_pose
        _v2 = _v1.header
        buff.write(_get_struct_I().pack(_v2.seq))
        _v3 = _v2.stamp
        _x = _v3
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v2.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v4 = _v1.pose
        _v5 = _v4.position
        _x = _v5
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v6 = _v4.orientation
        _x = _v6
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
        _v7 = val1.goal_state
        _v8 = _v7.header
        buff.write(_get_struct_I().pack(_v8.seq))
        _v9 = _v8.stamp
        _x = _v9
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v8.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        length = len(_v7.name)
        buff.write(_struct_I.pack(length))
        for val3 in _v7.name:
          length = len(val3)
          if python3 or type(val3) == unicode:
            val3 = val3.encode('utf-8')
            length = len(val3)
          buff.write(struct.pack('<I%ss'%length, length, val3))
        length = len(_v7.position)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(struct.pack(pattern, *_v7.position))
        length = len(_v7.velocity)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(struct.pack(pattern, *_v7.velocity))
        length = len(_v7.effort)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(struct.pack(pattern, *_v7.effort))
      _x = self.yaml
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.controllers is None:
        self.controllers = None
      end = 0
      start = end
      end += 1
      (self.type,) = _get_struct_B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.controllers = []
      for i in range(0, length):
        val1 = giskard_msgs.msg.Controller()
        start = end
        end += 1
        (val1.type,) = _get_struct_B().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.root_link = str[start:end].decode('utf-8')
        else:
          val1.root_link = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.tip_link = str[start:end].decode('utf-8')
        else:
          val1.tip_link = str[start:end]
        _x = val1
        start = end
        end += 24
        (_x.p_gain, _x.weight, _x.max_speed,) = _get_struct_3d().unpack(str[start:end])
        _v10 = val1.goal_pose
        _v11 = _v10.header
        start = end
        end += 4
        (_v11.seq,) = _get_struct_I().unpack(str[start:end])
        _v12 = _v11.stamp
        _x = _v12
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v11.frame_id = str[start:end].decode('utf-8')
        else:
          _v11.frame_id = str[start:end]
        _v13 = _v10.pose
        _v14 = _v13.position
        _x = _v14
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v15 = _v13.orientation
        _x = _v15
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        _v16 = val1.goal_state
        _v17 = _v16.header
        start = end
        end += 4
        (_v17.seq,) = _get_struct_I().unpack(str[start:end])
        _v18 = _v17.stamp
        _x = _v18
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v17.frame_id = str[start:end].decode('utf-8')
        else:
          _v17.frame_id = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        _v16.name = []
        for i in range(0, length):
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val3 = str[start:end].decode('utf-8')
          else:
            val3 = str[start:end]
          _v16.name.append(val3)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        end += struct.calcsize(pattern)
        _v16.position = struct.unpack(pattern, str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        end += struct.calcsize(pattern)
        _v16.velocity = struct.unpack(pattern, str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        end += struct.calcsize(pattern)
        _v16.effort = struct.unpack(pattern, str[start:end])
        self.controllers.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.yaml = str[start:end].decode('utf-8')
      else:
        self.yaml = str[start:end]
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
      buff.write(_get_struct_B().pack(self.type))
      length = len(self.controllers)
      buff.write(_struct_I.pack(length))
      for val1 in self.controllers:
        buff.write(_get_struct_B().pack(val1.type))
        _x = val1.root_link
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.tip_link
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_get_struct_3d().pack(_x.p_gain, _x.weight, _x.max_speed))
        _v19 = val1.goal_pose
        _v20 = _v19.header
        buff.write(_get_struct_I().pack(_v20.seq))
        _v21 = _v20.stamp
        _x = _v21
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v20.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v22 = _v19.pose
        _v23 = _v22.position
        _x = _v23
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v24 = _v22.orientation
        _x = _v24
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
        _v25 = val1.goal_state
        _v26 = _v25.header
        buff.write(_get_struct_I().pack(_v26.seq))
        _v27 = _v26.stamp
        _x = _v27
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v26.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        length = len(_v25.name)
        buff.write(_struct_I.pack(length))
        for val3 in _v25.name:
          length = len(val3)
          if python3 or type(val3) == unicode:
            val3 = val3.encode('utf-8')
            length = len(val3)
          buff.write(struct.pack('<I%ss'%length, length, val3))
        length = len(_v25.position)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(_v25.position.tostring())
        length = len(_v25.velocity)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(_v25.velocity.tostring())
        length = len(_v25.effort)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(_v25.effort.tostring())
      _x = self.yaml
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.controllers is None:
        self.controllers = None
      end = 0
      start = end
      end += 1
      (self.type,) = _get_struct_B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.controllers = []
      for i in range(0, length):
        val1 = giskard_msgs.msg.Controller()
        start = end
        end += 1
        (val1.type,) = _get_struct_B().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.root_link = str[start:end].decode('utf-8')
        else:
          val1.root_link = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.tip_link = str[start:end].decode('utf-8')
        else:
          val1.tip_link = str[start:end]
        _x = val1
        start = end
        end += 24
        (_x.p_gain, _x.weight, _x.max_speed,) = _get_struct_3d().unpack(str[start:end])
        _v28 = val1.goal_pose
        _v29 = _v28.header
        start = end
        end += 4
        (_v29.seq,) = _get_struct_I().unpack(str[start:end])
        _v30 = _v29.stamp
        _x = _v30
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v29.frame_id = str[start:end].decode('utf-8')
        else:
          _v29.frame_id = str[start:end]
        _v31 = _v28.pose
        _v32 = _v31.position
        _x = _v32
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v33 = _v31.orientation
        _x = _v33
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        _v34 = val1.goal_state
        _v35 = _v34.header
        start = end
        end += 4
        (_v35.seq,) = _get_struct_I().unpack(str[start:end])
        _v36 = _v35.stamp
        _x = _v36
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v35.frame_id = str[start:end].decode('utf-8')
        else:
          _v35.frame_id = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        _v34.name = []
        for i in range(0, length):
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val3 = str[start:end].decode('utf-8')
          else:
            val3 = str[start:end]
          _v34.name.append(val3)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        end += struct.calcsize(pattern)
        _v34.position = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        end += struct.calcsize(pattern)
        _v34.velocity = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        end += struct.calcsize(pattern)
        _v34.effort = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
        self.controllers.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.yaml = str[start:end].decode('utf-8')
      else:
        self.yaml = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
