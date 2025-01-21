#ifndef EFL_INPUT_INTERFACE_IMPL_HH
#define EFL_INPUT_INTERFACE_IMPL_HH

#include "efl_input_interface.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace input { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Interface::seat_event_filter_get( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const
{
    Eina_Bool __return_value =  ::efl_input_seat_event_filter_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(seat));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Interface::seat_event_filter_set( ::efl::eolian::in_traits< ::efl::input::Device>::type seat,  ::efl::eolian::in_traits<bool>::type enable) const
{
     ::efl_input_seat_event_filter_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(seat),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enable));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace input { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Interface::seat_event_filter_get( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const
{
    Eina_Bool __return_value =  ::efl_input_seat_event_filter_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(seat));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Interface::seat_event_filter_set( ::efl::eolian::in_traits< ::efl::input::Device>::type seat,  ::efl::eolian::in_traits<bool>::type enable) const
{
     ::efl_input_seat_event_filter_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(seat),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enable));
}
#endif
inline efl::input::Interface::operator ::efl::input::Interface() const { return *static_cast< ::efl::input::Interface const*>(static_cast<void const*>(this)); }
inline efl::input::Interface::operator ::efl::input::Interface&() { return *static_cast< ::efl::input::Interface*>(static_cast<void*>(this)); }
inline efl::input::Interface::operator ::efl::input::Interface const&() const { return *static_cast< ::efl::input::Interface const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
