#ifndef EFL_UI_WIDGET_FOCUS_MANAGER_IMPL_HH
#define EFL_UI_WIDGET_FOCUS_MANAGER_IMPL_HH

#include "efl_ui_widget_focus_manager.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_UI_WIDGET_FOCUS_MANAGER_PROTECTED
inline ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type Widget_Focus_Manager::focus_manager_create( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type root) const
{
     ::Efl_Ui_Focus_Manager* __return_value =  ::efl_ui_widget_focus_manager_create(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(root));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_UI_WIDGET_FOCUS_MANAGER_PROTECTED
inline ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type Widget_Focus_Manager::focus_manager_create( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type root) const
{
     ::Efl_Ui_Focus_Manager* __return_value =  ::efl_ui_widget_focus_manager_create(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(root));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type>(__return_value);
}
#endif
inline efl::ui::Widget_Focus_Manager::operator ::efl::ui::Widget_Focus_Manager() const { return *static_cast< ::efl::ui::Widget_Focus_Manager const*>(static_cast<void const*>(this)); }
inline efl::ui::Widget_Focus_Manager::operator ::efl::ui::Widget_Focus_Manager&() { return *static_cast< ::efl::ui::Widget_Focus_Manager*>(static_cast<void*>(this)); }
inline efl::ui::Widget_Focus_Manager::operator ::efl::ui::Widget_Focus_Manager const&() const { return *static_cast< ::efl::ui::Widget_Focus_Manager const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
