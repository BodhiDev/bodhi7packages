#ifndef EFL_UI_AUTOREPEAT_IMPL_HH
#define EFL_UI_AUTOREPEAT_IMPL_HH

#include "efl_ui_autorepeat.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<double>::type Autorepeat::autorepeat_initial_timeout_get() const
{
    double __return_value =  ::efl_ui_autorepeat_initial_timeout_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Autorepeat::autorepeat_initial_timeout_set( ::efl::eolian::in_traits<double>::type t) const
{
     ::efl_ui_autorepeat_initial_timeout_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(t));
}
inline ::efl::eolian::return_traits<double>::type Autorepeat::autorepeat_gap_timeout_get() const
{
    double __return_value =  ::efl_ui_autorepeat_gap_timeout_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Autorepeat::autorepeat_gap_timeout_set( ::efl::eolian::in_traits<double>::type t) const
{
     ::efl_ui_autorepeat_gap_timeout_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(t));
}
inline ::efl::eolian::return_traits<bool>::type Autorepeat::autorepeat_enabled_get() const
{
    Eina_Bool __return_value =  ::efl_ui_autorepeat_enabled_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Autorepeat::autorepeat_enabled_set( ::efl::eolian::in_traits<bool>::type on) const
{
     ::efl_ui_autorepeat_enabled_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(on));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<double>::type Autorepeat::autorepeat_initial_timeout_get() const
{
    double __return_value =  ::efl_ui_autorepeat_initial_timeout_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Autorepeat::autorepeat_initial_timeout_set( ::efl::eolian::in_traits<double>::type t) const
{
     ::efl_ui_autorepeat_initial_timeout_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(t));
}
inline ::efl::eolian::return_traits<double>::type Autorepeat::autorepeat_gap_timeout_get() const
{
    double __return_value =  ::efl_ui_autorepeat_gap_timeout_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Autorepeat::autorepeat_gap_timeout_set( ::efl::eolian::in_traits<double>::type t) const
{
     ::efl_ui_autorepeat_gap_timeout_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(t));
}
inline ::efl::eolian::return_traits<bool>::type Autorepeat::autorepeat_enabled_get() const
{
    Eina_Bool __return_value =  ::efl_ui_autorepeat_enabled_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Autorepeat::autorepeat_enabled_set( ::efl::eolian::in_traits<bool>::type on) const
{
     ::efl_ui_autorepeat_enabled_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(on));
}
inline efl::ui::Autorepeat::operator ::efl::ui::Autorepeat() const { return *static_cast< ::efl::ui::Autorepeat const*>(static_cast<void const*>(this)); }
inline efl::ui::Autorepeat::operator ::efl::ui::Autorepeat&() { return *static_cast< ::efl::ui::Autorepeat*>(static_cast<void*>(this)); }
inline efl::ui::Autorepeat::operator ::efl::ui::Autorepeat const&() const { return *static_cast< ::efl::ui::Autorepeat const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
