#ifndef EFL_UI_SINGLE_SELECTABLE_IMPL_HH
#define EFL_UI_SINGLE_SELECTABLE_IMPL_HH

#include "efl_ui_single_selectable.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits< ::efl::ui::Selectable>::type Single_Selectable::last_selected_get() const
{
     ::Efl_Ui_Selectable* __return_value =  ::efl_ui_selectable_last_selected_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Selectable>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::ui::Selectable>::type Single_Selectable::fallback_selection_get() const
{
     ::Efl_Ui_Selectable* __return_value =  ::efl_ui_selectable_fallback_selection_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Selectable>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Single_Selectable::fallback_selection_set( ::efl::eolian::in_traits< ::efl::ui::Selectable>::type fallback) const
{
     ::efl_ui_selectable_fallback_selection_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Selectable*,  ::efl::eolian::in_traits< ::efl::ui::Selectable>::type>(fallback));
}
inline ::efl::eolian::return_traits<bool>::type Single_Selectable::allow_manual_deselection_get() const
{
    Eina_Bool __return_value =  ::efl_ui_selectable_allow_manual_deselection_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Single_Selectable::allow_manual_deselection_set( ::efl::eolian::in_traits<bool>::type allow_manual_deselection) const
{
     ::efl_ui_selectable_allow_manual_deselection_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(allow_manual_deselection));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits< ::efl::ui::Selectable>::type Single_Selectable::last_selected_get() const
{
     ::Efl_Ui_Selectable* __return_value =  ::efl_ui_selectable_last_selected_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Selectable>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::ui::Selectable>::type Single_Selectable::fallback_selection_get() const
{
     ::Efl_Ui_Selectable* __return_value =  ::efl_ui_selectable_fallback_selection_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Selectable>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Single_Selectable::fallback_selection_set( ::efl::eolian::in_traits< ::efl::ui::Selectable>::type fallback) const
{
     ::efl_ui_selectable_fallback_selection_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Selectable*,  ::efl::eolian::in_traits< ::efl::ui::Selectable>::type>(fallback));
}
inline ::efl::eolian::return_traits<bool>::type Single_Selectable::allow_manual_deselection_get() const
{
    Eina_Bool __return_value =  ::efl_ui_selectable_allow_manual_deselection_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Single_Selectable::allow_manual_deselection_set( ::efl::eolian::in_traits<bool>::type allow_manual_deselection) const
{
     ::efl_ui_selectable_allow_manual_deselection_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(allow_manual_deselection));
}
inline efl::ui::Single_Selectable::operator ::efl::ui::Single_Selectable() const { return *static_cast< ::efl::ui::Single_Selectable const*>(static_cast<void const*>(this)); }
inline efl::ui::Single_Selectable::operator ::efl::ui::Single_Selectable&() { return *static_cast< ::efl::ui::Single_Selectable*>(static_cast<void*>(this)); }
inline efl::ui::Single_Selectable::operator ::efl::ui::Single_Selectable const&() const { return *static_cast< ::efl::ui::Single_Selectable const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
