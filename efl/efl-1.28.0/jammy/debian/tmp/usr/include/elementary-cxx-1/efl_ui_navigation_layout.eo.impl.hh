#ifndef EFL_UI_NAVIGATION_LAYOUT_IMPL_HH
#define EFL_UI_NAVIGATION_LAYOUT_IMPL_HH

#include "efl_ui_navigation_layout.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::Layout_Base>::type Navigation_Layout::bar_get() const
{
     ::Efl_Ui_Layout_Base* __return_value =  ::efl_ui_navigation_layout_bar_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Layout_Base>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Navigation_Layout::bar_set( ::efl::eolian::in_traits< ::efl::ui::Layout_Base>::type value) const
{
     ::efl_ui_navigation_layout_bar_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Layout_Base*,  ::efl::eolian::in_traits< ::efl::ui::Layout_Base>::type>(value));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::Layout_Base>::type Navigation_Layout::bar_get() const
{
     ::Efl_Ui_Layout_Base* __return_value =  ::efl_ui_navigation_layout_bar_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Layout_Base>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Navigation_Layout::bar_set( ::efl::eolian::in_traits< ::efl::ui::Layout_Base>::type value) const
{
     ::efl_ui_navigation_layout_bar_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Layout_Base*,  ::efl::eolian::in_traits< ::efl::ui::Layout_Base>::type>(value));
}
#endif
inline efl::ui::Navigation_Layout::operator ::efl::ui::Navigation_Layout() const { return *static_cast< ::efl::ui::Navigation_Layout const*>(static_cast<void const*>(this)); }
inline efl::ui::Navigation_Layout::operator ::efl::ui::Navigation_Layout&() { return *static_cast< ::efl::ui::Navigation_Layout*>(static_cast<void*>(this)); }
inline efl::ui::Navigation_Layout::operator ::efl::ui::Navigation_Layout const&() const { return *static_cast< ::efl::ui::Navigation_Layout const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
