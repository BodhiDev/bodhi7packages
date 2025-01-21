#ifndef EFL_TEXT_FORMAT_IMPL_HH
#define EFL_TEXT_FORMAT_IMPL_HH

#include "efl_text_format.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<double>::type Text_Format::ellipsis_get() const
{
    double __return_value =  ::efl_text_ellipsis_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::ellipsis_set( ::efl::eolian::in_traits<double>::type value) const
{
     ::efl_text_ellipsis_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(value));
}
inline ::efl::eolian::return_traits<Efl_Text_Format_Wrap>::type Text_Format::wrap_get() const
{
    Efl_Text_Format_Wrap __return_value =  ::efl_text_wrap_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Format_Wrap>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::wrap_set( ::efl::eolian::in_traits<Efl_Text_Format_Wrap>::type wrap) const
{
     ::efl_text_wrap_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Format_Wrap,  ::efl::eolian::in_traits<Efl_Text_Format_Wrap>::type>(wrap));
}
inline ::efl::eolian::return_traits<bool>::type Text_Format::multiline_get() const
{
    Eina_Bool __return_value =  ::efl_text_multiline_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::multiline_set( ::efl::eolian::in_traits<bool>::type enabled) const
{
     ::efl_text_multiline_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enabled));
}
inline ::efl::eolian::return_traits<Efl_Text_Format_Horizontal_Alignment_Auto_Type>::type Text_Format::text_horizontal_align_auto_type_get() const
{
    Efl_Text_Format_Horizontal_Alignment_Auto_Type __return_value =  ::efl_text_horizontal_align_auto_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Format_Horizontal_Alignment_Auto_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::text_horizontal_align_auto_type_set( ::efl::eolian::in_traits<Efl_Text_Format_Horizontal_Alignment_Auto_Type>::type value) const
{
     ::efl_text_horizontal_align_auto_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Format_Horizontal_Alignment_Auto_Type,  ::efl::eolian::in_traits<Efl_Text_Format_Horizontal_Alignment_Auto_Type>::type>(value));
}
inline ::efl::eolian::return_traits<double>::type Text_Format::text_horizontal_align_get() const
{
    double __return_value =  ::efl_text_horizontal_align_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::text_horizontal_align_set( ::efl::eolian::in_traits<double>::type value) const
{
     ::efl_text_horizontal_align_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(value));
}
inline ::efl::eolian::return_traits<double>::type Text_Format::text_vertical_align_get() const
{
    double __return_value =  ::efl_text_vertical_align_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::text_vertical_align_set( ::efl::eolian::in_traits<double>::type value) const
{
     ::efl_text_vertical_align_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(value));
}
inline ::efl::eolian::return_traits<double>::type Text_Format::line_gap_get() const
{
    double __return_value =  ::efl_text_line_gap_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::line_gap_set( ::efl::eolian::in_traits<double>::type value) const
{
     ::efl_text_line_gap_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(value));
}
inline ::efl::eolian::return_traits<double>::type Text_Format::line_rel_gap_get() const
{
    double __return_value =  ::efl_text_line_rel_gap_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::line_rel_gap_set( ::efl::eolian::in_traits<double>::type value) const
{
     ::efl_text_line_rel_gap_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(value));
}
inline ::efl::eolian::return_traits<int>::type Text_Format::tab_stops_get() const
{
    int __return_value =  ::efl_text_tab_stops_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::tab_stops_set( ::efl::eolian::in_traits<int>::type value) const
{
     ::efl_text_tab_stops_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(value));
}
inline ::efl::eolian::return_traits<bool>::type Text_Format::password_get() const
{
    Eina_Bool __return_value =  ::efl_text_password_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::password_set( ::efl::eolian::in_traits<bool>::type enabled) const
{
     ::efl_text_password_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enabled));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Text_Format::replacement_char_get() const
{
    const char * __return_value =  ::efl_text_replacement_char_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::replacement_char_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type repch) const
{
     ::efl_text_replacement_char_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(repch));
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<double>::type Text_Format::ellipsis_get() const
{
    double __return_value =  ::efl_text_ellipsis_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::ellipsis_set( ::efl::eolian::in_traits<double>::type value) const
{
     ::efl_text_ellipsis_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(value));
}
inline ::efl::eolian::return_traits<Efl_Text_Format_Wrap>::type Text_Format::wrap_get() const
{
    Efl_Text_Format_Wrap __return_value =  ::efl_text_wrap_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Format_Wrap>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::wrap_set( ::efl::eolian::in_traits<Efl_Text_Format_Wrap>::type wrap) const
{
     ::efl_text_wrap_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Format_Wrap,  ::efl::eolian::in_traits<Efl_Text_Format_Wrap>::type>(wrap));
}
inline ::efl::eolian::return_traits<bool>::type Text_Format::multiline_get() const
{
    Eina_Bool __return_value =  ::efl_text_multiline_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::multiline_set( ::efl::eolian::in_traits<bool>::type enabled) const
{
     ::efl_text_multiline_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enabled));
}
inline ::efl::eolian::return_traits<Efl_Text_Format_Horizontal_Alignment_Auto_Type>::type Text_Format::text_horizontal_align_auto_type_get() const
{
    Efl_Text_Format_Horizontal_Alignment_Auto_Type __return_value =  ::efl_text_horizontal_align_auto_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Format_Horizontal_Alignment_Auto_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::text_horizontal_align_auto_type_set( ::efl::eolian::in_traits<Efl_Text_Format_Horizontal_Alignment_Auto_Type>::type value) const
{
     ::efl_text_horizontal_align_auto_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Format_Horizontal_Alignment_Auto_Type,  ::efl::eolian::in_traits<Efl_Text_Format_Horizontal_Alignment_Auto_Type>::type>(value));
}
inline ::efl::eolian::return_traits<double>::type Text_Format::text_horizontal_align_get() const
{
    double __return_value =  ::efl_text_horizontal_align_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::text_horizontal_align_set( ::efl::eolian::in_traits<double>::type value) const
{
     ::efl_text_horizontal_align_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(value));
}
inline ::efl::eolian::return_traits<double>::type Text_Format::text_vertical_align_get() const
{
    double __return_value =  ::efl_text_vertical_align_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::text_vertical_align_set( ::efl::eolian::in_traits<double>::type value) const
{
     ::efl_text_vertical_align_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(value));
}
inline ::efl::eolian::return_traits<double>::type Text_Format::line_gap_get() const
{
    double __return_value =  ::efl_text_line_gap_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::line_gap_set( ::efl::eolian::in_traits<double>::type value) const
{
     ::efl_text_line_gap_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(value));
}
inline ::efl::eolian::return_traits<double>::type Text_Format::line_rel_gap_get() const
{
    double __return_value =  ::efl_text_line_rel_gap_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::line_rel_gap_set( ::efl::eolian::in_traits<double>::type value) const
{
     ::efl_text_line_rel_gap_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(value));
}
inline ::efl::eolian::return_traits<int>::type Text_Format::tab_stops_get() const
{
    int __return_value =  ::efl_text_tab_stops_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::tab_stops_set( ::efl::eolian::in_traits<int>::type value) const
{
     ::efl_text_tab_stops_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(value));
}
inline ::efl::eolian::return_traits<bool>::type Text_Format::password_get() const
{
    Eina_Bool __return_value =  ::efl_text_password_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::password_set( ::efl::eolian::in_traits<bool>::type enabled) const
{
     ::efl_text_password_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enabled));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Text_Format::replacement_char_get() const
{
    const char * __return_value =  ::efl_text_replacement_char_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Format::replacement_char_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type repch) const
{
     ::efl_text_replacement_char_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(repch));
}
inline efl::Text_Format::operator ::efl::Text_Format() const { return *static_cast< ::efl::Text_Format const*>(static_cast<void const*>(this)); }
inline efl::Text_Format::operator ::efl::Text_Format&() { return *static_cast< ::efl::Text_Format*>(static_cast<void*>(this)); }
inline efl::Text_Format::operator ::efl::Text_Format const&() const { return *static_cast< ::efl::Text_Format const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
