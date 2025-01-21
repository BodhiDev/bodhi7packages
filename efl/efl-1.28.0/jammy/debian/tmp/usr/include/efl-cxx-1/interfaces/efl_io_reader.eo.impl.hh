#ifndef EFL_IO_READER_IMPL_HH
#define EFL_IO_READER_IMPL_HH

#include "efl_io_reader.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace io { 
inline ::efl::eolian::return_traits<bool>::type Reader::can_read_get() const
{
    Eina_Bool __return_value =  ::efl_io_reader_can_read_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#ifdef EFL_IO_READER_PROTECTED
inline ::efl::eolian::return_traits<void>::type Reader::can_read_set( ::efl::eolian::in_traits<bool>::type can_read) const
{
     ::efl_io_reader_can_read_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(can_read));
}
#endif
inline ::efl::eolian::return_traits<bool>::type Reader::eos_get() const
{
    Eina_Bool __return_value =  ::efl_io_reader_eos_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#ifdef EFL_IO_READER_PROTECTED
inline ::efl::eolian::return_traits<void>::type Reader::eos_set( ::efl::eolian::in_traits<bool>::type is_eos) const
{
     ::efl_io_reader_eos_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(is_eos));
}
#endif
inline ::efl::eolian::return_traits<Eina_Error>::type Reader::read( ::efl::eolian::inout_traits< Eina_Rw_Slice>::type rw_slice) const
{
    Eina_Rw_Slice __out_param_rw_slice = ::efl::eolian::convert_inout<Eina_Rw_Slice,  Eina_Rw_Slice>(rw_slice);
    Eina_Error __return_value =  ::efl_io_reader_read(_eo_ptr(),
        & __out_param_rw_slice);
    ::efl::eolian::assign_out< ::efl::eolian::inout_traits< Eina_Rw_Slice>::type, Eina_Rw_Slice>(rw_slice, __out_param_rw_slice);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
} } 
namespace eo_cxx {
namespace efl { namespace io { 
inline ::efl::eolian::return_traits<bool>::type Reader::can_read_get() const
{
    Eina_Bool __return_value =  ::efl_io_reader_can_read_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#ifdef EFL_IO_READER_PROTECTED
inline ::efl::eolian::return_traits<void>::type Reader::can_read_set( ::efl::eolian::in_traits<bool>::type can_read) const
{
     ::efl_io_reader_can_read_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(can_read));
}
#endif
inline ::efl::eolian::return_traits<bool>::type Reader::eos_get() const
{
    Eina_Bool __return_value =  ::efl_io_reader_eos_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#ifdef EFL_IO_READER_PROTECTED
inline ::efl::eolian::return_traits<void>::type Reader::eos_set( ::efl::eolian::in_traits<bool>::type is_eos) const
{
     ::efl_io_reader_eos_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(is_eos));
}
#endif
inline ::efl::eolian::return_traits<Eina_Error>::type Reader::read( ::efl::eolian::inout_traits< Eina_Rw_Slice>::type rw_slice) const
{
    Eina_Rw_Slice __out_param_rw_slice = ::efl::eolian::convert_inout<Eina_Rw_Slice,  Eina_Rw_Slice>(rw_slice);
    Eina_Error __return_value =  ::efl_io_reader_read(_eo_ptr(),
        & __out_param_rw_slice);
    ::efl::eolian::assign_out< ::efl::eolian::inout_traits< Eina_Rw_Slice>::type, Eina_Rw_Slice>(rw_slice, __out_param_rw_slice);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
inline efl::io::Reader::operator ::efl::io::Reader() const { return *static_cast< ::efl::io::Reader const*>(static_cast<void const*>(this)); }
inline efl::io::Reader::operator ::efl::io::Reader&() { return *static_cast< ::efl::io::Reader*>(static_cast<void*>(this)); }
inline efl::io::Reader::operator ::efl::io::Reader const&() const { return *static_cast< ::efl::io::Reader const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
