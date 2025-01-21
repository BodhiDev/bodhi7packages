#ifndef ELDBUS_MODEL_IMPL_HH
#define ELDBUS_MODEL_IMPL_HH

#include "eldbus_model.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace eldbus { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eldbus_Connection *>::type Model::connection_get() const
{
    Eldbus_Connection * __return_value =  ::eldbus_model_connection_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eldbus_Connection *>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Model::connection_set( ::efl::eolian::in_traits<Eldbus_Connection *>::type dbus) const
{
     ::eldbus_model_connection_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eldbus_Connection *,  ::efl::eolian::in_traits<Eldbus_Connection *>::type>(dbus));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eldbus_Connection_Type>::type Model::type_get() const
{
    Eldbus_Connection_Type __return_value =  ::eldbus_model_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eldbus_Connection_Type>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Model::address_get() const
{
    const char * __return_value =  ::eldbus_model_address_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Model::private_get() const
{
    Eina_Bool __return_value =  ::eldbus_model_private_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Model::connect( ::efl::eolian::in_traits<Eldbus_Connection_Type>::type type,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type address,  ::efl::eolian::in_traits<bool>::type priv) const
{
     ::eldbus_model_connect(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eldbus_Connection_Type,  ::efl::eolian::in_traits<Eldbus_Connection_Type>::type>(type),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(address),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(priv));
}
#endif
} 
namespace eo_cxx {
namespace eldbus { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eldbus_Connection *>::type Model::connection_get() const
{
    Eldbus_Connection * __return_value =  ::eldbus_model_connection_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eldbus_Connection *>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Model::connection_set( ::efl::eolian::in_traits<Eldbus_Connection *>::type dbus) const
{
     ::eldbus_model_connection_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eldbus_Connection *,  ::efl::eolian::in_traits<Eldbus_Connection *>::type>(dbus));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eldbus_Connection_Type>::type Model::type_get() const
{
    Eldbus_Connection_Type __return_value =  ::eldbus_model_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eldbus_Connection_Type>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Model::address_get() const
{
    const char * __return_value =  ::eldbus_model_address_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Model::private_get() const
{
    Eina_Bool __return_value =  ::eldbus_model_private_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Model::connect( ::efl::eolian::in_traits<Eldbus_Connection_Type>::type type,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type address,  ::efl::eolian::in_traits<bool>::type priv) const
{
     ::eldbus_model_connect(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eldbus_Connection_Type,  ::efl::eolian::in_traits<Eldbus_Connection_Type>::type>(type),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(address),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(priv));
}
#endif
inline eldbus::Model::operator ::eldbus::Model() const { return *static_cast< ::eldbus::Model const*>(static_cast<void const*>(this)); }
inline eldbus::Model::operator ::eldbus::Model&() { return *static_cast< ::eldbus::Model*>(static_cast<void*>(this)); }
inline eldbus::Model::operator ::eldbus::Model const&() const { return *static_cast< ::eldbus::Model const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
