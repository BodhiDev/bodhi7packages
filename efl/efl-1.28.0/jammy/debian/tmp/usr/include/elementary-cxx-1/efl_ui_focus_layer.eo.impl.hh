#ifndef EFL_UI_FOCUS_LAYER_IMPL_HH
#define EFL_UI_FOCUS_LAYER_IMPL_HH

#include "efl_ui_focus_layer.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { namespace focus { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Layer::enable_get() const
{
    Eina_Bool __return_value =  ::efl_ui_focus_layer_enable_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
inline ::efl::eolian::return_traits<void>::type Layer::enable_set( ::efl::eolian::in_traits<bool>::type v) const
{
     ::efl_ui_focus_layer_enable_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(v));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
inline ::efl::eolian::return_traits<void>::type Layer::behaviour_get( ::efl::eolian::out_traits<bool>::type enable_on_visible,  ::efl::eolian::out_traits<bool>::type cycle) const
{
    Eina_Bool __out_param_enable_on_visible = {};
    Eina_Bool __out_param_cycle = {};
     ::efl_ui_focus_layer_behaviour_get(_eo_ptr(),
        & __out_param_enable_on_visible,
        & __out_param_cycle);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(enable_on_visible, __out_param_enable_on_visible);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(cycle, __out_param_cycle);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
inline ::efl::eolian::return_traits<void>::type Layer::behaviour_set( ::efl::eolian::in_traits<bool>::type enable_on_visible,  ::efl::eolian::in_traits<bool>::type cycle) const
{
     ::efl_ui_focus_layer_behaviour_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enable_on_visible),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(cycle));
}
#endif
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace ui { namespace focus { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Layer::enable_get() const
{
    Eina_Bool __return_value =  ::efl_ui_focus_layer_enable_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
inline ::efl::eolian::return_traits<void>::type Layer::enable_set( ::efl::eolian::in_traits<bool>::type v) const
{
     ::efl_ui_focus_layer_enable_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(v));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
inline ::efl::eolian::return_traits<void>::type Layer::behaviour_get( ::efl::eolian::out_traits<bool>::type enable_on_visible,  ::efl::eolian::out_traits<bool>::type cycle) const
{
    Eina_Bool __out_param_enable_on_visible = {};
    Eina_Bool __out_param_cycle = {};
     ::efl_ui_focus_layer_behaviour_get(_eo_ptr(),
        & __out_param_enable_on_visible,
        & __out_param_cycle);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(enable_on_visible, __out_param_enable_on_visible);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(cycle, __out_param_cycle);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
inline ::efl::eolian::return_traits<void>::type Layer::behaviour_set( ::efl::eolian::in_traits<bool>::type enable_on_visible,  ::efl::eolian::in_traits<bool>::type cycle) const
{
     ::efl_ui_focus_layer_behaviour_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enable_on_visible),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(cycle));
}
#endif
#endif
inline efl::ui::focus::Layer::operator ::efl::ui::focus::Layer() const { return *static_cast< ::efl::ui::focus::Layer const*>(static_cast<void const*>(this)); }
inline efl::ui::focus::Layer::operator ::efl::ui::focus::Layer&() { return *static_cast< ::efl::ui::focus::Layer*>(static_cast<void*>(this)); }
inline efl::ui::focus::Layer::operator ::efl::ui::focus::Layer const&() const { return *static_cast< ::efl::ui::focus::Layer const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
