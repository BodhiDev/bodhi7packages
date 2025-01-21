#ifndef EFL_UI_CALENDAR_IMPL_HH
#define EFL_UI_CALENDAR_IMPL_HH

#include "efl_ui_calendar.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Calendar_Weekday>::type Calendar::first_day_of_week_get() const
{
    Efl_Ui_Calendar_Weekday __return_value =  ::efl_ui_calendar_first_day_of_week_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Calendar_Weekday>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Calendar::first_day_of_week_set( ::efl::eolian::in_traits<Efl_Ui_Calendar_Weekday>::type day) const
{
     ::efl_ui_calendar_first_day_of_week_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Calendar_Weekday,  ::efl::eolian::in_traits<Efl_Ui_Calendar_Weekday>::type>(day));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Time>::type Calendar::date_min_get() const
{
    Efl_Time __return_value =  ::efl_ui_calendar_date_min_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Time>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Calendar::date_min_set( ::efl::eolian::in_traits<Efl_Time>::type min) const
{
    Eina_Bool __return_value =  ::efl_ui_calendar_date_min_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Time,  ::efl::eolian::in_traits<Efl_Time>::type>(min));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Time>::type Calendar::date_max_get() const
{
    Efl_Time __return_value =  ::efl_ui_calendar_date_max_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Time>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Calendar::date_max_set( ::efl::eolian::in_traits<Efl_Time>::type max) const
{
    Eina_Bool __return_value =  ::efl_ui_calendar_date_max_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Time,  ::efl::eolian::in_traits<Efl_Time>::type>(max));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Time>::type Calendar::date_get() const
{
    Efl_Time __return_value =  ::efl_ui_calendar_date_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Time>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Calendar::date_set( ::efl::eolian::in_traits<Efl_Time>::type date) const
{
    Eina_Bool __return_value =  ::efl_ui_calendar_date_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Time,  ::efl::eolian::in_traits<Efl_Time>::type>(date));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Calendar_Weekday>::type Calendar::first_day_of_week_get() const
{
    Efl_Ui_Calendar_Weekday __return_value =  ::efl_ui_calendar_first_day_of_week_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Calendar_Weekday>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Calendar::first_day_of_week_set( ::efl::eolian::in_traits<Efl_Ui_Calendar_Weekday>::type day) const
{
     ::efl_ui_calendar_first_day_of_week_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Calendar_Weekday,  ::efl::eolian::in_traits<Efl_Ui_Calendar_Weekday>::type>(day));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Time>::type Calendar::date_min_get() const
{
    Efl_Time __return_value =  ::efl_ui_calendar_date_min_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Time>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Calendar::date_min_set( ::efl::eolian::in_traits<Efl_Time>::type min) const
{
    Eina_Bool __return_value =  ::efl_ui_calendar_date_min_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Time,  ::efl::eolian::in_traits<Efl_Time>::type>(min));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Time>::type Calendar::date_max_get() const
{
    Efl_Time __return_value =  ::efl_ui_calendar_date_max_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Time>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Calendar::date_max_set( ::efl::eolian::in_traits<Efl_Time>::type max) const
{
    Eina_Bool __return_value =  ::efl_ui_calendar_date_max_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Time,  ::efl::eolian::in_traits<Efl_Time>::type>(max));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Time>::type Calendar::date_get() const
{
    Efl_Time __return_value =  ::efl_ui_calendar_date_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Time>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Calendar::date_set( ::efl::eolian::in_traits<Efl_Time>::type date) const
{
    Eina_Bool __return_value =  ::efl_ui_calendar_date_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Time,  ::efl::eolian::in_traits<Efl_Time>::type>(date));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline efl::ui::Calendar::operator ::efl::ui::Calendar() const { return *static_cast< ::efl::ui::Calendar const*>(static_cast<void const*>(this)); }
inline efl::ui::Calendar::operator ::efl::ui::Calendar&() { return *static_cast< ::efl::ui::Calendar*>(static_cast<void*>(this)); }
inline efl::ui::Calendar::operator ::efl::ui::Calendar const&() const { return *static_cast< ::efl::ui::Calendar const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
