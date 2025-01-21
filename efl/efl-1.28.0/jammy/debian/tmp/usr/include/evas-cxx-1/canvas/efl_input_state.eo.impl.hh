#ifndef EFL_INPUT_STATE_IMPL_HH
#define EFL_INPUT_STATE_IMPL_HH

#include "efl_input_state.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace input { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type State::modifier_enabled_get( ::efl::eolian::in_traits<Efl_Input_Modifier>::type mod,  ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const
{
    Eina_Bool __return_value =  ::efl_input_modifier_enabled_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Modifier,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type>(mod),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device const*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(seat));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type State::lock_enabled_get( ::efl::eolian::in_traits<Efl_Input_Lock>::type lock,  ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const
{
    Eina_Bool __return_value =  ::efl_input_lock_enabled_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Lock,  ::efl::eolian::in_traits<Efl_Input_Lock>::type>(lock),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device const*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(seat));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace input { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type State::modifier_enabled_get( ::efl::eolian::in_traits<Efl_Input_Modifier>::type mod,  ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const
{
    Eina_Bool __return_value =  ::efl_input_modifier_enabled_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Modifier,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type>(mod),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device const*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(seat));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type State::lock_enabled_get( ::efl::eolian::in_traits<Efl_Input_Lock>::type lock,  ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const
{
    Eina_Bool __return_value =  ::efl_input_lock_enabled_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Lock,  ::efl::eolian::in_traits<Efl_Input_Lock>::type>(lock),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device const*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(seat));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline efl::input::State::operator ::efl::input::State() const { return *static_cast< ::efl::input::State const*>(static_cast<void const*>(this)); }
inline efl::input::State::operator ::efl::input::State&() { return *static_cast< ::efl::input::State*>(static_cast<void*>(this)); }
inline efl::input::State::operator ::efl::input::State const&() const { return *static_cast< ::efl::input::State const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
