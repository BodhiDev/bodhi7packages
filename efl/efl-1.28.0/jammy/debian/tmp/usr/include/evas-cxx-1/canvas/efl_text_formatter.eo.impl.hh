#ifndef EFL_TEXT_FORMATTER_IMPL_HH
#define EFL_TEXT_FORMATTER_IMPL_HH

#include "efl_text_formatter.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<void>::type Text_Formatter::attribute_insert( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type end,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type format)
{
     ::efl_text_formatter_attribute_insert(
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object const*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(start),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object const*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(end),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(format));
}
inline ::efl::eolian::return_traits< unsigned int>::type Text_Formatter::attribute_clear( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type end)
{
    unsigned int __return_value =  ::efl_text_formatter_attribute_clear(
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object const*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(start),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object const*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(end));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<void>::type Text_Formatter::attribute_insert( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type end,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type format)
{
     ::efl_text_formatter_attribute_insert(
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object const*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(start),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object const*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(end),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(format));
}
inline ::efl::eolian::return_traits< unsigned int>::type Text_Formatter::attribute_clear( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type end)
{
    unsigned int __return_value =  ::efl_text_formatter_attribute_clear(
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object const*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(start),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object const*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(end));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
inline efl::Text_Formatter::operator ::efl::Text_Formatter() const { return *static_cast< ::efl::Text_Formatter const*>(static_cast<void const*>(this)); }
inline efl::Text_Formatter::operator ::efl::Text_Formatter&() { return *static_cast< ::efl::Text_Formatter*>(static_cast<void*>(this)); }
inline efl::Text_Formatter::operator ::efl::Text_Formatter const&() const { return *static_cast< ::efl::Text_Formatter const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
