#ifndef EFL_CANVAS_OBJECT_IMPL_HH
#define EFL_CANVAS_OBJECT_IMPL_HH

#include "efl_canvas_object.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Input_Object_Pointer_Mode>::type Object::pointer_mode_by_device_get( ::efl::eolian::in_traits< ::efl::input::Device>::type dev) const
{
    Efl_Input_Object_Pointer_Mode __return_value =  ::efl_canvas_object_pointer_mode_by_device_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(dev));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Object_Pointer_Mode>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::pointer_mode_by_device_set( ::efl::eolian::in_traits< ::efl::input::Device>::type dev,  ::efl::eolian::in_traits<Efl_Input_Object_Pointer_Mode>::type pointer_mode) const
{
    Eina_Bool __return_value =  ::efl_canvas_object_pointer_mode_by_device_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(dev),
         ::efl::eolian::convert_to_c<Efl_Input_Object_Pointer_Mode,  ::efl::eolian::in_traits<Efl_Input_Object_Pointer_Mode>::type>(pointer_mode));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Input_Object_Pointer_Mode>::type Object::pointer_mode_get() const
{
    Efl_Input_Object_Pointer_Mode __return_value =  ::efl_canvas_object_pointer_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Object_Pointer_Mode>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::pointer_mode_set( ::efl::eolian::in_traits<Efl_Input_Object_Pointer_Mode>::type pointer_mode) const
{
    Eina_Bool __return_value =  ::efl_canvas_object_pointer_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Object_Pointer_Mode,  ::efl::eolian::in_traits<Efl_Input_Object_Pointer_Mode>::type>(pointer_mode));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits<Efl_Gfx_Render_Op>::type Object::render_op_get() const
{
    Efl_Gfx_Render_Op __return_value =  ::efl_canvas_object_render_op_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Render_Op>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::render_op_set( ::efl::eolian::in_traits<Efl_Gfx_Render_Op>::type render_op) const
{
     ::efl_canvas_object_render_op_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Render_Op,  ::efl::eolian::in_traits<Efl_Gfx_Render_Op>::type>(render_op));
}
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Object::clipper_get() const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_canvas_object_clipper_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::clipper_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type clipper) const
{
     ::efl_canvas_object_clipper_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(clipper));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::has_fixed_size_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_has_fixed_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::has_fixed_size_set( ::efl::eolian::in_traits<bool>::type enable) const
{
     ::efl_canvas_object_has_fixed_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enable));
}
#endif
inline ::efl::eolian::return_traits<bool>::type Object::repeat_events_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_repeat_events_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::repeat_events_set( ::efl::eolian::in_traits<bool>::type repeat) const
{
     ::efl_canvas_object_repeat_events_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(repeat));
}
inline ::efl::eolian::return_traits<bool>::type Object::key_focus_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_key_focus_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::key_focus_set( ::efl::eolian::in_traits<bool>::type focus) const
{
     ::efl_canvas_object_key_focus_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(focus));
}
inline ::efl::eolian::return_traits<bool>::type Object::seat_focus_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_seat_focus_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::precise_is_inside_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_precise_is_inside_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::precise_is_inside_set( ::efl::eolian::in_traits<bool>::type precise) const
{
     ::efl_canvas_object_precise_is_inside_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(precise));
}
inline ::efl::eolian::return_traits<bool>::type Object::propagate_events_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_propagate_events_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::propagate_events_set( ::efl::eolian::in_traits<bool>::type propagate) const
{
     ::efl_canvas_object_propagate_events_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(propagate));
}
inline ::efl::eolian::return_traits<bool>::type Object::pass_events_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_pass_events_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::pass_events_set( ::efl::eolian::in_traits<bool>::type pass) const
{
     ::efl_canvas_object_pass_events_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(pass));
}
inline ::efl::eolian::return_traits<bool>::type Object::anti_alias_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_anti_alias_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::anti_alias_set( ::efl::eolian::in_traits<bool>::type anti_alias) const
{
     ::efl_canvas_object_anti_alias_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(anti_alias));
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::canvas::Object>>::type Object::clipped_objects_get() const
{
    Eina_Iterator * __return_value =  ::efl_canvas_object_clipped_objects_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::canvas::Object>>::type>(__return_value);
}
#ifdef EFL_CANVAS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Object::render_parent_get() const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_canvas_object_render_parent_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits<Efl_Text_Bidirectional_Type>::type Object::paragraph_direction_get() const
{
    Efl_Text_Bidirectional_Type __return_value =  ::efl_canvas_object_paragraph_direction_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Bidirectional_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::paragraph_direction_set( ::efl::eolian::in_traits<Efl_Text_Bidirectional_Type>::type dir) const
{
     ::efl_canvas_object_paragraph_direction_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Bidirectional_Type,  ::efl::eolian::in_traits<Efl_Text_Bidirectional_Type>::type>(dir));
}
inline ::efl::eolian::return_traits<bool>::type Object::no_render_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_no_render_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::no_render_set( ::efl::eolian::in_traits<bool>::type enable) const
{
     ::efl_canvas_object_no_render_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enable));
}
inline ::efl::eolian::return_traits<bool>::type Object::coords_inside_get( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const
{
    Eina_Bool __return_value =  ::efl_canvas_object_coords_inside_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(pos));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::seat_focus_check( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const
{
    Eina_Bool __return_value =  ::efl_canvas_object_seat_focus_check(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(seat));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::seat_focus_add( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const
{
    Eina_Bool __return_value =  ::efl_canvas_object_seat_focus_add(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(seat));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::seat_focus_del( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const
{
    Eina_Bool __return_value =  ::efl_canvas_object_seat_focus_del(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(seat));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits< unsigned int>::type Object::clipped_objects_count() const
{
    unsigned int __return_value =  ::efl_canvas_object_clipped_objects_count(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::key_grab( ::efl::eolian::in_traits< ::efl::eina::string_view>::type keyname,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type modifiers,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type not_modifiers,  ::efl::eolian::in_traits<bool>::type exclusive) const
{
    Eina_Bool __return_value =  ::efl_canvas_object_key_grab(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(keyname),
         ::efl::eolian::convert_to_c<Efl_Input_Modifier,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type>(modifiers),
         ::efl::eolian::convert_to_c<Efl_Input_Modifier,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type>(not_modifiers),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(exclusive));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::key_ungrab( ::efl::eolian::in_traits< ::efl::eina::string_view>::type keyname,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type modifiers,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type not_modifiers) const
{
     ::efl_canvas_object_key_ungrab(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(keyname),
         ::efl::eolian::convert_to_c<Efl_Input_Modifier,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type>(modifiers),
         ::efl::eolian::convert_to_c<Efl_Input_Modifier,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type>(not_modifiers));
}
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Input_Object_Pointer_Mode>::type Object::pointer_mode_by_device_get( ::efl::eolian::in_traits< ::efl::input::Device>::type dev) const
{
    Efl_Input_Object_Pointer_Mode __return_value =  ::efl_canvas_object_pointer_mode_by_device_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(dev));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Object_Pointer_Mode>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::pointer_mode_by_device_set( ::efl::eolian::in_traits< ::efl::input::Device>::type dev,  ::efl::eolian::in_traits<Efl_Input_Object_Pointer_Mode>::type pointer_mode) const
{
    Eina_Bool __return_value =  ::efl_canvas_object_pointer_mode_by_device_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(dev),
         ::efl::eolian::convert_to_c<Efl_Input_Object_Pointer_Mode,  ::efl::eolian::in_traits<Efl_Input_Object_Pointer_Mode>::type>(pointer_mode));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Input_Object_Pointer_Mode>::type Object::pointer_mode_get() const
{
    Efl_Input_Object_Pointer_Mode __return_value =  ::efl_canvas_object_pointer_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Object_Pointer_Mode>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::pointer_mode_set( ::efl::eolian::in_traits<Efl_Input_Object_Pointer_Mode>::type pointer_mode) const
{
    Eina_Bool __return_value =  ::efl_canvas_object_pointer_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Object_Pointer_Mode,  ::efl::eolian::in_traits<Efl_Input_Object_Pointer_Mode>::type>(pointer_mode));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits<Efl_Gfx_Render_Op>::type Object::render_op_get() const
{
    Efl_Gfx_Render_Op __return_value =  ::efl_canvas_object_render_op_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Render_Op>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::render_op_set( ::efl::eolian::in_traits<Efl_Gfx_Render_Op>::type render_op) const
{
     ::efl_canvas_object_render_op_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Render_Op,  ::efl::eolian::in_traits<Efl_Gfx_Render_Op>::type>(render_op));
}
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Object::clipper_get() const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_canvas_object_clipper_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::clipper_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type clipper) const
{
     ::efl_canvas_object_clipper_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(clipper));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::has_fixed_size_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_has_fixed_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::has_fixed_size_set( ::efl::eolian::in_traits<bool>::type enable) const
{
     ::efl_canvas_object_has_fixed_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enable));
}
#endif
inline ::efl::eolian::return_traits<bool>::type Object::repeat_events_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_repeat_events_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::repeat_events_set( ::efl::eolian::in_traits<bool>::type repeat) const
{
     ::efl_canvas_object_repeat_events_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(repeat));
}
inline ::efl::eolian::return_traits<bool>::type Object::key_focus_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_key_focus_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::key_focus_set( ::efl::eolian::in_traits<bool>::type focus) const
{
     ::efl_canvas_object_key_focus_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(focus));
}
inline ::efl::eolian::return_traits<bool>::type Object::seat_focus_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_seat_focus_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::precise_is_inside_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_precise_is_inside_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::precise_is_inside_set( ::efl::eolian::in_traits<bool>::type precise) const
{
     ::efl_canvas_object_precise_is_inside_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(precise));
}
inline ::efl::eolian::return_traits<bool>::type Object::propagate_events_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_propagate_events_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::propagate_events_set( ::efl::eolian::in_traits<bool>::type propagate) const
{
     ::efl_canvas_object_propagate_events_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(propagate));
}
inline ::efl::eolian::return_traits<bool>::type Object::pass_events_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_pass_events_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::pass_events_set( ::efl::eolian::in_traits<bool>::type pass) const
{
     ::efl_canvas_object_pass_events_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(pass));
}
inline ::efl::eolian::return_traits<bool>::type Object::anti_alias_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_anti_alias_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::anti_alias_set( ::efl::eolian::in_traits<bool>::type anti_alias) const
{
     ::efl_canvas_object_anti_alias_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(anti_alias));
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::canvas::Object>>::type Object::clipped_objects_get() const
{
    Eina_Iterator * __return_value =  ::efl_canvas_object_clipped_objects_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::canvas::Object>>::type>(__return_value);
}
#ifdef EFL_CANVAS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Object::render_parent_get() const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_canvas_object_render_parent_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits<Efl_Text_Bidirectional_Type>::type Object::paragraph_direction_get() const
{
    Efl_Text_Bidirectional_Type __return_value =  ::efl_canvas_object_paragraph_direction_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Text_Bidirectional_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::paragraph_direction_set( ::efl::eolian::in_traits<Efl_Text_Bidirectional_Type>::type dir) const
{
     ::efl_canvas_object_paragraph_direction_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Bidirectional_Type,  ::efl::eolian::in_traits<Efl_Text_Bidirectional_Type>::type>(dir));
}
inline ::efl::eolian::return_traits<bool>::type Object::no_render_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_object_no_render_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::no_render_set( ::efl::eolian::in_traits<bool>::type enable) const
{
     ::efl_canvas_object_no_render_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enable));
}
inline ::efl::eolian::return_traits<bool>::type Object::coords_inside_get( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const
{
    Eina_Bool __return_value =  ::efl_canvas_object_coords_inside_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(pos));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::seat_focus_check( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const
{
    Eina_Bool __return_value =  ::efl_canvas_object_seat_focus_check(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(seat));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::seat_focus_add( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const
{
    Eina_Bool __return_value =  ::efl_canvas_object_seat_focus_add(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(seat));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::seat_focus_del( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const
{
    Eina_Bool __return_value =  ::efl_canvas_object_seat_focus_del(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(seat));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits< unsigned int>::type Object::clipped_objects_count() const
{
    unsigned int __return_value =  ::efl_canvas_object_clipped_objects_count(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::key_grab( ::efl::eolian::in_traits< ::efl::eina::string_view>::type keyname,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type modifiers,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type not_modifiers,  ::efl::eolian::in_traits<bool>::type exclusive) const
{
    Eina_Bool __return_value =  ::efl_canvas_object_key_grab(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(keyname),
         ::efl::eolian::convert_to_c<Efl_Input_Modifier,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type>(modifiers),
         ::efl::eolian::convert_to_c<Efl_Input_Modifier,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type>(not_modifiers),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(exclusive));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::key_ungrab( ::efl::eolian::in_traits< ::efl::eina::string_view>::type keyname,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type modifiers,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type not_modifiers) const
{
     ::efl_canvas_object_key_ungrab(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(keyname),
         ::efl::eolian::convert_to_c<Efl_Input_Modifier,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type>(modifiers),
         ::efl::eolian::convert_to_c<Efl_Input_Modifier,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type>(not_modifiers));
}
inline efl::canvas::Object::operator ::efl::canvas::Object() const { return *static_cast< ::efl::canvas::Object const*>(static_cast<void const*>(this)); }
inline efl::canvas::Object::operator ::efl::canvas::Object&() { return *static_cast< ::efl::canvas::Object*>(static_cast<void*>(this)); }
inline efl::canvas::Object::operator ::efl::canvas::Object const&() const { return *static_cast< ::efl::canvas::Object const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
