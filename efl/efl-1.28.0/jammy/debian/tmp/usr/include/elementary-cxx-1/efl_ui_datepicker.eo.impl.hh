#ifndef EFL_UI_DATEPICKER_IMPL_HH
#define EFL_UI_DATEPICKER_IMPL_HH

#include "efl_ui_datepicker.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<void>::type Datepicker::date_min_get( ::efl::eolian::out_traits<int>::type year,  ::efl::eolian::out_traits<int>::type month,  ::efl::eolian::out_traits<int>::type day) const
{
    int __out_param_year = {};
    int __out_param_month = {};
    int __out_param_day = {};
     ::efl_ui_datepicker_date_min_get(_eo_ptr(),
        & __out_param_year,
        & __out_param_month,
        & __out_param_day);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(year, __out_param_year);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(month, __out_param_month);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(day, __out_param_day);
}
inline ::efl::eolian::return_traits<void>::type Datepicker::date_min_set( ::efl::eolian::in_traits<int>::type year,  ::efl::eolian::in_traits<int>::type month,  ::efl::eolian::in_traits<int>::type day) const
{
     ::efl_ui_datepicker_date_min_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(year),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(month),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(day));
}
inline ::efl::eolian::return_traits<void>::type Datepicker::date_max_get( ::efl::eolian::out_traits<int>::type year,  ::efl::eolian::out_traits<int>::type month,  ::efl::eolian::out_traits<int>::type day) const
{
    int __out_param_year = {};
    int __out_param_month = {};
    int __out_param_day = {};
     ::efl_ui_datepicker_date_max_get(_eo_ptr(),
        & __out_param_year,
        & __out_param_month,
        & __out_param_day);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(year, __out_param_year);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(month, __out_param_month);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(day, __out_param_day);
}
inline ::efl::eolian::return_traits<void>::type Datepicker::date_max_set( ::efl::eolian::in_traits<int>::type year,  ::efl::eolian::in_traits<int>::type month,  ::efl::eolian::in_traits<int>::type day) const
{
     ::efl_ui_datepicker_date_max_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(year),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(month),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(day));
}
inline ::efl::eolian::return_traits<void>::type Datepicker::date_get( ::efl::eolian::out_traits<int>::type year,  ::efl::eolian::out_traits<int>::type month,  ::efl::eolian::out_traits<int>::type day) const
{
    int __out_param_year = {};
    int __out_param_month = {};
    int __out_param_day = {};
     ::efl_ui_datepicker_date_get(_eo_ptr(),
        & __out_param_year,
        & __out_param_month,
        & __out_param_day);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(year, __out_param_year);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(month, __out_param_month);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(day, __out_param_day);
}
inline ::efl::eolian::return_traits<void>::type Datepicker::date_set( ::efl::eolian::in_traits<int>::type year,  ::efl::eolian::in_traits<int>::type month,  ::efl::eolian::in_traits<int>::type day) const
{
     ::efl_ui_datepicker_date_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(year),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(month),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(day));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<void>::type Datepicker::date_min_get( ::efl::eolian::out_traits<int>::type year,  ::efl::eolian::out_traits<int>::type month,  ::efl::eolian::out_traits<int>::type day) const
{
    int __out_param_year = {};
    int __out_param_month = {};
    int __out_param_day = {};
     ::efl_ui_datepicker_date_min_get(_eo_ptr(),
        & __out_param_year,
        & __out_param_month,
        & __out_param_day);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(year, __out_param_year);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(month, __out_param_month);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(day, __out_param_day);
}
inline ::efl::eolian::return_traits<void>::type Datepicker::date_min_set( ::efl::eolian::in_traits<int>::type year,  ::efl::eolian::in_traits<int>::type month,  ::efl::eolian::in_traits<int>::type day) const
{
     ::efl_ui_datepicker_date_min_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(year),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(month),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(day));
}
inline ::efl::eolian::return_traits<void>::type Datepicker::date_max_get( ::efl::eolian::out_traits<int>::type year,  ::efl::eolian::out_traits<int>::type month,  ::efl::eolian::out_traits<int>::type day) const
{
    int __out_param_year = {};
    int __out_param_month = {};
    int __out_param_day = {};
     ::efl_ui_datepicker_date_max_get(_eo_ptr(),
        & __out_param_year,
        & __out_param_month,
        & __out_param_day);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(year, __out_param_year);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(month, __out_param_month);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(day, __out_param_day);
}
inline ::efl::eolian::return_traits<void>::type Datepicker::date_max_set( ::efl::eolian::in_traits<int>::type year,  ::efl::eolian::in_traits<int>::type month,  ::efl::eolian::in_traits<int>::type day) const
{
     ::efl_ui_datepicker_date_max_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(year),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(month),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(day));
}
inline ::efl::eolian::return_traits<void>::type Datepicker::date_get( ::efl::eolian::out_traits<int>::type year,  ::efl::eolian::out_traits<int>::type month,  ::efl::eolian::out_traits<int>::type day) const
{
    int __out_param_year = {};
    int __out_param_month = {};
    int __out_param_day = {};
     ::efl_ui_datepicker_date_get(_eo_ptr(),
        & __out_param_year,
        & __out_param_month,
        & __out_param_day);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(year, __out_param_year);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(month, __out_param_month);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(day, __out_param_day);
}
inline ::efl::eolian::return_traits<void>::type Datepicker::date_set( ::efl::eolian::in_traits<int>::type year,  ::efl::eolian::in_traits<int>::type month,  ::efl::eolian::in_traits<int>::type day) const
{
     ::efl_ui_datepicker_date_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(year),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(month),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(day));
}
inline efl::ui::Datepicker::operator ::efl::ui::Datepicker() const { return *static_cast< ::efl::ui::Datepicker const*>(static_cast<void const*>(this)); }
inline efl::ui::Datepicker::operator ::efl::ui::Datepicker&() { return *static_cast< ::efl::ui::Datepicker*>(static_cast<void*>(this)); }
inline efl::ui::Datepicker::operator ::efl::ui::Datepicker const&() const { return *static_cast< ::efl::ui::Datepicker const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
