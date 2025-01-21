#ifndef EFL_CORE_COMMAND_LINE_IMPL_HH
#define EFL_CORE_COMMAND_LINE_IMPL_HH

#include "efl_core_command_line.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace core { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Command_Line::command_get() const
{
    const char * __return_value =  ::efl_core_command_line_command_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Command_Line::command_array_set( ::efl::eolian::in_traits<  ::efl::eina::array< ::efl::eina::stringshare>>::type array) const
{
    Eina_Bool __return_value =  ::efl_core_command_line_command_array_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Array *,  ::efl::eolian::in_traits<  ::efl::eina::array< ::efl::eina::stringshare>>::type, true>(array));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Command_Line::command_string_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type str) const
{
    Eina_Bool __return_value =  ::efl_core_command_line_command_string_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(str));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::accessor< ::efl::eina::stringshare>>::type Command_Line::command_access() const
{
    Eina_Accessor * __return_value =  ::efl_core_command_line_command_access(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::accessor< ::efl::eina::stringshare>>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace core { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Command_Line::command_get() const
{
    const char * __return_value =  ::efl_core_command_line_command_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Command_Line::command_array_set( ::efl::eolian::in_traits<  ::efl::eina::array< ::efl::eina::stringshare>>::type array) const
{
    Eina_Bool __return_value =  ::efl_core_command_line_command_array_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Array *,  ::efl::eolian::in_traits<  ::efl::eina::array< ::efl::eina::stringshare>>::type, true>(array));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Command_Line::command_string_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type str) const
{
    Eina_Bool __return_value =  ::efl_core_command_line_command_string_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(str));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::accessor< ::efl::eina::stringshare>>::type Command_Line::command_access() const
{
    Eina_Accessor * __return_value =  ::efl_core_command_line_command_access(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::accessor< ::efl::eina::stringshare>>::type>(__return_value);
}
#endif
inline efl::core::Command_Line::operator ::efl::core::Command_Line() const { return *static_cast< ::efl::core::Command_Line const*>(static_cast<void const*>(this)); }
inline efl::core::Command_Line::operator ::efl::core::Command_Line&() { return *static_cast< ::efl::core::Command_Line*>(static_cast<void*>(this)); }
inline efl::core::Command_Line::operator ::efl::core::Command_Line const&() const { return *static_cast< ::efl::core::Command_Line const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
