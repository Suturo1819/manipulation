; Auto-generated. Do not edit!


(cl:in-package giskard_msgs-msg)


;//! \htmlinclude ControllerListFeedback.msg.html

(cl:defclass <ControllerListFeedback> (roslisp-msg-protocol:ros-message)
  ((progress
    :reader progress
    :initarg :progress
    :type cl:float
    :initform 0.0))
)

(cl:defclass ControllerListFeedback (<ControllerListFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ControllerListFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ControllerListFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name giskard_msgs-msg:<ControllerListFeedback> is deprecated: use giskard_msgs-msg:ControllerListFeedback instead.")))

(cl:ensure-generic-function 'progress-val :lambda-list '(m))
(cl:defmethod progress-val ((m <ControllerListFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader giskard_msgs-msg:progress-val is deprecated.  Use giskard_msgs-msg:progress instead.")
  (progress m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ControllerListFeedback>) ostream)
  "Serializes a message object of type '<ControllerListFeedback>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'progress))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ControllerListFeedback>) istream)
  "Deserializes a message object of type '<ControllerListFeedback>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'progress) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ControllerListFeedback>)))
  "Returns string type for a message object of type '<ControllerListFeedback>"
  "giskard_msgs/ControllerListFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ControllerListFeedback)))
  "Returns string type for a message object of type 'ControllerListFeedback"
  "giskard_msgs/ControllerListFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ControllerListFeedback>)))
  "Returns md5sum for a message object of type '<ControllerListFeedback>"
  "7afca0099e0cddc25243b1e3569895fe")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ControllerListFeedback)))
  "Returns md5sum for a message object of type 'ControllerListFeedback"
  "7afca0099e0cddc25243b1e3569895fe")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ControllerListFeedback>)))
  "Returns full string definition for message of type '<ControllerListFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# feedback message~%~%# value between 0.0 and 1.0 that reports progress towards achieving the controller goals~%float64 progress~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ControllerListFeedback)))
  "Returns full string definition for message of type 'ControllerListFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# feedback message~%~%# value between 0.0 and 1.0 that reports progress towards achieving the controller goals~%float64 progress~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ControllerListFeedback>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ControllerListFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'ControllerListFeedback
    (cl:cons ':progress (progress msg))
))
