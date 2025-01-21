#ifndef EFL_UI_DRAGGABLE_IMPL_HH
#define EFL_UI_DRAGGABLE_IMPL_HH

#include "efl_ui_draggable.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Draggable::drag_target_get() const
{
    Eina_Bool __return_value =  ::efl_ui_draggable_drag_target_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Draggable::drag_target_set( ::efl::eolian::in_traits<bool>::type set) const
{
     ::efl_ui_draggable_drag_target_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(set));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Draggable::drag_target_get() const
{
    Eina_Bool __return_value =  ::efl_ui_draggable_drag_target_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Draggable::drag_target_set( ::efl::eolian::in_traits<bool>::type set) const
{
     ::efl_ui_draggable_drag_target_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(set));
}
#endif
inline efl::ui::Draggable::operator ::efl::ui::Draggable() const { return *static_cast< ::efl::ui::Draggable const*>(static_cast<void const*>(this)); }
inline efl::ui::Draggable::operator ::efl::ui::Draggable&() { return *static_cast< ::efl::ui::Draggable*>(static_cast<void*>(this)); }
inline efl::ui::Draggable::operator ::efl::ui::Draggable const&() const { return *static_cast< ::efl::ui::Draggable const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
