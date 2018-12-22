// Auto-generated. Do not edit!

// (in-package giskard_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let WholeBodyFeedback = require('./WholeBodyFeedback.js');
let actionlib_msgs = _finder('actionlib_msgs');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class WholeBodyActionFeedback {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.status = null;
      this.feedback = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('status')) {
        this.status = initObj.status
      }
      else {
        this.status = new actionlib_msgs.msg.GoalStatus();
      }
      if (initObj.hasOwnProperty('feedback')) {
        this.feedback = initObj.feedback
      }
      else {
        this.feedback = new WholeBodyFeedback();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type WholeBodyActionFeedback
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [status]
    bufferOffset = actionlib_msgs.msg.GoalStatus.serialize(obj.status, buffer, bufferOffset);
    // Serialize message field [feedback]
    bufferOffset = WholeBodyFeedback.serialize(obj.feedback, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type WholeBodyActionFeedback
    let len;
    let data = new WholeBodyActionFeedback(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [status]
    data.status = actionlib_msgs.msg.GoalStatus.deserialize(buffer, bufferOffset);
    // Deserialize message field [feedback]
    data.feedback = WholeBodyFeedback.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += actionlib_msgs.msg.GoalStatus.getMessageSize(object.status);
    length += WholeBodyFeedback.getMessageSize(object.feedback);
    return length;
  }

  static datatype() {
    // Returns string type for a message object
    return 'giskard_msgs/WholeBodyActionFeedback';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '2fe8120d0c8b84b43b3d8eacae55a6a4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    Header header
    actionlib_msgs/GoalStatus status
    WholeBodyFeedback feedback
    
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
    MSG: actionlib_msgs/GoalStatus
    GoalID goal_id
    uint8 status
    uint8 PENDING         = 0   # The goal has yet to be processed by the action server
    uint8 ACTIVE          = 1   # The goal is currently being processed by the action server
    uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing
                                #   and has since completed its execution (Terminal State)
    uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)
    uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due
                                #    to some failure (Terminal State)
    uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,
                                #    because the goal was unattainable or invalid (Terminal State)
    uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing
                                #    and has not yet completed execution
    uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,
                                #    but the action server has not yet confirmed that the goal is canceled
    uint8 RECALLED        = 8   # The goal received a cancel request before it started executing
                                #    and was successfully cancelled (Terminal State)
    uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be
                                #    sent over the wire by an action server
    
    #Allow for the user to associate a string with GoalStatus for debugging
    string text
    
    
    ================================================================================
    MSG: actionlib_msgs/GoalID
    # The stamp should store the time at which this goal was requested.
    # It is used by an action server when it tries to preempt all
    # goals that were requested before a certain time
    time stamp
    
    # The id provides a way to associate feedback and
    # result message with specific goal requests. The id
    # specified must be unique.
    string id
    
    
    ================================================================================
    MSG: giskard_msgs/WholeBodyFeedback
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # feedback
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new WholeBodyActionFeedback(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.status !== undefined) {
      resolved.status = actionlib_msgs.msg.GoalStatus.Resolve(msg.status)
    }
    else {
      resolved.status = new actionlib_msgs.msg.GoalStatus()
    }

    if (msg.feedback !== undefined) {
      resolved.feedback = WholeBodyFeedback.Resolve(msg.feedback)
    }
    else {
      resolved.feedback = new WholeBodyFeedback()
    }

    return resolved;
    }
};

module.exports = WholeBodyActionFeedback;
