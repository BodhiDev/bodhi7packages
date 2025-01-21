#ifndef EFL_UI_SCROLLBAR_IMPL_HH
#define EFL_UI_SCROLLBAR_IMPL_HH

#include "efl_ui_scrollbar.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<void>::type Scrollbar::bar_mode_get( ::efl::eolian::out_traits<Efl_Ui_Scrollbar_Mode>::type hbar,  ::efl::eolian::out_traits<Efl_Ui_Scrollbar_Mode>::type vbar) const
{
    Efl_Ui_Scrollbar_Mode __out_param_hbar = {};
    Efl_Ui_Scrollbar_Mode __out_param_vbar = {};
     ::efl_ui_scrollbar_bar_mode_get(_eo_ptr(),
        & __out_param_hbar,
        & __out_param_vbar);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Ui_Scrollbar_Mode>::type, Efl_Ui_Scrollbar_Mode>(hbar, __out_param_hbar);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Ui_Scrollbar_Mode>::type, Efl_Ui_Scrollbar_Mode>(vbar, __out_param_vbar);
}
inline ::efl::eolian::return_traits<void>::type Scrollbar::bar_mode_set( ::efl::eolian::in_traits<Efl_Ui_Scrollbar_Mode>::type hbar,  ::efl::eolian::in_traits<Efl_Ui_Scrollbar_Mode>::type vbar) const
{
     ::efl_ui_scrollbar_bar_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Scrollbar_Mode,  ::efl::eolian::in_traits<Efl_Ui_Scrollbar_Mode>::type>(hbar),
         ::efl::eolian::convert_to_c<Efl_Ui_Scrollbar_Mode,  ::efl::eolian::in_traits<Efl_Ui_Scrollbar_Mode>::type>(vbar));
}
inline ::efl::eolian::return_traits<void>::type Scrollbar::bar_size_get( ::efl::eolian::out_traits<double>::type width,  ::efl::eolian::out_traits<double>::type height) const
{
    double __out_param_width = {};
    double __out_param_height = {};
     ::efl_ui_scrollbar_bar_size_get(_eo_ptr(),
        & __out_param_width,
        & __out_param_height);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(width, __out_param_width);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(height, __out_param_height);
}
inline ::efl::eolian::return_traits<void>::type Scrollbar::bar_position_get( ::efl::eolian::out_traits<double>::type posx,  ::efl::eolian::out_traits<double>::type posy) const
{
    double __out_param_posx = {};
    double __out_param_posy = {};
     ::efl_ui_scrollbar_bar_position_get(_eo_ptr(),
        & __out_param_posx,
        & __out_param_posy);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(posx, __out_param_posx);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(posy, __out_param_posy);
}
inline ::efl::eolian::return_traits<void>::type Scrollbar::bar_position_set( ::efl::eolian::in_traits<double>::type posx,  ::efl::eolian::in_traits<double>::type posy) const
{
     ::efl_ui_scrollbar_bar_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(posx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(posy));
}
inline ::efl::eolian::return_traits<void>::type Scrollbar::bar_visibility_get( ::efl::eolian::out_traits<bool>::type hbar,  ::efl::eolian::out_traits<bool>::type vbar) const
{
    Eina_Bool __out_param_hbar = {};
    Eina_Bool __out_param_vbar = {};
     ::efl_ui_scrollbar_bar_visibility_get(_eo_ptr(),
        & __out_param_hbar,
        & __out_param_vbar);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(hbar, __out_param_hbar);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(vbar, __out_param_vbar);
}
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_SCROLLBAR_PROTECTED
inline ::efl::eolian::return_traits<void>::type Scrollbar::bar_visibility_update() const
{
     ::efl_ui_scrollbar_bar_visibility_update(_eo_ptr());
}
#endif
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<void>::type Scrollbar::bar_mode_get( ::efl::eolian::out_traits<Efl_Ui_Scrollbar_Mode>::type hbar,  ::efl::eolian::out_traits<Efl_Ui_Scrollbar_Mode>::type vbar) const
{
    Efl_Ui_Scrollbar_Mode __out_param_hbar = {};
    Efl_Ui_Scrollbar_Mode __out_param_vbar = {};
     ::efl_ui_scrollbar_bar_mode_get(_eo_ptr(),
        & __out_param_hbar,
        & __out_param_vbar);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Ui_Scrollbar_Mode>::type, Efl_Ui_Scrollbar_Mode>(hbar, __out_param_hbar);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Ui_Scrollbar_Mode>::type, Efl_Ui_Scrollbar_Mode>(vbar, __out_param_vbar);
}
inline ::efl::eolian::return_traits<void>::type Scrollbar::bar_mode_set( ::efl::eolian::in_traits<Efl_Ui_Scrollbar_Mode>::type hbar,  ::efl::eolian::in_traits<Efl_Ui_Scrollbar_Mode>::type vbar) const
{
     ::efl_ui_scrollbar_bar_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Scrollbar_Mode,  ::efl::eolian::in_traits<Efl_Ui_Scrollbar_Mode>::type>(hbar),
         ::efl::eolian::convert_to_c<Efl_Ui_Scrollbar_Mode,  ::efl::eolian::in_traits<Efl_Ui_Scrollbar_Mode>::type>(vbar));
}
inline ::efl::eolian::return_traits<void>::type Scrollbar::bar_size_get( ::efl::eolian::out_traits<double>::type width,  ::efl::eolian::out_traits<double>::type height) const
{
    double __out_param_width = {};
    double __out_param_height = {};
     ::efl_ui_scrollbar_bar_size_get(_eo_ptr(),
        & __out_param_width,
        & __out_param_height);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(width, __out_param_width);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(height, __out_param_height);
}
inline ::efl::eolian::return_traits<void>::type Scrollbar::bar_position_get( ::efl::eolian::out_traits<double>::type posx,  ::efl::eolian::out_traits<double>::type posy) const
{
    double __out_param_posx = {};
    double __out_param_posy = {};
     ::efl_ui_scrollbar_bar_position_get(_eo_ptr(),
        & __out_param_posx,
        & __out_param_posy);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(posx, __out_param_posx);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(posy, __out_param_posy);
}
inline ::efl::eolian::return_traits<void>::type Scrollbar::bar_position_set( ::efl::eolian::in_traits<double>::type posx,  ::efl::eolian::in_traits<double>::type posy) const
{
     ::efl_ui_scrollbar_bar_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(posx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(posy));
}
inline ::efl::eolian::return_traits<void>::type Scrollbar::bar_visibility_get( ::efl::eolian::out_traits<bool>::type hbar,  ::efl::eolian::out_traits<bool>::type vbar) const
{
    Eina_Bool __out_param_hbar = {};
    Eina_Bool __out_param_vbar = {};
     ::efl_ui_scrollbar_bar_visibility_get(_eo_ptr(),
        & __out_param_hbar,
        & __out_param_vbar);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(hbar, __out_param_hbar);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(vbar, __out_param_vbar);
}
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_SCROLLBAR_PROTECTED
inline ::efl::eolian::return_traits<void>::type Scrollbar::bar_visibility_update() const
{
     ::efl_ui_scrollbar_bar_visibility_update(_eo_ptr());
}
#endif
#endif
inline efl::ui::Scrollbar::operator ::efl::ui::Scrollbar() const { return *static_cast< ::efl::ui::Scrollbar const*>(static_cast<void const*>(this)); }
inline efl::ui::Scrollbar::operator ::efl::ui::Scrollbar&() { return *static_cast< ::efl::ui::Scrollbar*>(static_cast<void*>(this)); }
inline efl::ui::Scrollbar::operator ::efl::ui::Scrollbar const&() const { return *static_cast< ::efl::ui::Scrollbar const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
