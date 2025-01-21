#ifndef EFL_TEXT_STYLE_IMPL_HH
#define EFL_TEXT_STYLE_IMPL_HH

#include "efl_text_style.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<void>::type Text_Style::text_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits<Efl_Text_Style_Background_Type>::type Text_Style::text_background_type_get() const
{
    Efl_Text_Style_Background_Type __return_value =  ::efl_text_background_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Style_Background_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_background_type_set( ::efl::eolian::in_traits<Efl_Text_Style_Background_Type>::type type) const
{
     ::efl_text_background_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Style_Background_Type,  ::efl::eolian::in_traits<Efl_Text_Style_Background_Type>::type>(type));
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_background_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_background_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_background_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_background_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits<Efl_Text_Style_Underline_Type>::type Text_Style::text_underline_type_get() const
{
    Efl_Text_Style_Underline_Type __return_value =  ::efl_text_underline_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Style_Underline_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_underline_type_set( ::efl::eolian::in_traits<Efl_Text_Style_Underline_Type>::type type) const
{
     ::efl_text_underline_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Style_Underline_Type,  ::efl::eolian::in_traits<Efl_Text_Style_Underline_Type>::type>(type));
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_underline_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_underline_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_underline_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_underline_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits<double>::type Text_Style::text_underline_height_get() const
{
    double __return_value =  ::efl_text_underline_height_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_underline_height_set( ::efl::eolian::in_traits<double>::type height) const
{
     ::efl_text_underline_height_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(height));
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_underline_dashed_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_underline_dashed_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_underline_dashed_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_underline_dashed_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits<int>::type Text_Style::text_underline_dashed_width_get() const
{
    int __return_value =  ::efl_text_underline_dashed_width_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_underline_dashed_width_set( ::efl::eolian::in_traits<int>::type width) const
{
     ::efl_text_underline_dashed_width_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(width));
}
inline ::efl::eolian::return_traits<int>::type Text_Style::text_underline_dashed_gap_get() const
{
    int __return_value =  ::efl_text_underline_dashed_gap_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_underline_dashed_gap_set( ::efl::eolian::in_traits<int>::type gap) const
{
     ::efl_text_underline_dashed_gap_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(gap));
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_secondary_underline_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_secondary_underline_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_secondary_underline_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_secondary_underline_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits<Efl_Text_Style_Strikethrough_Type>::type Text_Style::text_strikethrough_type_get() const
{
    Efl_Text_Style_Strikethrough_Type __return_value =  ::efl_text_strikethrough_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Style_Strikethrough_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_strikethrough_type_set( ::efl::eolian::in_traits<Efl_Text_Style_Strikethrough_Type>::type type) const
{
     ::efl_text_strikethrough_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Style_Strikethrough_Type,  ::efl::eolian::in_traits<Efl_Text_Style_Strikethrough_Type>::type>(type));
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_strikethrough_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_strikethrough_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_strikethrough_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_strikethrough_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits<Efl_Text_Style_Effect_Type>::type Text_Style::text_effect_type_get() const
{
    Efl_Text_Style_Effect_Type __return_value =  ::efl_text_effect_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Style_Effect_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_effect_type_set( ::efl::eolian::in_traits<Efl_Text_Style_Effect_Type>::type type) const
{
     ::efl_text_effect_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Style_Effect_Type,  ::efl::eolian::in_traits<Efl_Text_Style_Effect_Type>::type>(type));
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_outline_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_outline_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_outline_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_outline_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits<Efl_Text_Style_Shadow_Direction>::type Text_Style::text_shadow_direction_get() const
{
    Efl_Text_Style_Shadow_Direction __return_value =  ::efl_text_shadow_direction_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Style_Shadow_Direction>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_shadow_direction_set( ::efl::eolian::in_traits<Efl_Text_Style_Shadow_Direction>::type type) const
{
     ::efl_text_shadow_direction_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Style_Shadow_Direction,  ::efl::eolian::in_traits<Efl_Text_Style_Shadow_Direction>::type>(type));
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_shadow_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_shadow_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_shadow_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_shadow_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_glow_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_glow_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_glow_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_glow_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_secondary_glow_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_secondary_glow_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_secondary_glow_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_secondary_glow_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Text_Style::text_gfx_filter_get() const
{
    const char * __return_value =  ::efl_text_gfx_filter_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_gfx_filter_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type code) const
{
     ::efl_text_gfx_filter_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(code));
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<void>::type Text_Style::text_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits<Efl_Text_Style_Background_Type>::type Text_Style::text_background_type_get() const
{
    Efl_Text_Style_Background_Type __return_value =  ::efl_text_background_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Style_Background_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_background_type_set( ::efl::eolian::in_traits<Efl_Text_Style_Background_Type>::type type) const
{
     ::efl_text_background_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Style_Background_Type,  ::efl::eolian::in_traits<Efl_Text_Style_Background_Type>::type>(type));
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_background_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_background_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_background_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_background_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits<Efl_Text_Style_Underline_Type>::type Text_Style::text_underline_type_get() const
{
    Efl_Text_Style_Underline_Type __return_value =  ::efl_text_underline_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Style_Underline_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_underline_type_set( ::efl::eolian::in_traits<Efl_Text_Style_Underline_Type>::type type) const
{
     ::efl_text_underline_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Style_Underline_Type,  ::efl::eolian::in_traits<Efl_Text_Style_Underline_Type>::type>(type));
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_underline_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_underline_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_underline_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_underline_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits<double>::type Text_Style::text_underline_height_get() const
{
    double __return_value =  ::efl_text_underline_height_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_underline_height_set( ::efl::eolian::in_traits<double>::type height) const
{
     ::efl_text_underline_height_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(height));
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_underline_dashed_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_underline_dashed_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_underline_dashed_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_underline_dashed_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits<int>::type Text_Style::text_underline_dashed_width_get() const
{
    int __return_value =  ::efl_text_underline_dashed_width_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_underline_dashed_width_set( ::efl::eolian::in_traits<int>::type width) const
{
     ::efl_text_underline_dashed_width_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(width));
}
inline ::efl::eolian::return_traits<int>::type Text_Style::text_underline_dashed_gap_get() const
{
    int __return_value =  ::efl_text_underline_dashed_gap_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_underline_dashed_gap_set( ::efl::eolian::in_traits<int>::type gap) const
{
     ::efl_text_underline_dashed_gap_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(gap));
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_secondary_underline_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_secondary_underline_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_secondary_underline_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_secondary_underline_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits<Efl_Text_Style_Strikethrough_Type>::type Text_Style::text_strikethrough_type_get() const
{
    Efl_Text_Style_Strikethrough_Type __return_value =  ::efl_text_strikethrough_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Style_Strikethrough_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_strikethrough_type_set( ::efl::eolian::in_traits<Efl_Text_Style_Strikethrough_Type>::type type) const
{
     ::efl_text_strikethrough_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Style_Strikethrough_Type,  ::efl::eolian::in_traits<Efl_Text_Style_Strikethrough_Type>::type>(type));
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_strikethrough_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_strikethrough_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_strikethrough_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_strikethrough_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits<Efl_Text_Style_Effect_Type>::type Text_Style::text_effect_type_get() const
{
    Efl_Text_Style_Effect_Type __return_value =  ::efl_text_effect_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Style_Effect_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_effect_type_set( ::efl::eolian::in_traits<Efl_Text_Style_Effect_Type>::type type) const
{
     ::efl_text_effect_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Style_Effect_Type,  ::efl::eolian::in_traits<Efl_Text_Style_Effect_Type>::type>(type));
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_outline_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_outline_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_outline_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_outline_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits<Efl_Text_Style_Shadow_Direction>::type Text_Style::text_shadow_direction_get() const
{
    Efl_Text_Style_Shadow_Direction __return_value =  ::efl_text_shadow_direction_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Style_Shadow_Direction>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_shadow_direction_set( ::efl::eolian::in_traits<Efl_Text_Style_Shadow_Direction>::type type) const
{
     ::efl_text_shadow_direction_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Style_Shadow_Direction,  ::efl::eolian::in_traits<Efl_Text_Style_Shadow_Direction>::type>(type));
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_shadow_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_shadow_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_shadow_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_shadow_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_glow_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_glow_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_glow_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_glow_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_secondary_glow_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const
{
    unsigned char __out_param_r = {};
    unsigned char __out_param_g = {};
    unsigned char __out_param_b = {};
    unsigned char __out_param_a = {};
     ::efl_text_secondary_glow_color_get(_eo_ptr(),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned char>::type, unsigned char>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_secondary_glow_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const
{
     ::efl_text_secondary_glow_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(r),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(g),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(b),
         ::efl::eolian::convert_to_c<unsigned char,  ::efl::eolian::in_traits< unsigned char>::type>(a));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Text_Style::text_gfx_filter_get() const
{
    const char * __return_value =  ::efl_text_gfx_filter_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Style::text_gfx_filter_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type code) const
{
     ::efl_text_gfx_filter_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(code));
}
inline efl::Text_Style::operator ::efl::Text_Style() const { return *static_cast< ::efl::Text_Style const*>(static_cast<void const*>(this)); }
inline efl::Text_Style::operator ::efl::Text_Style&() { return *static_cast< ::efl::Text_Style*>(static_cast<void*>(this)); }
inline efl::Text_Style::operator ::efl::Text_Style const&() const { return *static_cast< ::efl::Text_Style const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
