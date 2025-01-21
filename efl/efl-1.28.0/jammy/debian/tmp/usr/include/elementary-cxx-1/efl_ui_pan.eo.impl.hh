#ifndef EFL_UI_PAN_IMPL_HH
#define EFL_UI_PAN_IMPL_HH

#include "efl_ui_pan.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Position2D>::type Pan::pan_position_get() const
{
    Eina_Position2D __return_value =  ::efl_ui_pan_position_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Pan::pan_position_set( ::efl::eolian::in_traits<Eina_Position2D>::type position) const
{
     ::efl_ui_pan_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(position));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Size2D>::type Pan::content_size_get() const
{
    Eina_Size2D __return_value =  ::efl_ui_pan_content_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Position2D>::type Pan::pan_position_min_get() const
{
    Eina_Position2D __return_value =  ::efl_ui_pan_position_min_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Position2D>::type Pan::pan_position_max_get() const
{
    Eina_Position2D __return_value =  ::efl_ui_pan_position_max_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Position2D>::type Pan::pan_position_get() const
{
    Eina_Position2D __return_value =  ::efl_ui_pan_position_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Pan::pan_position_set( ::efl::eolian::in_traits<Eina_Position2D>::type position) const
{
     ::efl_ui_pan_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(position));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Size2D>::type Pan::content_size_get() const
{
    Eina_Size2D __return_value =  ::efl_ui_pan_content_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Position2D>::type Pan::pan_position_min_get() const
{
    Eina_Position2D __return_value =  ::efl_ui_pan_position_min_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Position2D>::type Pan::pan_position_max_get() const
{
    Eina_Position2D __return_value =  ::efl_ui_pan_position_max_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
#endif
inline efl::ui::Pan::operator ::efl::ui::Pan() const { return *static_cast< ::efl::ui::Pan const*>(static_cast<void const*>(this)); }
inline efl::ui::Pan::operator ::efl::ui::Pan&() { return *static_cast< ::efl::ui::Pan*>(static_cast<void*>(this)); }
inline efl::ui::Pan::operator ::efl::ui::Pan const&() const { return *static_cast< ::efl::ui::Pan const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
