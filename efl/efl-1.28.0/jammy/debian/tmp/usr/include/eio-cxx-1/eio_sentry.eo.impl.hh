#ifndef EIO_SENTRY_IMPL_HH
#define EIO_SENTRY_IMPL_HH

#include "eio_sentry.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace eio { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Sentry::add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type path) const
{
    Eina_Bool __return_value =  ::eio_sentry_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(path));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Sentry::remove( ::efl::eolian::in_traits< ::efl::eina::string_view>::type path) const
{
     ::eio_sentry_remove(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(path));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Sentry::fallback_check( ::efl::eolian::in_traits< ::efl::eina::string_view>::type path) const
{
    Eina_Bool __return_value =  ::eio_sentry_fallback_check(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(path));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
} 
namespace eo_cxx {
namespace eio { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Sentry::add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type path) const
{
    Eina_Bool __return_value =  ::eio_sentry_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(path));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Sentry::remove( ::efl::eolian::in_traits< ::efl::eina::string_view>::type path) const
{
     ::eio_sentry_remove(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(path));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Sentry::fallback_check( ::efl::eolian::in_traits< ::efl::eina::string_view>::type path) const
{
    Eina_Bool __return_value =  ::eio_sentry_fallback_check(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(path));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline eio::Sentry::operator ::eio::Sentry() const { return *static_cast< ::eio::Sentry const*>(static_cast<void const*>(this)); }
inline eio::Sentry::operator ::eio::Sentry&() { return *static_cast< ::eio::Sentry*>(static_cast<void*>(this)); }
inline eio::Sentry::operator ::eio::Sentry const&() const { return *static_cast< ::eio::Sentry const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
