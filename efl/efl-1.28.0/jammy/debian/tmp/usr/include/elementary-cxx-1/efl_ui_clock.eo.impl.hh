#ifndef EFL_UI_CLOCK_IMPL_HH
#define EFL_UI_CLOCK_IMPL_HH

#include "efl_ui_clock.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Clock::format_get() const
{
    const char * __return_value =  ::efl_ui_clock_format_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Clock::format_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type fmt) const
{
     ::efl_ui_clock_format_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(fmt));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Clock::pause_get() const
{
    Eina_Bool __return_value =  ::efl_ui_clock_pause_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Clock::pause_set( ::efl::eolian::in_traits<bool>::type paused) const
{
     ::efl_ui_clock_pause_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(paused));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Clock::edit_mode_get() const
{
    Eina_Bool __return_value =  ::efl_ui_clock_edit_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Clock::edit_mode_set( ::efl::eolian::in_traits<bool>::type value) const
{
     ::efl_ui_clock_edit_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(value));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Time>::type Clock::time_min_get() const
{
    Efl_Time __return_value =  ::efl_ui_clock_time_min_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Time>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Clock::time_min_set( ::efl::eolian::in_traits<Efl_Time>::type mintime) const
{
     ::efl_ui_clock_time_min_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Time,  ::efl::eolian::in_traits<Efl_Time>::type>(mintime));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Time>::type Clock::time_max_get() const
{
    Efl_Time __return_value =  ::efl_ui_clock_time_max_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Time>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Clock::time_max_set( ::efl::eolian::in_traits<Efl_Time>::type maxtime) const
{
     ::efl_ui_clock_time_max_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Time,  ::efl::eolian::in_traits<Efl_Time>::type>(maxtime));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Time>::type Clock::time_get() const
{
    Efl_Time __return_value =  ::efl_ui_clock_time_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Time>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Clock::time_set( ::efl::eolian::in_traits<Efl_Time>::type curtime) const
{
     ::efl_ui_clock_time_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Time,  ::efl::eolian::in_traits<Efl_Time>::type>(curtime));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Clock::field_visible_get( ::efl::eolian::in_traits<Efl_Ui_Clock_Type>::type fieldtype) const
{
    Eina_Bool __return_value =  ::efl_ui_clock_field_visible_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Clock_Type,  ::efl::eolian::in_traits<Efl_Ui_Clock_Type>::type>(fieldtype));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Clock::field_visible_set( ::efl::eolian::in_traits<Efl_Ui_Clock_Type>::type fieldtype,  ::efl::eolian::in_traits<bool>::type visible) const
{
     ::efl_ui_clock_field_visible_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Clock_Type,  ::efl::eolian::in_traits<Efl_Ui_Clock_Type>::type>(fieldtype),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(visible));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Clock::field_limit_get( ::efl::eolian::in_traits<Efl_Ui_Clock_Type>::type fieldtype,  ::efl::eolian::out_traits<int>::type min,  ::efl::eolian::out_traits<int>::type max) const
{
    int __out_param_min = {};
    int __out_param_max = {};
     ::efl_ui_clock_field_limit_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Clock_Type,  ::efl::eolian::in_traits<Efl_Ui_Clock_Type>::type>(fieldtype),
        & __out_param_min,
        & __out_param_max);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(min, __out_param_min);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(max, __out_param_max);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Clock::field_limit_set( ::efl::eolian::in_traits<Efl_Ui_Clock_Type>::type fieldtype,  ::efl::eolian::in_traits<int>::type min,  ::efl::eolian::in_traits<int>::type max) const
{
     ::efl_ui_clock_field_limit_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Clock_Type,  ::efl::eolian::in_traits<Efl_Ui_Clock_Type>::type>(fieldtype),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(min),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(max));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Clock::format_get() const
{
    const char * __return_value =  ::efl_ui_clock_format_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Clock::format_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type fmt) const
{
     ::efl_ui_clock_format_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(fmt));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Clock::pause_get() const
{
    Eina_Bool __return_value =  ::efl_ui_clock_pause_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Clock::pause_set( ::efl::eolian::in_traits<bool>::type paused) const
{
     ::efl_ui_clock_pause_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(paused));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Clock::edit_mode_get() const
{
    Eina_Bool __return_value =  ::efl_ui_clock_edit_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Clock::edit_mode_set( ::efl::eolian::in_traits<bool>::type value) const
{
     ::efl_ui_clock_edit_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(value));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Time>::type Clock::time_min_get() const
{
    Efl_Time __return_value =  ::efl_ui_clock_time_min_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Time>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Clock::time_min_set( ::efl::eolian::in_traits<Efl_Time>::type mintime) const
{
     ::efl_ui_clock_time_min_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Time,  ::efl::eolian::in_traits<Efl_Time>::type>(mintime));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Time>::type Clock::time_max_get() const
{
    Efl_Time __return_value =  ::efl_ui_clock_time_max_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Time>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Clock::time_max_set( ::efl::eolian::in_traits<Efl_Time>::type maxtime) const
{
     ::efl_ui_clock_time_max_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Time,  ::efl::eolian::in_traits<Efl_Time>::type>(maxtime));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Time>::type Clock::time_get() const
{
    Efl_Time __return_value =  ::efl_ui_clock_time_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Time>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Clock::time_set( ::efl::eolian::in_traits<Efl_Time>::type curtime) const
{
     ::efl_ui_clock_time_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Time,  ::efl::eolian::in_traits<Efl_Time>::type>(curtime));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Clock::field_visible_get( ::efl::eolian::in_traits<Efl_Ui_Clock_Type>::type fieldtype) const
{
    Eina_Bool __return_value =  ::efl_ui_clock_field_visible_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Clock_Type,  ::efl::eolian::in_traits<Efl_Ui_Clock_Type>::type>(fieldtype));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Clock::field_visible_set( ::efl::eolian::in_traits<Efl_Ui_Clock_Type>::type fieldtype,  ::efl::eolian::in_traits<bool>::type visible) const
{
     ::efl_ui_clock_field_visible_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Clock_Type,  ::efl::eolian::in_traits<Efl_Ui_Clock_Type>::type>(fieldtype),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(visible));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Clock::field_limit_get( ::efl::eolian::in_traits<Efl_Ui_Clock_Type>::type fieldtype,  ::efl::eolian::out_traits<int>::type min,  ::efl::eolian::out_traits<int>::type max) const
{
    int __out_param_min = {};
    int __out_param_max = {};
     ::efl_ui_clock_field_limit_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Clock_Type,  ::efl::eolian::in_traits<Efl_Ui_Clock_Type>::type>(fieldtype),
        & __out_param_min,
        & __out_param_max);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(min, __out_param_min);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(max, __out_param_max);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Clock::field_limit_set( ::efl::eolian::in_traits<Efl_Ui_Clock_Type>::type fieldtype,  ::efl::eolian::in_traits<int>::type min,  ::efl::eolian::in_traits<int>::type max) const
{
     ::efl_ui_clock_field_limit_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Clock_Type,  ::efl::eolian::in_traits<Efl_Ui_Clock_Type>::type>(fieldtype),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(min),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(max));
}
#endif
inline efl::ui::Clock::operator ::efl::ui::Clock() const { return *static_cast< ::efl::ui::Clock const*>(static_cast<void const*>(this)); }
inline efl::ui::Clock::operator ::efl::ui::Clock&() { return *static_cast< ::efl::ui::Clock*>(static_cast<void*>(this)); }
inline efl::ui::Clock::operator ::efl::ui::Clock const&() const { return *static_cast< ::efl::ui::Clock const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
