#ifndef EFL_CANVAS_GESTURE_TOUCH_IMPL_HH
#define EFL_CANVAS_GESTURE_TOUCH_IMPL_HH

#include "efl_canvas_gesture_touch.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Position2D>::type Gesture_Touch::start_point_get() const
{
    Eina_Position2D __return_value =  ::efl_gesture_touch_start_point_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Position2D>::type Gesture_Touch::current_point_get() const
{
    Eina_Position2D __return_value =  ::efl_gesture_touch_current_point_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< unsigned int>::type Gesture_Touch::current_timestamp_get() const
{
    unsigned int __return_value =  ::efl_gesture_touch_current_timestamp_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< unsigned int>::type Gesture_Touch::touch_points_count_get() const
{
    unsigned int __return_value =  ::efl_gesture_touch_points_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Canvas_Gesture_Touch_State>::type Gesture_Touch::state_get() const
{
    Efl_Canvas_Gesture_Touch_State __return_value =  ::efl_gesture_touch_state_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Canvas_Gesture_Touch_State>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<const Efl_Gesture_Touch_Point_Data *>::type Gesture_Touch::current_data_get() const
{
    const Efl_Gesture_Touch_Point_Data * __return_value =  ::efl_gesture_touch_current_data_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Efl_Gesture_Touch_Point_Data *>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<const Efl_Gesture_Touch_Point_Data *>::type Gesture_Touch::previous_data_get() const
{
    const Efl_Gesture_Touch_Point_Data * __return_value =  ::efl_gesture_touch_previous_data_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Efl_Gesture_Touch_Point_Data *>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gesture_Touch::point_record( ::efl::eolian::in_traits< ::efl::input::Pointer>::type event) const
{
     ::efl_gesture_touch_point_record(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Pointer*,  ::efl::eolian::in_traits< ::efl::input::Pointer>::type>(event));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Vector2>::type Gesture_Touch::delta( ::efl::eolian::in_traits<int>::type tool) const
{
    Eina_Vector2 __return_value =  ::efl_gesture_touch_delta(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(tool));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Vector2>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Vector2>::type Gesture_Touch::distance( ::efl::eolian::in_traits<int>::type tool) const
{
    Eina_Vector2 __return_value =  ::efl_gesture_touch_distance(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(tool));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Vector2>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<const Efl_Gesture_Touch_Point_Data *>::type Gesture_Touch::data_get( ::efl::eolian::in_traits< unsigned int>::type id) const
{
    const Efl_Gesture_Touch_Point_Data * __return_value =  ::efl_gesture_touch_data_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(id));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Efl_Gesture_Touch_Point_Data *>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Position2D>::type Gesture_Touch::start_point_get() const
{
    Eina_Position2D __return_value =  ::efl_gesture_touch_start_point_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Position2D>::type Gesture_Touch::current_point_get() const
{
    Eina_Position2D __return_value =  ::efl_gesture_touch_current_point_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< unsigned int>::type Gesture_Touch::current_timestamp_get() const
{
    unsigned int __return_value =  ::efl_gesture_touch_current_timestamp_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< unsigned int>::type Gesture_Touch::touch_points_count_get() const
{
    unsigned int __return_value =  ::efl_gesture_touch_points_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Canvas_Gesture_Touch_State>::type Gesture_Touch::state_get() const
{
    Efl_Canvas_Gesture_Touch_State __return_value =  ::efl_gesture_touch_state_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Canvas_Gesture_Touch_State>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<const Efl_Gesture_Touch_Point_Data *>::type Gesture_Touch::current_data_get() const
{
    const Efl_Gesture_Touch_Point_Data * __return_value =  ::efl_gesture_touch_current_data_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Efl_Gesture_Touch_Point_Data *>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<const Efl_Gesture_Touch_Point_Data *>::type Gesture_Touch::previous_data_get() const
{
    const Efl_Gesture_Touch_Point_Data * __return_value =  ::efl_gesture_touch_previous_data_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Efl_Gesture_Touch_Point_Data *>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gesture_Touch::point_record( ::efl::eolian::in_traits< ::efl::input::Pointer>::type event) const
{
     ::efl_gesture_touch_point_record(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Pointer*,  ::efl::eolian::in_traits< ::efl::input::Pointer>::type>(event));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Vector2>::type Gesture_Touch::delta( ::efl::eolian::in_traits<int>::type tool) const
{
    Eina_Vector2 __return_value =  ::efl_gesture_touch_delta(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(tool));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Vector2>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Vector2>::type Gesture_Touch::distance( ::efl::eolian::in_traits<int>::type tool) const
{
    Eina_Vector2 __return_value =  ::efl_gesture_touch_distance(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(tool));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Vector2>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<const Efl_Gesture_Touch_Point_Data *>::type Gesture_Touch::data_get( ::efl::eolian::in_traits< unsigned int>::type id) const
{
    const Efl_Gesture_Touch_Point_Data * __return_value =  ::efl_gesture_touch_data_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(id));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Efl_Gesture_Touch_Point_Data *>::type>(__return_value);
}
#endif
inline efl::canvas::Gesture_Touch::operator ::efl::canvas::Gesture_Touch() const { return *static_cast< ::efl::canvas::Gesture_Touch const*>(static_cast<void const*>(this)); }
inline efl::canvas::Gesture_Touch::operator ::efl::canvas::Gesture_Touch&() { return *static_cast< ::efl::canvas::Gesture_Touch*>(static_cast<void*>(this)); }
inline efl::canvas::Gesture_Touch::operator ::efl::canvas::Gesture_Touch const&() const { return *static_cast< ::efl::canvas::Gesture_Touch const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
