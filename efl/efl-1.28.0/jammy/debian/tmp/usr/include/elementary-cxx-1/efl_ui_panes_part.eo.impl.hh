#ifndef EFL_UI_PANES_PART_IMPL_HH
#define EFL_UI_PANES_PART_IMPL_HH

#include "efl_ui_panes_part.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Panes_Part::hint_min_allow_get() const
{
    Eina_Bool __return_value =  ::efl_ui_panes_part_hint_min_allow_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Panes_Part::hint_min_allow_set( ::efl::eolian::in_traits<bool>::type allow) const
{
     ::efl_ui_panes_part_hint_min_allow_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(allow));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Panes_Part::split_ratio_min_get() const
{
    double __return_value =  ::efl_ui_panes_part_split_ratio_min_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Panes_Part::split_ratio_min_set( ::efl::eolian::in_traits<double>::type size) const
{
     ::efl_ui_panes_part_split_ratio_min_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(size));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Panes_Part::hint_min_allow_get() const
{
    Eina_Bool __return_value =  ::efl_ui_panes_part_hint_min_allow_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Panes_Part::hint_min_allow_set( ::efl::eolian::in_traits<bool>::type allow) const
{
     ::efl_ui_panes_part_hint_min_allow_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(allow));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Panes_Part::split_ratio_min_get() const
{
    double __return_value =  ::efl_ui_panes_part_split_ratio_min_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Panes_Part::split_ratio_min_set( ::efl::eolian::in_traits<double>::type size) const
{
     ::efl_ui_panes_part_split_ratio_min_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(size));
}
#endif
inline efl::ui::Panes_Part::operator ::efl::ui::Panes_Part() const { return *static_cast< ::efl::ui::Panes_Part const*>(static_cast<void const*>(this)); }
inline efl::ui::Panes_Part::operator ::efl::ui::Panes_Part&() { return *static_cast< ::efl::ui::Panes_Part*>(static_cast<void*>(this)); }
inline efl::ui::Panes_Part::operator ::efl::ui::Panes_Part const&() const { return *static_cast< ::efl::ui::Panes_Part const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
