#ifndef EFL_CORE_PROC_ENV_IMPL_HH
#define EFL_CORE_PROC_ENV_IMPL_HH

#include "efl_core_proc_env.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace core { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::core::Env>::type Proc_Env::self()
{
     ::Efl_Core_Env* __return_value =  ::efl_env_self();
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::core::Env>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace core { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::core::Env>::type Proc_Env::self()
{
     ::Efl_Core_Env* __return_value =  ::efl_env_self();
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::core::Env>::type>(__return_value);
}
#endif
inline efl::core::Proc_Env::operator ::efl::core::Proc_Env() const { return *static_cast< ::efl::core::Proc_Env const*>(static_cast<void const*>(this)); }
inline efl::core::Proc_Env::operator ::efl::core::Proc_Env&() { return *static_cast< ::efl::core::Proc_Env*>(static_cast<void*>(this)); }
inline efl::core::Proc_Env::operator ::efl::core::Proc_Env const&() const { return *static_cast< ::efl::core::Proc_Env const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
