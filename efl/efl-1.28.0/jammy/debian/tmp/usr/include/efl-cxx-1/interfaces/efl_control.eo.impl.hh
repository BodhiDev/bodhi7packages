#ifndef EFL_CONTROL_IMPL_HH
#define EFL_CONTROL_IMPL_HH

#include "efl_control.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Control::priority_get() const
{
    int __return_value =  ::efl_control_priority_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Control::priority_set( ::efl::eolian::in_traits<int>::type priority) const
{
     ::efl_control_priority_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(priority));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Control::suspend_get() const
{
    Eina_Bool __return_value =  ::efl_control_suspend_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Control::suspend_set( ::efl::eolian::in_traits<bool>::type suspend) const
{
     ::efl_control_suspend_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(suspend));
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Control::priority_get() const
{
    int __return_value =  ::efl_control_priority_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Control::priority_set( ::efl::eolian::in_traits<int>::type priority) const
{
     ::efl_control_priority_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(priority));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Control::suspend_get() const
{
    Eina_Bool __return_value =  ::efl_control_suspend_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Control::suspend_set( ::efl::eolian::in_traits<bool>::type suspend) const
{
     ::efl_control_suspend_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(suspend));
}
#endif
inline efl::Control::operator ::efl::Control() const { return *static_cast< ::efl::Control const*>(static_cast<void const*>(this)); }
inline efl::Control::operator ::efl::Control&() { return *static_cast< ::efl::Control*>(static_cast<void*>(this)); }
inline efl::Control::operator ::efl::Control const&() const { return *static_cast< ::efl::Control const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
