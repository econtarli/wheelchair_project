# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from spencer_tracking_msgs/CompositeDetectedPersons.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import spencer_tracking_msgs.msg
import std_msgs.msg

class CompositeDetectedPersons(genpy.Message):
  _md5sum = "c4f9f34f5cb712f010de12fc027da3e6"
  _type = "spencer_tracking_msgs/CompositeDetectedPersons"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# Message specifying which original detected persons (from all kinds of sensors) have been merged into one fused detection before being processed by the person tracker, in the current time step.
#
# This information is processed by the spencer_detected_person_association module, such that other perception components can associate their results (e.g. person age, gender)
# with a particular spencer_tracking_msgs/TrackedPerson (which contains a reference to a composite person detection ID).

Header                      header          # Header timestamp is set to the *latest* timestamp of all fused DetectedPerson messages.
                                            # Before fusion, all detections are transformed into a common coordinate frame (usually base_footprint).
CompositeDetectedPerson[]   elements        # Fused (merged) detected persons
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
string frame_id

================================================================================
MSG: spencer_tracking_msgs/CompositeDetectedPerson
# Specifies which detected persons have been merged into a composite detection by the spencer_detected_person_association module.

# TODO: Do we need a composite person-specific timestamp (or even a full message header including frame ID)?
# Having a separate timestamp per person could be useful if the timestamps of the merged DetectedPersons messages vary a lot,
# and some persons are only seen by a single sensor (so averaging over all input timestamps would have a detrimental effect). 

uint64      composite_detection_id          # ID of the fused detection

float64     mean_confidence                 # mean of the confidences of the original detections
float64     max_confidence                  # maximum confidence of original detections
float64     min_confidence                  # minimum confidence of original detections


geometry_msgs/PoseWithCovariance    pose    # Merged 3D pose (position + orientation) of the detection center
                                            # check covariance to see which dimensions are actually set!
                                            # unset dimensions shall have a covariance > 9999

DetectedPerson[] original_detections        # The original detections from individual sensor-specific detectors that have been combined into a composite detection
                                            # We are copying the entire DetectedPersons messages, *with poses transformed into the target frame*, such that subscribers
                                            # do not have to subscribe to all the original DetectedPersons topics.
================================================================================
MSG: geometry_msgs/PoseWithCovariance
# This represents a pose in free space with uncertainty.

Pose pose

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
float64[36] covariance

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
MSG: spencer_tracking_msgs/DetectedPerson
# Message describing a detection of a person
#

# Unique id of the detection, monotonically increasing over time
uint64          detection_id

# (Pseudo-)probabilistic value between 0.0 and 1.0 describing the detector's confidence in the detection
float64         confidence

# 3D pose (position + orientation) of the *center* of the detection
# check covariance to see which dimensions are actually set! unset dimensions shall have a covariance > 9999
geometry_msgs/PoseWithCovariance    pose    

