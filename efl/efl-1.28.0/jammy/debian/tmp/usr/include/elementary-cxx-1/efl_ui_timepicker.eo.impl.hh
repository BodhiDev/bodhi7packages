#ifndef EFL_UI_TIMEPICKER_IMPL_HH
#define EFL_UI_TIMEPICKER_IMPL_HH

#include "efl_ui_timepicker.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<void>::type Timepicker::time_get( ::efl::eolian::out_traits<int>::type hour,  ::efl::eolian::out_traits<int>::type min) const
{
    int __out_param_hour = {};
    int __out_param_min = {};
     ::efl_ui_timepicker_time_get(_eo_ptr(),
        & __out_param_hour,
        & __out_param_min);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(hour, __out_param_hour);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(min, __out_param_min);
}
inline ::efl::eolian::return_traits<void>::type Timepicker::time_set( ::efl::eolian::in_traits<int>::type hour,  ::efl::eolian::in_traits<int>::type min) const
{
     ::efl_ui_timepicker_time_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(hour),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(min));
}
inline ::efl::eolian::return_traits<bool>::type Timepicker::is_24hour_get() const
{
    Eina_Bool __return_value =  ::efl_ui_timepicker_is_24hour_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Timepicker::is_24hour_set( ::efl::eolian::in_traits<bool>::type is_24hour) const
{
     ::efl_ui_timepicker_is_24hour_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(is_24hour));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<void>::type Timepicker::time_get( ::efl::eolian::out_traits<int>::type hour,  ::efl::eolian::out_traits<int>::type min) const
{
    int __out_param_hour = {};
    int __out_param_min = {};
     ::efl_ui_timepicker_time_get(_eo_ptr(),
        & __out_param_hour,
        & __out_param_min);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(hour, __out_param_hour);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(min, __out_param_min);
}
inline ::efl::eolian::return_traits<void>::type Timepicker::time_set( ::efl::eolian::in_traits<int>::type hour,  ::efl::eolian::in_traits<int>::type min) const
{
     ::efl_ui_timepicker_time_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(hour),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(min));
}
inline ::efl::eolian::return_traits<bool>::type Timepicker::is_24hour_get() const
{
    Eina_Bool __return_value =  ::efl_ui_timepicker_is_24hour_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Timepicker::is_24hour_set( ::efl::eolian::in_traits<bool>::type is_24hour) const
{
     ::efl_ui_timepicker_is_24hour_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(is_24hour));
}
inline efl::ui::Timepicker::operator ::efl::ui::Timepicker() const { return *static_cast< ::efl::ui::Timepicker const*>(static_cast<void const*>(this)); }
inline efl::ui::Timepicker::operator ::efl::ui::Timepicker&() { return *static_cast< ::efl::ui::Timepicker*>(static_cast<void*>(this)); }
inline efl::ui::Timepicker::operator ::efl::ui::Timepicker const&() const { return *static_cast< ::efl::ui::Timepicker const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
