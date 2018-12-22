# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from giskard_msgs/CollisionEntry.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class CollisionEntry(genpy.Message):
  _md5sum = "9c58e7dbe61bb1840e7343233a9d145c"
  _type = "giskard_msgs/CollisionEntry"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# definitions of possible collision types to use for value
uint8 AVOID_COLLISION=0
uint8 ALLOW_COLLISION=1
uint8 AVOID_ALL_COLLISIONS=2
uint8 ALLOW_ALL_COLLISIONS=3

# use one of the above constants as collision type
uint8 type

# enforced minimum distance between the closest points on both surfaces
float64 min_dist

# link of the controlled robot, if left empty all links will be selected
string[] robot_links

# name of body B, i.e. the second body in the described collision, can also be the controlled robot
string body_b
# optional: link of the particular link on body B
## note: only works if body B is a multibody with a link with that name
# note: if left empty, the entire body B is selected
string[] link_bs

"""
  # Pseudo-constants
  AVOID_COLLISION = 0
  ALLOW_COLLISION = 1
  AVOID_ALL_COLLISIONS = 2
  ALLOW_ALL_COLLISIONS = 3

  __slots__ = ['type','min_dist','robot_links','body_b','link_bs']
  _slot_types = ['uint8','float64','string[]','string','string[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       type,min_dist,robot_links,body_b,link_bs

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CollisionEntry, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.type is None:
        self.type = 0
      if self.min_dist is None:
        self.min_dist = 0.
      if self.robot_links is None:
        self.robot_links = []
      if self.body_b is None:
        self.body_b = ''
      if self.link_bs is None:
        self.link_bs = []
    else:
      self.type = 0
      self.min_dist = 0.
      self.robot_links = []
      self.body_b = ''
      self.link_bs = []

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
      buff.write(_get_struct_Bd().pack(_x.type, _x.min_dist))
      length = len(self.robot_links)
      buff.write(_struct_I.pack(length))
      for val1 in self.robot_links:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
      _x = self.body_b
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.link_bs)
      buff.write(_struct_I.pack(length))
      for val1 in self.link_bs:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.type, _x.min_dist,) = _get_struct_Bd().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.robot_links = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.robot_links.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.body_b = str[start:end].decode('utf-8')
      else:
        self.body_b = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.link_bs = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.link_bs.append(val1)
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
      buff.write(_get_struct_Bd().pack(_x.type, _x.min_dist))
      length = len(self.robot_links)
      buff.write(_struct_I.pack(length))
      for val1 in self.robot_links:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
      _x = self.body_b
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.link_bs)
      buff.write(_struct_I.pack(length))
      for val1 in self.link_bs:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.type, _x.min_dist,) = _get_struct_Bd().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.robot_links = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.robot_links.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.body_b = str[start:end].decode('utf-8')
      else:
        self.body_b = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.link_bs = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.link_bs.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_Bd = None
def _get_struct_Bd():
    global _struct_Bd
    if _struct_Bd is None:
        _struct_Bd = struct.Struct("<Bd")
    return _struct_Bd
