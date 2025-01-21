#ifndef EFL_CONFIG_IMPL_HH
#define EFL_CONFIG_IMPL_HH

#include "efl_config.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::value>::type Config::config_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
    Eina_Value * __return_value =  ::efl_config_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::value>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Config::config_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type value) const
{
    Eina_Bool __return_value =  ::efl_config_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<const Eina_Value *,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type>(value));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::value>::type Config::config_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
    Eina_Value * __return_value =  ::efl_config_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::value>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Config::config_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type value) const
{
    Eina_Bool __return_value =  ::efl_config_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<const Eina_Value *,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type>(value));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline efl::Config::operator ::efl::Config() const { return *static_cast< ::efl::Config const*>(static_cast<void const*>(this)); }
inline efl::Config::operator ::efl::Config&() { return *static_cast< ::efl::Config*>(static_cast<void*>(this)); }
inline efl::Config::operator ::efl::Config const&() const { return *static_cast< ::efl::Config const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
