#ifndef EFL_CANVAS_ALPHA_ANIMATION_IMPL_HH
#define EFL_CANVAS_ALPHA_ANIMATION_IMPL_HH

#include "efl_canvas_alpha_animation.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
inline ::efl::eolian::return_traits<void>::type Alpha_Animation::alpha_get( ::efl::eolian::out_traits<double>::type from_alpha,  ::efl::eolian::out_traits<double>::type to_alpha) const
{
    double __out_param_from_alpha = {};
    double __out_param_to_alpha = {};
     ::efl_animation_alpha_get(_eo_ptr(),
        & __out_param_from_alpha,
        & __out_param_to_alpha);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(from_alpha, __out_param_from_alpha);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(to_alpha, __out_param_to_alpha);
}
inline ::efl::eolian::return_traits<void>::type Alpha_Animation::alpha_set( ::efl::eolian::in_traits<double>::type from_alpha,  ::efl::eolian::in_traits<double>::type to_alpha) const
{
     ::efl_animation_alpha_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(from_alpha),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(to_alpha));
}
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
inline ::efl::eolian::return_traits<void>::type Alpha_Animation::alpha_get( ::efl::eolian::out_traits<double>::type from_alpha,  ::efl::eolian::out_traits<double>::type to_alpha) const
{
    double __out_param_from_alpha = {};
    double __out_param_to_alpha = {};
     ::efl_animation_alpha_get(_eo_ptr(),
        & __out_param_from_alpha,
        & __out_param_to_alpha);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(from_alpha, __out_param_from_alpha);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(to_alpha, __out_param_to_alpha);
}
inline ::efl::eolian::return_traits<void>::type Alpha_Animation::alpha_set( ::efl::eolian::in_traits<double>::type from_alpha,  ::efl::eolian::in_traits<double>::type to_alpha) const
{
     ::efl_animation_alpha_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(from_alpha),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(to_alpha));
}
inline efl::canvas::Alpha_Animation::operator ::efl::canvas::Alpha_Animation() const { return *static_cast< ::efl::canvas::Alpha_Animation const*>(static_cast<void const*>(this)); }
inline efl::canvas::Alpha_Animation::operator ::efl::canvas::Alpha_Animation&() { return *static_cast< ::efl::canvas::Alpha_Animation*>(static_cast<void*>(this)); }
inline efl::canvas::Alpha_Animation::operator ::efl::canvas::Alpha_Animation const&() const { return *static_cast< ::efl::canvas::Alpha_Animation const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
