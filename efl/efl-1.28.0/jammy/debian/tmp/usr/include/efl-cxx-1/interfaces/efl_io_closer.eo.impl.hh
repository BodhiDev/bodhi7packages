#ifndef EFL_IO_CLOSER_IMPL_HH
#define EFL_IO_CLOSER_IMPL_HH

#include "efl_io_closer.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace io { 
inline ::efl::eolian::return_traits<bool>::type Closer::closed_get() const
{
    Eina_Bool __return_value =  ::efl_io_closer_closed_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Closer::close_on_exec_get() const
{
    Eina_Bool __return_value =  ::efl_io_closer_close_on_exec_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Closer::close_on_exec_set( ::efl::eolian::in_traits<bool>::type close_on_exec) const
{
    Eina_Bool __return_value =  ::efl_io_closer_close_on_exec_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(close_on_exec));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Closer::close_on_invalidate_get() const
{
    Eina_Bool __return_value =  ::efl_io_closer_close_on_invalidate_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Closer::close_on_invalidate_set( ::efl::eolian::in_traits<bool>::type close_on_invalidate) const
{
     ::efl_io_closer_close_on_invalidate_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(close_on_invalidate));
}
inline ::efl::eolian::return_traits<Eina_Error>::type Closer::close() const
{
    Eina_Error __return_value =  ::efl_io_closer_close(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
} } 
namespace eo_cxx {
namespace efl { namespace io { 
inline ::efl::eolian::return_traits<bool>::type Closer::closed_get() const
{
    Eina_Bool __return_value =  ::efl_io_closer_closed_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Closer::close_on_exec_get() const
{
    Eina_Bool __return_value =  ::efl_io_closer_close_on_exec_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Closer::close_on_exec_set( ::efl::eolian::in_traits<bool>::type close_on_exec) const
{
    Eina_Bool __return_value =  ::efl_io_closer_close_on_exec_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(close_on_exec));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Closer::close_on_invalidate_get() const
{
    Eina_Bool __return_value =  ::efl_io_closer_close_on_invalidate_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Closer::close_on_invalidate_set( ::efl::eolian::in_traits<bool>::type close_on_invalidate) const
{
     ::efl_io_closer_close_on_invalidate_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(close_on_invalidate));
}
inline ::efl::eolian::return_traits<Eina_Error>::type Closer::close() const
{
    Eina_Error __return_value =  ::efl_io_closer_close(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
inline efl::io::Closer::operator ::efl::io::Closer() const { return *static_cast< ::efl::io::Closer const*>(static_cast<void const*>(this)); }
inline efl::io::Closer::operator ::efl::io::Closer&() { return *static_cast< ::efl::io::Closer*>(static_cast<void*>(this)); }
inline efl::io::Closer::operator ::efl::io::Closer const&() const { return *static_cast< ::efl::io::Closer const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
