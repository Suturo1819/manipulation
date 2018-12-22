// Generated by gencpp from file giskard_msgs/WholeBodyAction.msg
// DO NOT EDIT!


#ifndef GISKARD_MSGS_MESSAGE_WHOLEBODYACTION_H
#define GISKARD_MSGS_MESSAGE_WHOLEBODYACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <giskard_msgs/WholeBodyActionGoal.h>
#include <giskard_msgs/WholeBodyActionResult.h>
#include <giskard_msgs/WholeBodyActionFeedback.h>

namespace giskard_msgs
{
template <class ContainerAllocator>
struct WholeBodyAction_
{
  typedef WholeBodyAction_<ContainerAllocator> Type;

  WholeBodyAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  WholeBodyAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::giskard_msgs::WholeBodyActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::giskard_msgs::WholeBodyActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;





  typedef boost::shared_ptr< ::giskard_msgs::WholeBodyAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::giskard_msgs::WholeBodyAction_<ContainerAllocator> const> ConstPtr;

}; // struct WholeBodyAction_

typedef ::giskard_msgs::WholeBodyAction_<std::allocator<void> > WholeBodyAction;

typedef boost::shared_ptr< ::giskard_msgs::WholeBodyAction > WholeBodyActionPtr;
typedef boost::shared_ptr< ::giskard_msgs::WholeBodyAction const> WholeBodyActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::giskard_msgs::WholeBodyAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::giskard_msgs::WholeBodyAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace giskard_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/kinetic/share/shape_msgs/cmake/../msg'], 'giskard_msgs': ['/home/michel/Desktop/suturo/motion/simulation/hsr_ws/src/giskard_msgs/msg', '/home/michel/Desktop/suturo/motion/simulation/hsr_ws/devel/.private/giskard_msgs/share/giskard_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::giskard_msgs::WholeBodyAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::giskard_msgs::WholeBodyAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::giskard_msgs::WholeBodyAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::giskard_msgs::WholeBodyAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::giskard_msgs::WholeBodyAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::giskard_msgs::WholeBodyAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::giskard_msgs::WholeBodyAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b6d721ef4e59ae306e089e26c778d0a2";
  }

  static const char* value(const ::giskard_msgs::WholeBodyAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb6d721ef4e59ae30ULL;
  static const uint64_t static_value2 = 0x6e089e26c778d0a2ULL;
};

template<class ContainerAllocator>
struct DataType< ::giskard_msgs::WholeBodyAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "giskard_msgs/WholeBodyAction";
  }

  static const char* value(const ::giskard_msgs::WholeBodyAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::giskard_msgs::WholeBodyAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
WholeBodyActionGoal action_goal\n\
WholeBodyActionResult action_result\n\
WholeBodyActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: giskard_msgs/WholeBodyActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
WholeBodyGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: giskard_msgs/WholeBodyGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# goal\n\
giskard_msgs/WholeBodyCommand command\n\
\n\
================================================================================\n\
MSG: giskard_msgs/WholeBodyCommand\n\
# A whole-body command message for a mobile manipulator with a morphology \n\
# compatible with the PR2 robot. The message was designed to support alternative\n\
# ways of specifying a command.\n\
\n\
# definitions of possible values to use as type\n\
uint8 STANDARD_CONTROLLER=0\n\
uint8 YAML_CONTROLLER=1\n\
\n\
# use of the above constants to indicate the type of command\n\
uint8 type\n\
\n\
# standard controllers\n\
giskard_msgs/ArmCommand right_ee # command for right arm\n\
giskard_msgs/ArmCommand left_ee # command for left arm\n\
\n\
# yaml controllers\n\
string yaml_spec # complete specification of controller\n\
giskard_msgs/SemanticFloat64[] convergence_thresholds # thresholds used to decide convergence of motion\n\
\n\
================================================================================\n\
MSG: giskard_msgs/ArmCommand\n\
# A command message for robotic manipulators that exposes a couple\n\
# of alternative ways of specifying commands.\n\
\n\
# Definitions of possible values used for type\n\
uint8 IGNORE_GOAL=0 # Ignore the rest of this command.\n\
uint8 CARTESIAN_GOAL=1 # Use the PoseStamped.\n\
uint8 JOINT_GOAL=2 # Use the list of floats.\n\
\n\
# use one of the above constants to indicate the type of command\n\
uint8 type\n\
\n\
# Cartesian goal for the arm.\n\
# Note: The header will be used to resolve goal using tf.\n\
geometry_msgs/PoseStamped goal_pose\n\
\n\
# Joint goal for the arm.\n\
float64[] goal_configuration\n\
\n\
# List of internal double expressions with thresholds to decide convergence\n\
giskard_msgs/SemanticFloat64[] convergence_thresholds\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: giskard_msgs/SemanticFloat64\n\
# A floating-point with semantics hint attached.\n\
# Note: I know this is not much but better than just the number. ;)\n\
\n\
# Hint about the semantics of this number. Examples: frame_id, joint-name, or task dimension.\n\
string semantics\n\
# The actual value communicated.\n\
float64 value\n\
\n\
================================================================================\n\
MSG: giskard_msgs/WholeBodyActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
WholeBodyResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: giskard_msgs/WholeBodyResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# result\n\
giskard_msgs/WholeBodyState state\n\
\n\
================================================================================\n\
MSG: giskard_msgs/WholeBodyState\n\
# only using timestamp for the moment\n\
std_msgs/Header header\n\
\n\
# feature values used to make decisions about succeeded actions\n\
duration running_time\n\
float64 left_arm_max_vel\n\
float64 right_arm_max_vel\n\
float64 torso_vel\n\
giskard_msgs/SemanticFloat64[] convergence_values # internal values used to decide convergence\n\
\n\
# classification results used to decide whether action succeeded\n\
bool motion_started # true, as soon low-level controller has started execution the command\n\
bool motion_old # true, if time passed since start of motion is above threshold\n\
bool torso_moving # true, if torso velocity is above threshold\n\
bool left_arm_moving # true, if velocity of any joint of left arm is above threshold\n\
bool right_arm_moving # true, if velocity of any joint of right arm is above threshold\n\
giskard_msgs/SemanticBool[] convergence_flags # true, if the corresponding feature values are below a threshold\n\
\n\
================================================================================\n\
MSG: giskard_msgs/SemanticBool\n\
# A bool with semantics hint attached.\n\
# Note: I know this is not much but better than just the bool. ;)\n\
\n\
# Hint about the semantics of this number. Examples: frame_id, joint-name, or task dimension.\n\
string semantics\n\
# The actual value communicated.\n\
bool value\n\
\n\
================================================================================\n\
MSG: giskard_msgs/WholeBodyActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
WholeBodyFeedback feedback\n\
\n\
================================================================================\n\
MSG: giskard_msgs/WholeBodyFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# feedback\n\
giskard_msgs/WholeBodyState state\n\
\n\
";
  }

  static const char* value(const ::giskard_msgs::WholeBodyAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::giskard_msgs::WholeBodyAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WholeBodyAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::giskard_msgs::WholeBodyAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::giskard_msgs::WholeBodyAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::giskard_msgs::WholeBodyActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::giskard_msgs::WholeBodyActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GISKARD_MSGS_MESSAGE_WHOLEBODYACTION_H
