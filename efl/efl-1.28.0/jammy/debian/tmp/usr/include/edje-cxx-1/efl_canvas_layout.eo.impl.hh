#ifndef EFL_CANVAS_LAYOUT_IMPL_HH
#define EFL_CANVAS_LAYOUT_IMPL_HH

#include "efl_canvas_layout.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Layout::animated_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_layout_animated_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Layout::animated_set( ::efl::eolian::in_traits<bool>::type on) const
{
     ::efl_canvas_layout_animated_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(on));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::input::Device>::type Layout::seat_get( ::efl::eolian::in_traits< ::efl::eina::stringshare>::type name) const
{
     ::Efl_Input_Device* __return_value =  ::efl_canvas_layout_seat_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Stringshare *,  ::efl::eolian::in_traits< ::efl::eina::stringshare>::type>(name));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::input::Device>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::stringshare>::type Layout::seat_name_get( ::efl::eolian::in_traits< ::efl::input::Device>::type device) const
{
    Eina_Stringshare * __return_value =  ::efl_canvas_layout_seat_name_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(device));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::stringshare>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Error>::type Layout::layout_load_error_get() const
{
    Eina_Error __return_value =  ::efl_canvas_layout_load_error_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type Layout::access_part_iterate() const
{
    Eina_Iterator * __return_value =  ::efl_canvas_layout_access_part_iterate(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Layout::content_remove( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type content) const
{
    Eina_Bool __return_value =  ::efl_canvas_layout_content_remove(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(content));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Layout::animated_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_layout_animated_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Layout::animated_set( ::efl::eolian::in_traits<bool>::type on) const
{
     ::efl_canvas_layout_animated_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(on));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::input::Device>::type Layout::seat_get( ::efl::eolian::in_traits< ::efl::eina::stringshare>::type name) const
{
     ::Efl_Input_Device* __return_value =  ::efl_canvas_layout_seat_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Stringshare *,  ::efl::eolian::in_traits< ::efl::eina::stringshare>::type>(name));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::input::Device>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::stringshare>::type Layout::seat_name_get( ::efl::eolian::in_traits< ::efl::input::Device>::type device) const
{
    Eina_Stringshare * __return_value =  ::efl_canvas_layout_seat_name_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(device));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::stringshare>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Error>::type Layout::layout_load_error_get() const
{
    Eina_Error __return_value =  ::efl_canvas_layout_load_error_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type Layout::access_part_iterate() const
{
    Eina_Iterator * __return_value =  ::efl_canvas_layout_access_part_iterate(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Layout::content_remove( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type content) const
{
    Eina_Bool __return_value =  ::efl_canvas_layout_content_remove(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(content));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline efl::canvas::Layout::operator ::efl::canvas::Layout() const { return *static_cast< ::efl::canvas::Layout const*>(static_cast<void const*>(this)); }
inline efl::canvas::Layout::operator ::efl::canvas::Layout&() { return *static_cast< ::efl::canvas::Layout*>(static_cast<void*>(this)); }
inline efl::canvas::Layout::operator ::efl::canvas::Layout const&() const { return *static_cast< ::efl::canvas::Layout const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
