// Auto-generated. Do not edit!

// (in-package giskard_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let Controller = require('./Controller.js');
let CollisionEntry = require('./CollisionEntry.js');

//-----------------------------------------------------------

class MoveCmd {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.controllers = null;
      this.collisions = null;
    }
    else {
      if (initObj.hasOwnProperty('controllers')) {
        this.controllers = initObj.controllers
      }
      else {
        this.controllers = [];
      }
      if (initObj.hasOwnProperty('collisions')) {
        this.collisions = initObj.collisions
      }
      else {
        this.collisions = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MoveCmd
    // Serialize message field [controllers]
    // Serialize the length for message field [controllers]
    bufferOffset = _serializer.uint32(obj.controllers.length, buffer, bufferOffset);
    obj.controllers.forEach((val) => {
      bufferOffset = Controller.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [collisions]
    // Serialize the length for message field [collisions]
    bufferOffset = _serializer.uint32(obj.collisions.length, buffer, bufferOffset);
    obj.collisions.forEach((val) => {
      bufferOffset = CollisionEntry.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MoveCmd
    let len;
    let data = new MoveCmd(null);
    // Deserialize message field [controllers]
    // Deserialize array length for message field [controllers]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.controllers = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.controllers[i] = Controller.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [collisions]
    // Deserialize array length for message field [collisions]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.collisions = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.collisions[i] = CollisionEntry.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.controllers.forEach((val) => {
      length += Controller.getMessageSize(val);
    });
    object.collisions.forEach((val) => {
      length += CollisionEntry.getMessageSize(val);
    });
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'giskard_msgs/MoveCmd';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '60b77fd43284c921383c3d2e3bc7bf84';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Set of controllers that need to converge for this command to finish
    giskard_msgs/Controller[] controllers
    
    # Set of special collision states that shall hold during the movement
    giskard_msgs/CollisionEntry[] collisions
    
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
    
    ================================================================================
    MSG: giskard_msgs/CollisionEntry
    # definitions of possible collision types to use for value
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
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new MoveCmd(null);
    if (msg.controllers !== undefined) {
      resolved.controllers = new Array(msg.controllers.length);
      for (let i = 0; i < resolved.controllers.length; ++i) {
        resolved.controllers[i] = Controller.Resolve(msg.controllers[i]);
      }
    }
    else {
      resolved.controllers = []
    }

    if (msg.collisions !== undefined) {
      resolved.collisions = new Array(msg.collisions.length);
      for (let i = 0; i < resolved.collisions.length; ++i) {
        resolved.collisions[i] = CollisionEntry.Resolve(msg.collisions[i]);
      }
    }
    else {
      resolved.collisions = []
    }

    return resolved;
    }
};

module.exports = MoveCmd;
