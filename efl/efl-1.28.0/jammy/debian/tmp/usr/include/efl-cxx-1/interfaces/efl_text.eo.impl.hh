#ifndef EFL_TEXT_IMPL_HH
#define EFL_TEXT_IMPL_HH

#include "efl_text.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Text::text_get() const
{
    const char * __return_value =  ::efl_text_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text::text_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text) const
{
     ::efl_text_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text));
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Text::text_get() const
{
    const char * __return_value =  ::efl_text_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text::text_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text) const
{
     ::efl_text_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text));
}
inline efl::Text::operator ::efl::Text() const { return *static_cast< ::efl::Text const*>(static_cast<void const*>(this)); }
inline efl::Text::operator ::efl::Text&() { return *static_cast< ::efl::Text*>(static_cast<void*>(this)); }
inline efl::Text::operator ::efl::Text const&() const { return *static_cast< ::efl::Text const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
