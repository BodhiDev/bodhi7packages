#ifndef EFL_IO_BUFFERED_STREAM_IMPL_HH
#define EFL_IO_BUFFERED_STREAM_IMPL_HH

#include "efl_io_buffered_stream.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace io { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::Object>::type Buffered_Stream::inner_io_get() const
{
     ::Efl_Object* __return_value =  ::efl_io_buffered_stream_inner_io_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::inner_io_set( ::efl::eolian::in_traits< ::efl::Object>::type io) const
{
     ::efl_io_buffered_stream_inner_io_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(io));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Buffered_Stream::max_queue_size_input_get() const
{
    size_t __return_value =  ::efl_io_buffered_stream_max_queue_size_input_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::max_queue_size_input_set( ::efl::eolian::in_traits< size_t>::type max_queue_size_input) const
{
     ::efl_io_buffered_stream_max_queue_size_input_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(max_queue_size_input));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Buffered_Stream::max_queue_size_output_get() const
{
    size_t __return_value =  ::efl_io_buffered_stream_max_queue_size_output_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::max_queue_size_output_set( ::efl::eolian::in_traits< size_t>::type max_queue_size_output) const
{
     ::efl_io_buffered_stream_max_queue_size_output_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(max_queue_size_output));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<const Eina_Slice>::type Buffered_Stream::line_delimiter_get() const
{
    const Eina_Slice __return_value =  ::efl_io_buffered_stream_line_delimiter_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Eina_Slice>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::line_delimiter_set( ::efl::eolian::in_traits<const Eina_Slice>::type slice) const
{
     ::efl_io_buffered_stream_line_delimiter_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Slice,  ::efl::eolian::in_traits<const Eina_Slice>::type>(slice));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Buffered_Stream::timeout_inactivity_get() const
{
    double __return_value =  ::efl_io_buffered_stream_timeout_inactivity_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::timeout_inactivity_set( ::efl::eolian::in_traits<double>::type seconds) const
{
     ::efl_io_buffered_stream_timeout_inactivity_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(seconds));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Buffered_Stream::read_chunk_size_get() const
{
    size_t __return_value =  ::efl_io_buffered_stream_read_chunk_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::read_chunk_size_set( ::efl::eolian::in_traits< size_t>::type size) const
{
     ::efl_io_buffered_stream_read_chunk_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(size));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Buffered_Stream::pending_write_get() const
{
    size_t __return_value =  ::efl_io_buffered_stream_pending_write_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Buffered_Stream::pending_read_get() const
{
    size_t __return_value =  ::efl_io_buffered_stream_pending_read_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::progress_get( ::efl::eolian::out_traits< size_t>::type read_bytes,  ::efl::eolian::out_traits< size_t>::type written_bytes) const
{
    size_t __out_param_read_bytes = {};
    size_t __out_param_written_bytes = {};
     ::efl_io_buffered_stream_progress_get(_eo_ptr(),
        & __out_param_read_bytes,
        & __out_param_written_bytes);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< size_t>::type, size_t>(read_bytes, __out_param_read_bytes);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< size_t>::type, size_t>(written_bytes, __out_param_written_bytes);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Slice>::type Buffered_Stream::slice_get() const
{
    Eina_Slice __return_value =  ::efl_io_buffered_stream_slice_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Slice>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::discard( ::efl::eolian::in_traits< size_t>::type amount) const
{
     ::efl_io_buffered_stream_discard(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(amount));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::clear() const
{
     ::efl_io_buffered_stream_clear(_eo_ptr());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::eos_mark() const
{
     ::efl_io_buffered_stream_eos_mark(_eo_ptr());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Buffered_Stream::flush( ::efl::eolian::in_traits<bool>::type may_block,  ::efl::eolian::in_traits<bool>::type ignore_line_delimiter) const
{
    Eina_Bool __return_value =  ::efl_io_buffered_stream_flush(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(may_block),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(ignore_line_delimiter));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace io { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::Object>::type Buffered_Stream::inner_io_get() const
{
     ::Efl_Object* __return_value =  ::efl_io_buffered_stream_inner_io_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::inner_io_set( ::efl::eolian::in_traits< ::efl::Object>::type io) const
{
     ::efl_io_buffered_stream_inner_io_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(io));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Buffered_Stream::max_queue_size_input_get() const
{
    size_t __return_value =  ::efl_io_buffered_stream_max_queue_size_input_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::max_queue_size_input_set( ::efl::eolian::in_traits< size_t>::type max_queue_size_input) const
{
     ::efl_io_buffered_stream_max_queue_size_input_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(max_queue_size_input));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Buffered_Stream::max_queue_size_output_get() const
{
    size_t __return_value =  ::efl_io_buffered_stream_max_queue_size_output_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::max_queue_size_output_set( ::efl::eolian::in_traits< size_t>::type max_queue_size_output) const
{
     ::efl_io_buffered_stream_max_queue_size_output_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(max_queue_size_output));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<const Eina_Slice>::type Buffered_Stream::line_delimiter_get() const
{
    const Eina_Slice __return_value =  ::efl_io_buffered_stream_line_delimiter_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Eina_Slice>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::line_delimiter_set( ::efl::eolian::in_traits<const Eina_Slice>::type slice) const
{
     ::efl_io_buffered_stream_line_delimiter_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Slice,  ::efl::eolian::in_traits<const Eina_Slice>::type>(slice));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Buffered_Stream::timeout_inactivity_get() const
{
    double __return_value =  ::efl_io_buffered_stream_timeout_inactivity_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::timeout_inactivity_set( ::efl::eolian::in_traits<double>::type seconds) const
{
     ::efl_io_buffered_stream_timeout_inactivity_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(seconds));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Buffered_Stream::read_chunk_size_get() const
{
    size_t __return_value =  ::efl_io_buffered_stream_read_chunk_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::read_chunk_size_set( ::efl::eolian::in_traits< size_t>::type size) const
{
     ::efl_io_buffered_stream_read_chunk_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(size));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Buffered_Stream::pending_write_get() const
{
    size_t __return_value =  ::efl_io_buffered_stream_pending_write_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Buffered_Stream::pending_read_get() const
{
    size_t __return_value =  ::efl_io_buffered_stream_pending_read_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::progress_get( ::efl::eolian::out_traits< size_t>::type read_bytes,  ::efl::eolian::out_traits< size_t>::type written_bytes) const
{
    size_t __out_param_read_bytes = {};
    size_t __out_param_written_bytes = {};
     ::efl_io_buffered_stream_progress_get(_eo_ptr(),
        & __out_param_read_bytes,
        & __out_param_written_bytes);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< size_t>::type, size_t>(read_bytes, __out_param_read_bytes);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< size_t>::type, size_t>(written_bytes, __out_param_written_bytes);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Slice>::type Buffered_Stream::slice_get() const
{
    Eina_Slice __return_value =  ::efl_io_buffered_stream_slice_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Slice>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::discard( ::efl::eolian::in_traits< size_t>::type amount) const
{
     ::efl_io_buffered_stream_discard(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(amount));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::clear() const
{
     ::efl_io_buffered_stream_clear(_eo_ptr());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffered_Stream::eos_mark() const
{
     ::efl_io_buffered_stream_eos_mark(_eo_ptr());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Buffered_Stream::flush( ::efl::eolian::in_traits<bool>::type may_block,  ::efl::eolian::in_traits<bool>::type ignore_line_delimiter) const
{
    Eina_Bool __return_value =  ::efl_io_buffered_stream_flush(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(may_block),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(ignore_line_delimiter));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline efl::io::Buffered_Stream::operator ::efl::io::Buffered_Stream() const { return *static_cast< ::efl::io::Buffered_Stream const*>(static_cast<void const*>(this)); }
inline efl::io::Buffered_Stream::operator ::efl::io::Buffered_Stream&() { return *static_cast< ::efl::io::Buffered_Stream*>(static_cast<void*>(this)); }
inline efl::io::Buffered_Stream::operator ::efl::io::Buffered_Stream const&() const { return *static_cast< ::efl::io::Buffered_Stream const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
