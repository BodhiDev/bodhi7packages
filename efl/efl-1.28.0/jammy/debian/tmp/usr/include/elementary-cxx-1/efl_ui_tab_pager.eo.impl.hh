#ifndef EFL_UI_TAB_PAGER_IMPL_HH
#define EFL_UI_TAB_PAGER_IMPL_HH

#include "efl_ui_tab_pager.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::Tab_Bar>::type Tab_Pager::tab_bar_get() const
{
     ::Efl_Ui_Tab_Bar* __return_value =  ::efl_ui_tab_pager_tab_bar_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Tab_Bar>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Tab_Pager::spotlight_manager_set( ::efl::eolian::in_traits< ::efl::ui::spotlight::Manager>::type manager) const
{
     ::efl_ui_tab_pager_spotlight_manager_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Spotlight_Manager*,  ::efl::eolian::in_traits< ::efl::ui::spotlight::Manager>::type, true>(manager));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::Tab_Bar>::type Tab_Pager::tab_bar_get() const
{
     ::Efl_Ui_Tab_Bar* __return_value =  ::efl_ui_tab_pager_tab_bar_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Tab_Bar>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Tab_Pager::spotlight_manager_set( ::efl::eolian::in_traits< ::efl::ui::spotlight::Manager>::type manager) const
{
     ::efl_ui_tab_pager_spotlight_manager_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Spotlight_Manager*,  ::efl::eolian::in_traits< ::efl::ui::spotlight::Manager>::type, true>(manager));
}
#endif
inline efl::ui::Tab_Pager::operator ::efl::ui::Tab_Pager() const { return *static_cast< ::efl::ui::Tab_Pager const*>(static_cast<void const*>(this)); }
inline efl::ui::Tab_Pager::operator ::efl::ui::Tab_Pager&() { return *static_cast< ::efl::ui::Tab_Pager*>(static_cast<void*>(this)); }
inline efl::ui::Tab_Pager::operator ::efl::ui::Tab_Pager const&() const { return *static_cast< ::efl::ui::Tab_Pager const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
