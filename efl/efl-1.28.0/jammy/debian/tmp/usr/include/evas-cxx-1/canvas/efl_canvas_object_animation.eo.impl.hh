#ifndef EFL_CANVAS_OBJECT_ANIMATION_IMPL_HH
#define EFL_CANVAS_OBJECT_ANIMATION_IMPL_HH

#include "efl_canvas_object_animation.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
inline ::efl::eolian::return_traits< ::efl::canvas::Animation>::type Object_Animation::animation_get() const
{
     ::Efl_Canvas_Animation* __return_value =  ::efl_canvas_object_animation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Animation>::type>(__return_value);
}
inline ::efl::eolian::return_traits<double>::type Object_Animation::animation_progress_get() const
{
    double __return_value =  ::efl_canvas_object_animation_progress_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object_Animation::animation_pause_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_animation_pause_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object_Animation::animation_pause_set( ::efl::eolian::in_traits<bool>::type pause) const
{
     ::efl_canvas_object_animation_pause_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(pause));
}
inline ::efl::eolian::return_traits<void>::type Object_Animation::animation_start( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type animation,  ::efl::eolian::in_traits<double>::type speed,  ::efl::eolian::in_traits<double>::type starting_progress) const
{
     ::efl_canvas_object_animation_start(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Animation*,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type, true>(animation),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(speed),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(starting_progress));
}
inline ::efl::eolian::return_traits<void>::type Object_Animation::animation_stop() const
{
     ::efl_canvas_object_animation_stop(_eo_ptr());
}
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
inline ::efl::eolian::return_traits< ::efl::canvas::Animation>::type Object_Animation::animation_get() const
{
     ::Efl_Canvas_Animation* __return_value =  ::efl_canvas_object_animation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Animation>::type>(__return_value);
}
inline ::efl::eolian::return_traits<double>::type Object_Animation::animation_progress_get() const
{
    double __return_value =  ::efl_canvas_object_animation_progress_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object_Animation::animation_pause_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_animation_pause_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object_Animation::animation_pause_set( ::efl::eolian::in_traits<bool>::type pause) const
{
     ::efl_canvas_object_animation_pause_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(pause));
}
inline ::efl::eolian::return_traits<void>::type Object_Animation::animation_start( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type animation,  ::efl::eolian::in_traits<double>::type speed,  ::efl::eolian::in_traits<double>::type starting_progress) const
{
     ::efl_canvas_object_animation_start(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Animation*,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type, true>(animation),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(speed),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(starting_progress));
}
inline ::efl::eolian::return_traits<void>::type Object_Animation::animation_stop() const
{
     ::efl_canvas_object_animation_stop(_eo_ptr());
}
inline efl::canvas::Object_Animation::operator ::efl::canvas::Object_Animation() const { return *static_cast< ::efl::canvas::Object_Animation const*>(static_cast<void const*>(this)); }
inline efl::canvas::Object_Animation::operator ::efl::canvas::Object_Animation&() { return *static_cast< ::efl::canvas::Object_Animation*>(static_cast<void*>(this)); }
inline efl::canvas::Object_Animation::operator ::efl::canvas::Object_Animation const&() const { return *static_cast< ::efl::canvas::Object_Animation const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
