#ifndef EFL_IO_WRITER_FD_IMPL_HH
#define EFL_IO_WRITER_FD_IMPL_HH

#include "efl_io_writer_fd.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace io { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Writer_Fd::writer_fd_get() const
{
    int __return_value =  ::efl_io_writer_fd_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_IO_WRITER_FD_PROTECTED
inline ::efl::eolian::return_traits<void>::type Writer_Fd::writer_fd_set( ::efl::eolian::in_traits<int>::type fd) const
{
     ::efl_io_writer_fd_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(fd));
}
#endif
#endif
} } 
namespace eo_cxx {
namespace efl { namespace io { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Writer_Fd::writer_fd_get() const
{
    int __return_value =  ::efl_io_writer_fd_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_IO_WRITER_FD_PROTECTED
inline ::efl::eolian::return_traits<void>::type Writer_Fd::writer_fd_set( ::efl::eolian::in_traits<int>::type fd) const
{
     ::efl_io_writer_fd_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(fd));
}
#endif
#endif
inline efl::io::Writer_Fd::operator ::efl::io::Writer_Fd() const { return *static_cast< ::efl::io::Writer_Fd const*>(static_cast<void const*>(this)); }
inline efl::io::Writer_Fd::operator ::efl::io::Writer_Fd&() { return *static_cast< ::efl::io::Writer_Fd*>(static_cast<void*>(this)); }
inline efl::io::Writer_Fd::operator ::efl::io::Writer_Fd const&() const { return *static_cast< ::efl::io::Writer_Fd const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
