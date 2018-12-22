// Generated by gencpp from file giskard_msgs/WholeBodyActionFeedback.msg
// DO NOT EDIT!


#ifndef GISKARD_MSGS_MESSAGE_WHOLEBODYACTIONFEEDBACK_H
#define GISKARD_MSGS_MESSAGE_WHOLEBODYACTIONFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalStatus.h>
#include <giskard_msgs/WholeBodyFeedback.h>

namespace giskard_msgs
{
template <class ContainerAllocator>
struct WholeBodyActionFeedback_
{
  typedef WholeBodyActionFeedback_<ContainerAllocator> Type;

  WholeBodyActionFeedback_()
    : header()
    , status()
    , feedback()  {
    }
  WholeBodyActionFeedback_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , status(_alloc)
    , feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalStatus_<ContainerAllocator>  _status_type;
  _status_type status;

   typedef  ::giskard_msgs::WholeBodyFeedback_<ContainerAllocator>  _feedback_type;
  _feedback_type feedback;





  typedef boost::shared_ptr< ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct WholeBodyActionFeedback_

typedef ::giskard_msgs::WholeBodyActionFeedback_<std::allocator<void> > WholeBodyActionFeedback;

typedef boost::shared_ptr< ::giskard_msgs::WholeBodyActionFeedback > WholeBodyActionFeedbackPtr;
typedef boost::shared_ptr< ::giskard_msgs::WholeBodyActionFeedback const> WholeBodyActionFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace giskard_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'shape_msgs': ['/opt/ros/kinetic/share/shape_msgs/cmake/../msg'], 'giskard_msgs': ['/home/michel/Desktop/suturo/motion/simulation/hsr_ws/src/giskard_msgs/msg', '/home/michel/Desktop/suturo/motion/simulation/hsr_ws/devel/.private/giskard_msgs/share/giskard_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2fe8120d0c8b84b43b3d8eacae55a6a4";
  }

  static const char* value(const ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2fe8120d0c8b84b4ULL;
  static const uint64_t static_value2 = 0x3b3d8eacae55a6a4ULL;
};

template<class ContainerAllocator>
struct DataType< ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "giskard_msgs/WholeBodyActionFeedback";
  }

  static const char* value(const ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
WholeBodyFeedback feedback\n\
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
MSG: giskard_msgs/WholeBodyFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# feedback\n\
giskard_msgs/WholeBodyState state\n\
\n\
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
MSG: giskard_msgs/SemanticBool\n\
# A bool with semantics hint attached.\n\
# Note: I know this is not much but better than just the bool. ;)\n\
\n\
# Hint about the semantics of this number. Examples: frame_id, joint-name, or task dimension.\n\
string semantics\n\
# The actual value communicated.\n\
bool value\n\
";
  }

  static const char* value(const ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.status);
      stream.next(m.feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WholeBodyActionFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::giskard_msgs::WholeBodyActionFeedback_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "status: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
    s << indent << "feedback: ";
    s << std::endl;
    Printer< ::giskard_msgs::WholeBodyFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GISKARD_MSGS_MESSAGE_WHOLEBODYACTIONFEEDBACK_H
