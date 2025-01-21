#ifndef EFL_INPUT_CLICKABLE_IMPL_HH
#define EFL_INPUT_CLICKABLE_IMPL_HH

#include "efl_input_clickable.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace input { 
inline ::efl::eolian::return_traits<bool>::type Clickable::interaction_get() const
{
    Eina_Bool __return_value =  ::efl_input_clickable_interaction_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#ifdef EFL_INPUT_CLICKABLE_PROTECTED
inline ::efl::eolian::return_traits<void>::type Clickable::press( ::efl::eolian::in_traits< unsigned int>::type button) const
{
     ::efl_input_clickable_press(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(button));
}
#endif
#ifdef EFL_INPUT_CLICKABLE_PROTECTED
inline ::efl::eolian::return_traits<void>::type Clickable::unpress( ::efl::eolian::in_traits< unsigned int>::type button) const
{
     ::efl_input_clickable_unpress(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(button));
}
#endif
#ifdef EFL_INPUT_CLICKABLE_PROTECTED
inline ::efl::eolian::return_traits<void>::type Clickable::button_state_reset( ::efl::eolian::in_traits< unsigned int>::type button) const
{
     ::efl_input_clickable_button_state_reset(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(button));
}
#endif
#ifdef EFL_INPUT_CLICKABLE_PROTECTED
inline ::efl::eolian::return_traits<void>::type Clickable::longpress_abort( ::efl::eolian::in_traits< unsigned int>::type button) const
{
     ::efl_input_clickable_longpress_abort(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(button));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace input { 
inline ::efl::eolian::return_traits<bool>::type Clickable::interaction_get() const
{
    Eina_Bool __return_value =  ::efl_input_clickable_interaction_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#ifdef EFL_INPUT_CLICKABLE_PROTECTED
inline ::efl::eolian::return_traits<void>::type Clickable::press( ::efl::eolian::in_traits< unsigned int>::type button) const
{
     ::efl_input_clickable_press(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(button));
}
#endif
#ifdef EFL_INPUT_CLICKABLE_PROTECTED
inline ::efl::eolian::return_traits<void>::type Clickable::unpress( ::efl::eolian::in_traits< unsigned int>::type button) const
{
     ::efl_input_clickable_unpress(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(button));
}
#endif
#ifdef EFL_INPUT_CLICKABLE_PROTECTED
inline ::efl::eolian::return_traits<void>::type Clickable::button_state_reset( ::efl::eolian::in_traits< unsigned int>::type button) const
{
     ::efl_input_clickable_button_state_reset(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(button));
}
#endif
#ifdef EFL_INPUT_CLICKABLE_PROTECTED
inline ::efl::eolian::return_traits<void>::type Clickable::longpress_abort( ::efl::eolian::in_traits< unsigned int>::type button) const
{
     ::efl_input_clickable_longpress_abort(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(button));
}
#endif
inline efl::input::Clickable::operator ::efl::input::Clickable() const { return *static_cast< ::efl::input::Clickable const*>(static_cast<void const*>(this)); }
inline efl::input::Clickable::operator ::efl::input::Clickable&() { return *static_cast< ::efl::input::Clickable*>(static_cast<void*>(this)); }
inline efl::input::Clickable::operator ::efl::input::Clickable const&() const { return *static_cast< ::efl::input::Clickable const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
