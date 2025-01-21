#ifndef EFL_UI_PROGRESSBAR_IMPL_HH
#define EFL_UI_PROGRESSBAR_IMPL_HH

#include "efl_ui_progressbar.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Progressbar::infinite_mode_get() const
{
    Eina_Bool __return_value =  ::efl_ui_progressbar_infinite_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Progressbar::infinite_mode_set( ::efl::eolian::in_traits<bool>::type state) const
{
     ::efl_ui_progressbar_infinite_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(state));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Progressbar::show_progress_label_get() const
{
    Eina_Bool __return_value =  ::efl_ui_progressbar_show_progress_label_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Progressbar::show_progress_label_set( ::efl::eolian::in_traits<bool>::type show) const
{
     ::efl_ui_progressbar_show_progress_label_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(show));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Progressbar::infinite_mode_get() const
{
    Eina_Bool __return_value =  ::efl_ui_progressbar_infinite_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Progressbar::infinite_mode_set( ::efl::eolian::in_traits<bool>::type state) const
{
     ::efl_ui_progressbar_infinite_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(state));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Progressbar::show_progress_label_get() const
{
    Eina_Bool __return_value =  ::efl_ui_progressbar_show_progress_label_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Progressbar::show_progress_label_set( ::efl::eolian::in_traits<bool>::type show) const
{
     ::efl_ui_progressbar_show_progress_label_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(show));
}
#endif
inline efl::ui::Progressbar::operator ::efl::ui::Progressbar() const { return *static_cast< ::efl::ui::Progressbar const*>(static_cast<void const*>(this)); }
inline efl::ui::Progressbar::operator ::efl::ui::Progressbar&() { return *static_cast< ::efl::ui::Progressbar*>(static_cast<void*>(this)); }
inline efl::ui::Progressbar::operator ::efl::ui::Progressbar const&() const { return *static_cast< ::efl::ui::Progressbar const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
