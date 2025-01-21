#ifndef EFL_GFX_COLOR_IMPL_HH
#define EFL_GFX_COLOR_IMPL_HH

#include "efl_gfx_color.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
inline ::efl::eolian::return_traits<void>::type Color::color_get( ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const
{
    int __out_param_r = {};
    int __out_param_g = {};
    int __out_param_b = {};
    int __out_param_a = {};
     ::efl_gfx_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Color::color_set( ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const
{
     ::efl_gfx_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(r),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(g),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(b),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(a));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Color::color_code_get() const
{
    const char * __return_value =  ::efl_gfx_color_code_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Color::color_code_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type colorcode) const
{
     ::efl_gfx_color_code_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(colorcode));
}
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
inline ::efl::eolian::return_traits<void>::type Color::color_get( ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const
{
    int __out_param_r = {};
    int __out_param_g = {};
    int __out_param_b = {};
    int __out_param_a = {};
     ::efl_gfx_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Color::color_set( ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const
{
     ::efl_gfx_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(r),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(g),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(b),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(a));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Color::color_code_get() const
{
    const char * __return_value =  ::efl_gfx_color_code_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Color::color_code_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type colorcode) const
{
     ::efl_gfx_color_code_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(colorcode));
}
inline efl::gfx::Color::operator ::efl::gfx::Color() const { return *static_cast< ::efl::gfx::Color const*>(static_cast<void const*>(this)); }
inline efl::gfx::Color::operator ::efl::gfx::Color&() { return *static_cast< ::efl::gfx::Color*>(static_cast<void*>(this)); }
inline efl::gfx::Color::operator ::efl::gfx::Color const&() const { return *static_cast< ::efl::gfx::Color const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
