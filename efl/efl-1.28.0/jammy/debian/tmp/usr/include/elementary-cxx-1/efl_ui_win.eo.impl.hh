#ifndef EFL_UI_WIN_IMPL_HH
#define EFL_UI_WIN_IMPL_HH

#include "efl_ui_win.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<Efl_Ui_Win_Indicator_Mode>::type Win::indicator_mode_get() const
{
    Efl_Ui_Win_Indicator_Mode __return_value =  ::efl_ui_win_indicator_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Win_Indicator_Mode>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::indicator_mode_set( ::efl::eolian::in_traits<Efl_Ui_Win_Indicator_Mode>::type type) const
{
     ::efl_ui_win_indicator_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Win_Indicator_Mode,  ::efl::eolian::in_traits<Efl_Ui_Win_Indicator_Mode>::type>(type));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Win_Keyboard_Mode>::type Win::keyboard_mode_get() const
{
    Efl_Ui_Win_Keyboard_Mode __return_value =  ::efl_ui_win_keyboard_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Win_Keyboard_Mode>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::keyboard_mode_set( ::efl::eolian::in_traits<Efl_Ui_Win_Keyboard_Mode>::type mode) const
{
     ::efl_ui_win_keyboard_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Win_Keyboard_Mode,  ::efl::eolian::in_traits<Efl_Ui_Win_Keyboard_Mode>::type>(mode));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Win::wm_available_rotations_get( ::efl::eolian::out_traits<bool>::type allow_0,  ::efl::eolian::out_traits<bool>::type allow_90,  ::efl::eolian::out_traits<bool>::type allow_180,  ::efl::eolian::out_traits<bool>::type allow_270) const
{
    Eina_Bool __out_param_allow_0 = {};
    Eina_Bool __out_param_allow_90 = {};
    Eina_Bool __out_param_allow_180 = {};
    Eina_Bool __out_param_allow_270 = {};
    Eina_Bool __return_value =  ::efl_ui_win_wm_available_rotations_get(_eo_ptr(),
        & __out_param_allow_0,
        & __out_param_allow_90,
        & __out_param_allow_180,
        & __out_param_allow_270);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(allow_0, __out_param_allow_0);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(allow_90, __out_param_allow_90);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(allow_180, __out_param_allow_180);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(allow_270, __out_param_allow_270);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::wm_available_rotations_set( ::efl::eolian::in_traits<bool>::type allow_0,  ::efl::eolian::in_traits<bool>::type allow_90,  ::efl::eolian::in_traits<bool>::type allow_180,  ::efl::eolian::in_traits<bool>::type allow_270) const
{
     ::efl_ui_win_wm_available_rotations_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(allow_0),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(allow_90),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(allow_180),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(allow_270));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type Win::wm_available_profiles_get() const
{
    const Eina_Array * __return_value =  ::efl_ui_win_wm_available_profiles_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::wm_available_profiles_set( ::efl::eolian::in_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type profiles) const
{
     ::efl_ui_win_wm_available_profiles_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Array *,  ::efl::eolian::in_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type>(profiles));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Win::screen_constrain_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_screen_constrain_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::screen_constrain_set( ::efl::eolian::in_traits<bool>::type constrain) const
{
     ::efl_ui_win_screen_constrain_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(constrain));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::prop_focus_skip_set( ::efl::eolian::in_traits<bool>::type skip) const
{
     ::efl_ui_win_prop_focus_skip_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(skip));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Win::autohide_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_autohide_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::autohide_set( ::efl::eolian::in_traits<bool>::type autohide) const
{
     ::efl_ui_win_autohide_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(autohide));
}
#endif
inline ::efl::eolian::return_traits< ::efl::eina::value_view const>::type Win::exit_on_close_get() const
{
    const Eina_Value * __return_value =  ::efl_ui_win_exit_on_close_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::value_view const>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::exit_on_close_set( ::efl::eolian::in_traits< ::efl::eina::value_view const>::type exit_code) const
{
     ::efl_ui_win_exit_on_close_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Value *,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type>(exit_code));
}
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Win::icon_object_get() const
{
     ::Efl_Canvas_Object const* __return_value =  ::efl_ui_win_icon_object_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::icon_object_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type icon) const
{
     ::efl_ui_win_icon_object_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(icon));
}
inline ::efl::eolian::return_traits<bool>::type Win::minimized_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_minimized_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::minimized_set( ::efl::eolian::in_traits<bool>::type state) const
{
     ::efl_ui_win_minimized_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(state));
}
inline ::efl::eolian::return_traits<bool>::type Win::maximized_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_maximized_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::maximized_set( ::efl::eolian::in_traits<bool>::type maximized) const
{
     ::efl_ui_win_maximized_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(maximized));
}
inline ::efl::eolian::return_traits<bool>::type Win::fullscreen_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_fullscreen_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::fullscreen_set( ::efl::eolian::in_traits<bool>::type fullscreen) const
{
     ::efl_ui_win_fullscreen_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(fullscreen));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Win::sticky_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_sticky_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::sticky_set( ::efl::eolian::in_traits<bool>::type sticky) const
{
     ::efl_ui_win_sticky_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(sticky));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Win_Urgent_Mode>::type Win::urgent_get() const
{
    Efl_Ui_Win_Urgent_Mode __return_value =  ::efl_ui_win_urgent_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Win_Urgent_Mode>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::urgent_set( ::efl::eolian::in_traits<Efl_Ui_Win_Urgent_Mode>::type urgent) const
{
     ::efl_ui_win_urgent_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Win_Urgent_Mode,  ::efl::eolian::in_traits<Efl_Ui_Win_Urgent_Mode>::type>(urgent));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Win_Modal_Mode>::type Win::modal_get() const
{
    Efl_Ui_Win_Modal_Mode __return_value =  ::efl_ui_win_modal_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Win_Modal_Mode>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::modal_set( ::efl::eolian::in_traits<Efl_Ui_Win_Modal_Mode>::type modal) const
{
     ::efl_ui_win_modal_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Win_Modal_Mode,  ::efl::eolian::in_traits<Efl_Ui_Win_Modal_Mode>::type>(modal));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Win::borderless_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_borderless_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::borderless_set( ::efl::eolian::in_traits<bool>::type borderless) const
{
     ::efl_ui_win_borderless_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(borderless));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Win::win_role_get() const
{
    const char * __return_value =  ::efl_ui_win_role_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::win_role_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type role) const
{
     ::efl_ui_win_role_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(role));
}
#endif
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Win::win_name_get() const
{
    const char * __return_value =  ::efl_ui_win_name_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::win_name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
     ::efl_ui_win_name_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Win_Type>::type Win::win_type_get() const
{
    Efl_Ui_Win_Type __return_value =  ::efl_ui_win_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Win_Type>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::win_type_set( ::efl::eolian::in_traits<Efl_Ui_Win_Type>::type type) const
{
     ::efl_ui_win_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Win_Type,  ::efl::eolian::in_traits<Efl_Ui_Win_Type>::type>(type));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Win::accel_preference_get() const
{
    const char * __return_value =  ::efl_ui_win_accel_preference_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::accel_preference_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type accel) const
{
     ::efl_ui_win_accel_preference_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(accel));
}
#endif
inline ::efl::eolian::return_traits<bool>::type Win::alpha_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_alpha_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::alpha_set( ::efl::eolian::in_traits<bool>::type alpha) const
{
     ::efl_ui_win_alpha_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(alpha));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Win::stack_id_get() const
{
    const char * __return_value =  ::efl_ui_win_stack_id_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Win::stack_master_id_get() const
{
    const char * __return_value =  ::efl_ui_win_stack_master_id_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::stack_master_id_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type id) const
{
     ::efl_ui_win_stack_master_id_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(id));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Win::stack_base_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_stack_base_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::stack_base_set( ::efl::eolian::in_traits<bool>::type base) const
{
     ::efl_ui_win_stack_base_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(base));
}
#endif
inline ::efl::eolian::return_traits< ::efl::eina::value_view const>::type Win::exit_on_all_windows_closed_get()
{
    const Eina_Value * __return_value =  ::efl_ui_win_exit_on_all_windows_closed_get();
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::value_view const>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::exit_on_all_windows_closed_set( ::efl::eolian::in_traits< ::efl::eina::value_view const>::type exit_code)
{
     ::efl_ui_win_exit_on_all_windows_closed_set(
         ::efl::eolian::convert_to_c<const Eina_Value *,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type>(exit_code));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Win::hint_base_get() const
{
    Eina_Size2D __return_value =  ::efl_ui_win_hint_base_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::hint_base_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const
{
     ::efl_ui_win_hint_base_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(sz));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Win::hint_step_get() const
{
    Eina_Size2D __return_value =  ::efl_ui_win_hint_step_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::hint_step_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const
{
     ::efl_ui_win_hint_step_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(sz));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Win::win_rotation_get() const
{
    int __return_value =  ::efl_ui_win_rotation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::win_rotation_set( ::efl::eolian::in_traits<int>::type rotation) const
{
     ::efl_ui_win_rotation_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(rotation));
}
#endif
inline ::efl::eolian::return_traits<bool>::type Win::focus_highlight_enabled_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_focus_highlight_enabled_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::focus_highlight_enabled_set( ::efl::eolian::in_traits<bool>::type enabled) const
{
     ::efl_ui_win_focus_highlight_enabled_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enabled));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Win::focus_highlight_style_get() const
{
    const char * __return_value =  ::efl_ui_win_focus_highlight_style_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Win::focus_highlight_style_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type style) const
{
    Eina_Bool __return_value =  ::efl_ui_win_focus_highlight_style_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(style));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Win::focus_highlight_animate_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_focus_highlight_animate_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::focus_highlight_animate_set( ::efl::eolian::in_traits<bool>::type animate) const
{
     ::efl_ui_win_focus_highlight_animate_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(animate));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::stack_pop_to() const
{
     ::efl_ui_win_stack_pop_to(_eo_ptr());
}
#endif
inline ::efl::eolian::return_traits<void>::type Win::activate() const
{
     ::efl_ui_win_activate(_eo_ptr());
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::center( ::efl::eolian::in_traits<bool>::type h,  ::efl::eolian::in_traits<bool>::type v) const
{
     ::efl_ui_win_center(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(h),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(v));
}
#endif
inline ::efl::eolian::return_traits<bool>::type Win::move_resize_start( ::efl::eolian::in_traits<Efl_Ui_Win_Move_Resize_Mode>::type mode) const
{
    Eina_Bool __return_value =  ::efl_ui_win_move_resize_start(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Win_Move_Resize_Mode,  ::efl::eolian::in_traits<Efl_Ui_Win_Move_Resize_Mode>::type>(mode));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::input::Pointer>>::type Win::pointer_iterate( ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type hover) const
{
    Eina_Iterator * __return_value =  ::efl_ui_win_pointer_iterate(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type>(hover));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::input::Pointer>>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<Efl_Ui_Win_Indicator_Mode>::type Win::indicator_mode_get() const
{
    Efl_Ui_Win_Indicator_Mode __return_value =  ::efl_ui_win_indicator_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Win_Indicator_Mode>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::indicator_mode_set( ::efl::eolian::in_traits<Efl_Ui_Win_Indicator_Mode>::type type) const
{
     ::efl_ui_win_indicator_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Win_Indicator_Mode,  ::efl::eolian::in_traits<Efl_Ui_Win_Indicator_Mode>::type>(type));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Win_Keyboard_Mode>::type Win::keyboard_mode_get() const
{
    Efl_Ui_Win_Keyboard_Mode __return_value =  ::efl_ui_win_keyboard_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Win_Keyboard_Mode>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::keyboard_mode_set( ::efl::eolian::in_traits<Efl_Ui_Win_Keyboard_Mode>::type mode) const
{
     ::efl_ui_win_keyboard_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Win_Keyboard_Mode,  ::efl::eolian::in_traits<Efl_Ui_Win_Keyboard_Mode>::type>(mode));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Win::wm_available_rotations_get( ::efl::eolian::out_traits<bool>::type allow_0,  ::efl::eolian::out_traits<bool>::type allow_90,  ::efl::eolian::out_traits<bool>::type allow_180,  ::efl::eolian::out_traits<bool>::type allow_270) const
{
    Eina_Bool __out_param_allow_0 = {};
    Eina_Bool __out_param_allow_90 = {};
    Eina_Bool __out_param_allow_180 = {};
    Eina_Bool __out_param_allow_270 = {};
    Eina_Bool __return_value =  ::efl_ui_win_wm_available_rotations_get(_eo_ptr(),
        & __out_param_allow_0,
        & __out_param_allow_90,
        & __out_param_allow_180,
        & __out_param_allow_270);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(allow_0, __out_param_allow_0);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(allow_90, __out_param_allow_90);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(allow_180, __out_param_allow_180);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(allow_270, __out_param_allow_270);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::wm_available_rotations_set( ::efl::eolian::in_traits<bool>::type allow_0,  ::efl::eolian::in_traits<bool>::type allow_90,  ::efl::eolian::in_traits<bool>::type allow_180,  ::efl::eolian::in_traits<bool>::type allow_270) const
{
     ::efl_ui_win_wm_available_rotations_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(allow_0),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(allow_90),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(allow_180),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(allow_270));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type Win::wm_available_profiles_get() const
{
    const Eina_Array * __return_value =  ::efl_ui_win_wm_available_profiles_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::wm_available_profiles_set( ::efl::eolian::in_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type profiles) const
{
     ::efl_ui_win_wm_available_profiles_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Array *,  ::efl::eolian::in_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type>(profiles));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Win::screen_constrain_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_screen_constrain_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::screen_constrain_set( ::efl::eolian::in_traits<bool>::type constrain) const
{
     ::efl_ui_win_screen_constrain_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(constrain));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::prop_focus_skip_set( ::efl::eolian::in_traits<bool>::type skip) const
{
     ::efl_ui_win_prop_focus_skip_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(skip));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Win::autohide_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_autohide_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::autohide_set( ::efl::eolian::in_traits<bool>::type autohide) const
{
     ::efl_ui_win_autohide_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(autohide));
}
#endif
inline ::efl::eolian::return_traits< ::efl::eina::value_view const>::type Win::exit_on_close_get() const
{
    const Eina_Value * __return_value =  ::efl_ui_win_exit_on_close_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::value_view const>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::exit_on_close_set( ::efl::eolian::in_traits< ::efl::eina::value_view const>::type exit_code) const
{
     ::efl_ui_win_exit_on_close_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Value *,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type>(exit_code));
}
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Win::icon_object_get() const
{
     ::Efl_Canvas_Object const* __return_value =  ::efl_ui_win_icon_object_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::icon_object_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type icon) const
{
     ::efl_ui_win_icon_object_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(icon));
}
inline ::efl::eolian::return_traits<bool>::type Win::minimized_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_minimized_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::minimized_set( ::efl::eolian::in_traits<bool>::type state) const
{
     ::efl_ui_win_minimized_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(state));
}
inline ::efl::eolian::return_traits<bool>::type Win::maximized_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_maximized_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::maximized_set( ::efl::eolian::in_traits<bool>::type maximized) const
{
     ::efl_ui_win_maximized_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(maximized));
}
inline ::efl::eolian::return_traits<bool>::type Win::fullscreen_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_fullscreen_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::fullscreen_set( ::efl::eolian::in_traits<bool>::type fullscreen) const
{
     ::efl_ui_win_fullscreen_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(fullscreen));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Win::sticky_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_sticky_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::sticky_set( ::efl::eolian::in_traits<bool>::type sticky) const
{
     ::efl_ui_win_sticky_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(sticky));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Win_Urgent_Mode>::type Win::urgent_get() const
{
    Efl_Ui_Win_Urgent_Mode __return_value =  ::efl_ui_win_urgent_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Win_Urgent_Mode>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::urgent_set( ::efl::eolian::in_traits<Efl_Ui_Win_Urgent_Mode>::type urgent) const
{
     ::efl_ui_win_urgent_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Win_Urgent_Mode,  ::efl::eolian::in_traits<Efl_Ui_Win_Urgent_Mode>::type>(urgent));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Win_Modal_Mode>::type Win::modal_get() const
{
    Efl_Ui_Win_Modal_Mode __return_value =  ::efl_ui_win_modal_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Win_Modal_Mode>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::modal_set( ::efl::eolian::in_traits<Efl_Ui_Win_Modal_Mode>::type modal) const
{
     ::efl_ui_win_modal_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Win_Modal_Mode,  ::efl::eolian::in_traits<Efl_Ui_Win_Modal_Mode>::type>(modal));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Win::borderless_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_borderless_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::borderless_set( ::efl::eolian::in_traits<bool>::type borderless) const
{
     ::efl_ui_win_borderless_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(borderless));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Win::win_role_get() const
{
    const char * __return_value =  ::efl_ui_win_role_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::win_role_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type role) const
{
     ::efl_ui_win_role_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(role));
}
#endif
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Win::win_name_get() const
{
    const char * __return_value =  ::efl_ui_win_name_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::win_name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
     ::efl_ui_win_name_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Win_Type>::type Win::win_type_get() const
{
    Efl_Ui_Win_Type __return_value =  ::efl_ui_win_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Win_Type>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::win_type_set( ::efl::eolian::in_traits<Efl_Ui_Win_Type>::type type) const
{
     ::efl_ui_win_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Win_Type,  ::efl::eolian::in_traits<Efl_Ui_Win_Type>::type>(type));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Win::accel_preference_get() const
{
    const char * __return_value =  ::efl_ui_win_accel_preference_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::accel_preference_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type accel) const
{
     ::efl_ui_win_accel_preference_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(accel));
}
#endif
inline ::efl::eolian::return_traits<bool>::type Win::alpha_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_alpha_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::alpha_set( ::efl::eolian::in_traits<bool>::type alpha) const
{
     ::efl_ui_win_alpha_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(alpha));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Win::stack_id_get() const
{
    const char * __return_value =  ::efl_ui_win_stack_id_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Win::stack_master_id_get() const
{
    const char * __return_value =  ::efl_ui_win_stack_master_id_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::stack_master_id_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type id) const
{
     ::efl_ui_win_stack_master_id_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(id));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Win::stack_base_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_stack_base_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::stack_base_set( ::efl::eolian::in_traits<bool>::type base) const
{
     ::efl_ui_win_stack_base_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(base));
}
#endif
inline ::efl::eolian::return_traits< ::efl::eina::value_view const>::type Win::exit_on_all_windows_closed_get()
{
    const Eina_Value * __return_value =  ::efl_ui_win_exit_on_all_windows_closed_get();
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::value_view const>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::exit_on_all_windows_closed_set( ::efl::eolian::in_traits< ::efl::eina::value_view const>::type exit_code)
{
     ::efl_ui_win_exit_on_all_windows_closed_set(
         ::efl::eolian::convert_to_c<const Eina_Value *,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type>(exit_code));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Win::hint_base_get() const
{
    Eina_Size2D __return_value =  ::efl_ui_win_hint_base_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::hint_base_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const
{
     ::efl_ui_win_hint_base_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(sz));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Win::hint_step_get() const
{
    Eina_Size2D __return_value =  ::efl_ui_win_hint_step_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::hint_step_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const
{
     ::efl_ui_win_hint_step_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(sz));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Win::win_rotation_get() const
{
    int __return_value =  ::efl_ui_win_rotation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::win_rotation_set( ::efl::eolian::in_traits<int>::type rotation) const
{
     ::efl_ui_win_rotation_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(rotation));
}
#endif
inline ::efl::eolian::return_traits<bool>::type Win::focus_highlight_enabled_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_focus_highlight_enabled_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::focus_highlight_enabled_set( ::efl::eolian::in_traits<bool>::type enabled) const
{
     ::efl_ui_win_focus_highlight_enabled_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enabled));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Win::focus_highlight_style_get() const
{
    const char * __return_value =  ::efl_ui_win_focus_highlight_style_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Win::focus_highlight_style_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type style) const
{
    Eina_Bool __return_value =  ::efl_ui_win_focus_highlight_style_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(style));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Win::focus_highlight_animate_get() const
{
    Eina_Bool __return_value =  ::efl_ui_win_focus_highlight_animate_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Win::focus_highlight_animate_set( ::efl::eolian::in_traits<bool>::type animate) const
{
     ::efl_ui_win_focus_highlight_animate_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(animate));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::stack_pop_to() const
{
     ::efl_ui_win_stack_pop_to(_eo_ptr());
}
#endif
inline ::efl::eolian::return_traits<void>::type Win::activate() const
{
     ::efl_ui_win_activate(_eo_ptr());
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Win::center( ::efl::eolian::in_traits<bool>::type h,  ::efl::eolian::in_traits<bool>::type v) const
{
     ::efl_ui_win_center(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(h),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(v));
}
#endif
inline ::efl::eolian::return_traits<bool>::type Win::move_resize_start( ::efl::eolian::in_traits<Efl_Ui_Win_Move_Resize_Mode>::type mode) const
{
    Eina_Bool __return_value =  ::efl_ui_win_move_resize_start(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Win_Move_Resize_Mode,  ::efl::eolian::in_traits<Efl_Ui_Win_Move_Resize_Mode>::type>(mode));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::input::Pointer>>::type Win::pointer_iterate( ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type hover) const
{
    Eina_Iterator * __return_value =  ::efl_ui_win_pointer_iterate(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type>(hover));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::input::Pointer>>::type>(__return_value);
}
#endif
inline efl::ui::Win::operator ::efl::ui::Win() const { return *static_cast< ::efl::ui::Win const*>(static_cast<void const*>(this)); }
inline efl::ui::Win::operator ::efl::ui::Win&() { return *static_cast< ::efl::ui::Win*>(static_cast<void*>(this)); }
inline efl::ui::Win::operator ::efl::ui::Win const&() const { return *static_cast< ::efl::ui::Win const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
