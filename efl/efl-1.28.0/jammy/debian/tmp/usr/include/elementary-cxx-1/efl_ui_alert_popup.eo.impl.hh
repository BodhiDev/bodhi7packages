#ifndef EFL_UI_ALERT_POPUP_IMPL_HH
#define EFL_UI_ALERT_POPUP_IMPL_HH

#include "efl_ui_alert_popup.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<void>::type Alert_Popup::button_set( ::efl::eolian::in_traits<Efl_Ui_Alert_Popup_Button>::type type,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type text,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type icon) const
{
     ::efl_ui_alert_popup_button_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Alert_Popup_Button,  ::efl::eolian::in_traits<Efl_Ui_Alert_Popup_Button>::type>(type),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(icon));
}
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Alert_Popup_Part_Title>::type Alert_Popup::title() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "title");
    return ::efl::ui::Alert_Popup_Part_Title{__return_value};
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<void>::type Alert_Popup::button_set( ::efl::eolian::in_traits<Efl_Ui_Alert_Popup_Button>::type type,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type text,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type icon) const
{
     ::efl_ui_alert_popup_button_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Alert_Popup_Button,  ::efl::eolian::in_traits<Efl_Ui_Alert_Popup_Button>::type>(type),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(icon));
}
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Alert_Popup_Part_Title>::type Alert_Popup::title() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "title");
    return ::efl::ui::Alert_Popup_Part_Title{__return_value};
}
#endif
inline efl::ui::Alert_Popup::operator ::efl::ui::Alert_Popup() const { return *static_cast< ::efl::ui::Alert_Popup const*>(static_cast<void const*>(this)); }
inline efl::ui::Alert_Popup::operator ::efl::ui::Alert_Popup&() { return *static_cast< ::efl::ui::Alert_Popup*>(static_cast<void*>(this)); }
inline efl::ui::Alert_Popup::operator ::efl::ui::Alert_Popup const&() const { return *static_cast< ::efl::ui::Alert_Popup const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
