; Auto-generated. Do not edit!


(cl:in-package move-msg)


;//! \htmlinclude DoMoveResult.msg.html

(cl:defclass <DoMoveResult> (roslisp-msg-protocol:ros-message)
  ((result_msg
    :reader result_msg
    :initarg :result_msg
    :type cl:string
    :initform ""))
)

(cl:defclass DoMoveResult (<DoMoveResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DoMoveResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DoMoveResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name move-msg:<DoMoveResult> is deprecated: use move-msg:DoMoveResult instead.")))

(cl:ensure-generic-function 'result_msg-val :lambda-list '(m))
(cl:defmethod result_msg-val ((m <DoMoveResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader move-msg:result_msg-val is deprecated.  Use move-msg:result_msg instead.")
  (result_msg m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DoMoveResult>) ostream)
  "Serializes a message object of type '<DoMoveResult>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'result_msg))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'result_msg))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DoMoveResult>) istream)
  "Deserializes a message object of type '<DoMoveResult>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'result_msg) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'result_msg) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DoMoveResult>)))
  "Returns string type for a message object of type '<DoMoveResult>"
  "move/DoMoveResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DoMoveResult)))
  "Returns string type for a message object of type 'DoMoveResult"
  "move/DoMoveResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DoMoveResult>)))
  "Returns md5sum for a message object of type '<DoMoveResult>"
  "703ead7875c7631df330d910113299f9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DoMoveResult)))
  "Returns md5sum for a message object of type 'DoMoveResult"
  "703ead7875c7631df330d910113299f9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DoMoveResult>)))
  "Returns full string definition for message of type '<DoMoveResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# define the result~%string result_msg~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DoMoveResult)))
  "Returns full string definition for message of type 'DoMoveResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# define the result~%string result_msg~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DoMoveResult>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'result_msg))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DoMoveResult>))
  "Converts a ROS message object to a list"
  (cl:list 'DoMoveResult
    (cl:cons ':result_msg (result_msg msg))
))