#ifndef EFL_CANVAS_ANIMATION_IMPL_HH
#define EFL_CANVAS_ANIMATION_IMPL_HH

#include "efl_canvas_animation.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
inline ::efl::eolian::return_traits<bool>::type Animation::final_state_keep_get() const
{
    Eina_Bool __return_value =  ::efl_animation_final_state_keep_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Animation::final_state_keep_set( ::efl::eolian::in_traits<bool>::type keep) const
{
     ::efl_animation_final_state_keep_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(keep));
}
inline ::efl::eolian::return_traits<double>::type Animation::duration_get() const
{
    double __return_value =  ::efl_animation_duration_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Animation::duration_set( ::efl::eolian::in_traits<double>::type sec) const
{
     ::efl_animation_duration_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(sec));
}
inline ::efl::eolian::return_traits<Efl_Canvas_Animation_Repeat_Mode>::type Animation::repeat_mode_get() const
{
    Efl_Canvas_Animation_Repeat_Mode __return_value =  ::efl_animation_repeat_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Canvas_Animation_Repeat_Mode>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Animation::repeat_mode_set( ::efl::eolian::in_traits<Efl_Canvas_Animation_Repeat_Mode>::type mode) const
{
     ::efl_animation_repeat_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Canvas_Animation_Repeat_Mode,  ::efl::eolian::in_traits<Efl_Canvas_Animation_Repeat_Mode>::type>(mode));
}
inline ::efl::eolian::return_traits<int>::type Animation::play_count_get() const
{
    int __return_value =  ::efl_animation_play_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Animation::play_count_set( ::efl::eolian::in_traits<int>::type count) const
{
     ::efl_animation_play_count_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(count));
}
inline ::efl::eolian::return_traits<double>::type Animation::start_delay_get() const
{
    double __return_value =  ::efl_animation_start_delay_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Animation::start_delay_set( ::efl::eolian::in_traits<double>::type sec) const
{
     ::efl_animation_start_delay_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(sec));
}
inline ::efl::eolian::return_traits< ::efl::Interpolator>::type Animation::interpolator_get() const
{
     ::Efl_Interpolator* __return_value =  ::efl_animation_interpolator_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Interpolator>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Animation::interpolator_set( ::efl::eolian::in_traits< ::efl::Interpolator>::type interpolator) const
{
     ::efl_animation_interpolator_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Interpolator*,  ::efl::eolian::in_traits< ::efl::Interpolator>::type>(interpolator));
}
inline ::efl::eolian::return_traits<double>::type Animation::default_duration_get()
{
    double __return_value =  ::efl_animation_default_duration_get();
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Animation::default_duration_set( ::efl::eolian::in_traits<double>::type animation_time)
{
     ::efl_animation_default_duration_set(
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(animation_time));
}
inline ::efl::eolian::return_traits<double>::type Animation::animation_apply( ::efl::eolian::in_traits<double>::type progress,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type target) const
{
    double __return_value =  ::efl_animation_apply(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(progress),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(target));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
inline ::efl::eolian::return_traits<bool>::type Animation::final_state_keep_get() const
{
    Eina_Bool __return_value =  ::efl_animation_final_state_keep_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Animation::final_state_keep_set( ::efl::eolian::in_traits<bool>::type keep) const
{
     ::efl_animation_final_state_keep_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(keep));
}
inline ::efl::eolian::return_traits<double>::type Animation::duration_get() const
{
    double __return_value =  ::efl_animation_duration_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Animation::duration_set( ::efl::eolian::in_traits<double>::type sec) const
{
     ::efl_animation_duration_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(sec));
}
inline ::efl::eolian::return_traits<Efl_Canvas_Animation_Repeat_Mode>::type Animation::repeat_mode_get() const
{
    Efl_Canvas_Animation_Repeat_Mode __return_value =  ::efl_animation_repeat_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Canvas_Animation_Repeat_Mode>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Animation::repeat_mode_set( ::efl::eolian::in_traits<Efl_Canvas_Animation_Repeat_Mode>::type mode) const
{
     ::efl_animation_repeat_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Canvas_Animation_Repeat_Mode,  ::efl::eolian::in_traits<Efl_Canvas_Animation_Repeat_Mode>::type>(mode));
}
inline ::efl::eolian::return_traits<int>::type Animation::play_count_get() const
{
    int __return_value =  ::efl_animation_play_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Animation::play_count_set( ::efl::eolian::in_traits<int>::type count) const
{
     ::efl_animation_play_count_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(count));
}
inline ::efl::eolian::return_traits<double>::type Animation::start_delay_get() const
{
    double __return_value =  ::efl_animation_start_delay_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Animation::start_delay_set( ::efl::eolian::in_traits<double>::type sec) const
{
     ::efl_animation_start_delay_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(sec));
}
inline ::efl::eolian::return_traits< ::efl::Interpolator>::type Animation::interpolator_get() const
{
     ::Efl_Interpolator* __return_value =  ::efl_animation_interpolator_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Interpolator>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Animation::interpolator_set( ::efl::eolian::in_traits< ::efl::Interpolator>::type interpolator) const
{
     ::efl_animation_interpolator_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Interpolator*,  ::efl::eolian::in_traits< ::efl::Interpolator>::type>(interpolator));
}
inline ::efl::eolian::return_traits<double>::type Animation::default_duration_get()
{
    double __return_value =  ::efl_animation_default_duration_get();
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Animation::default_duration_set( ::efl::eolian::in_traits<double>::type animation_time)
{
     ::efl_animation_default_duration_set(
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(animation_time));
}
inline ::efl::eolian::return_traits<double>::type Animation::animation_apply( ::efl::eolian::in_traits<double>::type progress,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type target) const
{
    double __return_value =  ::efl_animation_apply(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(progress),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(target));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline efl::canvas::Animation::operator ::efl::canvas::Animation() const { return *static_cast< ::efl::canvas::Animation const*>(static_cast<void const*>(this)); }
inline efl::canvas::Animation::operator ::efl::canvas::Animation&() { return *static_cast< ::efl::canvas::Animation*>(static_cast<void*>(this)); }
inline efl::canvas::Animation::operator ::efl::canvas::Animation const&() const { return *static_cast< ::efl::canvas::Animation const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
