#ifndef EFL_UI_ZOOM_IMPL_HH
#define EFL_UI_ZOOM_IMPL_HH

#include "efl_ui_zoom.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Zoom::zoom_animation_get() const
{
    Eina_Bool __return_value =  ::efl_ui_zoom_animation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Zoom::zoom_animation_set( ::efl::eolian::in_traits<bool>::type paused) const
{
     ::efl_ui_zoom_animation_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(paused));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Zoom::zoom_level_get() const
{
    double __return_value =  ::efl_ui_zoom_level_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Zoom::zoom_level_set( ::efl::eolian::in_traits<double>::type zoom) const
{
     ::efl_ui_zoom_level_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(zoom));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Zoom_Mode>::type Zoom::zoom_mode_get() const
{
    Efl_Ui_Zoom_Mode __return_value =  ::efl_ui_zoom_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Zoom_Mode>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Zoom::zoom_mode_set( ::efl::eolian::in_traits<Efl_Ui_Zoom_Mode>::type mode) const
{
     ::efl_ui_zoom_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Zoom_Mode,  ::efl::eolian::in_traits<Efl_Ui_Zoom_Mode>::type>(mode));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Zoom::zoom_animation_get() const
{
    Eina_Bool __return_value =  ::efl_ui_zoom_animation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Zoom::zoom_animation_set( ::efl::eolian::in_traits<bool>::type paused) const
{
     ::efl_ui_zoom_animation_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(paused));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Zoom::zoom_level_get() const
{
    double __return_value =  ::efl_ui_zoom_level_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Zoom::zoom_level_set( ::efl::eolian::in_traits<double>::type zoom) const
{
     ::efl_ui_zoom_level_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(zoom));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Zoom_Mode>::type Zoom::zoom_mode_get() const
{
    Efl_Ui_Zoom_Mode __return_value =  ::efl_ui_zoom_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Zoom_Mode>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Zoom::zoom_mode_set( ::efl::eolian::in_traits<Efl_Ui_Zoom_Mode>::type mode) const
{
     ::efl_ui_zoom_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Zoom_Mode,  ::efl::eolian::in_traits<Efl_Ui_Zoom_Mode>::type>(mode));
}
#endif
inline efl::ui::Zoom::operator ::efl::ui::Zoom() const { return *static_cast< ::efl::ui::Zoom const*>(static_cast<void const*>(this)); }
inline efl::ui::Zoom::operator ::efl::ui::Zoom&() { return *static_cast< ::efl::ui::Zoom*>(static_cast<void*>(this)); }
inline efl::ui::Zoom::operator ::efl::ui::Zoom const&() const { return *static_cast< ::efl::ui::Zoom const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
