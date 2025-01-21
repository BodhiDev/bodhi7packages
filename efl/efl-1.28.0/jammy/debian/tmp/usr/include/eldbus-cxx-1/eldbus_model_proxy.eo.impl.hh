#ifndef ELDBUS_MODEL_PROXY_IMPL_HH
#define ELDBUS_MODEL_PROXY_IMPL_HH

#include "eldbus_model_proxy.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace eldbus { namespace model { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Proxy::object_set( ::efl::eolian::in_traits<Eldbus_Object *>::type object) const
{
     ::eldbus_model_proxy_object_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eldbus_Object *,  ::efl::eolian::in_traits<Eldbus_Object *>::type>(object));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Proxy::interface_set( ::efl::eolian::in_traits<const Eldbus_Introspection_Interface *>::type interface) const
{
     ::eldbus_model_proxy_interface_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eldbus_Introspection_Interface *,  ::efl::eolian::in_traits<const Eldbus_Introspection_Interface *>::type>(interface));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Proxy::proxy_name_get() const
{
    const char * __return_value =  ::eldbus_model_proxy_name_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace eldbus { namespace model { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Proxy::object_set( ::efl::eolian::in_traits<Eldbus_Object *>::type object) const
{
     ::eldbus_model_proxy_object_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eldbus_Object *,  ::efl::eolian::in_traits<Eldbus_Object *>::type>(object));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Proxy::interface_set( ::efl::eolian::in_traits<const Eldbus_Introspection_Interface *>::type interface) const
{
     ::eldbus_model_proxy_interface_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eldbus_Introspection_Interface *,  ::efl::eolian::in_traits<const Eldbus_Introspection_Interface *>::type>(interface));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Proxy::proxy_name_get() const
{
    const char * __return_value =  ::eldbus_model_proxy_name_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
inline eldbus::model::Proxy::operator ::eldbus::model::Proxy() const { return *static_cast< ::eldbus::model::Proxy const*>(static_cast<void const*>(this)); }
inline eldbus::model::Proxy::operator ::eldbus::model::Proxy&() { return *static_cast< ::eldbus::model::Proxy*>(static_cast<void*>(this)); }
inline eldbus::model::Proxy::operator ::eldbus::model::Proxy const&() const { return *static_cast< ::eldbus::model::Proxy const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
