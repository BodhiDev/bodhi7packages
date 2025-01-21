#ifndef EFL_UI_SCROLL_MANAGER_IMPL_HH
#define EFL_UI_SCROLL_MANAGER_IMPL_HH

#include "efl_ui_scroll_manager.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { namespace scroll { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_SCROLL_MANAGER_PROTECTED
inline ::efl::eolian::return_traits<void>::type Manager::pan_set( ::efl::eolian::in_traits< ::efl::ui::Pan>::type pan) const
{
     ::efl_ui_scroll_manager_pan_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Pan*,  ::efl::eolian::in_traits< ::efl::ui::Pan>::type>(pan));
}
#endif
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace ui { namespace scroll { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_SCROLL_MANAGER_PROTECTED
inline ::efl::eolian::return_traits<void>::type Manager::pan_set( ::efl::eolian::in_traits< ::efl::ui::Pan>::type pan) const
{
     ::efl_ui_scroll_manager_pan_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Pan*,  ::efl::eolian::in_traits< ::efl::ui::Pan>::type>(pan));
}
#endif
#endif
inline efl::ui::scroll::Manager::operator ::efl::ui::scroll::Manager() const { return *static_cast< ::efl::ui::scroll::Manager const*>(static_cast<void const*>(this)); }
inline efl::ui::scroll::Manager::operator ::efl::ui::scroll::Manager&() { return *static_cast< ::efl::ui::scroll::Manager*>(static_cast<void*>(this)); }
inline efl::ui::scroll::Manager::operator ::efl::ui::scroll::Manager const&() const { return *static_cast< ::efl::ui::scroll::Manager const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
