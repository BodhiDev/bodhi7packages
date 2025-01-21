#ifndef EFL_CANVAS_GESTURE_ROTATE_IMPL_HH
#define EFL_CANVAS_GESTURE_ROTATE_IMPL_HH

#include "efl_canvas_gesture_rotate.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< unsigned int>::type Gesture_Rotate::radius_get() const
{
    unsigned int __return_value =  ::efl_gesture_rotate_radius_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Gesture_Rotate::angle_get() const
{
    double __return_value =  ::efl_gesture_rotate_angle_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< unsigned int>::type Gesture_Rotate::radius_get() const
{
    unsigned int __return_value =  ::efl_gesture_rotate_radius_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Gesture_Rotate::angle_get() const
{
    double __return_value =  ::efl_gesture_rotate_angle_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
inline efl::canvas::Gesture_Rotate::operator ::efl::canvas::Gesture_Rotate() const { return *static_cast< ::efl::canvas::Gesture_Rotate const*>(static_cast<void const*>(this)); }
inline efl::canvas::Gesture_Rotate::operator ::efl::canvas::Gesture_Rotate&() { return *static_cast< ::efl::canvas::Gesture_Rotate*>(static_cast<void*>(this)); }
inline efl::canvas::Gesture_Rotate::operator ::efl::canvas::Gesture_Rotate const&() const { return *static_cast< ::efl::canvas::Gesture_Rotate const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
