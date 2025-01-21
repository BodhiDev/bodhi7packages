#ifndef EFL_UI_LAYOUT_ORIENTABLE_IMPL_HH
#define EFL_UI_LAYOUT_ORIENTABLE_IMPL_HH

#include "efl_ui_layout_orientable.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<Efl_Ui_Layout_Orientation>::type Layout_Orientable::orientation_get() const
{
    Efl_Ui_Layout_Orientation __return_value =  ::efl_ui_layout_orientation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Layout_Orientation>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Layout_Orientable::orientation_set( ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type dir) const
{
     ::efl_ui_layout_orientation_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Layout_Orientation,  ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type>(dir));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<Efl_Ui_Layout_Orientation>::type Layout_Orientable::orientation_get() const
{
    Efl_Ui_Layout_Orientation __return_value =  ::efl_ui_layout_orientation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Layout_Orientation>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Layout_Orientable::orientation_set( ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type dir) const
{
     ::efl_ui_layout_orientation_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Layout_Orientation,  ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type>(dir));
}
inline efl::ui::Layout_Orientable::operator ::efl::ui::Layout_Orientable() const { return *static_cast< ::efl::ui::Layout_Orientable const*>(static_cast<void const*>(this)); }
inline efl::ui::Layout_Orientable::operator ::efl::ui::Layout_Orientable&() { return *static_cast< ::efl::ui::Layout_Orientable*>(static_cast<void*>(this)); }
inline efl::ui::Layout_Orientable::operator ::efl::ui::Layout_Orientable const&() const { return *static_cast< ::efl::ui::Layout_Orientable const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
