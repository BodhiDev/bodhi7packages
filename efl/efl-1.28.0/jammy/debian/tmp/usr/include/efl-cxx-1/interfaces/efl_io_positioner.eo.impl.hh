#ifndef EFL_IO_POSITIONER_IMPL_HH
#define EFL_IO_POSITIONER_IMPL_HH

#include "efl_io_positioner.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace io { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< uint64_t>::type Positioner::position_get() const
{
    uint64_t __return_value =  ::efl_io_positioner_position_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< uint64_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Positioner::position_set( ::efl::eolian::in_traits< uint64_t>::type position) const
{
    Eina_Bool __return_value =  ::efl_io_positioner_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<uint64_t,  ::efl::eolian::in_traits< uint64_t>::type>(position));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Error>::type Positioner::seek( ::efl::eolian::in_traits< int64_t>::type offset,  ::efl::eolian::in_traits<Efl_Io_Positioner_Whence>::type whence) const
{
    Eina_Error __return_value =  ::efl_io_positioner_seek(_eo_ptr(),
         ::efl::eolian::convert_to_c<int64_t,  ::efl::eolian::in_traits< int64_t>::type>(offset),
         ::efl::eolian::convert_to_c<Efl_Io_Positioner_Whence,  ::efl::eolian::in_traits<Efl_Io_Positioner_Whence>::type>(whence));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace io { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< uint64_t>::type Positioner::position_get() const
{
    uint64_t __return_value =  ::efl_io_positioner_position_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< uint64_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Positioner::position_set( ::efl::eolian::in_traits< uint64_t>::type position) const
{
    Eina_Bool __return_value =  ::efl_io_positioner_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<uint64_t,  ::efl::eolian::in_traits< uint64_t>::type>(position));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Error>::type Positioner::seek( ::efl::eolian::in_traits< int64_t>::type offset,  ::efl::eolian::in_traits<Efl_Io_Positioner_Whence>::type whence) const
{
    Eina_Error __return_value =  ::efl_io_positioner_seek(_eo_ptr(),
         ::efl::eolian::convert_to_c<int64_t,  ::efl::eolian::in_traits< int64_t>::type>(offset),
         ::efl::eolian::convert_to_c<Efl_Io_Positioner_Whence,  ::efl::eolian::in_traits<Efl_Io_Positioner_Whence>::type>(whence));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
#endif
inline efl::io::Positioner::operator ::efl::io::Positioner() const { return *static_cast< ::efl::io::Positioner const*>(static_cast<void const*>(this)); }
inline efl::io::Positioner::operator ::efl::io::Positioner&() { return *static_cast< ::efl::io::Positioner*>(static_cast<void*>(this)); }
inline efl::io::Positioner::operator ::efl::io::Positioner const&() const { return *static_cast< ::efl::io::Positioner const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
