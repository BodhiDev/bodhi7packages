#ifndef EFL_CANVAS_SCENE_IMPL_HH
#define EFL_CANVAS_SCENE_IMPL_HH

#include "efl_canvas_scene.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
inline ::efl::eolian::return_traits<bool>::type Scene::image_max_size_get( ::efl::eolian::out_traits<Eina_Size2D>::type max) const
{
    Eina_Size2D __out_param_max = {};
    Eina_Bool __return_value =  ::efl_canvas_scene_image_max_size_get(_eo_ptr(),
        & __out_param_max);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Size2D>::type, Eina_Size2D>(max, __out_param_max);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Scene::group_objects_calculating_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_scene_group_objects_calculating_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::input::Device>::type Scene::device_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
     ::Efl_Input_Device* __return_value =  ::efl_canvas_scene_device_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::input::Device>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::input::Device>::type Scene::seat_get( ::efl::eolian::in_traits<int>::type id) const
{
     ::Efl_Input_Device* __return_value =  ::efl_canvas_scene_seat_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(id));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::input::Device>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::input::Device>::type Scene::seat_default_get() const
{
     ::Efl_Input_Device* __return_value =  ::efl_canvas_scene_seat_default_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::input::Device>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Scene::pointer_position_get( ::efl::eolian::in_traits< ::efl::input::Device>::type seat,  ::efl::eolian::out_traits<Eina_Position2D>::type pos) const
{
    Eina_Position2D __out_param_pos = {};
    Eina_Bool __return_value =  ::efl_canvas_scene_pointer_position_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(seat),
        & __out_param_pos);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Position2D>::type, Eina_Position2D>(pos, __out_param_pos);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits<void>::type Scene::group_objects_calculate() const
{
     ::efl_canvas_scene_group_objects_calculate(_eo_ptr());
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type Scene::objects_at_xy_get( ::efl::eolian::in_traits<Eina_Position2D>::type pos,  ::efl::eolian::in_traits<bool>::type include_pass_events_objects,  ::efl::eolian::in_traits<bool>::type include_hidden_objects) const
{
    Eina_Iterator * __return_value =  ::efl_canvas_scene_objects_at_xy_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(pos),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(include_pass_events_objects),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(include_hidden_objects));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::gfx::Entity>::type Scene::object_top_at_xy_get( ::efl::eolian::in_traits<Eina_Position2D>::type pos,  ::efl::eolian::in_traits<bool>::type include_pass_events_objects,  ::efl::eolian::in_traits<bool>::type include_hidden_objects) const
{
     ::Efl_Gfx_Entity* __return_value =  ::efl_canvas_scene_object_top_at_xy_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(pos),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(include_pass_events_objects),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(include_hidden_objects));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Entity>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type Scene::objects_in_rectangle_get( ::efl::eolian::in_traits<Eina_Rect>::type rect,  ::efl::eolian::in_traits<bool>::type include_pass_events_objects,  ::efl::eolian::in_traits<bool>::type include_hidden_objects) const
{
    Eina_Iterator * __return_value =  ::efl_canvas_scene_objects_in_rectangle_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(rect),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(include_pass_events_objects),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(include_hidden_objects));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::gfx::Entity>::type Scene::object_top_in_rectangle_get( ::efl::eolian::in_traits<Eina_Rect>::type rect,  ::efl::eolian::in_traits<bool>::type include_pass_events_objects,  ::efl::eolian::in_traits<bool>::type include_hidden_objects) const
{
     ::Efl_Gfx_Entity* __return_value =  ::efl_canvas_scene_object_top_in_rectangle_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(rect),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(include_pass_events_objects),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(include_hidden_objects));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Entity>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::input::Device>>::type Scene::seats() const
{
    Eina_Iterator * __return_value =  ::efl_canvas_scene_seats(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::input::Device>>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
inline ::efl::eolian::return_traits<bool>::type Scene::image_max_size_get( ::efl::eolian::out_traits<Eina_Size2D>::type max) const
{
    Eina_Size2D __out_param_max = {};
    Eina_Bool __return_value =  ::efl_canvas_scene_image_max_size_get(_eo_ptr(),
        & __out_param_max);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Size2D>::type, Eina_Size2D>(max, __out_param_max);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Scene::group_objects_calculating_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_scene_group_objects_calculating_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::input::Device>::type Scene::device_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
     ::Efl_Input_Device* __return_value =  ::efl_canvas_scene_device_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::input::Device>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::input::Device>::type Scene::seat_get( ::efl::eolian::in_traits<int>::type id) const
{
     ::Efl_Input_Device* __return_value =  ::efl_canvas_scene_seat_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(id));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::input::Device>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::input::Device>::type Scene::seat_default_get() const
{
     ::Efl_Input_Device* __return_value =  ::efl_canvas_scene_seat_default_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::input::Device>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Scene::pointer_position_get( ::efl::eolian::in_traits< ::efl::input::Device>::type seat,  ::efl::eolian::out_traits<Eina_Position2D>::type pos) const
{
    Eina_Position2D __out_param_pos = {};
    Eina_Bool __return_value =  ::efl_canvas_scene_pointer_position_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(seat),
        & __out_param_pos);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Position2D>::type, Eina_Position2D>(pos, __out_param_pos);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits<void>::type Scene::group_objects_calculate() const
{
     ::efl_canvas_scene_group_objects_calculate(_eo_ptr());
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type Scene::objects_at_xy_get( ::efl::eolian::in_traits<Eina_Position2D>::type pos,  ::efl::eolian::in_traits<bool>::type include_pass_events_objects,  ::efl::eolian::in_traits<bool>::type include_hidden_objects) const
{
    Eina_Iterator * __return_value =  ::efl_canvas_scene_objects_at_xy_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(pos),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(include_pass_events_objects),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(include_hidden_objects));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::gfx::Entity>::type Scene::object_top_at_xy_get( ::efl::eolian::in_traits<Eina_Position2D>::type pos,  ::efl::eolian::in_traits<bool>::type include_pass_events_objects,  ::efl::eolian::in_traits<bool>::type include_hidden_objects) const
{
     ::Efl_Gfx_Entity* __return_value =  ::efl_canvas_scene_object_top_at_xy_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(pos),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(include_pass_events_objects),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(include_hidden_objects));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Entity>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type Scene::objects_in_rectangle_get( ::efl::eolian::in_traits<Eina_Rect>::type rect,  ::efl::eolian::in_traits<bool>::type include_pass_events_objects,  ::efl::eolian::in_traits<bool>::type include_hidden_objects) const
{
    Eina_Iterator * __return_value =  ::efl_canvas_scene_objects_in_rectangle_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(rect),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(include_pass_events_objects),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(include_hidden_objects));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::gfx::Entity>::type Scene::object_top_in_rectangle_get( ::efl::eolian::in_traits<Eina_Rect>::type rect,  ::efl::eolian::in_traits<bool>::type include_pass_events_objects,  ::efl::eolian::in_traits<bool>::type include_hidden_objects) const
{
     ::Efl_Gfx_Entity* __return_value =  ::efl_canvas_scene_object_top_in_rectangle_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(rect),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(include_pass_events_objects),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(include_hidden_objects));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Entity>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::input::Device>>::type Scene::seats() const
{
    Eina_Iterator * __return_value =  ::efl_canvas_scene_seats(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::input::Device>>::type>(__return_value);
}
#endif
inline efl::canvas::Scene::operator ::efl::canvas::Scene() const { return *static_cast< ::efl::canvas::Scene const*>(static_cast<void const*>(this)); }
inline efl::canvas::Scene::operator ::efl::canvas::Scene&() { return *static_cast< ::efl::canvas::Scene*>(static_cast<void*>(this)); }
inline efl::canvas::Scene::operator ::efl::canvas::Scene const&() const { return *static_cast< ::efl::canvas::Scene const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
