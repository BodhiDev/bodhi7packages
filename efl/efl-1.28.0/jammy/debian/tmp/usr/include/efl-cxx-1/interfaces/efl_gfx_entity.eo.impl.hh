#ifndef EFL_GFX_ENTITY_IMPL_HH
#define EFL_GFX_ENTITY_IMPL_HH

#include "efl_gfx_entity.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
inline ::efl::eolian::return_traits<Eina_Position2D>::type Entity::position_get() const
{
    Eina_Position2D __return_value =  ::efl_gfx_entity_position_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::position_set( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const
{
     ::efl_gfx_entity_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(pos));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Entity::size_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_entity_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::size_set( ::efl::eolian::in_traits<Eina_Size2D>::type size) const
{
     ::efl_gfx_entity_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(size));
}
inline ::efl::eolian::return_traits<Eina_Rect>::type Entity::geometry_get() const
{
    Eina_Rect __return_value =  ::efl_gfx_entity_geometry_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::geometry_set( ::efl::eolian::in_traits<Eina_Rect>::type rect) const
{
     ::efl_gfx_entity_geometry_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(rect));
}
inline ::efl::eolian::return_traits<bool>::type Entity::visible_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_entity_visible_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::visible_set( ::efl::eolian::in_traits<bool>::type v) const
{
     ::efl_gfx_entity_visible_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(v));
}
inline ::efl::eolian::return_traits<double>::type Entity::scale_get() const
{
    double __return_value =  ::efl_gfx_entity_scale_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::scale_set( ::efl::eolian::in_traits<double>::type scale) const
{
     ::efl_gfx_entity_scale_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(scale));
}
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
inline ::efl::eolian::return_traits<Eina_Position2D>::type Entity::position_get() const
{
    Eina_Position2D __return_value =  ::efl_gfx_entity_position_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::position_set( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const
{
     ::efl_gfx_entity_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(pos));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Entity::size_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_entity_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::size_set( ::efl::eolian::in_traits<Eina_Size2D>::type size) const
{
     ::efl_gfx_entity_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(size));
}
inline ::efl::eolian::return_traits<Eina_Rect>::type Entity::geometry_get() const
{
    Eina_Rect __return_value =  ::efl_gfx_entity_geometry_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::geometry_set( ::efl::eolian::in_traits<Eina_Rect>::type rect) const
{
     ::efl_gfx_entity_geometry_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(rect));
}
inline ::efl::eolian::return_traits<bool>::type Entity::visible_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_entity_visible_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::visible_set( ::efl::eolian::in_traits<bool>::type v) const
{
     ::efl_gfx_entity_visible_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(v));
}
inline ::efl::eolian::return_traits<double>::type Entity::scale_get() const
{
    double __return_value =  ::efl_gfx_entity_scale_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::scale_set( ::efl::eolian::in_traits<double>::type scale) const
{
     ::efl_gfx_entity_scale_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(scale));
}
inline efl::gfx::Entity::operator ::efl::gfx::Entity() const { return *static_cast< ::efl::gfx::Entity const*>(static_cast<void const*>(this)); }
inline efl::gfx::Entity::operator ::efl::gfx::Entity&() { return *static_cast< ::efl::gfx::Entity*>(static_cast<void*>(this)); }
inline efl::gfx::Entity::operator ::efl::gfx::Entity const&() const { return *static_cast< ::efl::gfx::Entity const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
