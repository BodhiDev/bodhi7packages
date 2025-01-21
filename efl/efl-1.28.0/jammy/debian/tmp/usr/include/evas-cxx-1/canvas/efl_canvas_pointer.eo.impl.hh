#ifndef EFL_CANVAS_POINTER_IMPL_HH
#define EFL_CANVAS_POINTER_IMPL_HH

#include "efl_canvas_pointer.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Pointer::pointer_inside_get( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const
{
    Eina_Bool __return_value =  ::efl_canvas_pointer_inside_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(seat));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Pointer::pointer_inside_get( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const
{
    Eina_Bool __return_value =  ::efl_canvas_pointer_inside_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(seat));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline efl::canvas::Pointer::operator ::efl::canvas::Pointer() const { return *static_cast< ::efl::canvas::Pointer const*>(static_cast<void const*>(this)); }
inline efl::canvas::Pointer::operator ::efl::canvas::Pointer&() { return *static_cast< ::efl::canvas::Pointer*>(static_cast<void*>(this)); }
inline efl::canvas::Pointer::operator ::efl::canvas::Pointer const&() const { return *static_cast< ::efl::canvas::Pointer const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
