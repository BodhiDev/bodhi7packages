#ifndef EFL_IO_QUEUE_IMPL_HH
#define EFL_IO_QUEUE_IMPL_HH

#include "efl_io_queue.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace io { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Queue::limit_get() const
{
    size_t __return_value =  ::efl_io_queue_limit_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Queue::limit_set( ::efl::eolian::in_traits< size_t>::type size) const
{
     ::efl_io_queue_limit_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(size));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Queue::usage_get() const
{
    size_t __return_value =  ::efl_io_queue_usage_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Slice>::type Queue::slice_get() const
{
    Eina_Slice __return_value =  ::efl_io_queue_slice_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Slice>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Queue::preallocate( ::efl::eolian::in_traits< size_t>::type size) const
{
     ::efl_io_queue_preallocate(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(size));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Queue::discard( ::efl::eolian::in_traits< size_t>::type amount) const
{
     ::efl_io_queue_discard(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(amount));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Queue::clear() const
{
     ::efl_io_queue_clear(_eo_ptr());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Queue::eos_mark() const
{
     ::efl_io_queue_eos_mark(_eo_ptr());
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace io { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Queue::limit_get() const
{
    size_t __return_value =  ::efl_io_queue_limit_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Queue::limit_set( ::efl::eolian::in_traits< size_t>::type size) const
{
     ::efl_io_queue_limit_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(size));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< size_t>::type Queue::usage_get() const
{
    size_t __return_value =  ::efl_io_queue_usage_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< size_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Slice>::type Queue::slice_get() const
{
    Eina_Slice __return_value =  ::efl_io_queue_slice_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Slice>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Queue::preallocate( ::efl::eolian::in_traits< size_t>::type size) const
{
     ::efl_io_queue_preallocate(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(size));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Queue::discard( ::efl::eolian::in_traits< size_t>::type amount) const
{
     ::efl_io_queue_discard(_eo_ptr(),
         ::efl::eolian::convert_to_c<size_t,  ::efl::eolian::in_traits< size_t>::type>(amount));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Queue::clear() const
{
     ::efl_io_queue_clear(_eo_ptr());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Queue::eos_mark() const
{
     ::efl_io_queue_eos_mark(_eo_ptr());
}
#endif
inline efl::io::Queue::operator ::efl::io::Queue() const { return *static_cast< ::efl::io::Queue const*>(static_cast<void const*>(this)); }
inline efl::io::Queue::operator ::efl::io::Queue&() { return *static_cast< ::efl::io::Queue*>(static_cast<void*>(this)); }
inline efl::io::Queue::operator ::efl::io::Queue const&() const { return *static_cast< ::efl::io::Queue const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
