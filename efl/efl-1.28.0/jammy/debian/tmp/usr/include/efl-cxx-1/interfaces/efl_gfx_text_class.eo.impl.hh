#ifndef EFL_GFX_TEXT_CLASS_IMPL_HH
#define EFL_GFX_TEXT_CLASS_IMPL_HH

#include "efl_gfx_text_class.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Text_Class::text_class_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text_class,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type font,  ::efl::eolian::out_traits<Efl_Font_Size>::type size) const
{
    const char * __out_param_font = {};
    Efl_Font_Size __out_param_size = {};
    Eina_Bool __return_value =  ::efl_gfx_text_class_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text_class),
        & __out_param_font,
        & __out_param_size);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(font, __out_param_font);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Font_Size>::type, Efl_Font_Size>(size, __out_param_size);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Text_Class::text_class_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text_class,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type font,  ::efl::eolian::in_traits<Efl_Font_Size>::type size) const
{
    Eina_Bool __return_value =  ::efl_gfx_text_class_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text_class),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(font),
         ::efl::eolian::convert_to_c<Efl_Font_Size,  ::efl::eolian::in_traits<Efl_Font_Size>::type>(size));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Text_Class::text_class_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text_class) const
{
     ::efl_gfx_text_class_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text_class));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Text_Class::text_class_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text_class,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type font,  ::efl::eolian::out_traits<Efl_Font_Size>::type size) const
{
    const char * __out_param_font = {};
    Efl_Font_Size __out_param_size = {};
    Eina_Bool __return_value =  ::efl_gfx_text_class_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text_class),
        & __out_param_font,
        & __out_param_size);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(font, __out_param_font);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Font_Size>::type, Efl_Font_Size>(size, __out_param_size);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Text_Class::text_class_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text_class,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type font,  ::efl::eolian::in_traits<Efl_Font_Size>::type size) const
{
    Eina_Bool __return_value =  ::efl_gfx_text_class_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text_class),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(font),
         ::efl::eolian::convert_to_c<Efl_Font_Size,  ::efl::eolian::in_traits<Efl_Font_Size>::type>(size));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Text_Class::text_class_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text_class) const
{
     ::efl_gfx_text_class_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text_class));
}
#endif
inline efl::gfx::Text_Class::operator ::efl::gfx::Text_Class() const { return *static_cast< ::efl::gfx::Text_Class const*>(static_cast<void const*>(this)); }
inline efl::gfx::Text_Class::operator ::efl::gfx::Text_Class&() { return *static_cast< ::efl::gfx::Text_Class*>(static_cast<void*>(this)); }
inline efl::gfx::Text_Class::operator ::efl::gfx::Text_Class const&() const { return *static_cast< ::efl::gfx::Text_Class const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
