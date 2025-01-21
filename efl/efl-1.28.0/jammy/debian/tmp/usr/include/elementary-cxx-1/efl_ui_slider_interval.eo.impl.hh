#ifndef EFL_UI_SLIDER_INTERVAL_IMPL_HH
#define EFL_UI_SLIDER_INTERVAL_IMPL_HH

#include "efl_ui_slider_interval.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Slider_Interval::interval_value_get( ::efl::eolian::out_traits<double>::type from,  ::efl::eolian::out_traits<double>::type to) const
{
    double __out_param_from = {};
    double __out_param_to = {};
     ::efl_ui_slider_interval_value_get(_eo_ptr(),
        & __out_param_from,
        & __out_param_to);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(from, __out_param_from);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(to, __out_param_to);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Slider_Interval::interval_value_set( ::efl::eolian::in_traits<double>::type from,  ::efl::eolian::in_traits<double>::type to) const
{
     ::efl_ui_slider_interval_value_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(from),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(to));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Slider_Interval::interval_value_get( ::efl::eolian::out_traits<double>::type from,  ::efl::eolian::out_traits<double>::type to) const
{
    double __out_param_from = {};
    double __out_param_to = {};
     ::efl_ui_slider_interval_value_get(_eo_ptr(),
        & __out_param_from,
        & __out_param_to);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(from, __out_param_from);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(to, __out_param_to);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Slider_Interval::interval_value_set( ::efl::eolian::in_traits<double>::type from,  ::efl::eolian::in_traits<double>::type to) const
{
     ::efl_ui_slider_interval_value_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(from),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(to));
}
#endif
inline efl::ui::Slider_Interval::operator ::efl::ui::Slider_Interval() const { return *static_cast< ::efl::ui::Slider_Interval const*>(static_cast<void const*>(this)); }
inline efl::ui::Slider_Interval::operator ::efl::ui::Slider_Interval&() { return *static_cast< ::efl::ui::Slider_Interval*>(static_cast<void*>(this)); }
inline efl::ui::Slider_Interval::operator ::efl::ui::Slider_Interval const&() const { return *static_cast< ::efl::ui::Slider_Interval const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
