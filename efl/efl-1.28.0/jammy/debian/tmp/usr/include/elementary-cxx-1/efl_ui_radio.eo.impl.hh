#ifndef EFL_UI_RADIO_IMPL_HH
#define EFL_UI_RADIO_IMPL_HH

#include "efl_ui_radio.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<int>::type Radio::state_value_get() const
{
    int __return_value =  ::efl_ui_radio_state_value_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Radio::state_value_set( ::efl::eolian::in_traits<int>::type value) const
{
     ::efl_ui_radio_state_value_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(value));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<int>::type Radio::state_value_get() const
{
    int __return_value =  ::efl_ui_radio_state_value_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Radio::state_value_set( ::efl::eolian::in_traits<int>::type value) const
{
     ::efl_ui_radio_state_value_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(value));
}
inline efl::ui::Radio::operator ::efl::ui::Radio() const { return *static_cast< ::efl::ui::Radio const*>(static_cast<void const*>(this)); }
inline efl::ui::Radio::operator ::efl::ui::Radio&() { return *static_cast< ::efl::ui::Radio*>(static_cast<void*>(this)); }
inline efl::ui::Radio::operator ::efl::ui::Radio const&() const { return *static_cast< ::efl::ui::Radio const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
