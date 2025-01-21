#ifndef EFL_UI_RANGE_DISPLAY_IMPL_HH
#define EFL_UI_RANGE_DISPLAY_IMPL_HH

#include "efl_ui_range_display.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<double>::type Range_Display::range_value_get() const
{
    double __return_value =  ::efl_ui_range_value_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Range_Display::range_value_set( ::efl::eolian::in_traits<double>::type val) const
{
     ::efl_ui_range_value_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(val));
}
inline ::efl::eolian::return_traits<void>::type Range_Display::range_limits_get( ::efl::eolian::out_traits<double>::type min,  ::efl::eolian::out_traits<double>::type max) const
{
    double __out_param_min = {};
    double __out_param_max = {};
     ::efl_ui_range_limits_get(_eo_ptr(),
        & __out_param_min,
        & __out_param_max);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(min, __out_param_min);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(max, __out_param_max);
}
inline ::efl::eolian::return_traits<void>::type Range_Display::range_limits_set( ::efl::eolian::in_traits<double>::type min,  ::efl::eolian::in_traits<double>::type max) const
{
     ::efl_ui_range_limits_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(min),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(max));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<double>::type Range_Display::range_value_get() const
{
    double __return_value =  ::efl_ui_range_value_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Range_Display::range_value_set( ::efl::eolian::in_traits<double>::type val) const
{
     ::efl_ui_range_value_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(val));
}
inline ::efl::eolian::return_traits<void>::type Range_Display::range_limits_get( ::efl::eolian::out_traits<double>::type min,  ::efl::eolian::out_traits<double>::type max) const
{
    double __out_param_min = {};
    double __out_param_max = {};
     ::efl_ui_range_limits_get(_eo_ptr(),
        & __out_param_min,
        & __out_param_max);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(min, __out_param_min);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(max, __out_param_max);
}
inline ::efl::eolian::return_traits<void>::type Range_Display::range_limits_set( ::efl::eolian::in_traits<double>::type min,  ::efl::eolian::in_traits<double>::type max) const
{
     ::efl_ui_range_limits_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(min),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(max));
}
inline efl::ui::Range_Display::operator ::efl::ui::Range_Display() const { return *static_cast< ::efl::ui::Range_Display const*>(static_cast<void const*>(this)); }
inline efl::ui::Range_Display::operator ::efl::ui::Range_Display&() { return *static_cast< ::efl::ui::Range_Display*>(static_cast<void*>(this)); }
inline efl::ui::Range_Display::operator ::efl::ui::Range_Display const&() const { return *static_cast< ::efl::ui::Range_Display const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
