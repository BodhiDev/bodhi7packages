#ifndef EFL_UI_FOCUS_MANAGER_CALC_IMPL_HH
#define EFL_UI_FOCUS_MANAGER_CALC_IMPL_HH

#include "efl_ui_focus_manager_calc.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { namespace focus { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Manager_Calc::cxx_register( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type parent,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type redirect) const
{
    Eina_Bool __return_value =  ::efl_ui_focus_manager_calc_register(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(child),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(parent),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Manager*,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type>(redirect));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Manager_Calc::register_logical( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type parent,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type redirect) const
{
    Eina_Bool __return_value =  ::efl_ui_focus_manager_calc_register_logical(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(child),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(parent),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Manager*,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type>(redirect));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Manager_Calc::update_redirect( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type redirect) const
{
    Eina_Bool __return_value =  ::efl_ui_focus_manager_calc_update_redirect(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(child),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Manager*,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type>(redirect));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Manager_Calc::update_parent( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type parent) const
{
    Eina_Bool __return_value =  ::efl_ui_focus_manager_calc_update_parent(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(child),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(parent));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Manager_Calc::unregister( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child) const
{
     ::efl_ui_focus_manager_calc_unregister(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(child));
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace ui { namespace focus { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Manager_Calc::cxx_register( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type parent,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type redirect) const
{
    Eina_Bool __return_value =  ::efl_ui_focus_manager_calc_register(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(child),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(parent),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Manager*,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type>(redirect));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Manager_Calc::register_logical( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type parent,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type redirect) const
{
    Eina_Bool __return_value =  ::efl_ui_focus_manager_calc_register_logical(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(child),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(parent),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Manager*,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type>(redirect));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Manager_Calc::update_redirect( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type redirect) const
{
    Eina_Bool __return_value =  ::efl_ui_focus_manager_calc_update_redirect(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(child),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Manager*,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type>(redirect));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Manager_Calc::update_parent( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type parent) const
{
    Eina_Bool __return_value =  ::efl_ui_focus_manager_calc_update_parent(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(child),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(parent));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Manager_Calc::unregister( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child) const
{
     ::efl_ui_focus_manager_calc_unregister(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(child));
}
#endif
inline efl::ui::focus::Manager_Calc::operator ::efl::ui::focus::Manager_Calc() const { return *static_cast< ::efl::ui::focus::Manager_Calc const*>(static_cast<void const*>(this)); }
inline efl::ui::focus::Manager_Calc::operator ::efl::ui::focus::Manager_Calc&() { return *static_cast< ::efl::ui::focus::Manager_Calc*>(static_cast<void*>(this)); }
inline efl::ui::focus::Manager_Calc::operator ::efl::ui::focus::Manager_Calc const&() const { return *static_cast< ::efl::ui::focus::Manager_Calc const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
