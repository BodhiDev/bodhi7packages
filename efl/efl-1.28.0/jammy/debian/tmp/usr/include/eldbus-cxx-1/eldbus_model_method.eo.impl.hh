#ifndef ELDBUS_MODEL_METHOD_IMPL_HH
#define ELDBUS_MODEL_METHOD_IMPL_HH

#include "eldbus_model_method.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace eldbus { namespace model { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Method::proxy_set( ::efl::eolian::in_traits<Eldbus_Proxy *>::type proxy) const
{
     ::eldbus_model_method_proxy_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eldbus_Proxy *,  ::efl::eolian::in_traits<Eldbus_Proxy *>::type>(proxy));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Method::method_set( ::efl::eolian::in_traits<const Eldbus_Introspection_Method *>::type method) const
{
     ::eldbus_model_method_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eldbus_Introspection_Method *,  ::efl::eolian::in_traits<const Eldbus_Introspection_Method *>::type>(method));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Method::call() const
{
     ::eldbus_model_method_call(_eo_ptr());
}
#endif
} } 
namespace eo_cxx {
namespace eldbus { namespace model { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Method::proxy_set( ::efl::eolian::in_traits<Eldbus_Proxy *>::type proxy) const
{
     ::eldbus_model_method_proxy_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eldbus_Proxy *,  ::efl::eolian::in_traits<Eldbus_Proxy *>::type>(proxy));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Method::method_set( ::efl::eolian::in_traits<const Eldbus_Introspection_Method *>::type method) const
{
     ::eldbus_model_method_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eldbus_Introspection_Method *,  ::efl::eolian::in_traits<const Eldbus_Introspection_Method *>::type>(method));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Method::call() const
{
     ::eldbus_model_method_call(_eo_ptr());
}
#endif
inline eldbus::model::Method::operator ::eldbus::model::Method() const { return *static_cast< ::eldbus::model::Method const*>(static_cast<void const*>(this)); }
inline eldbus::model::Method::operator ::eldbus::model::Method&() { return *static_cast< ::eldbus::model::Method*>(static_cast<void*>(this)); }
inline eldbus::model::Method::operator ::eldbus::model::Method const&() const { return *static_cast< ::eldbus::model::Method const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
