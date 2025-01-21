#ifndef EFL_CORE_ENV_IMPL_HH
#define EFL_CORE_ENV_IMPL_HH

#include "efl_core_env.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace core { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Env::env_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type var) const
{
    const char * __return_value =  ::efl_core_env_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(var));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Env::env_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type var,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type value) const
{
     ::efl_core_env_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(var),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(value));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type Env::content_get() const
{
    Eina_Iterator * __return_value =  ::efl_core_env_content_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Env::unset( ::efl::eolian::in_traits< ::efl::eina::string_view>::type var) const
{
     ::efl_core_env_unset(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(var));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Env::clear() const
{
     ::efl_core_env_clear(_eo_ptr());
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace core { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Env::env_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type var) const
{
    const char * __return_value =  ::efl_core_env_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(var));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Env::env_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type var,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type value) const
{
     ::efl_core_env_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(var),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(value));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type Env::content_get() const
{
    Eina_Iterator * __return_value =  ::efl_core_env_content_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Env::unset( ::efl::eolian::in_traits< ::efl::eina::string_view>::type var) const
{
     ::efl_core_env_unset(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(var));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Env::clear() const
{
     ::efl_core_env_clear(_eo_ptr());
}
#endif
inline efl::core::Env::operator ::efl::core::Env() const { return *static_cast< ::efl::core::Env const*>(static_cast<void const*>(this)); }
inline efl::core::Env::operator ::efl::core::Env&() { return *static_cast< ::efl::core::Env*>(static_cast<void*>(this)); }
inline efl::core::Env::operator ::efl::core::Env const&() const { return *static_cast< ::efl::core::Env const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
