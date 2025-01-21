#ifndef EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_IMPL_HH
#define EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_IMPL_HH

#include "efl_ui_focus_manager_root_focus.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { namespace focus { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Manager_Root_Focus::canvas_object_get() const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_ui_focus_manager_root_focus_canvas_object_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Manager_Root_Focus::canvas_object_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type canvas_object) const
{
     ::efl_ui_focus_manager_root_focus_canvas_object_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(canvas_object));
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace ui { namespace focus { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Manager_Root_Focus::canvas_object_get() const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_ui_focus_manager_root_focus_canvas_object_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Manager_Root_Focus::canvas_object_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type canvas_object) const
{
     ::efl_ui_focus_manager_root_focus_canvas_object_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(canvas_object));
}
#endif
inline efl::ui::focus::Manager_Root_Focus::operator ::efl::ui::focus::Manager_Root_Focus() const { return *static_cast< ::efl::ui::focus::Manager_Root_Focus const*>(static_cast<void const*>(this)); }
inline efl::ui::focus::Manager_Root_Focus::operator ::efl::ui::focus::Manager_Root_Focus&() { return *static_cast< ::efl::ui::focus::Manager_Root_Focus*>(static_cast<void*>(this)); }
inline efl::ui::focus::Manager_Root_Focus::operator ::efl::ui::focus::Manager_Root_Focus const&() const { return *static_cast< ::efl::ui::focus::Manager_Root_Focus const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
