#ifndef ELDBUS_MODEL_SIGNAL_IMPL_HH
#define ELDBUS_MODEL_SIGNAL_IMPL_HH

#include "eldbus_model_signal.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace eldbus { namespace model { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Signal::signal_constructor( ::efl::eolian::in_traits<Eldbus_Proxy *>::type proxy,  ::efl::eolian::in_traits<const Eldbus_Introspection_Signal *>::type signal) const
{
     ::eldbus_model_signal_constructor(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eldbus_Proxy *,  ::efl::eolian::in_traits<Eldbus_Proxy *>::type>(proxy),
         ::efl::eolian::convert_to_c<const Eldbus_Introspection_Signal *,  ::efl::eolian::in_traits<const Eldbus_Introspection_Signal *>::type>(signal));
}
#endif
} } 
namespace eo_cxx {
namespace eldbus { namespace model { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Signal::signal_constructor( ::efl::eolian::in_traits<Eldbus_Proxy *>::type proxy,  ::efl::eolian::in_traits<const Eldbus_Introspection_Signal *>::type signal) const
{
     ::eldbus_model_signal_constructor(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eldbus_Proxy *,  ::efl::eolian::in_traits<Eldbus_Proxy *>::type>(proxy),
         ::efl::eolian::convert_to_c<const Eldbus_Introspection_Signal *,  ::efl::eolian::in_traits<const Eldbus_Introspection_Signal *>::type>(signal));
}
#endif
inline eldbus::model::Signal::operator ::eldbus::model::Signal() const { return *static_cast< ::eldbus::model::Signal const*>(static_cast<void const*>(this)); }
inline eldbus::model::Signal::operator ::eldbus::model::Signal&() { return *static_cast< ::eldbus::model::Signal*>(static_cast<void*>(this)); }
inline eldbus::model::Signal::operator ::eldbus::model::Signal const&() const { return *static_cast< ::eldbus::model::Signal const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
