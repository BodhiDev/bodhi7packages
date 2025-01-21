#ifndef EFL_TEXT_FONT_PROPERTIES_IMPL_HH
#define EFL_TEXT_FONT_PROPERTIES_IMPL_HH

#include "efl_text_font_properties.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Text_Font_Properties::font_family_get() const
{
    const char * __return_value =  ::efl_text_font_family_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Font_Properties::font_family_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type font) const
{
     ::efl_text_font_family_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(font));
}
inline ::efl::eolian::return_traits<Efl_Font_Size>::type Text_Font_Properties::font_size_get() const
{
    Efl_Font_Size __return_value =  ::efl_text_font_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Font_Size>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Font_Properties::font_size_set( ::efl::eolian::in_traits<Efl_Font_Size>::type size) const
{
     ::efl_text_font_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Font_Size,  ::efl::eolian::in_traits<Efl_Font_Size>::type>(size));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Text_Font_Properties::font_source_get() const
{
    const char * __return_value =  ::efl_text_font_source_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Font_Properties::font_source_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type font_source) const
{
     ::efl_text_font_source_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(font_source));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Text_Font_Properties::font_fallbacks_get() const
{
    const char * __return_value =  ::efl_text_font_fallbacks_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Font_Properties::font_fallbacks_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type font_fallbacks) const
{
     ::efl_text_font_fallbacks_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(font_fallbacks));
}
inline ::efl::eolian::return_traits<Efl_Text_Font_Weight>::type Text_Font_Properties::font_weight_get() const
{
    Efl_Text_Font_Weight __return_value =  ::efl_text_font_weight_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Font_Weight>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Font_Properties::font_weight_set( ::efl::eolian::in_traits<Efl_Text_Font_Weight>::type font_weight) const
{
     ::efl_text_font_weight_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Font_Weight,  ::efl::eolian::in_traits<Efl_Text_Font_Weight>::type>(font_weight));
}
inline ::efl::eolian::return_traits<Efl_Text_Font_Slant>::type Text_Font_Properties::font_slant_get() const
{
    Efl_Text_Font_Slant __return_value =  ::efl_text_font_slant_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Font_Slant>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Font_Properties::font_slant_set( ::efl::eolian::in_traits<Efl_Text_Font_Slant>::type style) const
{
     ::efl_text_font_slant_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Font_Slant,  ::efl::eolian::in_traits<Efl_Text_Font_Slant>::type>(style));
}
inline ::efl::eolian::return_traits<Efl_Text_Font_Width>::type Text_Font_Properties::font_width_get() const
{
    Efl_Text_Font_Width __return_value =  ::efl_text_font_width_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Font_Width>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Font_Properties::font_width_set( ::efl::eolian::in_traits<Efl_Text_Font_Width>::type width) const
{
     ::efl_text_font_width_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Font_Width,  ::efl::eolian::in_traits<Efl_Text_Font_Width>::type>(width));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Text_Font_Properties::font_lang_get() const
{
    const char * __return_value =  ::efl_text_font_lang_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Font_Properties::font_lang_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type lang) const
{
     ::efl_text_font_lang_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(lang));
}
inline ::efl::eolian::return_traits<Efl_Text_Font_Bitmap_Scalable>::type Text_Font_Properties::font_bitmap_scalable_get() const
{
    Efl_Text_Font_Bitmap_Scalable __return_value =  ::efl_text_font_bitmap_scalable_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Font_Bitmap_Scalable>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Font_Properties::font_bitmap_scalable_set( ::efl::eolian::in_traits<Efl_Text_Font_Bitmap_Scalable>::type scalable) const
{
     ::efl_text_font_bitmap_scalable_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Font_Bitmap_Scalable,  ::efl::eolian::in_traits<Efl_Text_Font_Bitmap_Scalable>::type>(scalable));
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Text_Font_Properties::font_family_get() const
{
    const char * __return_value =  ::efl_text_font_family_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Font_Properties::font_family_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type font) const
{
     ::efl_text_font_family_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(font));
}
inline ::efl::eolian::return_traits<Efl_Font_Size>::type Text_Font_Properties::font_size_get() const
{
    Efl_Font_Size __return_value =  ::efl_text_font_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Font_Size>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Font_Properties::font_size_set( ::efl::eolian::in_traits<Efl_Font_Size>::type size) const
{
     ::efl_text_font_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Font_Size,  ::efl::eolian::in_traits<Efl_Font_Size>::type>(size));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Text_Font_Properties::font_source_get() const
{
    const char * __return_value =  ::efl_text_font_source_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Font_Properties::font_source_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type font_source) const
{
     ::efl_text_font_source_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(font_source));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Text_Font_Properties::font_fallbacks_get() const
{
    const char * __return_value =  ::efl_text_font_fallbacks_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Font_Properties::font_fallbacks_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type font_fallbacks) const
{
     ::efl_text_font_fallbacks_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(font_fallbacks));
}
inline ::efl::eolian::return_traits<Efl_Text_Font_Weight>::type Text_Font_Properties::font_weight_get() const
{
    Efl_Text_Font_Weight __return_value =  ::efl_text_font_weight_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Font_Weight>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Font_Properties::font_weight_set( ::efl::eolian::in_traits<Efl_Text_Font_Weight>::type font_weight) const
{
     ::efl_text_font_weight_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Font_Weight,  ::efl::eolian::in_traits<Efl_Text_Font_Weight>::type>(font_weight));
}
inline ::efl::eolian::return_traits<Efl_Text_Font_Slant>::type Text_Font_Properties::font_slant_get() const
{
    Efl_Text_Font_Slant __return_value =  ::efl_text_font_slant_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Font_Slant>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Font_Properties::font_slant_set( ::efl::eolian::in_traits<Efl_Text_Font_Slant>::type style) const
{
     ::efl_text_font_slant_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Font_Slant,  ::efl::eolian::in_traits<Efl_Text_Font_Slant>::type>(style));
}
inline ::efl::eolian::return_traits<Efl_Text_Font_Width>::type Text_Font_Properties::font_width_get() const
{
    Efl_Text_Font_Width __return_value =  ::efl_text_font_width_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Font_Width>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Font_Properties::font_width_set( ::efl::eolian::in_traits<Efl_Text_Font_Width>::type width) const
{
     ::efl_text_font_width_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Font_Width,  ::efl::eolian::in_traits<Efl_Text_Font_Width>::type>(width));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Text_Font_Properties::font_lang_get() const
{
    const char * __return_value =  ::efl_text_font_lang_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Font_Properties::font_lang_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type lang) const
{
     ::efl_text_font_lang_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(lang));
}
inline ::efl::eolian::return_traits<Efl_Text_Font_Bitmap_Scalable>::type Text_Font_Properties::font_bitmap_scalable_get() const
{
    Efl_Text_Font_Bitmap_Scalable __return_value =  ::efl_text_font_bitmap_scalable_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Font_Bitmap_Scalable>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Font_Properties::font_bitmap_scalable_set( ::efl::eolian::in_traits<Efl_Text_Font_Bitmap_Scalable>::type scalable) const
{
     ::efl_text_font_bitmap_scalable_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Font_Bitmap_Scalable,  ::efl::eolian::in_traits<Efl_Text_Font_Bitmap_Scalable>::type>(scalable));
}
inline efl::Text_Font_Properties::operator ::efl::Text_Font_Properties() const { return *static_cast< ::efl::Text_Font_Properties const*>(static_cast<void const*>(this)); }
inline efl::Text_Font_Properties::operator ::efl::Text_Font_Properties&() { return *static_cast< ::efl::Text_Font_Properties*>(static_cast<void*>(this)); }
inline efl::Text_Font_Properties::operator ::efl::Text_Font_Properties const&() const { return *static_cast< ::efl::Text_Font_Properties const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
