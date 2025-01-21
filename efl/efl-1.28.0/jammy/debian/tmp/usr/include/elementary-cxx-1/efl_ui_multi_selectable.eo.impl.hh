#ifndef EFL_UI_MULTI_SELECTABLE_IMPL_HH
#define EFL_UI_MULTI_SELECTABLE_IMPL_HH

#include "efl_ui_multi_selectable.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<Efl_Ui_Select_Mode>::type Multi_Selectable::select_mode_get() const
{
    Efl_Ui_Select_Mode __return_value =  ::efl_ui_multi_selectable_select_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Select_Mode>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Multi_Selectable::select_mode_set( ::efl::eolian::in_traits<Efl_Ui_Select_Mode>::type mode) const
{
     ::efl_ui_multi_selectable_select_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Select_Mode,  ::efl::eolian::in_traits<Efl_Ui_Select_Mode>::type>(mode));
}
inline ::efl::eolian::return_traits<void>::type Multi_Selectable::all_select() const
{
     ::efl_ui_multi_selectable_all_select(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Multi_Selectable::all_unselect() const
{
     ::efl_ui_multi_selectable_all_unselect(_eo_ptr());
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<Efl_Ui_Select_Mode>::type Multi_Selectable::select_mode_get() const
{
    Efl_Ui_Select_Mode __return_value =  ::efl_ui_multi_selectable_select_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Select_Mode>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Multi_Selectable::select_mode_set( ::efl::eolian::in_traits<Efl_Ui_Select_Mode>::type mode) const
{
     ::efl_ui_multi_selectable_select_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Select_Mode,  ::efl::eolian::in_traits<Efl_Ui_Select_Mode>::type>(mode));
}
inline ::efl::eolian::return_traits<void>::type Multi_Selectable::all_select() const
{
     ::efl_ui_multi_selectable_all_select(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Multi_Selectable::all_unselect() const
{
     ::efl_ui_multi_selectable_all_unselect(_eo_ptr());
}
inline efl::ui::Multi_Selectable::operator ::efl::ui::Multi_Selectable() const { return *static_cast< ::efl::ui::Multi_Selectable const*>(static_cast<void const*>(this)); }
inline efl::ui::Multi_Selectable::operator ::efl::ui::Multi_Selectable&() { return *static_cast< ::efl::ui::Multi_Selectable*>(static_cast<void*>(this)); }
inline efl::ui::Multi_Selectable::operator ::efl::ui::Multi_Selectable const&() const { return *static_cast< ::efl::ui::Multi_Selectable const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
