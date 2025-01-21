#ifndef EFL_UI_MULTI_SELECTABLE_OBJECT_RANGE_IMPL_HH
#define EFL_UI_MULTI_SELECTABLE_OBJECT_RANGE_IMPL_HH

#include "efl_ui_multi_selectable_object_range.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::ui::Selectable>>::type Multi_Selectable_Object_Range::selected_iterator_new() const
{
    Eina_Iterator * __return_value =  ::efl_ui_multi_selectable_selected_iterator_new(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::ui::Selectable>>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Multi_Selectable_Object_Range::range_select( ::efl::eolian::in_traits< ::efl::ui::Selectable>::type a,  ::efl::eolian::in_traits< ::efl::ui::Selectable>::type b) const
{
     ::efl_ui_multi_selectable_range_select(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Selectable*,  ::efl::eolian::in_traits< ::efl::ui::Selectable>::type>(a),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Selectable*,  ::efl::eolian::in_traits< ::efl::ui::Selectable>::type>(b));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Multi_Selectable_Object_Range::range_unselect( ::efl::eolian::in_traits< ::efl::ui::Selectable>::type a,  ::efl::eolian::in_traits< ::efl::ui::Selectable>::type b) const
{
     ::efl_ui_multi_selectable_range_unselect(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Selectable*,  ::efl::eolian::in_traits< ::efl::ui::Selectable>::type>(a),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Selectable*,  ::efl::eolian::in_traits< ::efl::ui::Selectable>::type>(b));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::ui::Selectable>>::type Multi_Selectable_Object_Range::selected_iterator_new() const
{
    Eina_Iterator * __return_value =  ::efl_ui_multi_selectable_selected_iterator_new(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::ui::Selectable>>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Multi_Selectable_Object_Range::range_select( ::efl::eolian::in_traits< ::efl::ui::Selectable>::type a,  ::efl::eolian::in_traits< ::efl::ui::Selectable>::type b) const
{
     ::efl_ui_multi_selectable_range_select(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Selectable*,  ::efl::eolian::in_traits< ::efl::ui::Selectable>::type>(a),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Selectable*,  ::efl::eolian::in_traits< ::efl::ui::Selectable>::type>(b));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Multi_Selectable_Object_Range::range_unselect( ::efl::eolian::in_traits< ::efl::ui::Selectable>::type a,  ::efl::eolian::in_traits< ::efl::ui::Selectable>::type b) const
{
     ::efl_ui_multi_selectable_range_unselect(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Selectable*,  ::efl::eolian::in_traits< ::efl::ui::Selectable>::type>(a),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Selectable*,  ::efl::eolian::in_traits< ::efl::ui::Selectable>::type>(b));
}
#endif
inline efl::ui::Multi_Selectable_Object_Range::operator ::efl::ui::Multi_Selectable_Object_Range() const { return *static_cast< ::efl::ui::Multi_Selectable_Object_Range const*>(static_cast<void const*>(this)); }
inline efl::ui::Multi_Selectable_Object_Range::operator ::efl::ui::Multi_Selectable_Object_Range&() { return *static_cast< ::efl::ui::Multi_Selectable_Object_Range*>(static_cast<void*>(this)); }
inline efl::ui::Multi_Selectable_Object_Range::operator ::efl::ui::Multi_Selectable_Object_Range const&() const { return *static_cast< ::efl::ui::Multi_Selectable_Object_Range const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
