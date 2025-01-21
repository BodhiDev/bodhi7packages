#ifndef EFL_UI_SCROLLABLE_IMPL_HH
#define EFL_UI_SCROLLABLE_IMPL_HH

#include "efl_ui_scrollable.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<Eina_Position2D>::type Scrollable::content_pos_get() const
{
    Eina_Position2D __return_value =  ::efl_ui_scrollable_content_pos_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Scrollable::content_pos_set( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const
{
     ::efl_ui_scrollable_content_pos_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(pos));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Scrollable::content_size_get() const
{
    Eina_Size2D __return_value =  ::efl_ui_scrollable_content_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Rect>::type Scrollable::viewport_geometry_get() const
{
    Eina_Rect __return_value =  ::efl_ui_scrollable_viewport_geometry_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Scrollable::bounce_enabled_get( ::efl::eolian::out_traits<bool>::type horiz,  ::efl::eolian::out_traits<bool>::type vert) const
{
    Eina_Bool __out_param_horiz = {};
    Eina_Bool __out_param_vert = {};
     ::efl_ui_scrollable_bounce_enabled_get(_eo_ptr(),
        & __out_param_horiz,
        & __out_param_vert);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(horiz, __out_param_horiz);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(vert, __out_param_vert);
}
inline ::efl::eolian::return_traits<void>::type Scrollable::bounce_enabled_set( ::efl::eolian::in_traits<bool>::type horiz,  ::efl::eolian::in_traits<bool>::type vert) const
{
     ::efl_ui_scrollable_bounce_enabled_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(horiz),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(vert));
}
inline ::efl::eolian::return_traits<bool>::type Scrollable::scroll_freeze_get() const
{
    Eina_Bool __return_value =  ::efl_ui_scrollable_scroll_freeze_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Scrollable::scroll_freeze_set( ::efl::eolian::in_traits<bool>::type freeze) const
{
     ::efl_ui_scrollable_scroll_freeze_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(freeze));
}
inline ::efl::eolian::return_traits<bool>::type Scrollable::scroll_hold_get() const
{
    Eina_Bool __return_value =  ::efl_ui_scrollable_scroll_hold_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Scrollable::scroll_hold_set( ::efl::eolian::in_traits<bool>::type hold) const
{
     ::efl_ui_scrollable_scroll_hold_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(hold));
}
inline ::efl::eolian::return_traits<void>::type Scrollable::looping_get( ::efl::eolian::out_traits<bool>::type loop_h,  ::efl::eolian::out_traits<bool>::type loop_v) const
{
    Eina_Bool __out_param_loop_h = {};
    Eina_Bool __out_param_loop_v = {};
     ::efl_ui_scrollable_looping_get(_eo_ptr(),
        & __out_param_loop_h,
        & __out_param_loop_v);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(loop_h, __out_param_loop_h);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(loop_v, __out_param_loop_v);
}
inline ::efl::eolian::return_traits<void>::type Scrollable::looping_set( ::efl::eolian::in_traits<bool>::type loop_h,  ::efl::eolian::in_traits<bool>::type loop_v) const
{
     ::efl_ui_scrollable_looping_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(loop_h),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(loop_v));
}
inline ::efl::eolian::return_traits<Efl_Ui_Layout_Orientation>::type Scrollable::movement_block_get() const
{
    Efl_Ui_Layout_Orientation __return_value =  ::efl_ui_scrollable_movement_block_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Layout_Orientation>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Scrollable::movement_block_set( ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type block) const
{
     ::efl_ui_scrollable_movement_block_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Layout_Orientation,  ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type>(block));
}
inline ::efl::eolian::return_traits<void>::type Scrollable::gravity_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const
{
    double __out_param_x = {};
    double __out_param_y = {};
     ::efl_ui_scrollable_gravity_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(y, __out_param_y);
}
inline ::efl::eolian::return_traits<void>::type Scrollable::gravity_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_ui_scrollable_gravity_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
inline ::efl::eolian::return_traits<void>::type Scrollable::match_content_set( ::efl::eolian::in_traits<bool>::type w,  ::efl::eolian::in_traits<bool>::type h) const
{
     ::efl_ui_scrollable_match_content_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(w),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(h));
}
inline ::efl::eolian::return_traits<Eina_Position2D>::type Scrollable::step_size_get() const
{
    Eina_Position2D __return_value =  ::efl_ui_scrollable_step_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Scrollable::step_size_set( ::efl::eolian::in_traits<Eina_Position2D>::type step) const
{
     ::efl_ui_scrollable_step_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(step));
}
inline ::efl::eolian::return_traits<void>::type Scrollable::scroll( ::efl::eolian::in_traits<Eina_Rect>::type rect,  ::efl::eolian::in_traits<bool>::type animation) const
{
     ::efl_ui_scrollable_scroll(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(rect),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(animation));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<Eina_Position2D>::type Scrollable::content_pos_get() const
{
    Eina_Position2D __return_value =  ::efl_ui_scrollable_content_pos_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Scrollable::content_pos_set( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const
{
     ::efl_ui_scrollable_content_pos_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(pos));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Scrollable::content_size_get() const
{
    Eina_Size2D __return_value =  ::efl_ui_scrollable_content_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Rect>::type Scrollable::viewport_geometry_get() const
{
    Eina_Rect __return_value =  ::efl_ui_scrollable_viewport_geometry_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Scrollable::bounce_enabled_get( ::efl::eolian::out_traits<bool>::type horiz,  ::efl::eolian::out_traits<bool>::type vert) const
{
    Eina_Bool __out_param_horiz = {};
    Eina_Bool __out_param_vert = {};
     ::efl_ui_scrollable_bounce_enabled_get(_eo_ptr(),
        & __out_param_horiz,
        & __out_param_vert);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(horiz, __out_param_horiz);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(vert, __out_param_vert);
}
inline ::efl::eolian::return_traits<void>::type Scrollable::bounce_enabled_set( ::efl::eolian::in_traits<bool>::type horiz,  ::efl::eolian::in_traits<bool>::type vert) const
{
     ::efl_ui_scrollable_bounce_enabled_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(horiz),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(vert));
}
inline ::efl::eolian::return_traits<bool>::type Scrollable::scroll_freeze_get() const
{
    Eina_Bool __return_value =  ::efl_ui_scrollable_scroll_freeze_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Scrollable::scroll_freeze_set( ::efl::eolian::in_traits<bool>::type freeze) const
{
     ::efl_ui_scrollable_scroll_freeze_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(freeze));
}
inline ::efl::eolian::return_traits<bool>::type Scrollable::scroll_hold_get() const
{
    Eina_Bool __return_value =  ::efl_ui_scrollable_scroll_hold_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Scrollable::scroll_hold_set( ::efl::eolian::in_traits<bool>::type hold) const
{
     ::efl_ui_scrollable_scroll_hold_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(hold));
}
inline ::efl::eolian::return_traits<void>::type Scrollable::looping_get( ::efl::eolian::out_traits<bool>::type loop_h,  ::efl::eolian::out_traits<bool>::type loop_v) const
{
    Eina_Bool __out_param_loop_h = {};
    Eina_Bool __out_param_loop_v = {};
     ::efl_ui_scrollable_looping_get(_eo_ptr(),
        & __out_param_loop_h,
        & __out_param_loop_v);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(loop_h, __out_param_loop_h);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(loop_v, __out_param_loop_v);
}
inline ::efl::eolian::return_traits<void>::type Scrollable::looping_set( ::efl::eolian::in_traits<bool>::type loop_h,  ::efl::eolian::in_traits<bool>::type loop_v) const
{
     ::efl_ui_scrollable_looping_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(loop_h),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(loop_v));
}
inline ::efl::eolian::return_traits<Efl_Ui_Layout_Orientation>::type Scrollable::movement_block_get() const
{
    Efl_Ui_Layout_Orientation __return_value =  ::efl_ui_scrollable_movement_block_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Layout_Orientation>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Scrollable::movement_block_set( ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type block) const
{
     ::efl_ui_scrollable_movement_block_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Layout_Orientation,  ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type>(block));
}
inline ::efl::eolian::return_traits<void>::type Scrollable::gravity_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const
{
    double __out_param_x = {};
    double __out_param_y = {};
     ::efl_ui_scrollable_gravity_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(y, __out_param_y);
}
inline ::efl::eolian::return_traits<void>::type Scrollable::gravity_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_ui_scrollable_gravity_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
inline ::efl::eolian::return_traits<void>::type Scrollable::match_content_set( ::efl::eolian::in_traits<bool>::type w,  ::efl::eolian::in_traits<bool>::type h) const
{
     ::efl_ui_scrollable_match_content_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(w),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(h));
}
inline ::efl::eolian::return_traits<Eina_Position2D>::type Scrollable::step_size_get() const
{
    Eina_Position2D __return_value =  ::efl_ui_scrollable_step_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Scrollable::step_size_set( ::efl::eolian::in_traits<Eina_Position2D>::type step) const
{
     ::efl_ui_scrollable_step_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(step));
}
inline ::efl::eolian::return_traits<void>::type Scrollable::scroll( ::efl::eolian::in_traits<Eina_Rect>::type rect,  ::efl::eolian::in_traits<bool>::type animation) const
{
     ::efl_ui_scrollable_scroll(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(rect),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(animation));
}
inline efl::ui::Scrollable::operator ::efl::ui::Scrollable() const { return *static_cast< ::efl::ui::Scrollable const*>(static_cast<void const*>(this)); }
inline efl::ui::Scrollable::operator ::efl::ui::Scrollable&() { return *static_cast< ::efl::ui::Scrollable*>(static_cast<void*>(this)); }
inline efl::ui::Scrollable::operator ::efl::ui::Scrollable const&() const { return *static_cast< ::efl::ui::Scrollable const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
