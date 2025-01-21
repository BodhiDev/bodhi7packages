#ifndef EFL_GFX_VG_VALUE_PROVIDER_IMPL_HH
#define EFL_GFX_VG_VALUE_PROVIDER_IMPL_HH

#include "efl_gfx_vg_value_provider.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { namespace vg { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::stringshare>::type Value_Provider::keypath_get() const
{
    Eina_Stringshare * __return_value =  ::efl_gfx_vg_value_provider_keypath_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::stringshare>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Value_Provider::keypath_set( ::efl::eolian::in_traits< ::efl::eina::stringshare>::type keypath) const
{
     ::efl_gfx_vg_value_provider_keypath_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Stringshare *,  ::efl::eolian::in_traits< ::efl::eina::stringshare>::type>(keypath));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Matrix4 *>::type Value_Provider::transform_get() const
{
    Eina_Matrix4 * __return_value =  ::efl_gfx_vg_value_provider_transform_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Matrix4 *>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Value_Provider::transform_set( ::efl::eolian::in_traits<Eina_Matrix4 *>::type m) const
{
     ::efl_gfx_vg_value_provider_transform_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Matrix4 *,  ::efl::eolian::in_traits<Eina_Matrix4 *>::type>(m));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Value_Provider::fill_color_get( ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const
{
    int __out_param_r = {};
    int __out_param_g = {};
    int __out_param_b = {};
    int __out_param_a = {};
     ::efl_gfx_vg_value_provider_fill_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(a, __out_param_a);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Value_Provider::fill_color_set( ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const
{
     ::efl_gfx_vg_value_provider_fill_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(r),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(g),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(b),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(a));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Value_Provider::stroke_color_get( ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const
{
    int __out_param_r = {};
    int __out_param_g = {};
    int __out_param_b = {};
    int __out_param_a = {};
     ::efl_gfx_vg_value_provider_stroke_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(a, __out_param_a);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Value_Provider::stroke_color_set( ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const
{
     ::efl_gfx_vg_value_provider_stroke_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(r),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(g),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(b),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(a));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Value_Provider::stroke_width_get() const
{
    double __return_value =  ::efl_gfx_vg_value_provider_stroke_width_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Value_Provider::stroke_width_set( ::efl::eolian::in_traits<double>::type width) const
{
     ::efl_gfx_vg_value_provider_stroke_width_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(width));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Gfx_Vg_Value_Provider_Flags>::type Value_Provider::updated_get() const
{
    Efl_Gfx_Vg_Value_Provider_Flags __return_value =  ::efl_gfx_vg_value_provider_updated_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Vg_Value_Provider_Flags>::type>(__return_value);
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace gfx { namespace vg { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::stringshare>::type Value_Provider::keypath_get() const
{
    Eina_Stringshare * __return_value =  ::efl_gfx_vg_value_provider_keypath_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::stringshare>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Value_Provider::keypath_set( ::efl::eolian::in_traits< ::efl::eina::stringshare>::type keypath) const
{
     ::efl_gfx_vg_value_provider_keypath_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Stringshare *,  ::efl::eolian::in_traits< ::efl::eina::stringshare>::type>(keypath));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Matrix4 *>::type Value_Provider::transform_get() const
{
    Eina_Matrix4 * __return_value =  ::efl_gfx_vg_value_provider_transform_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Matrix4 *>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Value_Provider::transform_set( ::efl::eolian::in_traits<Eina_Matrix4 *>::type m) const
{
     ::efl_gfx_vg_value_provider_transform_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Matrix4 *,  ::efl::eolian::in_traits<Eina_Matrix4 *>::type>(m));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Value_Provider::fill_color_get( ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const
{
    int __out_param_r = {};
    int __out_param_g = {};
    int __out_param_b = {};
    int __out_param_a = {};
     ::efl_gfx_vg_value_provider_fill_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(a, __out_param_a);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Value_Provider::fill_color_set( ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const
{
     ::efl_gfx_vg_value_provider_fill_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(r),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(g),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(b),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(a));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Value_Provider::stroke_color_get( ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const
{
    int __out_param_r = {};
    int __out_param_g = {};
    int __out_param_b = {};
    int __out_param_a = {};
     ::efl_gfx_vg_value_provider_stroke_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(a, __out_param_a);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Value_Provider::stroke_color_set( ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const
{
     ::efl_gfx_vg_value_provider_stroke_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(r),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(g),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(b),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(a));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Value_Provider::stroke_width_get() const
{
    double __return_value =  ::efl_gfx_vg_value_provider_stroke_width_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Value_Provider::stroke_width_set( ::efl::eolian::in_traits<double>::type width) const
{
     ::efl_gfx_vg_value_provider_stroke_width_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(width));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Gfx_Vg_Value_Provider_Flags>::type Value_Provider::updated_get() const
{
    Efl_Gfx_Vg_Value_Provider_Flags __return_value =  ::efl_gfx_vg_value_provider_updated_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Vg_Value_Provider_Flags>::type>(__return_value);
}
#endif
inline efl::gfx::vg::Value_Provider::operator ::efl::gfx::vg::Value_Provider() const { return *static_cast< ::efl::gfx::vg::Value_Provider const*>(static_cast<void const*>(this)); }
inline efl::gfx::vg::Value_Provider::operator ::efl::gfx::vg::Value_Provider&() { return *static_cast< ::efl::gfx::vg::Value_Provider*>(static_cast<void*>(this)); }
inline efl::gfx::vg::Value_Provider::operator ::efl::gfx::vg::Value_Provider const&() const { return *static_cast< ::efl::gfx::vg::Value_Provider const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
