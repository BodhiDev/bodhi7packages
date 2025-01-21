#ifndef EFL_TEXT_MARKUP_IMPL_HH
#define EFL_TEXT_MARKUP_IMPL_HH

#include "efl_text_markup.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Text_Markup::markup_get() const
{
    const char * __return_value =  ::efl_text_markup_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Markup::markup_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type markup) const
{
     ::efl_text_markup_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(markup));
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Text_Markup::markup_get() const
{
    const char * __return_value =  ::efl_text_markup_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Markup::markup_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type markup) const
{
     ::efl_text_markup_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(markup));
}
inline efl::Text_Markup::operator ::efl::Text_Markup() const { return *static_cast< ::efl::Text_Markup const*>(static_cast<void const*>(this)); }
inline efl::Text_Markup::operator ::efl::Text_Markup&() { return *static_cast< ::efl::Text_Markup*>(static_cast<void*>(this)); }
inline efl::Text_Markup::operator ::efl::Text_Markup const&() const { return *static_cast< ::efl::Text_Markup const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
