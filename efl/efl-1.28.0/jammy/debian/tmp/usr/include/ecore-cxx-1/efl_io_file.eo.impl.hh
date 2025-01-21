#ifndef EFL_IO_FILE_IMPL_HH
#define EFL_IO_FILE_IMPL_HH

#include "efl_io_file.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace io { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< uint32_t>::type File::flags_get() const
{
    uint32_t __return_value =  ::efl_io_file_flags_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< uint32_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type File::flags_set( ::efl::eolian::in_traits< uint32_t>::type flags) const
{
     ::efl_io_file_flags_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<uint32_t,  ::efl::eolian::in_traits< uint32_t>::type>(flags));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< uint32_t>::type File::mode_get() const
{
    uint32_t __return_value =  ::efl_io_file_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< uint32_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type File::mode_set( ::efl::eolian::in_traits< uint32_t>::type mode) const
{
     ::efl_io_file_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<uint32_t,  ::efl::eolian::in_traits< uint32_t>::type>(mode));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace io { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< uint32_t>::type File::flags_get() const
{
    uint32_t __return_value =  ::efl_io_file_flags_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< uint32_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type File::flags_set( ::efl::eolian::in_traits< uint32_t>::type flags) const
{
     ::efl_io_file_flags_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<uint32_t,  ::efl::eolian::in_traits< uint32_t>::type>(flags));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< uint32_t>::type File::mode_get() const
{
    uint32_t __return_value =  ::efl_io_file_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< uint32_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type File::mode_set( ::efl::eolian::in_traits< uint32_t>::type mode) const
{
     ::efl_io_file_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<uint32_t,  ::efl::eolian::in_traits< uint32_t>::type>(mode));
}
#endif
inline efl::io::File::operator ::efl::io::File() const { return *static_cast< ::efl::io::File const*>(static_cast<void const*>(this)); }
inline efl::io::File::operator ::efl::io::File&() { return *static_cast< ::efl::io::File*>(static_cast<void*>(this)); }
inline efl::io::File::operator ::efl::io::File const&() const { return *static_cast< ::efl::io::File const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
