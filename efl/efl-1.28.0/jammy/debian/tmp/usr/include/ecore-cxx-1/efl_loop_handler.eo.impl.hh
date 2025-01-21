#ifndef EFL_LOOP_HANDLER_IMPL_HH
#define EFL_LOOP_HANDLER_IMPL_HH

#include "efl_loop_handler.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Loop_Handler_Flags>::type Loop_Handler::active_get() const
{
    Efl_Loop_Handler_Flags __return_value =  ::efl_loop_handler_active_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Loop_Handler_Flags>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Loop_Handler::active_set( ::efl::eolian::in_traits<Efl_Loop_Handler_Flags>::type flags) const
{
     ::efl_loop_handler_active_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Loop_Handler_Flags,  ::efl::eolian::in_traits<Efl_Loop_Handler_Flags>::type>(flags));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Loop_Handler::fd_get() const
{
    int __return_value =  ::efl_loop_handler_fd_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Loop_Handler::fd_set( ::efl::eolian::in_traits<int>::type fd) const
{
     ::efl_loop_handler_fd_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(fd));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Loop_Handler::fd_file_get() const
{
    int __return_value =  ::efl_loop_handler_fd_file_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Loop_Handler::fd_file_set( ::efl::eolian::in_traits<int>::type fd) const
{
     ::efl_loop_handler_fd_file_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(fd));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void*>::type Loop_Handler::win32_get() const
{
    void * __return_value =  ::efl_loop_handler_win32_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<void*>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Loop_Handler::win32_set( ::efl::eolian::in_traits<void*>::type handle) const
{
     ::efl_loop_handler_win32_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(handle));
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Loop_Handler_Flags>::type Loop_Handler::active_get() const
{
    Efl_Loop_Handler_Flags __return_value =  ::efl_loop_handler_active_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Loop_Handler_Flags>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Loop_Handler::active_set( ::efl::eolian::in_traits<Efl_Loop_Handler_Flags>::type flags) const
{
     ::efl_loop_handler_active_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Loop_Handler_Flags,  ::efl::eolian::in_traits<Efl_Loop_Handler_Flags>::type>(flags));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Loop_Handler::fd_get() const
{
    int __return_value =  ::efl_loop_handler_fd_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Loop_Handler::fd_set( ::efl::eolian::in_traits<int>::type fd) const
{
     ::efl_loop_handler_fd_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(fd));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Loop_Handler::fd_file_get() const
{
    int __return_value =  ::efl_loop_handler_fd_file_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Loop_Handler::fd_file_set( ::efl::eolian::in_traits<int>::type fd) const
{
     ::efl_loop_handler_fd_file_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(fd));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void*>::type Loop_Handler::win32_get() const
{
    void * __return_value =  ::efl_loop_handler_win32_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<void*>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Loop_Handler::win32_set( ::efl::eolian::in_traits<void*>::type handle) const
{
     ::efl_loop_handler_win32_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(handle));
}
#endif
inline efl::Loop_Handler::operator ::efl::Loop_Handler() const { return *static_cast< ::efl::Loop_Handler const*>(static_cast<void const*>(this)); }
inline efl::Loop_Handler::operator ::efl::Loop_Handler&() { return *static_cast< ::efl::Loop_Handler*>(static_cast<void*>(this)); }
inline efl::Loop_Handler::operator ::efl::Loop_Handler const&() const { return *static_cast< ::efl::Loop_Handler const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
