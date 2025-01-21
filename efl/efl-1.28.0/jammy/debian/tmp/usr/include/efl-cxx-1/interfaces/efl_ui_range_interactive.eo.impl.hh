#ifndef EFL_UI_RANGE_INTERACTIVE_IMPL_HH
#define EFL_UI_RANGE_INTERACTIVE_IMPL_HH

#include "efl_ui_range_interactive.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<double>::type Range_Interactive::range_step_get() const
{
    double __return_value =  ::efl_ui_range_step_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Range_Interactive::range_step_set( ::efl::eolian::in_traits<double>::type step) const
{
     ::efl_ui_range_step_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(step));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<double>::type Range_Interactive::range_step_get() const
{
    double __return_value =  ::efl_ui_range_step_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Range_Interactive::range_step_set( ::efl::eolian::in_traits<double>::type step) const
{
     ::efl_ui_range_step_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(step));
}
inline efl::ui::Range_Interactive::operator ::efl::ui::Range_Interactive() const { return *static_cast< ::efl::ui::Range_Interactive const*>(static_cast<void const*>(this)); }
inline efl::ui::Range_Interactive::operator ::efl::ui::Range_Interactive&() { return *static_cast< ::efl::ui::Range_Interactive*>(static_cast<void*>(this)); }
inline efl::ui::Range_Interactive::operator ::efl::ui::Range_Interactive const&() const { return *static_cast< ::efl::ui::Range_Interactive const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
