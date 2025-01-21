#ifndef EFL_ACCESS_COMPONENT_IMPL_HH
#define EFL_ACCESS_COMPONENT_IMPL_HH

#include "efl_access_component.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace access { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
inline ::efl::eolian::return_traits<int>::type Component::z_order_get() const
{
    int __return_value =  ::efl_access_component_z_order_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
inline ::efl::eolian::return_traits<Eina_Rect>::type Component::extents_get( ::efl::eolian::in_traits<bool>::type screen_coords) const
{
    Eina_Rect __return_value =  ::efl_access_component_extents_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(screen_coords));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Component::extents_set( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<Eina_Rect>::type rect) const
{
    Eina_Bool __return_value =  ::efl_access_component_extents_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(screen_coords),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(rect));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Component::screen_position_get( ::efl::eolian::out_traits<int>::type x,  ::efl::eolian::out_traits<int>::type y) const
{
    int __out_param_x = {};
    int __out_param_y = {};
     ::efl_access_component_screen_position_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(y, __out_param_y);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Component::screen_position_set( ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y) const
{
    Eina_Bool __return_value =  ::efl_access_component_screen_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(x),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(y));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Component::contains( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y) const
{
    Eina_Bool __return_value =  ::efl_access_component_contains(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(screen_coords),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(x),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(y));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Component::focus_grab() const
{
    Eina_Bool __return_value =  ::efl_access_component_focus_grab(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
inline ::efl::eolian::return_traits< ::efl::Object>::type Component::accessible_at_point_get( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y) const
{
     ::Efl_Object* __return_value =  ::efl_access_component_accessible_at_point_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(screen_coords),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(x),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(y));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
#endif
#endif
} } 
namespace eo_cxx {
namespace efl { namespace access { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
inline ::efl::eolian::return_traits<int>::type Component::z_order_get() const
{
    int __return_value =  ::efl_access_component_z_order_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
inline ::efl::eolian::return_traits<Eina_Rect>::type Component::extents_get( ::efl::eolian::in_traits<bool>::type screen_coords) const
{
    Eina_Rect __return_value =  ::efl_access_component_extents_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(screen_coords));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Component::extents_set( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<Eina_Rect>::type rect) const
{
    Eina_Bool __return_value =  ::efl_access_component_extents_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(screen_coords),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(rect));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Component::screen_position_get( ::efl::eolian::out_traits<int>::type x,  ::efl::eolian::out_traits<int>::type y) const
{
    int __out_param_x = {};
    int __out_param_y = {};
     ::efl_access_component_screen_position_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(y, __out_param_y);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Component::screen_position_set( ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y) const
{
    Eina_Bool __return_value =  ::efl_access_component_screen_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(x),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(y));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Component::contains( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y) const
{
    Eina_Bool __return_value =  ::efl_access_component_contains(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(screen_coords),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(x),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(y));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Component::focus_grab() const
{
    Eina_Bool __return_value =  ::efl_access_component_focus_grab(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
inline ::efl::eolian::return_traits< ::efl::Object>::type Component::accessible_at_point_get( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y) const
{
     ::Efl_Object* __return_value =  ::efl_access_component_accessible_at_point_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(screen_coords),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(x),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(y));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
#endif
#endif
inline efl::access::Component::operator ::efl::access::Component() const { return *static_cast< ::efl::access::Component const*>(static_cast<void const*>(this)); }
inline efl::access::Component::operator ::efl::access::Component&() { return *static_cast< ::efl::access::Component*>(static_cast<void*>(this)); }
inline efl::access::Component::operator ::efl::access::Component const&() const { return *static_cast< ::efl::access::Component const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
