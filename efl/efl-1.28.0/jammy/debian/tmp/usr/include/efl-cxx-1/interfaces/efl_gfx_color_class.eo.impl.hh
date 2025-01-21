#ifndef EFL_GFX_COLOR_CLASS_IMPL_HH
#define EFL_GFX_COLOR_CLASS_IMPL_HH

#include "efl_gfx_color_class.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Color_Class::color_class_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type layer,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const
{
    int __out_param_r = {};
    int __out_param_g = {};
    int __out_param_b = {};
    int __out_param_a = {};
    Eina_Bool __return_value =  ::efl_gfx_color_class_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(color_class),
         ::efl::eolian::convert_to_c<Efl_Gfx_Color_Class_Layer,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type>(layer),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(a, __out_param_a);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Color_Class::color_class_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type layer,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const
{
    Eina_Bool __return_value =  ::efl_gfx_color_class_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(color_class),
         ::efl::eolian::convert_to_c<Efl_Gfx_Color_Class_Layer,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type>(layer),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(r),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(g),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(b),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(a));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Color_Class::color_class_code_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type layer) const
{
    const char * __return_value =  ::efl_gfx_color_class_code_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(color_class),
         ::efl::eolian::convert_to_c<Efl_Gfx_Color_Class_Layer,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type>(layer));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Color_Class::color_class_code_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type layer,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type colorcode) const
{
    Eina_Bool __return_value =  ::efl_gfx_color_class_code_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(color_class),
         ::efl::eolian::convert_to_c<Efl_Gfx_Color_Class_Layer,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type>(layer),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(colorcode));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Color_Class::color_class_description_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class) const
{
    const char * __return_value =  ::efl_gfx_color_class_description_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(color_class));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Color_Class::color_class_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class) const
{
     ::efl_gfx_color_class_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(color_class));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Color_Class::color_class_clear() const
{
     ::efl_gfx_color_class_clear(_eo_ptr());
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Color_Class::color_class_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type layer,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const
{
    int __out_param_r = {};
    int __out_param_g = {};
    int __out_param_b = {};
    int __out_param_a = {};
    Eina_Bool __return_value =  ::efl_gfx_color_class_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(color_class),
         ::efl::eolian::convert_to_c<Efl_Gfx_Color_Class_Layer,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type>(layer),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(a, __out_param_a);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Color_Class::color_class_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type layer,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const
{
    Eina_Bool __return_value =  ::efl_gfx_color_class_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(color_class),
         ::efl::eolian::convert_to_c<Efl_Gfx_Color_Class_Layer,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type>(layer),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(r),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(g),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(b),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(a));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Color_Class::color_class_code_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type layer) const
{
    const char * __return_value =  ::efl_gfx_color_class_code_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(color_class),
         ::efl::eolian::convert_to_c<Efl_Gfx_Color_Class_Layer,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type>(layer));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Color_Class::color_class_code_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type layer,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type colorcode) const
{
    Eina_Bool __return_value =  ::efl_gfx_color_class_code_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(color_class),
         ::efl::eolian::convert_to_c<Efl_Gfx_Color_Class_Layer,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type>(layer),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(colorcode));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Color_Class::color_class_description_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class) const
{
    const char * __return_value =  ::efl_gfx_color_class_description_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(color_class));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Color_Class::color_class_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class) const
{
     ::efl_gfx_color_class_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(color_class));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Color_Class::color_class_clear() const
{
     ::efl_gfx_color_class_clear(_eo_ptr());
}
#endif
inline efl::gfx::Color_Class::operator ::efl::gfx::Color_Class() const { return *static_cast< ::efl::gfx::Color_Class const*>(static_cast<void const*>(this)); }
inline efl::gfx::Color_Class::operator ::efl::gfx::Color_Class&() { return *static_cast< ::efl::gfx::Color_Class*>(static_cast<void*>(this)); }
inline efl::gfx::Color_Class::operator ::efl::gfx::Color_Class const&() const { return *static_cast< ::efl::gfx::Color_Class const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
