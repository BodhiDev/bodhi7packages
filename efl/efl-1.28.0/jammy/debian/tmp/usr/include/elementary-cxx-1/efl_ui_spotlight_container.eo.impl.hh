#ifndef EFL_UI_SPOTLIGHT_CONTAINER_IMPL_HH
#define EFL_UI_SPOTLIGHT_CONTAINER_IMPL_HH

#include "efl_ui_spotlight_container.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { namespace spotlight { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::spotlight::Manager>::type Container::spotlight_manager_get() const
{
     ::Efl_Ui_Spotlight_Manager* __return_value =  ::efl_ui_spotlight_manager_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::spotlight::Manager>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Container::spotlight_manager_set( ::efl::eolian::in_traits< ::efl::ui::spotlight::Manager>::type spotlight_manager) const
{
     ::efl_ui_spotlight_manager_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Spotlight_Manager*,  ::efl::eolian::in_traits< ::efl::ui::spotlight::Manager>::type, true>(spotlight_manager));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::spotlight::Indicator>::type Container::indicator_get() const
{
     ::Efl_Ui_Spotlight_Indicator* __return_value =  ::efl_ui_spotlight_indicator_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::spotlight::Indicator>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Container::indicator_set( ::efl::eolian::in_traits< ::efl::ui::spotlight::Indicator>::type indicator) const
{
     ::efl_ui_spotlight_indicator_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Spotlight_Indicator*,  ::efl::eolian::in_traits< ::efl::ui::spotlight::Indicator>::type, true>(indicator));
}
#endif
inline ::efl::eolian::return_traits< ::efl::ui::Widget>::type Container::active_element_get() const
{
     ::Efl_Ui_Widget* __return_value =  ::efl_ui_spotlight_active_element_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Widget>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Container::active_element_set( ::efl::eolian::in_traits< ::efl::ui::Widget>::type element) const
{
     ::efl_ui_spotlight_active_element_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Widget*,  ::efl::eolian::in_traits< ::efl::ui::Widget>::type>(element));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Container::spotlight_size_get() const
{
    Eina_Size2D __return_value =  ::efl_ui_spotlight_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Container::spotlight_size_set( ::efl::eolian::in_traits<Eina_Size2D>::type size) const
{
     ::efl_ui_spotlight_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(size));
}
inline ::efl::eolian::return_traits<bool>::type Container::animated_transition_get() const
{
    Eina_Bool __return_value =  ::efl_ui_spotlight_animated_transition_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Container::animated_transition_set( ::efl::eolian::in_traits<bool>::type enable) const
{
     ::efl_ui_spotlight_animated_transition_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enable));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Container::push( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type widget) const
{
     ::efl_ui_spotlight_push(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(widget));
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace ui { namespace spotlight { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::spotlight::Manager>::type Container::spotlight_manager_get() const
{
     ::Efl_Ui_Spotlight_Manager* __return_value =  ::efl_ui_spotlight_manager_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::spotlight::Manager>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Container::spotlight_manager_set( ::efl::eolian::in_traits< ::efl::ui::spotlight::Manager>::type spotlight_manager) const
{
     ::efl_ui_spotlight_manager_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Spotlight_Manager*,  ::efl::eolian::in_traits< ::efl::ui::spotlight::Manager>::type, true>(spotlight_manager));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::spotlight::Indicator>::type Container::indicator_get() const
{
     ::Efl_Ui_Spotlight_Indicator* __return_value =  ::efl_ui_spotlight_indicator_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::spotlight::Indicator>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Container::indicator_set( ::efl::eolian::in_traits< ::efl::ui::spotlight::Indicator>::type indicator) const
{
     ::efl_ui_spotlight_indicator_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Spotlight_Indicator*,  ::efl::eolian::in_traits< ::efl::ui::spotlight::Indicator>::type, true>(indicator));
}
#endif
inline ::efl::eolian::return_traits< ::efl::ui::Widget>::type Container::active_element_get() const
{
     ::Efl_Ui_Widget* __return_value =  ::efl_ui_spotlight_active_element_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Widget>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Container::active_element_set( ::efl::eolian::in_traits< ::efl::ui::Widget>::type element) const
{
     ::efl_ui_spotlight_active_element_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Widget*,  ::efl::eolian::in_traits< ::efl::ui::Widget>::type>(element));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Container::spotlight_size_get() const
{
    Eina_Size2D __return_value =  ::efl_ui_spotlight_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Container::spotlight_size_set( ::efl::eolian::in_traits<Eina_Size2D>::type size) const
{
     ::efl_ui_spotlight_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(size));
}
inline ::efl::eolian::return_traits<bool>::type Container::animated_transition_get() const
{
    Eina_Bool __return_value =  ::efl_ui_spotlight_animated_transition_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Container::animated_transition_set( ::efl::eolian::in_traits<bool>::type enable) const
{
     ::efl_ui_spotlight_animated_transition_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enable));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Container::push( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type widget) const
{
     ::efl_ui_spotlight_push(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(widget));
}
#endif
inline efl::ui::spotlight::Container::operator ::efl::ui::spotlight::Container() const { return *static_cast< ::efl::ui::spotlight::Container const*>(static_cast<void const*>(this)); }
inline efl::ui::spotlight::Container::operator ::efl::ui::spotlight::Container&() { return *static_cast< ::efl::ui::spotlight::Container*>(static_cast<void*>(this)); }
inline efl::ui::spotlight::Container::operator ::efl::ui::spotlight::Container const&() const { return *static_cast< ::efl::ui::spotlight::Container const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
