#ifndef EFL_CANVAS_SCALE_ANIMATION_IMPL_HH
#define EFL_CANVAS_SCALE_ANIMATION_IMPL_HH

#include "efl_canvas_scale_animation.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
inline ::efl::eolian::return_traits<void>::type Scale_Animation::scale_get( ::efl::eolian::out_traits<Eina_Vector2>::type from_scale,  ::efl::eolian::out_traits<Eina_Vector2>::type to_scale,  ::efl::eolian::out_traits< ::efl::canvas::Object>::type pivot,  ::efl::eolian::out_traits<Eina_Vector2>::type center_point) const
{
    Eina_Vector2 __out_param_from_scale = {};
    Eina_Vector2 __out_param_to_scale = {};
     ::Efl_Canvas_Object* __out_param_pivot = {};
    Eina_Vector2 __out_param_center_point = {};
     ::efl_animation_scale_get(_eo_ptr(),
        & __out_param_from_scale,
        & __out_param_to_scale,
        & __out_param_pivot,
        & __out_param_center_point);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Vector2>::type, Eina_Vector2>(from_scale, __out_param_from_scale);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Vector2>::type, Eina_Vector2>(to_scale, __out_param_to_scale);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::canvas::Object>::type,  ::Efl_Canvas_Object*>(pivot, __out_param_pivot);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Vector2>::type, Eina_Vector2>(center_point, __out_param_center_point);
}
inline ::efl::eolian::return_traits<void>::type Scale_Animation::scale_set( ::efl::eolian::in_traits<Eina_Vector2>::type from_scale,  ::efl::eolian::in_traits<Eina_Vector2>::type to_scale,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type pivot,  ::efl::eolian::in_traits<Eina_Vector2>::type center_point) const
{
     ::efl_animation_scale_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Vector2,  ::efl::eolian::in_traits<Eina_Vector2>::type>(from_scale),
         ::efl::eolian::convert_to_c<Eina_Vector2,  ::efl::eolian::in_traits<Eina_Vector2>::type>(to_scale),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(pivot),
         ::efl::eolian::convert_to_c<Eina_Vector2,  ::efl::eolian::in_traits<Eina_Vector2>::type>(center_point));
}
inline ::efl::eolian::return_traits<void>::type Scale_Animation::scale_absolute_get( ::efl::eolian::out_traits<Eina_Vector2>::type from_scale,  ::efl::eolian::out_traits<Eina_Vector2>::type to_scale,  ::efl::eolian::out_traits<Eina_Position2D>::type pivot_point) const
{
    Eina_Vector2 __out_param_from_scale = {};
    Eina_Vector2 __out_param_to_scale = {};
    Eina_Position2D __out_param_pivot_point = {};
     ::efl_animation_scale_absolute_get(_eo_ptr(),
        & __out_param_from_scale,
        & __out_param_to_scale,
        & __out_param_pivot_point);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Vector2>::type, Eina_Vector2>(from_scale, __out_param_from_scale);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Vector2>::type, Eina_Vector2>(to_scale, __out_param_to_scale);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Position2D>::type, Eina_Position2D>(pivot_point, __out_param_pivot_point);
}
inline ::efl::eolian::return_traits<void>::type Scale_Animation::scale_absolute_set( ::efl::eolian::in_traits<Eina_Vector2>::type from_scale,  ::efl::eolian::in_traits<Eina_Vector2>::type to_scale,  ::efl::eolian::in_traits<Eina_Position2D>::type pivot_point) const
{
     ::efl_animation_scale_absolute_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Vector2,  ::efl::eolian::in_traits<Eina_Vector2>::type>(from_scale),
         ::efl::eolian::convert_to_c<Eina_Vector2,  ::efl::eolian::in_traits<Eina_Vector2>::type>(to_scale),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(pivot_point));
}
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
inline ::efl::eolian::return_traits<void>::type Scale_Animation::scale_get( ::efl::eolian::out_traits<Eina_Vector2>::type from_scale,  ::efl::eolian::out_traits<Eina_Vector2>::type to_scale,  ::efl::eolian::out_traits< ::efl::canvas::Object>::type pivot,  ::efl::eolian::out_traits<Eina_Vector2>::type center_point) const
{
    Eina_Vector2 __out_param_from_scale = {};
    Eina_Vector2 __out_param_to_scale = {};
     ::Efl_Canvas_Object* __out_param_pivot = {};
    Eina_Vector2 __out_param_center_point = {};
     ::efl_animation_scale_get(_eo_ptr(),
        & __out_param_from_scale,
        & __out_param_to_scale,
        & __out_param_pivot,
        & __out_param_center_point);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Vector2>::type, Eina_Vector2>(from_scale, __out_param_from_scale);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Vector2>::type, Eina_Vector2>(to_scale, __out_param_to_scale);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::canvas::Object>::type,  ::Efl_Canvas_Object*>(pivot, __out_param_pivot);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Vector2>::type, Eina_Vector2>(center_point, __out_param_center_point);
}
inline ::efl::eolian::return_traits<void>::type Scale_Animation::scale_set( ::efl::eolian::in_traits<Eina_Vector2>::type from_scale,  ::efl::eolian::in_traits<Eina_Vector2>::type to_scale,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type pivot,  ::efl::eolian::in_traits<Eina_Vector2>::type center_point) const
{
     ::efl_animation_scale_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Vector2,  ::efl::eolian::in_traits<Eina_Vector2>::type>(from_scale),
         ::efl::eolian::convert_to_c<Eina_Vector2,  ::efl::eolian::in_traits<Eina_Vector2>::type>(to_scale),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(pivot),
         ::efl::eolian::convert_to_c<Eina_Vector2,  ::efl::eolian::in_traits<Eina_Vector2>::type>(center_point));
}
inline ::efl::eolian::return_traits<void>::type Scale_Animation::scale_absolute_get( ::efl::eolian::out_traits<Eina_Vector2>::type from_scale,  ::efl::eolian::out_traits<Eina_Vector2>::type to_scale,  ::efl::eolian::out_traits<Eina_Position2D>::type pivot_point) const
{
    Eina_Vector2 __out_param_from_scale = {};
    Eina_Vector2 __out_param_to_scale = {};
    Eina_Position2D __out_param_pivot_point = {};
     ::efl_animation_scale_absolute_get(_eo_ptr(),
        & __out_param_from_scale,
        & __out_param_to_scale,
        & __out_param_pivot_point);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Vector2>::type, Eina_Vector2>(from_scale, __out_param_from_scale);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Vector2>::type, Eina_Vector2>(to_scale, __out_param_to_scale);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Position2D>::type, Eina_Position2D>(pivot_point, __out_param_pivot_point);
}
inline ::efl::eolian::return_traits<void>::type Scale_Animation::scale_absolute_set( ::efl::eolian::in_traits<Eina_Vector2>::type from_scale,  ::efl::eolian::in_traits<Eina_Vector2>::type to_scale,  ::efl::eolian::in_traits<Eina_Position2D>::type pivot_point) const
{
     ::efl_animation_scale_absolute_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Vector2,  ::efl::eolian::in_traits<Eina_Vector2>::type>(from_scale),
         ::efl::eolian::convert_to_c<Eina_Vector2,  ::efl::eolian::in_traits<Eina_Vector2>::type>(to_scale),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(pivot_point));
}
inline efl::canvas::Scale_Animation::operator ::efl::canvas::Scale_Animation() const { return *static_cast< ::efl::canvas::Scale_Animation const*>(static_cast<void const*>(this)); }
inline efl::canvas::Scale_Animation::operator ::efl::canvas::Scale_Animation&() { return *static_cast< ::efl::canvas::Scale_Animation*>(static_cast<void*>(this)); }
inline efl::canvas::Scale_Animation::operator ::efl::canvas::Scale_Animation const&() const { return *static_cast< ::efl::canvas::Scale_Animation const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
