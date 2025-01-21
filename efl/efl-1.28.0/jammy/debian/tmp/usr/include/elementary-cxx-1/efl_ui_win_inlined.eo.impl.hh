#ifndef EFL_UI_WIN_INLINED_IMPL_HH
#define EFL_UI_WIN_INLINED_IMPL_HH

#include "efl_ui_win_inlined.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Win_Inlined::inlined_parent_get() const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_ui_win_inlined_parent_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Win_Inlined::inlined_parent_get() const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_ui_win_inlined_parent_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
#endif
inline efl::ui::Win_Inlined::operator ::efl::ui::Win_Inlined() const { return *static_cast< ::efl::ui::Win_Inlined const*>(static_cast<void const*>(this)); }
inline efl::ui::Win_Inlined::operator ::efl::ui::Win_Inlined&() { return *static_cast< ::efl::ui::Win_Inlined*>(static_cast<void*>(this)); }
inline efl::ui::Win_Inlined::operator ::efl::ui::Win_Inlined const&() const { return *static_cast< ::efl::ui::Win_Inlined const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
