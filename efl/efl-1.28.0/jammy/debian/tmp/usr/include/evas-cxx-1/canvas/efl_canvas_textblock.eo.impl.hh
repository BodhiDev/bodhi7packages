#ifndef EFL_CANVAS_TEXTBLOCK_IMPL_HH
#define EFL_CANVAS_TEXTBLOCK_IMPL_HH

#include "efl_canvas_textblock.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
inline ::efl::eolian::return_traits<bool>::type Textblock::is_empty_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_textblock_is_empty_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Textblock::style_insets_get( ::efl::eolian::out_traits<int>::type l,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type t,  ::efl::eolian::out_traits<int>::type b) const
{
    int __out_param_l = {};
    int __out_param_r = {};
    int __out_param_t = {};
    int __out_param_b = {};
     ::efl_canvas_textblock_style_insets_get(_eo_ptr(),
        & __out_param_l,
        & __out_param_r,
        & __out_param_t,
        & __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(l, __out_param_l);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(t, __out_param_t);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(b, __out_param_b);
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Textblock::bidi_delimiters_get() const
{
    const char * __return_value =  ::efl_canvas_textblock_bidi_delimiters_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Textblock::bidi_delimiters_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type delim) const
{
     ::efl_canvas_textblock_bidi_delimiters_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(delim));
}
inline ::efl::eolian::return_traits<bool>::type Textblock::newline_as_paragraph_separator_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_textblock_newline_as_paragraph_separator_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Textblock::newline_as_paragraph_separator_set( ::efl::eolian::in_traits<bool>::type mode) const
{
     ::efl_canvas_textblock_newline_as_paragraph_separator_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(mode));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Textblock::all_styles_get() const
{
    const char * __return_value =  ::efl_canvas_textblock_all_styles_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Textblock::size_formatted_get() const
{
    Eina_Size2D __return_value =  ::efl_canvas_textblock_size_formatted_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Textblock::size_native_get() const
{
    Eina_Size2D __return_value =  ::efl_canvas_textblock_size_native_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::text_cursor::Object>::type Textblock::cursor_create() const
{
     ::Efl_Text_Cursor_Object* __return_value =  ::efl_canvas_textblock_cursor_create(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::text_cursor::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Textblock::visible_range_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type end) const
{
    Eina_Bool __return_value =  ::efl_canvas_textblock_visible_range_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(start),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(end));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Textblock::style_apply( ::efl::eolian::in_traits< ::efl::eina::string_view>::type style) const
{
     ::efl_canvas_textblock_style_apply(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(style));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Textblock::obstacle_add( ::efl::eolian::in_traits< ::efl::canvas::Object>::type eo_obs) const
{
    Eina_Bool __return_value =  ::efl_canvas_textblock_obstacle_add(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(eo_obs));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Textblock::obstacle_del( ::efl::eolian::in_traits< ::efl::canvas::Object>::type eo_obs) const
{
    Eina_Bool __return_value =  ::efl_canvas_textblock_obstacle_del(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(eo_obs));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Textblock::obstacles_update() const
{
     ::efl_canvas_textblock_obstacles_update(_eo_ptr());
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
inline ::efl::eolian::return_traits<bool>::type Textblock::is_empty_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_textblock_is_empty_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Textblock::style_insets_get( ::efl::eolian::out_traits<int>::type l,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type t,  ::efl::eolian::out_traits<int>::type b) const
{
    int __out_param_l = {};
    int __out_param_r = {};
    int __out_param_t = {};
    int __out_param_b = {};
     ::efl_canvas_textblock_style_insets_get(_eo_ptr(),
        & __out_param_l,
        & __out_param_r,
        & __out_param_t,
        & __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(l, __out_param_l);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(t, __out_param_t);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(b, __out_param_b);
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Textblock::bidi_delimiters_get() const
{
    const char * __return_value =  ::efl_canvas_textblock_bidi_delimiters_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Textblock::bidi_delimiters_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type delim) const
{
     ::efl_canvas_textblock_bidi_delimiters_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(delim));
}
inline ::efl::eolian::return_traits<bool>::type Textblock::newline_as_paragraph_separator_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_textblock_newline_as_paragraph_separator_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Textblock::newline_as_paragraph_separator_set( ::efl::eolian::in_traits<bool>::type mode) const
{
     ::efl_canvas_textblock_newline_as_paragraph_separator_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(mode));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Textblock::all_styles_get() const
{
    const char * __return_value =  ::efl_canvas_textblock_all_styles_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Textblock::size_formatted_get() const
{
    Eina_Size2D __return_value =  ::efl_canvas_textblock_size_formatted_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Textblock::size_native_get() const
{
    Eina_Size2D __return_value =  ::efl_canvas_textblock_size_native_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::text_cursor::Object>::type Textblock::cursor_create() const
{
     ::Efl_Text_Cursor_Object* __return_value =  ::efl_canvas_textblock_cursor_create(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::text_cursor::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Textblock::visible_range_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type end) const
{
    Eina_Bool __return_value =  ::efl_canvas_textblock_visible_range_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(start),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(end));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Textblock::style_apply( ::efl::eolian::in_traits< ::efl::eina::string_view>::type style) const
{
     ::efl_canvas_textblock_style_apply(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(style));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Textblock::obstacle_add( ::efl::eolian::in_traits< ::efl::canvas::Object>::type eo_obs) const
{
    Eina_Bool __return_value =  ::efl_canvas_textblock_obstacle_add(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(eo_obs));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Textblock::obstacle_del( ::efl::eolian::in_traits< ::efl::canvas::Object>::type eo_obs) const
{
    Eina_Bool __return_value =  ::efl_canvas_textblock_obstacle_del(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(eo_obs));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Textblock::obstacles_update() const
{
     ::efl_canvas_textblock_obstacles_update(_eo_ptr());
}
#endif
inline efl::canvas::Textblock::operator ::efl::canvas::Textblock() const { return *static_cast< ::efl::canvas::Textblock const*>(static_cast<void const*>(this)); }
inline efl::canvas::Textblock::operator ::efl::canvas::Textblock&() { return *static_cast< ::efl::canvas::Textblock*>(static_cast<void*>(this)); }
inline efl::canvas::Textblock::operator ::efl::canvas::Textblock const&() const { return *static_cast< ::efl::canvas::Textblock const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
