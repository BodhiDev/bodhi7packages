#ifndef EFL_TEXT_MARKUP_UTIL_IMPL_HH
#define EFL_TEXT_MARKUP_UTIL_IMPL_HH

#include "efl_text_markup_util.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::std::string>::type Text_Markup_Util::text_to_markup( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text)
{
    char * __return_value =  ::efl_text_markup_util_text_to_markup(
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::std::string>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::std::string>::type Text_Markup_Util::markup_to_text( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text)
{
    char * __return_value =  ::efl_text_markup_util_markup_to_text(
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::std::string>::type>(__return_value);
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::std::string>::type Text_Markup_Util::text_to_markup( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text)
{
    char * __return_value =  ::efl_text_markup_util_text_to_markup(
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::std::string>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::std::string>::type Text_Markup_Util::markup_to_text( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text)
{
    char * __return_value =  ::efl_text_markup_util_markup_to_text(
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::std::string>::type>(__return_value);
}
#endif
inline efl::Text_Markup_Util::operator ::efl::Text_Markup_Util() const { return *static_cast< ::efl::Text_Markup_Util const*>(static_cast<void const*>(this)); }
inline efl::Text_Markup_Util::operator ::efl::Text_Markup_Util&() { return *static_cast< ::efl::Text_Markup_Util*>(static_cast<void*>(this)); }
inline efl::Text_Markup_Util::operator ::efl::Text_Markup_Util const&() const { return *static_cast< ::efl::Text_Markup_Util const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