# Sensor modality / detector type, see example constants below. 
# used e.g. later in tracking to check which tracks have been visually confirmed
string          modality            

                                    
string          MODALITY_GENERIC_LASER_2D = laser2d
string          MODALITY_GENERIC_LASER_3D = laser3d
string          MODALITY_GENERIC_MONOCULAR_VISION = mono
string          MODALITY_GENERIC_STEREO_VISION = stereo
string          MODALITY_GENERIC_RGBD = rgbd
"""
  __slots__ = ['header','elements']
  _slot_types = ['std_msgs/Header','spencer_tracking_msgs/CompositeDetectedPerson[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,elements

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CompositeDetectedPersons, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.elements is None:
        self.elements = []
    else:
      self.header = std_msgs.msg.Header()
      self.elements = []

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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.elements)
      buff.write(_struct_I.pack(length))
      for val1 in self.elements:
        _x = val1
        buff.write(_get_struct_Q3d().pack(_x.composite_detection_id, _x.mean_confidence, _x.max_confidence, _x.min_confidence))
        _v1 = val1.pose
        _v2 = _v1.pose
        _v3 = _v2.position
        _x = _v3
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v4 = _v2.orientation
        _x = _v4
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
        buff.write(_get_struct_36d().pack(*_v1.covariance))
        length = len(val1.original_detections)
        buff.write(_struct_I.pack(length))
        for val2 in val1.original_detections:
          _x = val2
          buff.write(_get_struct_Qd().pack(_x.detection_id, _x.confidence))
          _v5 = val2.pose
          _v6 = _v5.pose
          _v7 = _v6.position
          _x = _v7
          buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
          _v8 = _v6.orientation
          _x = _v8
          buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
          buff.write(_get_struct_36d().pack(*_v5.covariance))
          _x = val2.modality
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
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
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.elements is None:
        self.elements = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.elements = []
      for i in range(0, length):
        val1 = spencer_tracking_msgs.msg.CompositeDetectedPerson()
        _x = val1
        start = end
        end += 32
        (_x.composite_detection_id, _x.mean_confidence, _x.max_confidence, _x.min_confidence,) = _get_struct_Q3d().unpack(str[start:end])
        _v9 = val1.pose
        _v10 = _v9.pose
        _v11 = _v10.position
        _x = _v11
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v12 = _v10.orientation
        _x = _v12
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        start = end
        end += 288
        _v9.covariance = _get_struct_36d().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.original_detections = []
        for i in range(0, length):
          val2 = spencer_tracking_msgs.msg.DetectedPerson()
          _x = val2
          start = end
          end += 16
          (_x.detection_id, _x.confidence,) = _get_struct_Qd().unpack(str[start:end])
          _v13 = val2.pose
          _v14 = _v13.pose
          _v15 = _v14.position
          _x = _v15
          start = end
          end += 24
          (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
          _v16 = _v14.orientation
          _x = _v16
          start = end
          end += 32
          (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
          start = end
          end += 288
          _v13.covariance = _get_struct_36d().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.modality = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val2.modality = str[start:end]
          val1.original_detections.append(val2)
        self.elements.append(val1)
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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.elements)
      buff.write(_struct_I.pack(length))
      for val1 in self.elements:
        _x = val1
        buff.write(_get_struct_Q3d().pack(_x.composite_detection_id, _x.mean_confidence, _x.max_confidence, _x.min_confidence))
        _v17 = val1.pose
        _v18 = _v17.pose
        _v19 = _v18.position
        _x = _v19
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v20 = _v18.orientation
        _x = _v20
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
        buff.write(_v17.covariance.tostring())
        length = len(val1.original_detections)
        buff.write(_struct_I.pack(length))
        for val2 in val1.original_detections:
          _x = val2
          buff.write(_get_struct_Qd().pack(_x.detection_id, _x.confidence))
          _v21 = val2.pose
          _v22 = _v21.pose
          _v23 = _v22.position
          _x = _v23
          buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
          _v24 = _v22.orientation
          _x = _v24
          buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
          buff.write(_v21.covariance.tostring())
          _x = val2.modality
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
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
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.elements is None:
        self.elements = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.elements = []
      for i in range(0, length):
        val1 = spencer_tracking_msgs.msg.CompositeDetectedPerson()
        _x = val1
        start = end
        end += 32
        (_x.composite_detection_id, _x.mean_confidence, _x.max_confidence, _x.min_confidence,) = _get_struct_Q3d().unpack(str[start:end])
        _v25 = val1.pose
        _v26 = _v25.pose
        _v27 = _v26.position
        _x = _v27
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v28 = _v26.orientation
        _x = _v28
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        start = end
        end += 288
        _v25.covariance = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=36)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.original_detections = []
        for i in range(0, length):
          val2 = spencer_tracking_msgs.msg.DetectedPerson()
          _x = val2
          start = end
          end += 16
          (_x.detection_id, _x.confidence,) = _get_struct_Qd().unpack(str[start:end])
          _v29 = val2.pose
          _v30 = _v29.pose
          _v31 = _v30.position
          _x = _v31
          start = end
          end += 24
          (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
          _v32 = _v30.orientation
          _x = _v32
          start = end
          end += 32
          (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
          start = end
          end += 288
          _v29.covariance = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=36)
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.modality = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val2.modality = str[start:end]
          val1.original_detections.append(val2)
        self.elements.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_36d = None
def _get_struct_36d():
    global _struct_36d
    if _struct_36d is None:
        _struct_36d = struct.Struct("<36d")
    return _struct_36d
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
_struct_Q3d = None
def _get_struct_Q3d():
    global _struct_Q3d
    if _struct_Q3d is None:
        _struct_Q3d = struct.Struct("<Q3d")
    return _struct_Q3d
_struct_Qd = None
def _get_struct_Qd():
    global _struct_Qd
    if _struct_Qd is None:
        _struct_Qd = struct.Struct("<Qd")
    return _struct_Qd
