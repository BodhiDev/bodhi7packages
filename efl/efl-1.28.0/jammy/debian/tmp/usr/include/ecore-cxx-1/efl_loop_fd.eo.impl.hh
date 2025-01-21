#ifndef EFL_LOOP_FD_IMPL_HH
#define EFL_LOOP_FD_IMPL_HH

#include "efl_loop_fd.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Loop_Fd::fd_get() const
{
    int __return_value =  ::efl_loop_fd_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Loop_Fd::fd_set( ::efl::eolian::in_traits<int>::type fd) const
{
     ::efl_loop_fd_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(fd));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Loop_Fd::fd_file_get() const
{
    int __return_value =  ::efl_loop_fd_file_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Loop_Fd::fd_file_set( ::efl::eolian::in_traits<int>::type fd) const
{
     ::efl_loop_fd_file_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(fd));
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Loop_Fd::fd_get() const
{
    int __return_value =  ::efl_loop_fd_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Loop_Fd::fd_set( ::efl::eolian::in_traits<int>::type fd) const
{
     ::efl_loop_fd_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(fd));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Loop_Fd::fd_file_get() const
{
    int __return_value =  ::efl_loop_fd_file_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Loop_Fd::fd_file_set( ::efl::eolian::in_traits<int>::type fd) const
{
     ::efl_loop_fd_file_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(fd));
}
#endif
inline efl::Loop_Fd::operator ::efl::Loop_Fd() const { return *static_cast< ::efl::Loop_Fd const*>(static_cast<void const*>(this)); }
inline efl::Loop_Fd::operator ::efl::Loop_Fd&() { return *static_cast< ::efl::Loop_Fd*>(static_cast<void*>(this)); }
inline efl::Loop_Fd::operator ::efl::Loop_Fd const&() const { return *static_cast< ::efl::Loop_Fd const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
