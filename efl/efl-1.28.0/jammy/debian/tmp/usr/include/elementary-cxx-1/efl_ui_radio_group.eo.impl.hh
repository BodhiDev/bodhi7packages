#ifndef EFL_UI_RADIO_GROUP_IMPL_HH
#define EFL_UI_RADIO_GROUP_IMPL_HH

#include "efl_ui_radio_group.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<int>::type Radio_Group::selected_value_get() const
{
    int __return_value =  ::efl_ui_radio_group_selected_value_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Radio_Group::selected_value_set( ::efl::eolian::in_traits<int>::type selected_value) const
{
     ::efl_ui_radio_group_selected_value_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(selected_value));
}
inline ::efl::eolian::return_traits<void>::type Radio_Group::cxx_register( ::efl::eolian::in_traits< ::efl::ui::Radio>::type radio) const
{
     ::efl_ui_radio_group_register(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Radio*,  ::efl::eolian::in_traits< ::efl::ui::Radio>::type>(radio));
}
inline ::efl::eolian::return_traits<void>::type Radio_Group::unregister( ::efl::eolian::in_traits< ::efl::ui::Radio>::type radio) const
{
     ::efl_ui_radio_group_unregister(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Radio*,  ::efl::eolian::in_traits< ::efl::ui::Radio>::type>(radio));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<int>::type Radio_Group::selected_value_get() const
{
    int __return_value =  ::efl_ui_radio_group_selected_value_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Radio_Group::selected_value_set( ::efl::eolian::in_traits<int>::type selected_value) const
{
     ::efl_ui_radio_group_selected_value_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(selected_value));
}
inline ::efl::eolian::return_traits<void>::type Radio_Group::cxx_register( ::efl::eolian::in_traits< ::efl::ui::Radio>::type radio) const
{
     ::efl_ui_radio_group_register(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Radio*,  ::efl::eolian::in_traits< ::efl::ui::Radio>::type>(radio));
}
inline ::efl::eolian::return_traits<void>::type Radio_Group::unregister( ::efl::eolian::in_traits< ::efl::ui::Radio>::type radio) const
{
     ::efl_ui_radio_group_unregister(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Radio*,  ::efl::eolian::in_traits< ::efl::ui::Radio>::type>(radio));
}
inline efl::ui::Radio_Group::operator ::efl::ui::Radio_Group() const { return *static_cast< ::efl::ui::Radio_Group const*>(static_cast<void const*>(this)); }
inline efl::ui::Radio_Group::operator ::efl::ui::Radio_Group&() { return *static_cast< ::efl::ui::Radio_Group*>(static_cast<void*>(this)); }
inline efl::ui::Radio_Group::operator ::efl::ui::Radio_Group const&() const { return *static_cast< ::efl::ui::Radio_Group const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
