#ifndef EFL_GFX_GRADIENT_LINEAR_IMPL_HH
#define EFL_GFX_GRADIENT_LINEAR_IMPL_HH

#include "efl_gfx_gradient_linear.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gradient_Linear::start_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const
{
    double __out_param_x = {};
    double __out_param_y = {};
     ::efl_gfx_gradient_linear_start_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(y, __out_param_y);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gradient_Linear::start_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_gfx_gradient_linear_start_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gradient_Linear::end_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const
{
    double __out_param_x = {};
    double __out_param_y = {};
     ::efl_gfx_gradient_linear_end_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(y, __out_param_y);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gradient_Linear::end_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_gfx_gradient_linear_end_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gradient_Linear::start_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const
{
    double __out_param_x = {};
    double __out_param_y = {};
     ::efl_gfx_gradient_linear_start_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(y, __out_param_y);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gradient_Linear::start_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_gfx_gradient_linear_start_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gradient_Linear::end_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const
{
    double __out_param_x = {};
    double __out_param_y = {};
     ::efl_gfx_gradient_linear_end_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(y, __out_param_y);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gradient_Linear::end_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_gfx_gradient_linear_end_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
#endif
inline efl::gfx::Gradient_Linear::operator ::efl::gfx::Gradient_Linear() const { return *static_cast< ::efl::gfx::Gradient_Linear const*>(static_cast<void const*>(this)); }
inline efl::gfx::Gradient_Linear::operator ::efl::gfx::Gradient_Linear&() { return *static_cast< ::efl::gfx::Gradient_Linear*>(static_cast<void*>(this)); }
inline efl::gfx::Gradient_Linear::operator ::efl::gfx::Gradient_Linear const&() const { return *static_cast< ::efl::gfx::Gradient_Linear const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
