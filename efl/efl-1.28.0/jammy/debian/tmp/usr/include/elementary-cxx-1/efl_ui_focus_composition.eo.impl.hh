#ifndef EFL_UI_FOCUS_COMPOSITION_IMPL_HH
#define EFL_UI_FOCUS_COMPOSITION_IMPL_HH

#include "efl_ui_focus_composition.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { namespace focus { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
inline ::efl::eolian::return_traits<  ::efl::eina::list< ::efl::gfx::Entity>>::type Composition::composition_elements_get() const
{
    Eina_List * __return_value =  ::efl_ui_focus_composition_elements_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<  ::efl::eina::list< ::efl::gfx::Entity>>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
inline ::efl::eolian::return_traits<void>::type Composition::composition_elements_set( ::efl::eolian::in_traits<  ::efl::eina::list< ::efl::gfx::Entity>>::type logical_order) const
{
     ::efl_ui_focus_composition_elements_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_List *,  ::efl::eolian::in_traits<  ::efl::eina::list< ::efl::gfx::Entity>>::type, true>(logical_order));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Composition::logical_mode_get() const
{
    Eina_Bool __return_value =  ::efl_ui_focus_composition_logical_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
inline ::efl::eolian::return_traits<void>::type Composition::logical_mode_set( ::efl::eolian::in_traits<bool>::type logical_mode) const
{
     ::efl_ui_focus_composition_logical_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(logical_mode));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
inline ::efl::eolian::return_traits<void>::type Composition::dirty() const
{
     ::efl_ui_focus_composition_dirty(_eo_ptr());
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
inline ::efl::eolian::return_traits<void>::type Composition::prepare() const
{
     ::efl_ui_focus_composition_prepare(_eo_ptr());
}
#endif
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace ui { namespace focus { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
inline ::efl::eolian::return_traits<  ::efl::eina::list< ::efl::gfx::Entity>>::type Composition::composition_elements_get() const
{
    Eina_List * __return_value =  ::efl_ui_focus_composition_elements_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<  ::efl::eina::list< ::efl::gfx::Entity>>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
inline ::efl::eolian::return_traits<void>::type Composition::composition_elements_set( ::efl::eolian::in_traits<  ::efl::eina::list< ::efl::gfx::Entity>>::type logical_order) const
{
     ::efl_ui_focus_composition_elements_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_List *,  ::efl::eolian::in_traits<  ::efl::eina::list< ::efl::gfx::Entity>>::type, true>(logical_order));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Composition::logical_mode_get() const
{
    Eina_Bool __return_value =  ::efl_ui_focus_composition_logical_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
inline ::efl::eolian::return_traits<void>::type Composition::logical_mode_set( ::efl::eolian::in_traits<bool>::type logical_mode) const
{
     ::efl_ui_focus_composition_logical_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(logical_mode));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
inline ::efl::eolian::return_traits<void>::type Composition::dirty() const
{
     ::efl_ui_focus_composition_dirty(_eo_ptr());
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
inline ::efl::eolian::return_traits<void>::type Composition::prepare() const
{
     ::efl_ui_focus_composition_prepare(_eo_ptr());
}
#endif
#endif
inline efl::ui::focus::Composition::operator ::efl::ui::focus::Composition() const { return *static_cast< ::efl::ui::focus::Composition const*>(static_cast<void const*>(this)); }
inline efl::ui::focus::Composition::operator ::efl::ui::focus::Composition&() { return *static_cast< ::efl::ui::focus::Composition*>(static_cast<void*>(this)); }
inline efl::ui::focus::Composition::operator ::efl::ui::focus::Composition const&() const { return *static_cast< ::efl::ui::focus::Composition const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
