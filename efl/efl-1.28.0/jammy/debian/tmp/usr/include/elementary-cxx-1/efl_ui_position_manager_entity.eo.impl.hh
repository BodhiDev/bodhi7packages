#ifndef EFL_UI_POSITION_MANAGER_ENTITY_IMPL_HH
#define EFL_UI_POSITION_MANAGER_ENTITY_IMPL_HH

#include "efl_ui_position_manager_entity.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { namespace position_manager { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Entity::viewport_set( ::efl::eolian::in_traits<Eina_Rect>::type viewport) const
{
     ::efl_ui_position_manager_entity_viewport_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(viewport));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Entity::scroll_position_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_ui_position_manager_entity_scroll_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Entity::version( ::efl::eolian::in_traits<int>::type max) const
{
    int __return_value =  ::efl_ui_position_manager_entity_version(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(max));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Rect>::type Entity::position_single_item( ::efl::eolian::in_traits<int>::type idx) const
{
    Eina_Rect __return_value =  ::efl_ui_position_manager_entity_position_single_item(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(idx));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Entity::item_added( ::efl::eolian::in_traits<int>::type added_index,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const
{
     ::efl_ui_position_manager_entity_item_added(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(added_index),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Entity::item_removed( ::efl::eolian::in_traits<int>::type removed_index,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const
{
     ::efl_ui_position_manager_entity_item_removed(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(removed_index),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Entity::item_size_changed( ::efl::eolian::in_traits<int>::type start_id,  ::efl::eolian::in_traits<int>::type end_id) const
{
     ::efl_ui_position_manager_entity_item_size_changed(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(start_id),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(end_id));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Entity::entities_ready( ::efl::eolian::in_traits< unsigned int>::type start_id,  ::efl::eolian::in_traits< unsigned int>::type end_id) const
{
     ::efl_ui_position_manager_entity_entities_ready(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(start_id),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(end_id));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Entity::relative_item( ::efl::eolian::in_traits< unsigned int>::type current_id,  ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type direction,  ::efl::eolian::out_traits< unsigned int>::type index) const
{
    unsigned int __out_param_index = {};
    Eina_Bool __return_value =  ::efl_ui_position_manager_entity_relative_item(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(current_id),
         ::efl::eolian::convert_to_c<Efl_Ui_Focus_Direction,  ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type>(direction),
        & __out_param_index);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(index, __out_param_index);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace ui { namespace position_manager { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Entity::viewport_set( ::efl::eolian::in_traits<Eina_Rect>::type viewport) const
{
     ::efl_ui_position_manager_entity_viewport_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(viewport));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Entity::scroll_position_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_ui_position_manager_entity_scroll_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Entity::version( ::efl::eolian::in_traits<int>::type max) const
{
    int __return_value =  ::efl_ui_position_manager_entity_version(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(max));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Rect>::type Entity::position_single_item( ::efl::eolian::in_traits<int>::type idx) const
{
    Eina_Rect __return_value =  ::efl_ui_position_manager_entity_position_single_item(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(idx));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Entity::item_added( ::efl::eolian::in_traits<int>::type added_index,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const
{
     ::efl_ui_position_manager_entity_item_added(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(added_index),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Entity::item_removed( ::efl::eolian::in_traits<int>::type removed_index,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const
{
     ::efl_ui_position_manager_entity_item_removed(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(removed_index),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Entity::item_size_changed( ::efl::eolian::in_traits<int>::type start_id,  ::efl::eolian::in_traits<int>::type end_id) const
{
     ::efl_ui_position_manager_entity_item_size_changed(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(start_id),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(end_id));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Entity::entities_ready( ::efl::eolian::in_traits< unsigned int>::type start_id,  ::efl::eolian::in_traits< unsigned int>::type end_id) const
{
     ::efl_ui_position_manager_entity_entities_ready(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(start_id),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(end_id));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Entity::relative_item( ::efl::eolian::in_traits< unsigned int>::type current_id,  ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type direction,  ::efl::eolian::out_traits< unsigned int>::type index) const
{
    unsigned int __out_param_index = {};
    Eina_Bool __return_value =  ::efl_ui_position_manager_entity_relative_item(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(current_id),
         ::efl::eolian::convert_to_c<Efl_Ui_Focus_Direction,  ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type>(direction),
        & __out_param_index);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(index, __out_param_index);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline efl::ui::position_manager::Entity::operator ::efl::ui::position_manager::Entity() const { return *static_cast< ::efl::ui::position_manager::Entity const*>(static_cast<void const*>(this)); }
inline efl::ui::position_manager::Entity::operator ::efl::ui::position_manager::Entity&() { return *static_cast< ::efl::ui::position_manager::Entity*>(static_cast<void*>(this)); }
inline efl::ui::position_manager::Entity::operator ::efl::ui::position_manager::Entity const&() const { return *static_cast< ::efl::ui::position_manager::Entity const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
