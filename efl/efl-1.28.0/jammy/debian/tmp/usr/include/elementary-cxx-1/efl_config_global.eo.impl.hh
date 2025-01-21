#ifndef EFL_CONFIG_GLOBAL_IMPL_HH
#define EFL_CONFIG_GLOBAL_IMPL_HH

#include "efl_config_global.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Config_Global::profile_get() const
{
    const char * __return_value =  ::efl_config_profile_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Config_Global::profile_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile) const
{
     ::efl_config_profile_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(profile));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CONFIG_GLOBAL_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Config_Global::save( ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type profile) const
{
    Eina_Bool __return_value =  ::efl_config_save(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type>(profile));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type Config_Global::profile_iterate( ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type hidden) const
{
    Eina_Iterator * __return_value =  ::efl_config_profile_iterate(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type>(hidden));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Config_Global::profile_exists( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile) const
{
    Eina_Bool __return_value =  ::efl_config_profile_exists(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(profile));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::stringshare>::type Config_Global::profile_dir_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile,  ::efl::eolian::in_traits<bool>::type is_user) const
{
    Eina_Stringshare * __return_value =  ::efl_config_profile_dir_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(profile),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(is_user));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::stringshare>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CONFIG_GLOBAL_PROTECTED
inline ::efl::eolian::return_traits<void>::type Config_Global::profile_derived_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type options) const
{
     ::efl_config_profile_derived_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(profile),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(options));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CONFIG_GLOBAL_PROTECTED
inline ::efl::eolian::return_traits<void>::type Config_Global::profile_derived_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile) const
{
     ::efl_config_profile_derived_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(profile));
}
#endif
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Config_Global::profile_get() const
{
    const char * __return_value =  ::efl_config_profile_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Config_Global::profile_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile) const
{
     ::efl_config_profile_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(profile));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CONFIG_GLOBAL_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Config_Global::save( ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type profile) const
{
    Eina_Bool __return_value =  ::efl_config_save(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type>(profile));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type Config_Global::profile_iterate( ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type hidden) const
{
    Eina_Iterator * __return_value =  ::efl_config_profile_iterate(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type>(hidden));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Config_Global::profile_exists( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile) const
{
    Eina_Bool __return_value =  ::efl_config_profile_exists(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(profile));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::stringshare>::type Config_Global::profile_dir_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile,  ::efl::eolian::in_traits<bool>::type is_user) const
{
    Eina_Stringshare * __return_value =  ::efl_config_profile_dir_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(profile),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(is_user));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::stringshare>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CONFIG_GLOBAL_PROTECTED
inline ::efl::eolian::return_traits<void>::type Config_Global::profile_derived_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type options) const
{
     ::efl_config_profile_derived_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(profile),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(options));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CONFIG_GLOBAL_PROTECTED
inline ::efl::eolian::return_traits<void>::type Config_Global::profile_derived_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile) const
{
     ::efl_config_profile_derived_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(profile));
}
#endif
#endif
inline efl::Config_Global::operator ::efl::Config_Global() const { return *static_cast< ::efl::Config_Global const*>(static_cast<void const*>(this)); }
inline efl::Config_Global::operator ::efl::Config_Global&() { return *static_cast< ::efl::Config_Global*>(static_cast<void*>(this)); }
inline efl::Config_Global::operator ::efl::Config_Global const&() const { return *static_cast< ::efl::Config_Global const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
