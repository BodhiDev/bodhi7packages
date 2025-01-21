#ifndef EFL_CANVAS_GESTURE_IMPL_HH
#define EFL_CANVAS_GESTURE_IMPL_HH

#include "efl_canvas_gesture.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Canvas_Gesture_State>::type Gesture::state_get() const
{
    Efl_Canvas_Gesture_State __return_value =  ::efl_gesture_state_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Canvas_Gesture_State>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gesture::state_set( ::efl::eolian::in_traits<Efl_Canvas_Gesture_State>::type state) const
{
     ::efl_gesture_state_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Canvas_Gesture_State,  ::efl::eolian::in_traits<Efl_Canvas_Gesture_State>::type>(state));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Position2D>::type Gesture::hotspot_get() const
{
    Eina_Position2D __return_value =  ::efl_gesture_hotspot_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gesture::hotspot_set( ::efl::eolian::in_traits<Eina_Position2D>::type hotspot) const
{
     ::efl_gesture_hotspot_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(hotspot));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< unsigned int>::type Gesture::timestamp_get() const
{
    unsigned int __return_value =  ::efl_gesture_timestamp_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gesture::timestamp_set( ::efl::eolian::in_traits< unsigned int>::type timestamp) const
{
     ::efl_gesture_timestamp_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(timestamp));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< unsigned int>::type Gesture::touch_count_get() const
{
    unsigned int __return_value =  ::efl_gesture_touch_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_GESTURE_PROTECTED
inline ::efl::eolian::return_traits<void>::type Gesture::touch_count_set( ::efl::eolian::in_traits< unsigned int>::type touch_count) const
{
     ::efl_gesture_touch_count_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(touch_count));
}
#endif
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Canvas_Gesture_State>::type Gesture::state_get() const
{
    Efl_Canvas_Gesture_State __return_value =  ::efl_gesture_state_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Canvas_Gesture_State>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gesture::state_set( ::efl::eolian::in_traits<Efl_Canvas_Gesture_State>::type state) const
{
     ::efl_gesture_state_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Canvas_Gesture_State,  ::efl::eolian::in_traits<Efl_Canvas_Gesture_State>::type>(state));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Position2D>::type Gesture::hotspot_get() const
{
    Eina_Position2D __return_value =  ::efl_gesture_hotspot_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gesture::hotspot_set( ::efl::eolian::in_traits<Eina_Position2D>::type hotspot) const
{
     ::efl_gesture_hotspot_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(hotspot));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< unsigned int>::type Gesture::timestamp_get() const
{
    unsigned int __return_value =  ::efl_gesture_timestamp_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gesture::timestamp_set( ::efl::eolian::in_traits< unsigned int>::type timestamp) const
{
     ::efl_gesture_timestamp_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(timestamp));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< unsigned int>::type Gesture::touch_count_get() const
{
    unsigned int __return_value =  ::efl_gesture_touch_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_GESTURE_PROTECTED
inline ::efl::eolian::return_traits<void>::type Gesture::touch_count_set( ::efl::eolian::in_traits< unsigned int>::type touch_count) const
{
     ::efl_gesture_touch_count_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(touch_count));
}
#endif
#endif
inline efl::canvas::Gesture::operator ::efl::canvas::Gesture() const { return *static_cast< ::efl::canvas::Gesture const*>(static_cast<void const*>(this)); }
inline efl::canvas::Gesture::operator ::efl::canvas::Gesture&() { return *static_cast< ::efl::canvas::Gesture*>(static_cast<void*>(this)); }
inline efl::canvas::Gesture::operator ::efl::canvas::Gesture const&() const { return *static_cast< ::efl::canvas::Gesture const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
