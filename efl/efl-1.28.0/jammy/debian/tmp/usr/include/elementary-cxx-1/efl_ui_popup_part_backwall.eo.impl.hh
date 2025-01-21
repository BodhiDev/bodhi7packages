#ifndef EFL_UI_POPUP_PART_BACKWALL_IMPL_HH
#define EFL_UI_POPUP_PART_BACKWALL_IMPL_HH

#include "efl_ui_popup_part_backwall.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<bool>::type Popup_Part_Backwall::repeat_events_get() const
{
    Eina_Bool __return_value =  ::efl_ui_popup_part_backwall_repeat_events_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Popup_Part_Backwall::repeat_events_set( ::efl::eolian::in_traits<bool>::type repeat) const
{
     ::efl_ui_popup_part_backwall_repeat_events_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(repeat));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<bool>::type Popup_Part_Backwall::repeat_events_get() const
{
    Eina_Bool __return_value =  ::efl_ui_popup_part_backwall_repeat_events_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Popup_Part_Backwall::repeat_events_set( ::efl::eolian::in_traits<bool>::type repeat) const
{
     ::efl_ui_popup_part_backwall_repeat_events_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(repeat));
}
inline efl::ui::Popup_Part_Backwall::operator ::efl::ui::Popup_Part_Backwall() const { return *static_cast< ::efl::ui::Popup_Part_Backwall const*>(static_cast<void const*>(this)); }
inline efl::ui::Popup_Part_Backwall::operator ::efl::ui::Popup_Part_Backwall&() { return *static_cast< ::efl::ui::Popup_Part_Backwall*>(static_cast<void*>(this)); }
inline efl::ui::Popup_Part_Backwall::operator ::efl::ui::Popup_Part_Backwall const&() const { return *static_cast< ::efl::ui::Popup_Part_Backwall const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
