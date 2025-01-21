#ifndef EFL_IO_SIZER_IMPL_HH
#define EFL_IO_SIZER_IMPL_HH

#include "efl_io_sizer.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace io { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< uint64_t>::type Sizer::size_get() const
{
    uint64_t __return_value =  ::efl_io_sizer_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< uint64_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Sizer::size_set( ::efl::eolian::in_traits< uint64_t>::type size) const
{
    Eina_Bool __return_value =  ::efl_io_sizer_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<uint64_t,  ::efl::eolian::in_traits< uint64_t>::type>(size));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Error>::type Sizer::resize( ::efl::eolian::in_traits< uint64_t>::type size) const
{
    Eina_Error __return_value =  ::efl_io_sizer_resize(_eo_ptr(),
         ::efl::eolian::convert_to_c<uint64_t,  ::efl::eolian::in_traits< uint64_t>::type>(size));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace io { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< uint64_t>::type Sizer::size_get() const
{
    uint64_t __return_value =  ::efl_io_sizer_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< uint64_t>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Sizer::size_set( ::efl::eolian::in_traits< uint64_t>::type size) const
{
    Eina_Bool __return_value =  ::efl_io_sizer_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<uint64_t,  ::efl::eolian::in_traits< uint64_t>::type>(size));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Error>::type Sizer::resize( ::efl::eolian::in_traits< uint64_t>::type size) const
{
    Eina_Error __return_value =  ::efl_io_sizer_resize(_eo_ptr(),
         ::efl::eolian::convert_to_c<uint64_t,  ::efl::eolian::in_traits< uint64_t>::type>(size));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
#endif
inline efl::io::Sizer::operator ::efl::io::Sizer() const { return *static_cast< ::efl::io::Sizer const*>(static_cast<void const*>(this)); }
inline efl::io::Sizer::operator ::efl::io::Sizer&() { return *static_cast< ::efl::io::Sizer*>(static_cast<void*>(this)); }
inline efl::io::Sizer::operator ::efl::io::Sizer const&() const { return *static_cast< ::efl::io::Sizer const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
