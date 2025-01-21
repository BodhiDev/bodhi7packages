#ifndef EFL_IO_COPIER_IMPL_HH
#define EFL_IO_COPIER_IMPL_HH

#include "efl_io_copier.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace io { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::io::Reader>::type Copier::source_get() const
{
     ::Efl_Io_Reader* __return_value =  ::efl_io_copier_source_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::io::Reader>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Copier::source_set( ::efl::eolian::in_traits< ::efl::io::Reader>::type source) const
{
     ::efl_io_copier_source_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Io_Reader*,  ::efl::eolian::in_traits< ::efl::io::Reader>::type>(source));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::io::Writer>::type Copier::destination_get() const
{
     ::Efl_Io_Writer* __return_value =  ::efl_io_copier_destination_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::io::Writer>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Copier::destination_set( ::efl::eolian::in_traits< ::efl::io::Writer>::type destination) const
{
     ::efl_io_copier_destination_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Io_Writer*,  ::efl::eolian::in_traits< ::efl::io::Writer>::type>(destination));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<const Eina_Slice>::type Copier::line_delimiter_get() const
{
    const Eina_Slice __return_value =  ::efl_io_copier_line_delimiter_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Eina_Slice>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Copier::line_delimiter_set( ::efl::eolian::in_traits<const Eina_Slice>::type slice) const
{
     ::efl_io_copier_line_delimiter_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Slice,  ::efl::eolian::in_traits<const Eina_Slice>::type>(slice));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Copier::buffer_limit_get() const
{
    size_t __return_value =  ::efl_io_copier_buffer_limit_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Copier::buffer_limit_set( ::efl::eolian::in_traits< size_t>::type size) const
{
     ::efl_io_copier_buffer_limit_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(size));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Copier::read_chunk_size_get() const
{
    size_t __return_value =  ::efl_io_copier_read_chunk_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Copier::read_chunk_size_set( ::efl::eolian::in_traits< size_t>::type size) const
{
     ::efl_io_copier_read_chunk_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(size));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Copier::progress_get( ::efl::eolian::out_traits< uint64_t*>::type read,  ::efl::eolian::out_traits< uint64_t*>::type written,  ::efl::eolian::out_traits< uint64_t*>::type total) const
{
    uint64_t __out_param_read = {};
    uint64_t __out_param_written = {};
    uint64_t __out_param_total = {};
     ::efl_io_copier_progress_get(_eo_ptr(),
        & __out_param_read,
        & __out_param_written,
        & __out_param_total);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< uint64_t*>::type, uint64_t>(read, __out_param_read);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< uint64_t*>::type, uint64_t>(written, __out_param_written);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< uint64_t*>::type, uint64_t>(total, __out_param_total);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Copier::timeout_inactivity_get() const
{
    double __return_value =  ::efl_io_copier_timeout_inactivity_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Copier::timeout_inactivity_set( ::efl::eolian::in_traits<double>::type seconds) const
{
     ::efl_io_copier_timeout_inactivity_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(seconds));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Copier::done_get() const
{
    Eina_Bool __return_value =  ::efl_io_copier_done_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_IO_COPIER_PROTECTED
inline ::efl::eolian::return_traits<void>::type Copier::done_set( ::efl::eolian::in_traits<bool>::type done) const
{
     ::efl_io_copier_done_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(done));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Copier::pending_size_get() const
{
    size_t __return_value =  ::efl_io_copier_pending_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::strbuf_view>::type Copier::binbuf_steal() const
{
    Eina_Binbuf * __return_value =  ::efl_io_copier_binbuf_steal(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::strbuf_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Copier::flush( ::efl::eolian::in_traits<bool>::type may_block,  ::efl::eolian::in_traits<bool>::type ignore_line_delimiter) const
{
    Eina_Bool __return_value =  ::efl_io_copier_flush(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(may_block),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(ignore_line_delimiter));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace io { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::io::Reader>::type Copier::source_get() const
{
     ::Efl_Io_Reader* __return_value =  ::efl_io_copier_source_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::io::Reader>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Copier::source_set( ::efl::eolian::in_traits< ::efl::io::Reader>::type source) const
{
     ::efl_io_copier_source_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Io_Reader*,  ::efl::eolian::in_traits< ::efl::io::Reader>::type>(source));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::io::Writer>::type Copier::destination_get() const
{
     ::Efl_Io_Writer* __return_value =  ::efl_io_copier_destination_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::io::Writer>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Copier::destination_set( ::efl::eolian::in_traits< ::efl::io::Writer>::type destination) const
{
     ::efl_io_copier_destination_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Io_Writer*,  ::efl::eolian::in_traits< ::efl::io::Writer>::type>(destination));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<const Eina_Slice>::type Copier::line_delimiter_get() const
{
    const Eina_Slice __return_value =  ::efl_io_copier_line_delimiter_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Eina_Slice>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Copier::line_delimiter_set( ::efl::eolian::in_traits<const Eina_Slice>::type slice) const
{
     ::efl_io_copier_line_delimiter_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Slice,  ::efl::eolian::in_traits<const Eina_Slice>::type>(slice));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Copier::buffer_limit_get() const
{
    size_t __return_value =  ::efl_io_copier_buffer_limit_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Copier::buffer_limit_set( ::efl::eolian::in_traits< size_t>::type size) const
{
     ::efl_io_copier_buffer_limit_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(size));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Copier::read_chunk_size_get() const
{
    size_t __return_value =  ::efl_io_copier_read_chunk_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Copier::read_chunk_size_set( ::efl::eolian::in_traits< size_t>::type size) const
{
     ::efl_io_copier_read_chunk_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(size));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Copier::progress_get( ::efl::eolian::out_traits< uint64_t*>::type read,  ::efl::eolian::out_traits< uint64_t*>::type written,  ::efl::eolian::out_traits< uint64_t*>::type total) const
{
    uint64_t __out_param_read = {};
    uint64_t __out_param_written = {};
    uint64_t __out_param_total = {};
     ::efl_io_copier_progress_get(_eo_ptr(),
        & __out_param_read,
        & __out_param_written,
        & __out_param_total);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< uint64_t*>::type, uint64_t>(read, __out_param_read);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< uint64_t*>::type, uint64_t>(written, __out_param_written);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< uint64_t*>::type, uint64_t>(total, __out_param_total);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Copier::timeout_inactivity_get() const
{
    double __return_value =  ::efl_io_copier_timeout_inactivity_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Copier::timeout_inactivity_set( ::efl::eolian::in_traits<double>::type seconds) const
{
     ::efl_io_copier_timeout_inactivity_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(seconds));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Copier::done_get() const
{
    Eina_Bool __return_value =  ::efl_io_copier_done_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_IO_COPIER_PROTECTED
inline ::efl::eolian::return_traits<void>::type Copier::done_set( ::efl::eolian::in_traits<bool>::type done) const
{
     ::efl_io_copier_done_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(done));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Copier::pending_size_get() const
{
    size_t __return_value =  ::efl_io_copier_pending_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::strbuf_view>::type Copier::binbuf_steal() const
{
    Eina_Binbuf * __return_value =  ::efl_io_copier_binbuf_steal(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::strbuf_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Copier::flush( ::efl::eolian::in_traits<bool>::type may_block,  ::efl::eolian::in_traits<bool>::type ignore_line_delimiter) const
{
    Eina_Bool __return_value =  ::efl_io_copier_flush(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(may_block),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(ignore_line_delimiter));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline efl::io::Copier::operator ::efl::io::Copier() const { return *static_cast< ::efl::io::Copier const*>(static_cast<void const*>(this)); }
inline efl::io::Copier::operator ::efl::io::Copier&() { return *static_cast< ::efl::io::Copier*>(static_cast<void*>(this)); }
inline efl::io::Copier::operator ::efl::io::Copier const&() const { return *static_cast< ::efl::io::Copier const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
