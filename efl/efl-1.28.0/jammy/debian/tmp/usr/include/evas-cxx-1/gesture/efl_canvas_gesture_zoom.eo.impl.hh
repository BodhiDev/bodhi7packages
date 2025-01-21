#ifndef EFL_CANVAS_GESTURE_ZOOM_IMPL_HH
#define EFL_CANVAS_GESTURE_ZOOM_IMPL_HH

#include "efl_canvas_gesture_zoom.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Gesture_Zoom::radius_get() const
{
    double __return_value =  ::efl_gesture_zoom_radius_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Gesture_Zoom::zoom_get() const
{
    double __return_value =  ::efl_gesture_zoom_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Gesture_Zoom::radius_get() const
{
    double __return_value =  ::efl_gesture_zoom_radius_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Gesture_Zoom::zoom_get() const
{
    double __return_value =  ::efl_gesture_zoom_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
inline efl::canvas::Gesture_Zoom::operator ::efl::canvas::Gesture_Zoom() const { return *static_cast< ::efl::canvas::Gesture_Zoom const*>(static_cast<void const*>(this)); }
inline efl::canvas::Gesture_Zoom::operator ::efl::canvas::Gesture_Zoom&() { return *static_cast< ::efl::canvas::Gesture_Zoom*>(static_cast<void*>(this)); }
inline efl::canvas::Gesture_Zoom::operator ::efl::canvas::Gesture_Zoom const&() const { return *static_cast< ::efl::canvas::Gesture_Zoom const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
