#ifndef EFL_IO_WRITER_IMPL_HH
#define EFL_IO_WRITER_IMPL_HH

#include "efl_io_writer.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace io { 
inline ::efl::eolian::return_traits<bool>::type Writer::can_write_get() const
{
    Eina_Bool __return_value =  ::efl_io_writer_can_write_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#ifdef EFL_IO_WRITER_PROTECTED
inline ::efl::eolian::return_traits<void>::type Writer::can_write_set( ::efl::eolian::in_traits<bool>::type can_write) const
{
     ::efl_io_writer_can_write_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(can_write));
}
#endif
inline ::efl::eolian::return_traits<Eina_Error>::type Writer::write( ::efl::eolian::inout_traits< Eina_Slice>::type slice,  ::efl::eolian::out_traits< Eina_Slice*>::type remaining) const
{
    Eina_Slice __out_param_slice = ::efl::eolian::convert_inout<Eina_Slice,  Eina_Slice>(slice);
    Eina_Slice __out_param_remaining = {};
    Eina_Error __return_value =  ::efl_io_writer_write(_eo_ptr(),
        & __out_param_slice,
        & __out_param_remaining);
    ::efl::eolian::assign_out< ::efl::eolian::inout_traits< Eina_Slice>::type, Eina_Slice>(slice, __out_param_slice);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< Eina_Slice*>::type, Eina_Slice>(remaining, __out_param_remaining);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
} } 
namespace eo_cxx {
namespace efl { namespace io { 
inline ::efl::eolian::return_traits<bool>::type Writer::can_write_get() const
{
    Eina_Bool __return_value =  ::efl_io_writer_can_write_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#ifdef EFL_IO_WRITER_PROTECTED
inline ::efl::eolian::return_traits<void>::type Writer::can_write_set( ::efl::eolian::in_traits<bool>::type can_write) const
{
     ::efl_io_writer_can_write_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(can_write));
}
#endif
inline ::efl::eolian::return_traits<Eina_Error>::type Writer::write( ::efl::eolian::inout_traits< Eina_Slice>::type slice,  ::efl::eolian::out_traits< Eina_Slice*>::type remaining) const
{
    Eina_Slice __out_param_slice = ::efl::eolian::convert_inout<Eina_Slice,  Eina_Slice>(slice);
    Eina_Slice __out_param_remaining = {};
    Eina_Error __return_value =  ::efl_io_writer_write(_eo_ptr(),
        & __out_param_slice,
        & __out_param_remaining);
    ::efl::eolian::assign_out< ::efl::eolian::inout_traits< Eina_Slice>::type, Eina_Slice>(slice, __out_param_slice);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< Eina_Slice*>::type, Eina_Slice>(remaining, __out_param_remaining);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
inline efl::io::Writer::operator ::efl::io::Writer() const { return *static_cast< ::efl::io::Writer const*>(static_cast<void const*>(this)); }
inline efl::io::Writer::operator ::efl::io::Writer&() { return *static_cast< ::efl::io::Writer*>(static_cast<void*>(this)); }
inline efl::io::Writer::operator ::efl::io::Writer const&() const { return *static_cast< ::efl::io::Writer const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
