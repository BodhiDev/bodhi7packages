#ifndef EFL_GFX_GRADIENT_IMPL_HH
#define EFL_GFX_GRADIENT_IMPL_HH

#include "efl_gfx_gradient.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gradient::stop_get( ::efl::eolian::out_traits<const Efl_Gfx_Gradient_Stop *>::type colors,  ::efl::eolian::out_traits< unsigned int>::type length) const
{
    const Efl_Gfx_Gradient_Stop * __out_param_colors = {};
    unsigned int __out_param_length = {};
     ::efl_gfx_gradient_stop_get(_eo_ptr(),
        & __out_param_colors,
        & __out_param_length);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<const Efl_Gfx_Gradient_Stop *>::type, const Efl_Gfx_Gradient_Stop *>(colors, __out_param_colors);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(length, __out_param_length);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gradient::stop_set( ::efl::eolian::in_traits<const Efl_Gfx_Gradient_Stop *>::type colors,  ::efl::eolian::in_traits< unsigned int>::type length) const
{
     ::efl_gfx_gradient_stop_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Efl_Gfx_Gradient_Stop *,  ::efl::eolian::in_traits<const Efl_Gfx_Gradient_Stop *>::type>(colors),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(length));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Gfx_Gradient_Spread>::type Gradient::spread_get() const
{
    Efl_Gfx_Gradient_Spread __return_value =  ::efl_gfx_gradient_spread_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Gradient_Spread>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gradient::spread_set( ::efl::eolian::in_traits<Efl_Gfx_Gradient_Spread>::type s) const
{
     ::efl_gfx_gradient_spread_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Gradient_Spread,  ::efl::eolian::in_traits<Efl_Gfx_Gradient_Spread>::type>(s));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gradient::stop_get( ::efl::eolian::out_traits<const Efl_Gfx_Gradient_Stop *>::type colors,  ::efl::eolian::out_traits< unsigned int>::type length) const
{
    const Efl_Gfx_Gradient_Stop * __out_param_colors = {};
    unsigned int __out_param_length = {};
     ::efl_gfx_gradient_stop_get(_eo_ptr(),
        & __out_param_colors,
        & __out_param_length);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<const Efl_Gfx_Gradient_Stop *>::type, const Efl_Gfx_Gradient_Stop *>(colors, __out_param_colors);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(length, __out_param_length);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gradient::stop_set( ::efl::eolian::in_traits<const Efl_Gfx_Gradient_Stop *>::type colors,  ::efl::eolian::in_traits< unsigned int>::type length) const
{
     ::efl_gfx_gradient_stop_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Efl_Gfx_Gradient_Stop *,  ::efl::eolian::in_traits<const Efl_Gfx_Gradient_Stop *>::type>(colors),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(length));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Gfx_Gradient_Spread>::type Gradient::spread_get() const
{
    Efl_Gfx_Gradient_Spread __return_value =  ::efl_gfx_gradient_spread_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Gradient_Spread>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gradient::spread_set( ::efl::eolian::in_traits<Efl_Gfx_Gradient_Spread>::type s) const
{
     ::efl_gfx_gradient_spread_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Gradient_Spread,  ::efl::eolian::in_traits<Efl_Gfx_Gradient_Spread>::type>(s));
}
#endif
inline efl::gfx::Gradient::operator ::efl::gfx::Gradient() const { return *static_cast< ::efl::gfx::Gradient const*>(static_cast<void const*>(this)); }
inline efl::gfx::Gradient::operator ::efl::gfx::Gradient&() { return *static_cast< ::efl::gfx::Gradient*>(static_cast<void*>(this)); }
inline efl::gfx::Gradient::operator ::efl::gfx::Gradient const&() const { return *static_cast< ::efl::gfx::Gradient const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
