#ifndef EFL_GFX_SHAPE_IMPL_HH
#define EFL_GFX_SHAPE_IMPL_HH

#include "efl_gfx_shape.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Shape::stroke_scale_get() const
{
    double __return_value =  ::efl_gfx_shape_stroke_scale_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_scale_set( ::efl::eolian::in_traits<double>::type s) const
{
     ::efl_gfx_shape_stroke_scale_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(s));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_color_get( ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const
{
    int __out_param_r = {};
    int __out_param_g = {};
    int __out_param_b = {};
    int __out_param_a = {};
     ::efl_gfx_shape_stroke_color_get(_eo_ptr(),
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
inline ::efl::eolian::return_traits<void>::type Shape::stroke_color_set( ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const
{
     ::efl_gfx_shape_stroke_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(r),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(g),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(b),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(a));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Shape::stroke_width_get() const
{
    double __return_value =  ::efl_gfx_shape_stroke_width_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_width_set( ::efl::eolian::in_traits<double>::type w) const
{
     ::efl_gfx_shape_stroke_width_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(w));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Shape::stroke_location_get() const
{
    double __return_value =  ::efl_gfx_shape_stroke_location_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_location_set( ::efl::eolian::in_traits<double>::type centered) const
{
     ::efl_gfx_shape_stroke_location_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(centered));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_dash_get( ::efl::eolian::out_traits<const Efl_Gfx_Dash *>::type dash,  ::efl::eolian::out_traits< unsigned int>::type length) const
{
    const Efl_Gfx_Dash * __out_param_dash = {};
    unsigned int __out_param_length = {};
     ::efl_gfx_shape_stroke_dash_get(_eo_ptr(),
        & __out_param_dash,
        & __out_param_length);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<const Efl_Gfx_Dash *>::type, const Efl_Gfx_Dash *>(dash, __out_param_dash);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(length, __out_param_length);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_dash_set( ::efl::eolian::in_traits<const Efl_Gfx_Dash *>::type dash,  ::efl::eolian::in_traits< unsigned int>::type length) const
{
     ::efl_gfx_shape_stroke_dash_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Efl_Gfx_Dash *,  ::efl::eolian::in_traits<const Efl_Gfx_Dash *>::type>(dash),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(length));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Gfx_Cap>::type Shape::stroke_cap_get() const
{
    Efl_Gfx_Cap __return_value =  ::efl_gfx_shape_stroke_cap_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Cap>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_cap_set( ::efl::eolian::in_traits<Efl_Gfx_Cap>::type c) const
{
     ::efl_gfx_shape_stroke_cap_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Cap,  ::efl::eolian::in_traits<Efl_Gfx_Cap>::type>(c));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Gfx_Join>::type Shape::stroke_join_get() const
{
    Efl_Gfx_Join __return_value =  ::efl_gfx_shape_stroke_join_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Join>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_join_set( ::efl::eolian::in_traits<Efl_Gfx_Join>::type j) const
{
     ::efl_gfx_shape_stroke_join_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Join,  ::efl::eolian::in_traits<Efl_Gfx_Join>::type>(j));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Shape::stroke_miterlimit_get() const
{
    double __return_value =  ::efl_gfx_shape_stroke_miterlimit_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_miterlimit_set( ::efl::eolian::in_traits<double>::type miterlimit) const
{
     ::efl_gfx_shape_stroke_miterlimit_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(miterlimit));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Gfx_Fill_Rule>::type Shape::fill_rule_get() const
{
    Efl_Gfx_Fill_Rule __return_value =  ::efl_gfx_shape_fill_rule_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Fill_Rule>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::fill_rule_set( ::efl::eolian::in_traits<Efl_Gfx_Fill_Rule>::type fill_rule) const
{
     ::efl_gfx_shape_fill_rule_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Fill_Rule,  ::efl::eolian::in_traits<Efl_Gfx_Fill_Rule>::type>(fill_rule));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Shape::stroke_scale_get() const
{
    double __return_value =  ::efl_gfx_shape_stroke_scale_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_scale_set( ::efl::eolian::in_traits<double>::type s) const
{
     ::efl_gfx_shape_stroke_scale_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(s));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_color_get( ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const
{
    int __out_param_r = {};
    int __out_param_g = {};
    int __out_param_b = {};
    int __out_param_a = {};
     ::efl_gfx_shape_stroke_color_get(_eo_ptr(),
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
inline ::efl::eolian::return_traits<void>::type Shape::stroke_color_set( ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const
{
     ::efl_gfx_shape_stroke_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(r),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(g),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(b),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(a));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Shape::stroke_width_get() const
{
    double __return_value =  ::efl_gfx_shape_stroke_width_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_width_set( ::efl::eolian::in_traits<double>::type w) const
{
     ::efl_gfx_shape_stroke_width_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(w));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Shape::stroke_location_get() const
{
    double __return_value =  ::efl_gfx_shape_stroke_location_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_location_set( ::efl::eolian::in_traits<double>::type centered) const
{
     ::efl_gfx_shape_stroke_location_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(centered));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_dash_get( ::efl::eolian::out_traits<const Efl_Gfx_Dash *>::type dash,  ::efl::eolian::out_traits< unsigned int>::type length) const
{
    const Efl_Gfx_Dash * __out_param_dash = {};
    unsigned int __out_param_length = {};
     ::efl_gfx_shape_stroke_dash_get(_eo_ptr(),
        & __out_param_dash,
        & __out_param_length);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<const Efl_Gfx_Dash *>::type, const Efl_Gfx_Dash *>(dash, __out_param_dash);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(length, __out_param_length);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_dash_set( ::efl::eolian::in_traits<const Efl_Gfx_Dash *>::type dash,  ::efl::eolian::in_traits< unsigned int>::type length) const
{
     ::efl_gfx_shape_stroke_dash_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Efl_Gfx_Dash *,  ::efl::eolian::in_traits<const Efl_Gfx_Dash *>::type>(dash),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(length));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Gfx_Cap>::type Shape::stroke_cap_get() const
{
    Efl_Gfx_Cap __return_value =  ::efl_gfx_shape_stroke_cap_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Cap>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_cap_set( ::efl::eolian::in_traits<Efl_Gfx_Cap>::type c) const
{
     ::efl_gfx_shape_stroke_cap_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Cap,  ::efl::eolian::in_traits<Efl_Gfx_Cap>::type>(c));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Gfx_Join>::type Shape::stroke_join_get() const
{
    Efl_Gfx_Join __return_value =  ::efl_gfx_shape_stroke_join_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Join>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_join_set( ::efl::eolian::in_traits<Efl_Gfx_Join>::type j) const
{
     ::efl_gfx_shape_stroke_join_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Join,  ::efl::eolian::in_traits<Efl_Gfx_Join>::type>(j));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Shape::stroke_miterlimit_get() const
{
    double __return_value =  ::efl_gfx_shape_stroke_miterlimit_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_miterlimit_set( ::efl::eolian::in_traits<double>::type miterlimit) const
{
     ::efl_gfx_shape_stroke_miterlimit_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(miterlimit));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Gfx_Fill_Rule>::type Shape::fill_rule_get() const
{
    Efl_Gfx_Fill_Rule __return_value =  ::efl_gfx_shape_fill_rule_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Fill_Rule>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::fill_rule_set( ::efl::eolian::in_traits<Efl_Gfx_Fill_Rule>::type fill_rule) const
{
     ::efl_gfx_shape_fill_rule_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Fill_Rule,  ::efl::eolian::in_traits<Efl_Gfx_Fill_Rule>::type>(fill_rule));
}
#endif
inline efl::gfx::Shape::operator ::efl::gfx::Shape() const { return *static_cast< ::efl::gfx::Shape const*>(static_cast<void const*>(this)); }
inline efl::gfx::Shape::operator ::efl::gfx::Shape&() { return *static_cast< ::efl::gfx::Shape*>(static_cast<void*>(this)); }
inline efl::gfx::Shape::operator ::efl::gfx::Shape const&() const { return *static_cast< ::efl::gfx::Shape const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
