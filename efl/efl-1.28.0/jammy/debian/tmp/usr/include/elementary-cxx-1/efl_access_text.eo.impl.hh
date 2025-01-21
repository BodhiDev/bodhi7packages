#ifndef EFL_ACCESS_TEXT_IMPL_HH
#define EFL_ACCESS_TEXT_IMPL_HH

#include "efl_access_text.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace access { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<Eina_Unicode>::type Text::character_get( ::efl::eolian::in_traits<int>::type offset) const
{
    Eina_Unicode __return_value =  ::efl_access_text_character_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(offset));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Unicode>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Text::string_get( ::efl::eolian::in_traits<Efl_Access_Text_Granularity>::type granularity,  ::efl::eolian::out_traits<int>::type start_offset,  ::efl::eolian::out_traits<int>::type end_offset,  ::efl::eolian::out_traits< ::std::string>::type string) const
{
    int __out_param_start_offset = {};
    int __out_param_end_offset = {};
    char * __out_param_string = {};
     ::efl_access_text_string_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Access_Text_Granularity,  ::efl::eolian::in_traits<Efl_Access_Text_Granularity>::type>(granularity),
        & __out_param_start_offset,
        & __out_param_end_offset,
        & __out_param_string);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(start_offset, __out_param_start_offset);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(end_offset, __out_param_end_offset);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::std::string>::type, char *, true>(string, __out_param_string);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits< ::std::string>::type Text::access_text_get( ::efl::eolian::in_traits<int>::type start_offset,  ::efl::eolian::in_traits<int>::type end_offset) const
{
    char * __return_value =  ::efl_access_text_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(start_offset),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(end_offset));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::std::string>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<int>::type Text::caret_offset_get() const
{
    int __return_value =  ::efl_access_text_caret_offset_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::caret_offset_set( ::efl::eolian::in_traits<int>::type offset) const
{
    Eina_Bool __return_value =  ::efl_access_text_caret_offset_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(offset));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::attribute_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::out_traits<int>::type start_offset,  ::efl::eolian::out_traits<int>::type end_offset,  ::efl::eolian::out_traits< ::std::string>::type value) const
{
    int __out_param_start_offset = {};
    int __out_param_end_offset = {};
    char * __out_param_value = {};
    Eina_Bool __return_value =  ::efl_access_text_attribute_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
        & __out_param_start_offset,
        & __out_param_end_offset,
        & __out_param_value);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(start_offset, __out_param_start_offset);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(end_offset, __out_param_end_offset);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::std::string>::type, char *, true>(value, __out_param_value);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Text::text_attributes_get( ::efl::eolian::out_traits<int>::type start_offset,  ::efl::eolian::out_traits<int>::type end_offset,  ::efl::eolian::out_traits<  ::efl::eina::list<Efl_Access_Text_Attribute>>::type attributes) const
{
    int __out_param_start_offset = {};
    int __out_param_end_offset = {};
    Eina_List * __out_param_attributes = {};
     ::efl_access_text_attributes_get(_eo_ptr(),
        & __out_param_start_offset,
        & __out_param_end_offset,
        & __out_param_attributes);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(start_offset, __out_param_start_offset);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(end_offset, __out_param_end_offset);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<  ::efl::eina::list<Efl_Access_Text_Attribute>>::type, Eina_List *, true>(attributes, __out_param_attributes);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Text_Attribute>>::type Text::default_attributes_get() const
{
    Eina_List * __return_value =  ::efl_access_text_default_attributes_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Text_Attribute>>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::character_extents_get( ::efl::eolian::in_traits<int>::type offset,  ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::out_traits<Eina_Rect>::type rect) const
{
    Eina_Rect __out_param_rect = {};
    Eina_Bool __return_value =  ::efl_access_text_character_extents_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(offset),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(screen_coords),
        & __out_param_rect);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Rect>::type, Eina_Rect>(rect, __out_param_rect);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<int>::type Text::character_count_get() const
{
    int __return_value =  ::efl_access_text_character_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<int>::type Text::offset_at_point_get( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y) const
{
    int __return_value =  ::efl_access_text_offset_at_point_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(screen_coords),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(x),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(y));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Text_Range>>::type Text::bounded_ranges_get( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<Eina_Rect>::type rect,  ::efl::eolian::in_traits<Efl_Access_Text_Clip_Type>::type xclip,  ::efl::eolian::in_traits<Efl_Access_Text_Clip_Type>::type yclip) const
{
    Eina_List * __return_value =  ::efl_access_text_bounded_ranges_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(screen_coords),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(rect),
         ::efl::eolian::convert_to_c<Efl_Access_Text_Clip_Type,  ::efl::eolian::in_traits<Efl_Access_Text_Clip_Type>::type>(xclip),
         ::efl::eolian::convert_to_c<Efl_Access_Text_Clip_Type,  ::efl::eolian::in_traits<Efl_Access_Text_Clip_Type>::type>(yclip));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Text_Range>>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::range_extents_get( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<int>::type start_offset,  ::efl::eolian::in_traits<int>::type end_offset,  ::efl::eolian::out_traits<Eina_Rect>::type rect) const
{
    Eina_Rect __out_param_rect = {};
    Eina_Bool __return_value =  ::efl_access_text_range_extents_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(screen_coords),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(start_offset),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(end_offset),
        & __out_param_rect);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Rect>::type, Eina_Rect>(rect, __out_param_rect);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<int>::type Text::selections_count_get() const
{
    int __return_value =  ::efl_access_text_selections_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Text::access_selection_get( ::efl::eolian::in_traits<int>::type selection_number,  ::efl::eolian::out_traits<int>::type start_offset,  ::efl::eolian::out_traits<int>::type end_offset) const
{
    int __out_param_start_offset = {};
    int __out_param_end_offset = {};
     ::efl_access_text_access_selection_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(selection_number),
        & __out_param_start_offset,
        & __out_param_end_offset);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(start_offset, __out_param_start_offset);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(end_offset, __out_param_end_offset);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::access_selection_set( ::efl::eolian::in_traits<int>::type selection_number,  ::efl::eolian::in_traits<int>::type start_offset,  ::efl::eolian::in_traits<int>::type end_offset) const
{
    Eina_Bool __return_value =  ::efl_access_text_access_selection_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(selection_number),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(start_offset),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(end_offset));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::selection_add( ::efl::eolian::in_traits<int>::type start_offset,  ::efl::eolian::in_traits<int>::type end_offset) const
{
    Eina_Bool __return_value =  ::efl_access_text_selection_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(start_offset),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(end_offset));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::selection_remove( ::efl::eolian::in_traits<int>::type selection_number) const
{
    Eina_Bool __return_value =  ::efl_access_text_selection_remove(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(selection_number));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
} } 
namespace eo_cxx {
namespace efl { namespace access { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<Eina_Unicode>::type Text::character_get( ::efl::eolian::in_traits<int>::type offset) const
{
    Eina_Unicode __return_value =  ::efl_access_text_character_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(offset));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Unicode>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Text::string_get( ::efl::eolian::in_traits<Efl_Access_Text_Granularity>::type granularity,  ::efl::eolian::out_traits<int>::type start_offset,  ::efl::eolian::out_traits<int>::type end_offset,  ::efl::eolian::out_traits< ::std::string>::type string) const
{
    int __out_param_start_offset = {};
    int __out_param_end_offset = {};
    char * __out_param_string = {};
     ::efl_access_text_string_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Access_Text_Granularity,  ::efl::eolian::in_traits<Efl_Access_Text_Granularity>::type>(granularity),
        & __out_param_start_offset,
        & __out_param_end_offset,
        & __out_param_string);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(start_offset, __out_param_start_offset);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(end_offset, __out_param_end_offset);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::std::string>::type, char *, true>(string, __out_param_string);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits< ::std::string>::type Text::access_text_get( ::efl::eolian::in_traits<int>::type start_offset,  ::efl::eolian::in_traits<int>::type end_offset) const
{
    char * __return_value =  ::efl_access_text_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(start_offset),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(end_offset));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::std::string>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<int>::type Text::caret_offset_get() const
{
    int __return_value =  ::efl_access_text_caret_offset_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::caret_offset_set( ::efl::eolian::in_traits<int>::type offset) const
{
    Eina_Bool __return_value =  ::efl_access_text_caret_offset_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(offset));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::attribute_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::out_traits<int>::type start_offset,  ::efl::eolian::out_traits<int>::type end_offset,  ::efl::eolian::out_traits< ::std::string>::type value) const
{
    int __out_param_start_offset = {};
    int __out_param_end_offset = {};
    char * __out_param_value = {};
    Eina_Bool __return_value =  ::efl_access_text_attribute_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
        & __out_param_start_offset,
        & __out_param_end_offset,
        & __out_param_value);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(start_offset, __out_param_start_offset);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(end_offset, __out_param_end_offset);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::std::string>::type, char *, true>(value, __out_param_value);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Text::text_attributes_get( ::efl::eolian::out_traits<int>::type start_offset,  ::efl::eolian::out_traits<int>::type end_offset,  ::efl::eolian::out_traits<  ::efl::eina::list<Efl_Access_Text_Attribute>>::type attributes) const
{
    int __out_param_start_offset = {};
    int __out_param_end_offset = {};
    Eina_List * __out_param_attributes = {};
     ::efl_access_text_attributes_get(_eo_ptr(),
        & __out_param_start_offset,
        & __out_param_end_offset,
        & __out_param_attributes);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(start_offset, __out_param_start_offset);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(end_offset, __out_param_end_offset);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<  ::efl::eina::list<Efl_Access_Text_Attribute>>::type, Eina_List *, true>(attributes, __out_param_attributes);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Text_Attribute>>::type Text::default_attributes_get() const
{
    Eina_List * __return_value =  ::efl_access_text_default_attributes_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Text_Attribute>>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::character_extents_get( ::efl::eolian::in_traits<int>::type offset,  ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::out_traits<Eina_Rect>::type rect) const
{
    Eina_Rect __out_param_rect = {};
    Eina_Bool __return_value =  ::efl_access_text_character_extents_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(offset),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(screen_coords),
        & __out_param_rect);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Rect>::type, Eina_Rect>(rect, __out_param_rect);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<int>::type Text::character_count_get() const
{
    int __return_value =  ::efl_access_text_character_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<int>::type Text::offset_at_point_get( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y) const
{
    int __return_value =  ::efl_access_text_offset_at_point_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(screen_coords),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(x),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(y));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Text_Range>>::type Text::bounded_ranges_get( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<Eina_Rect>::type rect,  ::efl::eolian::in_traits<Efl_Access_Text_Clip_Type>::type xclip,  ::efl::eolian::in_traits<Efl_Access_Text_Clip_Type>::type yclip) const
{
    Eina_List * __return_value =  ::efl_access_text_bounded_ranges_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(screen_coords),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(rect),
         ::efl::eolian::convert_to_c<Efl_Access_Text_Clip_Type,  ::efl::eolian::in_traits<Efl_Access_Text_Clip_Type>::type>(xclip),
         ::efl::eolian::convert_to_c<Efl_Access_Text_Clip_Type,  ::efl::eolian::in_traits<Efl_Access_Text_Clip_Type>::type>(yclip));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Text_Range>>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::range_extents_get( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<int>::type start_offset,  ::efl::eolian::in_traits<int>::type end_offset,  ::efl::eolian::out_traits<Eina_Rect>::type rect) const
{
    Eina_Rect __out_param_rect = {};
    Eina_Bool __return_value =  ::efl_access_text_range_extents_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(screen_coords),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(start_offset),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(end_offset),
        & __out_param_rect);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Rect>::type, Eina_Rect>(rect, __out_param_rect);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<int>::type Text::selections_count_get() const
{
    int __return_value =  ::efl_access_text_selections_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Text::access_selection_get( ::efl::eolian::in_traits<int>::type selection_number,  ::efl::eolian::out_traits<int>::type start_offset,  ::efl::eolian::out_traits<int>::type end_offset) const
{
    int __out_param_start_offset = {};
    int __out_param_end_offset = {};
     ::efl_access_text_access_selection_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(selection_number),
        & __out_param_start_offset,
        & __out_param_end_offset);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(start_offset, __out_param_start_offset);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(end_offset, __out_param_end_offset);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::access_selection_set( ::efl::eolian::in_traits<int>::type selection_number,  ::efl::eolian::in_traits<int>::type start_offset,  ::efl::eolian::in_traits<int>::type end_offset) const
{
    Eina_Bool __return_value =  ::efl_access_text_access_selection_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(selection_number),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(start_offset),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(end_offset));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::selection_add( ::efl::eolian::in_traits<int>::type start_offset,  ::efl::eolian::in_traits<int>::type end_offset) const
{
    Eina_Bool __return_value =  ::efl_access_text_selection_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(start_offset),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(end_offset));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::selection_remove( ::efl::eolian::in_traits<int>::type selection_number) const
{
    Eina_Bool __return_value =  ::efl_access_text_selection_remove(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(selection_number));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
inline efl::access::Text::operator ::efl::access::Text() const { return *static_cast< ::efl::access::Text const*>(static_cast<void const*>(this)); }
inline efl::access::Text::operator ::efl::access::Text&() { return *static_cast< ::efl::access::Text*>(static_cast<void*>(this)); }
inline efl::access::Text::operator ::efl::access::Text const&() const { return *static_cast< ::efl::access::Text const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
