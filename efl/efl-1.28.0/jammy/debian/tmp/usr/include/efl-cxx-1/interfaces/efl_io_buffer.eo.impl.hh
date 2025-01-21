#ifndef EFL_IO_BUFFER_IMPL_HH
#define EFL_IO_BUFFER_IMPL_HH

#include "efl_io_buffer.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace io { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Buffer::limit_get() const
{
    size_t __return_value =  ::efl_io_buffer_limit_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffer::limit_set( ::efl::eolian::in_traits< size_t>::type size) const
{
     ::efl_io_buffer_limit_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(size));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< uint64_t>::type Buffer::position_read_get() const
{
    uint64_t __return_value =  ::efl_io_buffer_position_read_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< uint64_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Buffer::position_read_set( ::efl::eolian::in_traits< uint64_t>::type position) const
{
    Eina_Bool __return_value =  ::efl_io_buffer_position_read_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<uint64_t,  ::efl::eolian::in_traits< uint64_t>::type>(position));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< uint64_t>::type Buffer::position_write_get() const
{
    uint64_t __return_value =  ::efl_io_buffer_position_write_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< uint64_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Buffer::position_write_set( ::efl::eolian::in_traits< uint64_t>::type position) const
{
    Eina_Bool __return_value =  ::efl_io_buffer_position_write_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<uint64_t,  ::efl::eolian::in_traits< uint64_t>::type>(position));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Slice>::type Buffer::slice_get() const
{
    Eina_Slice __return_value =  ::efl_io_buffer_slice_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Slice>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffer::preallocate( ::efl::eolian::in_traits< size_t>::type size) const
{
     ::efl_io_buffer_preallocate(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(size));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffer::adopt_readonly( ::efl::eolian::in_traits<const Eina_Slice>::type slice) const
{
     ::efl_io_buffer_adopt_readonly(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Slice,  ::efl::eolian::in_traits<const Eina_Slice>::type>(slice));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffer::adopt_readwrite( ::efl::eolian::in_traits<Eina_Rw_Slice>::type slice) const
{
     ::efl_io_buffer_adopt_readwrite(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rw_Slice,  ::efl::eolian::in_traits<Eina_Rw_Slice>::type>(slice));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::strbuf_view>::type Buffer::binbuf_steal() const
{
    Eina_Binbuf * __return_value =  ::efl_io_buffer_binbuf_steal(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::strbuf_view>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace io { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Buffer::limit_get() const
{
    size_t __return_value =  ::efl_io_buffer_limit_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffer::limit_set( ::efl::eolian::in_traits< size_t>::type size) const
{
     ::efl_io_buffer_limit_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(size));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< uint64_t>::type Buffer::position_read_get() const
{
    uint64_t __return_value =  ::efl_io_buffer_position_read_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< uint64_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Buffer::position_read_set( ::efl::eolian::in_traits< uint64_t>::type position) const
{
    Eina_Bool __return_value =  ::efl_io_buffer_position_read_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<uint64_t,  ::efl::eolian::in_traits< uint64_t>::type>(position));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< uint64_t>::type Buffer::position_write_get() const
{
    uint64_t __return_value =  ::efl_io_buffer_position_write_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< uint64_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Buffer::position_write_set( ::efl::eolian::in_traits< uint64_t>::type position) const
{
    Eina_Bool __return_value =  ::efl_io_buffer_position_write_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<uint64_t,  ::efl::eolian::in_traits< uint64_t>::type>(position));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Slice>::type Buffer::slice_get() const
{
    Eina_Slice __return_value =  ::efl_io_buffer_slice_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Slice>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffer::preallocate( ::efl::eolian::in_traits< size_t>::type size) const
{
     ::efl_io_buffer_preallocate(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(size));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffer::adopt_readonly( ::efl::eolian::in_traits<const Eina_Slice>::type slice) const
{
     ::efl_io_buffer_adopt_readonly(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Slice,  ::efl::eolian::in_traits<const Eina_Slice>::type>(slice));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffer::adopt_readwrite( ::efl::eolian::in_traits<Eina_Rw_Slice>::type slice) const
{
     ::efl_io_buffer_adopt_readwrite(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rw_Slice,  ::efl::eolian::in_traits<Eina_Rw_Slice>::type>(slice));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::strbuf_view>::type Buffer::binbuf_steal() const
{
    Eina_Binbuf * __return_value =  ::efl_io_buffer_binbuf_steal(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::strbuf_view>::type>(__return_value);
}
#endif
inline efl::io::Buffer::operator ::efl::io::Buffer() const { return *static_cast< ::efl::io::Buffer const*>(static_cast<void const*>(this)); }
inline efl::io::Buffer::operator ::efl::io::Buffer&() { return *static_cast< ::efl::io::Buffer*>(static_cast<void*>(this)); }
inline efl::io::Buffer::operator ::efl::io::Buffer const&() const { return *static_cast< ::efl::io::Buffer const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
