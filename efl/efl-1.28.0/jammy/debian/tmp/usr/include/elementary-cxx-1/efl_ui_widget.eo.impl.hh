#ifndef EFL_UI_WIDGET_IMPL_HH
#define EFL_UI_WIDGET_IMPL_HH

#include "efl_ui_widget.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Widget::cursor_get() const
{
    const char * __return_value =  ::efl_ui_widget_cursor_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Widget::cursor_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type cursor) const
{
    Eina_Bool __return_value =  ::efl_ui_widget_cursor_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(cursor));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Widget::cursor_style_get() const
{
    const char * __return_value =  ::efl_ui_widget_cursor_style_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Widget::cursor_style_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type style) const
{
    Eina_Bool __return_value =  ::efl_ui_widget_cursor_style_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(style));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Widget::cursor_theme_search_enabled_get() const
{
    Eina_Bool __return_value =  ::efl_ui_widget_cursor_theme_search_enabled_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Widget::cursor_theme_search_enabled_set( ::efl::eolian::in_traits<bool>::type allow) const
{
    Eina_Bool __return_value =  ::efl_ui_widget_cursor_theme_search_enabled_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(allow));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<void>::type Widget::resize_object_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type sobj) const
{
     ::efl_ui_widget_resize_object_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(sobj));
}
#endif
inline ::efl::eolian::return_traits<bool>::type Widget::disabled_get() const
{
    Eina_Bool __return_value =  ::efl_ui_widget_disabled_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Widget::disabled_set( ::efl::eolian::in_traits<bool>::type disabled) const
{
     ::efl_ui_widget_disabled_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(disabled));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Widget::style_get() const
{
    const char * __return_value =  ::efl_ui_widget_style_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Error>::type Widget::style_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type style) const
{
    Eina_Error __return_value =  ::efl_ui_widget_style_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(style));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Widget::focus_allow_get() const
{
    Eina_Bool __return_value =  ::efl_ui_widget_focus_allow_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Widget::focus_allow_set( ::efl::eolian::in_traits<bool>::type can_focus) const
{
     ::efl_ui_widget_focus_allow_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(can_focus));
}
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits< ::efl::ui::Widget>::type Widget::widget_parent_get() const
{
     ::Efl_Ui_Widget* __return_value =  ::efl_ui_widget_parent_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Widget>::type>(__return_value);
}
#endif
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<void>::type Widget::widget_parent_set( ::efl::eolian::in_traits< ::efl::ui::Widget>::type parent) const
{
     ::efl_ui_widget_parent_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Widget*,  ::efl::eolian::in_traits< ::efl::ui::Widget>::type>(parent));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Widget::access_info_get() const
{
    const char * __return_value =  ::efl_ui_widget_access_info_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Widget::access_info_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type txt) const
{
     ::efl_ui_widget_access_info_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(txt));
}
#endif
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<Eina_Rect>::type Widget::interest_region_get() const
{
    Eina_Rect __return_value =  ::efl_ui_widget_interest_region_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
#endif
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<Eina_Rect>::type Widget::focus_highlight_geometry_get() const
{
    Eina_Rect __return_value =  ::efl_ui_widget_focus_highlight_geometry_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Focus_Move_Policy>::type Widget::focus_move_policy_get() const
{
    Efl_Ui_Focus_Move_Policy __return_value =  ::efl_ui_widget_focus_move_policy_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Focus_Move_Policy>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Widget::focus_move_policy_set( ::efl::eolian::in_traits<Efl_Ui_Focus_Move_Policy>::type policy) const
{
     ::efl_ui_widget_focus_move_policy_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Focus_Move_Policy,  ::efl::eolian::in_traits<Efl_Ui_Focus_Move_Policy>::type>(policy));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Widget::focus_move_policy_automatic_get() const
{
    Eina_Bool __return_value =  ::efl_ui_widget_focus_move_policy_automatic_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Widget::focus_move_policy_automatic_set( ::efl::eolian::in_traits<bool>::type automatic) const
{
     ::efl_ui_widget_focus_move_policy_automatic_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(automatic));
}
#endif
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Widget::widget_input_event_handler( ::efl::eolian::in_traits< Efl_Event*>::type eo_event,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type source) const
{
    Eina_Bool __return_value =  ::efl_ui_widget_input_event_handler(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Efl_Event *,  ::efl::eolian::in_traits< Efl_Event*>::type>(eo_event),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(source));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Widget::on_access_activate( ::efl::eolian::in_traits<Efl_Ui_Activate>::type act) const
{
    Eina_Bool __return_value =  ::efl_ui_widget_on_access_activate(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Activate,  ::efl::eolian::in_traits<Efl_Ui_Activate>::type>(act));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<void>::type Widget::on_access_update( ::efl::eolian::in_traits<bool>::type enable) const
{
     ::efl_ui_widget_on_access_update(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enable));
}
#endif
#endif
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Widget::widget_sub_object_add( ::efl::eolian::in_traits< ::efl::canvas::Object>::type sub_obj) const
{
    Eina_Bool __return_value =  ::efl_ui_widget_sub_object_add(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(sub_obj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Widget::widget_sub_object_del( ::efl::eolian::in_traits< ::efl::canvas::Object>::type sub_obj) const
{
    Eina_Bool __return_value =  ::efl_ui_widget_sub_object_del(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(sub_obj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<Eina_Error>::type Widget::theme_apply() const
{
    Eina_Error __return_value =  ::efl_ui_widget_theme_apply(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Widget::scroll_hold_push() const
{
     ::efl_ui_widget_scroll_hold_push(_eo_ptr());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Widget::scroll_hold_pop() const
{
     ::efl_ui_widget_scroll_hold_pop(_eo_ptr());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Widget::scroll_freeze_push() const
{
     ::efl_ui_widget_scroll_freeze_push(_eo_ptr());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Widget::scroll_freeze_pop() const
{
     ::efl_ui_widget_scroll_freeze_pop(_eo_ptr());
}
#endif
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Widget::focus_state_apply( ::efl::eolian::in_traits<Efl_Ui_Widget_Focus_State>::type current_state,  ::efl::eolian::inout_traits<Efl_Ui_Widget_Focus_State>::type configured_state,  ::efl::eolian::in_traits< ::efl::ui::Widget>::type redirect) const
{
    Efl_Ui_Widget_Focus_State __out_param_configured_state = ::efl::eolian::convert_inout<Efl_Ui_Widget_Focus_State, Efl_Ui_Widget_Focus_State>(configured_state);
    Eina_Bool __return_value =  ::efl_ui_widget_focus_state_apply(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Widget_Focus_State,  ::efl::eolian::in_traits<Efl_Ui_Widget_Focus_State>::type>(current_state),
        & __out_param_configured_state,
         ::efl::eolian::convert_to_c< ::Efl_Ui_Widget*,  ::efl::eolian::in_traits< ::efl::ui::Widget>::type>(redirect));
    ::efl::eolian::assign_out< ::efl::eolian::inout_traits<Efl_Ui_Widget_Focus_State>::type, Efl_Ui_Widget_Focus_State>(configured_state, __out_param_configured_state);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Widget_Part_Bg>::type Widget::background() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "background");
    return ::efl::ui::Widget_Part_Bg{__return_value};
}
#endif
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Widget_Part_Shadow>::type Widget::shadow() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "shadow");
    return ::efl::ui::Widget_Part_Shadow{__return_value};
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Widget::cursor_get() const
{
    const char * __return_value =  ::efl_ui_widget_cursor_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Widget::cursor_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type cursor) const
{
    Eina_Bool __return_value =  ::efl_ui_widget_cursor_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(cursor));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Widget::cursor_style_get() const
{
    const char * __return_value =  ::efl_ui_widget_cursor_style_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Widget::cursor_style_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type style) const
{
    Eina_Bool __return_value =  ::efl_ui_widget_cursor_style_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(style));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Widget::cursor_theme_search_enabled_get() const
{
    Eina_Bool __return_value =  ::efl_ui_widget_cursor_theme_search_enabled_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Widget::cursor_theme_search_enabled_set( ::efl::eolian::in_traits<bool>::type allow) const
{
    Eina_Bool __return_value =  ::efl_ui_widget_cursor_theme_search_enabled_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(allow));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<void>::type Widget::resize_object_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type sobj) const
{
     ::efl_ui_widget_resize_object_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(sobj));
}
#endif
inline ::efl::eolian::return_traits<bool>::type Widget::disabled_get() const
{
    Eina_Bool __return_value =  ::efl_ui_widget_disabled_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Widget::disabled_set( ::efl::eolian::in_traits<bool>::type disabled) const
{
     ::efl_ui_widget_disabled_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(disabled));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Widget::style_get() const
{
    const char * __return_value =  ::efl_ui_widget_style_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Error>::type Widget::style_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type style) const
{
    Eina_Error __return_value =  ::efl_ui_widget_style_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(style));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Widget::focus_allow_get() const
{
    Eina_Bool __return_value =  ::efl_ui_widget_focus_allow_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Widget::focus_allow_set( ::efl::eolian::in_traits<bool>::type can_focus) const
{
     ::efl_ui_widget_focus_allow_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(can_focus));
}
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits< ::efl::ui::Widget>::type Widget::widget_parent_get() const
{
     ::Efl_Ui_Widget* __return_value =  ::efl_ui_widget_parent_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Widget>::type>(__return_value);
}
#endif
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<void>::type Widget::widget_parent_set( ::efl::eolian::in_traits< ::efl::ui::Widget>::type parent) const
{
     ::efl_ui_widget_parent_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Widget*,  ::efl::eolian::in_traits< ::efl::ui::Widget>::type>(parent));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Widget::access_info_get() const
{
    const char * __return_value =  ::efl_ui_widget_access_info_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Widget::access_info_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type txt) const
{
     ::efl_ui_widget_access_info_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(txt));
}
#endif
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<Eina_Rect>::type Widget::interest_region_get() const
{
    Eina_Rect __return_value =  ::efl_ui_widget_interest_region_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
#endif
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<Eina_Rect>::type Widget::focus_highlight_geometry_get() const
{
    Eina_Rect __return_value =  ::efl_ui_widget_focus_highlight_geometry_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Focus_Move_Policy>::type Widget::focus_move_policy_get() const
{
    Efl_Ui_Focus_Move_Policy __return_value =  ::efl_ui_widget_focus_move_policy_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Focus_Move_Policy>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Widget::focus_move_policy_set( ::efl::eolian::in_traits<Efl_Ui_Focus_Move_Policy>::type policy) const
{
     ::efl_ui_widget_focus_move_policy_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Focus_Move_Policy,  ::efl::eolian::in_traits<Efl_Ui_Focus_Move_Policy>::type>(policy));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Widget::focus_move_policy_automatic_get() const
{
    Eina_Bool __return_value =  ::efl_ui_widget_focus_move_policy_automatic_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Widget::focus_move_policy_automatic_set( ::efl::eolian::in_traits<bool>::type automatic) const
{
     ::efl_ui_widget_focus_move_policy_automatic_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(automatic));
}
#endif
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Widget::widget_input_event_handler( ::efl::eolian::in_traits< Efl_Event*>::type eo_event,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type source) const
{
    Eina_Bool __return_value =  ::efl_ui_widget_input_event_handler(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Efl_Event *,  ::efl::eolian::in_traits< Efl_Event*>::type>(eo_event),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(source));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Widget::on_access_activate( ::efl::eolian::in_traits<Efl_Ui_Activate>::type act) const
{
    Eina_Bool __return_value =  ::efl_ui_widget_on_access_activate(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Activate,  ::efl::eolian::in_traits<Efl_Ui_Activate>::type>(act));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<void>::type Widget::on_access_update( ::efl::eolian::in_traits<bool>::type enable) const
{
     ::efl_ui_widget_on_access_update(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enable));
}
#endif
#endif
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Widget::widget_sub_object_add( ::efl::eolian::in_traits< ::efl::canvas::Object>::type sub_obj) const
{
    Eina_Bool __return_value =  ::efl_ui_widget_sub_object_add(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(sub_obj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Widget::widget_sub_object_del( ::efl::eolian::in_traits< ::efl::canvas::Object>::type sub_obj) const
{
    Eina_Bool __return_value =  ::efl_ui_widget_sub_object_del(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(sub_obj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<Eina_Error>::type Widget::theme_apply() const
{
    Eina_Error __return_value =  ::efl_ui_widget_theme_apply(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Widget::scroll_hold_push() const
{
     ::efl_ui_widget_scroll_hold_push(_eo_ptr());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Widget::scroll_hold_pop() const
{
     ::efl_ui_widget_scroll_hold_pop(_eo_ptr());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Widget::scroll_freeze_push() const
{
     ::efl_ui_widget_scroll_freeze_push(_eo_ptr());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Widget::scroll_freeze_pop() const
{
     ::efl_ui_widget_scroll_freeze_pop(_eo_ptr());
}
#endif
#ifdef EFL_UI_WIDGET_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Widget::focus_state_apply( ::efl::eolian::in_traits<Efl_Ui_Widget_Focus_State>::type current_state,  ::efl::eolian::inout_traits<Efl_Ui_Widget_Focus_State>::type configured_state,  ::efl::eolian::in_traits< ::efl::ui::Widget>::type redirect) const
{
    Efl_Ui_Widget_Focus_State __out_param_configured_state = ::efl::eolian::convert_inout<Efl_Ui_Widget_Focus_State, Efl_Ui_Widget_Focus_State>(configured_state);
    Eina_Bool __return_value =  ::efl_ui_widget_focus_state_apply(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Widget_Focus_State,  ::efl::eolian::in_traits<Efl_Ui_Widget_Focus_State>::type>(current_state),
        & __out_param_configured_state,
         ::efl::eolian::convert_to_c< ::Efl_Ui_Widget*,  ::efl::eolian::in_traits< ::efl::ui::Widget>::type>(redirect));
    ::efl::eolian::assign_out< ::efl::eolian::inout_traits<Efl_Ui_Widget_Focus_State>::type, Efl_Ui_Widget_Focus_State>(configured_state, __out_param_configured_state);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Widget_Part_Bg>::type Widget::background() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "background");
    return ::efl::ui::Widget_Part_Bg{__return_value};
}
#endif
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Widget_Part_Shadow>::type Widget::shadow() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "shadow");
    return ::efl::ui::Widget_Part_Shadow{__return_value};
}
#endif
inline efl::ui::Widget::operator ::efl::ui::Widget() const { return *static_cast< ::efl::ui::Widget const*>(static_cast<void const*>(this)); }
inline efl::ui::Widget::operator ::efl::ui::Widget&() { return *static_cast< ::efl::ui::Widget*>(static_cast<void*>(this)); }
inline efl::ui::Widget::operator ::efl::ui::Widget const&() const { return *static_cast< ::efl::ui::Widget const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
