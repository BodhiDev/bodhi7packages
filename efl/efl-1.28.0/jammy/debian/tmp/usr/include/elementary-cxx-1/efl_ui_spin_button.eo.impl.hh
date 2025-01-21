#ifndef EFL_UI_SPIN_BUTTON_IMPL_HH
#define EFL_UI_SPIN_BUTTON_IMPL_HH

#include "efl_ui_spin_button.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<bool>::type Spin_Button::wraparound_get() const
{
    Eina_Bool __return_value =  ::efl_ui_spin_button_wraparound_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Spin_Button::wraparound_set( ::efl::eolian::in_traits<bool>::type circulate) const
{
     ::efl_ui_spin_button_wraparound_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(circulate));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Spin_Button::direct_text_input_get() const
{
    Eina_Bool __return_value =  ::efl_ui_spin_button_direct_text_input_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Spin_Button::direct_text_input_set( ::efl::eolian::in_traits<bool>::type direct_text_input) const
{
     ::efl_ui_spin_button_direct_text_input_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(direct_text_input));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<bool>::type Spin_Button::wraparound_get() const
{
    Eina_Bool __return_value =  ::efl_ui_spin_button_wraparound_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Spin_Button::wraparound_set( ::efl::eolian::in_traits<bool>::type circulate) const
{
     ::efl_ui_spin_button_wraparound_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(circulate));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Spin_Button::direct_text_input_get() const
{
    Eina_Bool __return_value =  ::efl_ui_spin_button_direct_text_input_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Spin_Button::direct_text_input_set( ::efl::eolian::in_traits<bool>::type direct_text_input) const
{
     ::efl_ui_spin_button_direct_text_input_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(direct_text_input));
}
#endif
inline efl::ui::Spin_Button::operator ::efl::ui::Spin_Button() const { return *static_cast< ::efl::ui::Spin_Button const*>(static_cast<void const*>(this)); }
inline efl::ui::Spin_Button::operator ::efl::ui::Spin_Button&() { return *static_cast< ::efl::ui::Spin_Button*>(static_cast<void*>(this)); }
inline efl::ui::Spin_Button::operator ::efl::ui::Spin_Button const&() const { return *static_cast< ::efl::ui::Spin_Button const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
