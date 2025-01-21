#ifndef EFL_UI_PANEL_IMPL_HH
#define EFL_UI_PANEL_IMPL_HH

#include "efl_ui_panel.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Panel_Orient>::type Panel::orient_get() const
{
    Efl_Ui_Panel_Orient __return_value =  ::efl_ui_panel_orient_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Panel_Orient>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Panel::orient_set( ::efl::eolian::in_traits<Efl_Ui_Panel_Orient>::type orient) const
{
     ::efl_ui_panel_orient_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Panel_Orient,  ::efl::eolian::in_traits<Efl_Ui_Panel_Orient>::type>(orient));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Panel::hidden_get() const
{
    Eina_Bool __return_value =  ::efl_ui_panel_hidden_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Panel::hidden_set( ::efl::eolian::in_traits<bool>::type hidden) const
{
     ::efl_ui_panel_hidden_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(hidden));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Panel::scrollable_get() const
{
    Eina_Bool __return_value =  ::efl_ui_panel_scrollable_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Panel::scrollable_set( ::efl::eolian::in_traits<bool>::type scrollable) const
{
     ::efl_ui_panel_scrollable_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(scrollable));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Panel::scrollable_content_size_get() const
{
    double __return_value =  ::efl_ui_panel_scrollable_content_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Panel::scrollable_content_size_set( ::efl::eolian::in_traits<double>::type ratio) const
{
     ::efl_ui_panel_scrollable_content_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ratio));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Panel::toggle() const
{
     ::efl_ui_panel_toggle(_eo_ptr());
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Panel_Orient>::type Panel::orient_get() const
{
    Efl_Ui_Panel_Orient __return_value =  ::efl_ui_panel_orient_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Panel_Orient>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Panel::orient_set( ::efl::eolian::in_traits<Efl_Ui_Panel_Orient>::type orient) const
{
     ::efl_ui_panel_orient_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Panel_Orient,  ::efl::eolian::in_traits<Efl_Ui_Panel_Orient>::type>(orient));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Panel::hidden_get() const
{
    Eina_Bool __return_value =  ::efl_ui_panel_hidden_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Panel::hidden_set( ::efl::eolian::in_traits<bool>::type hidden) const
{
     ::efl_ui_panel_hidden_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(hidden));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Panel::scrollable_get() const
{
    Eina_Bool __return_value =  ::efl_ui_panel_scrollable_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Panel::scrollable_set( ::efl::eolian::in_traits<bool>::type scrollable) const
{
     ::efl_ui_panel_scrollable_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(scrollable));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Panel::scrollable_content_size_get() const
{
    double __return_value =  ::efl_ui_panel_scrollable_content_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Panel::scrollable_content_size_set( ::efl::eolian::in_traits<double>::type ratio) const
{
     ::efl_ui_panel_scrollable_content_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ratio));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Panel::toggle() const
{
     ::efl_ui_panel_toggle(_eo_ptr());
}
#endif
inline efl::ui::Panel::operator ::efl::ui::Panel() const { return *static_cast< ::efl::ui::Panel const*>(static_cast<void const*>(this)); }
inline efl::ui::Panel::operator ::efl::ui::Panel&() { return *static_cast< ::efl::ui::Panel*>(static_cast<void*>(this)); }
inline efl::ui::Panel::operator ::efl::ui::Panel const&() const { return *static_cast< ::efl::ui::Panel const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
