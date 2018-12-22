; Auto-generated. Do not edit!


(cl:in-package giskard_msgs-msg)


;//! \htmlinclude WholeBodyActionGoal.msg.html

(cl:defclass <WholeBodyActionGoal> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (goal_id
    :reader goal_id
    :initarg :goal_id
    :type actionlib_msgs-msg:GoalID
    :initform (cl:make-instance 'actionlib_msgs-msg:GoalID))
   (goal
    :reader goal
    :initarg :goal
    :type giskard_msgs-msg:WholeBodyGoal
    :initform (cl:make-instance 'giskard_msgs-msg:WholeBodyGoal)))
)

(cl:defclass WholeBodyActionGoal (<WholeBodyActionGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <WholeBodyActionGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'WholeBodyActionGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name giskard_msgs-msg:<WholeBodyActionGoal> is deprecated: use giskard_msgs-msg:WholeBodyActionGoal instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <WholeBodyActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader giskard_msgs-msg:header-val is deprecated.  Use giskard_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'goal_id-val :lambda-list '(m))
(cl:defmethod goal_id-val ((m <WholeBodyActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader giskard_msgs-msg:goal_id-val is deprecated.  Use giskard_msgs-msg:goal_id instead.")
  (goal_id m))

(cl:ensure-generic-function 'goal-val :lambda-list '(m))
(cl:defmethod goal-val ((m <WholeBodyActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader giskard_msgs-msg:goal-val is deprecated.  Use giskard_msgs-msg:goal instead.")
  (goal m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <WholeBodyActionGoal>) ostream)
  "Serializes a message object of type '<WholeBodyActionGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'goal_id) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'goal) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <WholeBodyActionGoal>) istream)
  "Deserializes a message object of type '<WholeBodyActionGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'goal_id) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'goal) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<WholeBodyActionGoal>)))
  "Returns string type for a message object of type '<WholeBodyActionGoal>"
  "giskard_msgs/WholeBodyActionGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'WholeBodyActionGoal)))
  "Returns string type for a message object of type 'WholeBodyActionGoal"
  "giskard_msgs/WholeBodyActionGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<WholeBodyActionGoal>)))
  "Returns md5sum for a message object of type '<WholeBodyActionGoal>"
  "5458bc9396abe90edb4f04c5d2df341b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'WholeBodyActionGoal)))
  "Returns md5sum for a message object of type 'WholeBodyActionGoal"
  "5458bc9396abe90edb4f04c5d2df341b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<WholeBodyActionGoal>)))
  "Returns full string definition for message of type '<WholeBodyActionGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%WholeBodyGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: giskard_msgs/WholeBodyGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# goal~%giskard_msgs/WholeBodyCommand command~%~%================================================================================~%MSG: giskard_msgs/WholeBodyCommand~%# A whole-body command message for a mobile manipulator with a morphology ~%# compatible with the PR2 robot. The message was designed to support alternative~%# ways of specifying a command.~%~%# definitions of possible values to use as type~%uint8 STANDARD_CONTROLLER=0~%uint8 YAML_CONTROLLER=1~%~%# use of the above constants to indicate the type of command~%uint8 type~%~%# standard controllers~%giskard_msgs/ArmCommand right_ee # command for right arm~%giskard_msgs/ArmCommand left_ee # command for left arm~%~%# yaml controllers~%string yaml_spec # complete specification of controller~%giskard_msgs/SemanticFloat64[] convergence_thresholds # thresholds used to decide convergence of motion~%~%================================================================================~%MSG: giskard_msgs/ArmCommand~%# A command message for robotic manipulators that exposes a couple~%# of alternative ways of specifying commands.~%~%# Definitions of possible values used for type~%uint8 IGNORE_GOAL=0 # Ignore the rest of this command.~%uint8 CARTESIAN_GOAL=1 # Use the PoseStamped.~%uint8 JOINT_GOAL=2 # Use the list of floats.~%~%# use one of the above constants to indicate the type of command~%uint8 type~%~%# Cartesian goal for the arm.~%# Note: The header will be used to resolve goal using tf.~%geometry_msgs/PoseStamped goal_pose~%~%# Joint goal for the arm.~%float64[] goal_configuration~%~%# List of internal double expressions with thresholds to decide convergence~%giskard_msgs/SemanticFloat64[] convergence_thresholds~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: giskard_msgs/SemanticFloat64~%# A floating-point with semantics hint attached.~%# Note: I know this is not much but better than just the number. ;)~%~%# Hint about the semantics of this number. Examples: frame_id, joint-name, or task dimension.~%string semantics~%# The actual value communicated.~%float64 value~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'WholeBodyActionGoal)))
  "Returns full string definition for message of type 'WholeBodyActionGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%WholeBodyGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: giskard_msgs/WholeBodyGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# goal~%giskard_msgs/WholeBodyCommand command~%~%================================================================================~%MSG: giskard_msgs/WholeBodyCommand~%# A whole-body command message for a mobile manipulator with a morphology ~%# compatible with the PR2 robot. The message was designed to support alternative~%# ways of specifying a command.~%~%# definitions of possible values to use as type~%uint8 STANDARD_CONTROLLER=0~%uint8 YAML_CONTROLLER=1~%~%# use of the above constants to indicate the type of command~%uint8 type~%~%# standard controllers~%giskard_msgs/ArmCommand right_ee # command for right arm~%giskard_msgs/ArmCommand left_ee # command for left arm~%~%# yaml controllers~%string yaml_spec # complete specification of controller~%giskard_msgs/SemanticFloat64[] convergence_thresholds # thresholds used to decide convergence of motion~%~%================================================================================~%MSG: giskard_msgs/ArmCommand~%# A command message for robotic manipulators that exposes a couple~%# of alternative ways of specifying commands.~%~%# Definitions of possible values used for type~%uint8 IGNORE_GOAL=0 # Ignore the rest of this command.~%uint8 CARTESIAN_GOAL=1 # Use the PoseStamped.~%uint8 JOINT_GOAL=2 # Use the list of floats.~%~%# use one of the above constants to indicate the type of command~%uint8 type~%~%# Cartesian goal for the arm.~%# Note: The header will be used to resolve goal using tf.~%geometry_msgs/PoseStamped goal_pose~%~%# Joint goal for the arm.~%float64[] goal_configuration~%~%# List of internal double expressions with thresholds to decide convergence~%giskard_msgs/SemanticFloat64[] convergence_thresholds~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: giskard_msgs/SemanticFloat64~%# A floating-point with semantics hint attached.~%# Note: I know this is not much but better than just the number. ;)~%~%# Hint about the semantics of this number. Examples: frame_id, joint-name, or task dimension.~%string semantics~%# The actual value communicated.~%float64 value~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <WholeBodyActionGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'goal_id))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'goal))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <WholeBodyActionGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'WholeBodyActionGoal
    (cl:cons ':header (header msg))
    (cl:cons ':goal_id (goal_id msg))
    (cl:cons ':goal (goal msg))
))