#ifndef EFL_UI_SELECTABLE_IMPL_HH
#define EFL_UI_SELECTABLE_IMPL_HH

#include "efl_ui_selectable.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<bool>::type Selectable::selected_get() const
{
    Eina_Bool __return_value =  ::efl_ui_selectable_selected_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Selectable::selected_set( ::efl::eolian::in_traits<bool>::type selected) const
{
     ::efl_ui_selectable_selected_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(selected));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<bool>::type Selectable::selected_get() const
{
    Eina_Bool __return_value =  ::efl_ui_selectable_selected_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Selectable::selected_set( ::efl::eolian::in_traits<bool>::type selected) const
{
     ::efl_ui_selectable_selected_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(selected));
}
inline efl::ui::Selectable::operator ::efl::ui::Selectable() const { return *static_cast< ::efl::ui::Selectable const*>(static_cast<void const*>(this)); }
inline efl::ui::Selectable::operator ::efl::ui::Selectable&() { return *static_cast< ::efl::ui::Selectable*>(static_cast<void*>(this)); }
inline efl::ui::Selectable::operator ::efl::ui::Selectable const&() const { return *static_cast< ::efl::ui::Selectable const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
