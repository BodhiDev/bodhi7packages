#ifndef EFL_EXE_IMPL_HH
#define EFL_EXE_IMPL_HH

#include "efl_exe.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Exe_Flags>::type Exe::exe_flags_get() const
{
    Efl_Exe_Flags __return_value =  ::efl_exe_flags_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Exe_Flags>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Exe::exe_flags_set( ::efl::eolian::in_traits<Efl_Exe_Flags>::type flags) const
{
     ::efl_exe_flags_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Exe_Flags,  ::efl::eolian::in_traits<Efl_Exe_Flags>::type>(flags));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Exe::exit_signal_get() const
{
    int __return_value =  ::efl_exe_exit_signal_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Exe::pid_get() const
{
    int __return_value =  ::efl_exe_pid_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::core::Env>::type Exe::env_get() const
{
     ::Efl_Core_Env* __return_value =  ::efl_exe_env_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::core::Env>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Exe::env_set( ::efl::eolian::in_traits< ::efl::core::Env>::type env) const
{
     ::efl_exe_env_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Core_Env*,  ::efl::eolian::in_traits< ::efl::core::Env>::type>(env));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Exe::signal( ::efl::eolian::in_traits<Efl_Exe_Signal>::type sig) const
{
     ::efl_exe_signal(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Exe_Signal,  ::efl::eolian::in_traits<Efl_Exe_Signal>::type>(sig));
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Exe_Flags>::type Exe::exe_flags_get() const
{
    Efl_Exe_Flags __return_value =  ::efl_exe_flags_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Exe_Flags>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Exe::exe_flags_set( ::efl::eolian::in_traits<Efl_Exe_Flags>::type flags) const
{
     ::efl_exe_flags_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Exe_Flags,  ::efl::eolian::in_traits<Efl_Exe_Flags>::type>(flags));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Exe::exit_signal_get() const
{
    int __return_value =  ::efl_exe_exit_signal_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Exe::pid_get() const
{
    int __return_value =  ::efl_exe_pid_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::core::Env>::type Exe::env_get() const
{
     ::Efl_Core_Env* __return_value =  ::efl_exe_env_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::core::Env>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Exe::env_set( ::efl::eolian::in_traits< ::efl::core::Env>::type env) const
{
     ::efl_exe_env_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Core_Env*,  ::efl::eolian::in_traits< ::efl::core::Env>::type>(env));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Exe::signal( ::efl::eolian::in_traits<Efl_Exe_Signal>::type sig) const
{
     ::efl_exe_signal(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Exe_Signal,  ::efl::eolian::in_traits<Efl_Exe_Signal>::type>(sig));
}
#endif
inline efl::Exe::operator ::efl::Exe() const { return *static_cast< ::efl::Exe const*>(static_cast<void const*>(this)); }
inline efl::Exe::operator ::efl::Exe&() { return *static_cast< ::efl::Exe*>(static_cast<void*>(this)); }
inline efl::Exe::operator ::efl::Exe const&() const { return *static_cast< ::efl::Exe const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
