#ifndef EFL_ACCESS_EDITABLE_TEXT_IMPL_HH
#define EFL_ACCESS_EDITABLE_TEXT_IMPL_HH

#include "efl_access_editable_text.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace access { namespace editable { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::text_content_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type string) const
{
    Eina_Bool __return_value =  ::efl_access_editable_text_content_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(string));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::insert( ::efl::eolian::in_traits< ::efl::eina::string_view>::type string,  ::efl::eolian::in_traits<int>::type position) const
{
    Eina_Bool __return_value =  ::efl_access_editable_text_insert(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(string),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(position));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::copy( ::efl::eolian::in_traits<int>::type start,  ::efl::eolian::in_traits<int>::type end) const
{
    Eina_Bool __return_value =  ::efl_access_editable_text_copy(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(start),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(end));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::cut( ::efl::eolian::in_traits<int>::type start,  ::efl::eolian::in_traits<int>::type end) const
{
    Eina_Bool __return_value =  ::efl_access_editable_text_cut(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(start),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(end));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::cxx_delete( ::efl::eolian::in_traits<int>::type start,  ::efl::eolian::in_traits<int>::type end) const
{
    Eina_Bool __return_value =  ::efl_access_editable_text_delete(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(start),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(end));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::paste( ::efl::eolian::in_traits<int>::type position) const
{
    Eina_Bool __return_value =  ::efl_access_editable_text_paste(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(position));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace access { namespace editable { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::text_content_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type string) const
{
    Eina_Bool __return_value =  ::efl_access_editable_text_content_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(string));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::insert( ::efl::eolian::in_traits< ::efl::eina::string_view>::type string,  ::efl::eolian::in_traits<int>::type position) const
{
    Eina_Bool __return_value =  ::efl_access_editable_text_insert(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(string),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(position));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::copy( ::efl::eolian::in_traits<int>::type start,  ::efl::eolian::in_traits<int>::type end) const
{
    Eina_Bool __return_value =  ::efl_access_editable_text_copy(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(start),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(end));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::cut( ::efl::eolian::in_traits<int>::type start,  ::efl::eolian::in_traits<int>::type end) const
{
    Eina_Bool __return_value =  ::efl_access_editable_text_cut(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(start),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(end));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::cxx_delete( ::efl::eolian::in_traits<int>::type start,  ::efl::eolian::in_traits<int>::type end) const
{
    Eina_Bool __return_value =  ::efl_access_editable_text_delete(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(start),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(end));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Text::paste( ::efl::eolian::in_traits<int>::type position) const
{
    Eina_Bool __return_value =  ::efl_access_editable_text_paste(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(position));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
inline efl::access::editable::Text::operator ::efl::access::editable::Text() const { return *static_cast< ::efl::access::editable::Text const*>(static_cast<void const*>(this)); }
inline efl::access::editable::Text::operator ::efl::access::editable::Text&() { return *static_cast< ::efl::access::editable::Text*>(static_cast<void*>(this)); }
inline efl::access::editable::Text::operator ::efl::access::editable::Text const&() const { return *static_cast< ::efl::access::editable::Text const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
