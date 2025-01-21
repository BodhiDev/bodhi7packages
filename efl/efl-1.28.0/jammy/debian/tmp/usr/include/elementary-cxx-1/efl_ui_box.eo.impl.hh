#ifndef EFL_UI_BOX_IMPL_HH
#define EFL_UI_BOX_IMPL_HH

#include "efl_ui_box.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<bool>::type Box::homogeneous_get() const
{
    Eina_Bool __return_value =  ::efl_ui_box_homogeneous_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Box::homogeneous_set( ::efl::eolian::in_traits<bool>::type homogeneous) const
{
     ::efl_ui_box_homogeneous_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(homogeneous));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<bool>::type Box::homogeneous_get() const
{
    Eina_Bool __return_value =  ::efl_ui_box_homogeneous_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Box::homogeneous_set( ::efl::eolian::in_traits<bool>::type homogeneous) const
{
     ::efl_ui_box_homogeneous_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(homogeneous));
}
inline efl::ui::Box::operator ::efl::ui::Box() const { return *static_cast< ::efl::ui::Box const*>(static_cast<void const*>(this)); }
inline efl::ui::Box::operator ::efl::ui::Box&() { return *static_cast< ::efl::ui::Box*>(static_cast<void*>(this)); }
inline efl::ui::Box::operator ::efl::ui::Box const&() const { return *static_cast< ::efl::ui::Box const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
