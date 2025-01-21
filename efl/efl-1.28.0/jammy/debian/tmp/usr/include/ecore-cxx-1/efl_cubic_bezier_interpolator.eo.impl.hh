#ifndef EFL_CUBIC_BEZIER_INTERPOLATOR_IMPL_HH
#define EFL_CUBIC_BEZIER_INTERPOLATOR_IMPL_HH

#include "efl_cubic_bezier_interpolator.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<void>::type Cubic_Bezier_Interpolator::control_points_get( ::efl::eolian::out_traits<Eina_Vector2>::type p1,  ::efl::eolian::out_traits<Eina_Vector2>::type p2) const
{
    Eina_Vector2 __out_param_p1 = {};
    Eina_Vector2 __out_param_p2 = {};
     ::efl_cubic_bezier_interpolator_control_points_get(_eo_ptr(),
        & __out_param_p1,
        & __out_param_p2);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Vector2>::type, Eina_Vector2>(p1, __out_param_p1);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Vector2>::type, Eina_Vector2>(p2, __out_param_p2);
}
inline ::efl::eolian::return_traits<void>::type Cubic_Bezier_Interpolator::control_points_set( ::efl::eolian::in_traits<Eina_Vector2>::type p1,  ::efl::eolian::in_traits<Eina_Vector2>::type p2) const
{
     ::efl_cubic_bezier_interpolator_control_points_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Vector2,  ::efl::eolian::in_traits<Eina_Vector2>::type>(p1),
         ::efl::eolian::convert_to_c<Eina_Vector2,  ::efl::eolian::in_traits<Eina_Vector2>::type>(p2));
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<void>::type Cubic_Bezier_Interpolator::control_points_get( ::efl::eolian::out_traits<Eina_Vector2>::type p1,  ::efl::eolian::out_traits<Eina_Vector2>::type p2) const
{
    Eina_Vector2 __out_param_p1 = {};
    Eina_Vector2 __out_param_p2 = {};
     ::efl_cubic_bezier_interpolator_control_points_get(_eo_ptr(),
        & __out_param_p1,
        & __out_param_p2);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Vector2>::type, Eina_Vector2>(p1, __out_param_p1);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Vector2>::type, Eina_Vector2>(p2, __out_param_p2);
}
inline ::efl::eolian::return_traits<void>::type Cubic_Bezier_Interpolator::control_points_set( ::efl::eolian::in_traits<Eina_Vector2>::type p1,  ::efl::eolian::in_traits<Eina_Vector2>::type p2) const
{
     ::efl_cubic_bezier_interpolator_control_points_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Vector2,  ::efl::eolian::in_traits<Eina_Vector2>::type>(p1),
         ::efl::eolian::convert_to_c<Eina_Vector2,  ::efl::eolian::in_traits<Eina_Vector2>::type>(p2));
}
inline efl::Cubic_Bezier_Interpolator::operator ::efl::Cubic_Bezier_Interpolator() const { return *static_cast< ::efl::Cubic_Bezier_Interpolator const*>(static_cast<void const*>(this)); }
inline efl::Cubic_Bezier_Interpolator::operator ::efl::Cubic_Bezier_Interpolator&() { return *static_cast< ::efl::Cubic_Bezier_Interpolator*>(static_cast<void*>(this)); }
inline efl::Cubic_Bezier_Interpolator::operator ::efl::Cubic_Bezier_Interpolator const&() const { return *static_cast< ::efl::Cubic_Bezier_Interpolator const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
