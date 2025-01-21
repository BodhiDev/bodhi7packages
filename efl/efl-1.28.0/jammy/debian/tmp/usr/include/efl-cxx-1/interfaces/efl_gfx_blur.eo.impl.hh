#ifndef EFL_GFX_BLUR_IMPL_HH
#define EFL_GFX_BLUR_IMPL_HH

#include "efl_gfx_blur.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Blur::radius_get( ::efl::eolian::out_traits<double>::type rx,  ::efl::eolian::out_traits<double>::type ry) const
{
    double __out_param_rx = {};
    double __out_param_ry = {};
     ::efl_gfx_blur_radius_get(_eo_ptr(),
        & __out_param_rx,
        & __out_param_ry);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(rx, __out_param_rx);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(ry, __out_param_ry);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Blur::radius_set( ::efl::eolian::in_traits<double>::type rx,  ::efl::eolian::in_traits<double>::type ry) const
{
     ::efl_gfx_blur_radius_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(rx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ry));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Blur::offset_get( ::efl::eolian::out_traits<double>::type ox,  ::efl::eolian::out_traits<double>::type oy) const
{
    double __out_param_ox = {};
    double __out_param_oy = {};
     ::efl_gfx_blur_offset_get(_eo_ptr(),
        & __out_param_ox,
        & __out_param_oy);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(ox, __out_param_ox);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(oy, __out_param_oy);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Blur::offset_set( ::efl::eolian::in_traits<double>::type ox,  ::efl::eolian::in_traits<double>::type oy) const
{
     ::efl_gfx_blur_offset_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ox),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(oy));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Blur::grow_get() const
{
    double __return_value =  ::efl_gfx_blur_grow_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Blur::grow_set( ::efl::eolian::in_traits<double>::type radius) const
{
     ::efl_gfx_blur_grow_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(radius));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Blur::radius_get( ::efl::eolian::out_traits<double>::type rx,  ::efl::eolian::out_traits<double>::type ry) const
{
    double __out_param_rx = {};
    double __out_param_ry = {};
     ::efl_gfx_blur_radius_get(_eo_ptr(),
        & __out_param_rx,
        & __out_param_ry);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(rx, __out_param_rx);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(ry, __out_param_ry);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Blur::radius_set( ::efl::eolian::in_traits<double>::type rx,  ::efl::eolian::in_traits<double>::type ry) const
{
     ::efl_gfx_blur_radius_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(rx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ry));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Blur::offset_get( ::efl::eolian::out_traits<double>::type ox,  ::efl::eolian::out_traits<double>::type oy) const
{
    double __out_param_ox = {};
    double __out_param_oy = {};
     ::efl_gfx_blur_offset_get(_eo_ptr(),
        & __out_param_ox,
        & __out_param_oy);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(ox, __out_param_ox);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(oy, __out_param_oy);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Blur::offset_set( ::efl::eolian::in_traits<double>::type ox,  ::efl::eolian::in_traits<double>::type oy) const
{
     ::efl_gfx_blur_offset_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ox),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(oy));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Blur::grow_get() const
{
    double __return_value =  ::efl_gfx_blur_grow_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Blur::grow_set( ::efl::eolian::in_traits<double>::type radius) const
{
     ::efl_gfx_blur_grow_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(radius));
}
#endif
inline efl::gfx::Blur::operator ::efl::gfx::Blur() const { return *static_cast< ::efl::gfx::Blur const*>(static_cast<void const*>(this)); }
inline efl::gfx::Blur::operator ::efl::gfx::Blur&() { return *static_cast< ::efl::gfx::Blur*>(static_cast<void*>(this)); }
inline efl::gfx::Blur::operator ::efl::gfx::Blur const&() const { return *static_cast< ::efl::gfx::Blur const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
