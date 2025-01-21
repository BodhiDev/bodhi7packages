#ifndef EFL_UI_SPOTLIGHT_MANAGER_IMPL_HH
#define EFL_UI_SPOTLIGHT_MANAGER_IMPL_HH

#include "efl_ui_spotlight_manager.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { namespace spotlight { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Manager::size_set( ::efl::eolian::in_traits<Eina_Size2D>::type size) const
{
     ::efl_ui_spotlight_manager_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(size));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Manager::animated_transition_get() const
{
    Eina_Bool __return_value =  ::efl_ui_spotlight_manager_animated_transition_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Manager::animated_transition_set( ::efl::eolian::in_traits<bool>::type enable) const
{
     ::efl_ui_spotlight_manager_animated_transition_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enable));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Manager::bind( ::efl::eolian::in_traits< ::efl::ui::spotlight::Container>::type spotlight) const
{
     ::efl_ui_spotlight_manager_bind(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Spotlight_Container*,  ::efl::eolian::in_traits< ::efl::ui::spotlight::Container>::type>(spotlight));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Manager::content_add( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type index) const
{
     ::efl_ui_spotlight_manager_content_add(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(index));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Manager::content_del( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type index) const
{
     ::efl_ui_spotlight_manager_content_del(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(index));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Manager::switch_to( ::efl::eolian::in_traits<int>::type from,  ::efl::eolian::in_traits<int>::type to,  ::efl::eolian::in_traits<Efl_Ui_Spotlight_Manager_Switch_Reason>::type reason) const
{
     ::efl_ui_spotlight_manager_switch_to(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(from),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(to),
         ::efl::eolian::convert_to_c<Efl_Ui_Spotlight_Manager_Switch_Reason,  ::efl::eolian::in_traits<Efl_Ui_Spotlight_Manager_Switch_Reason>::type>(reason));
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace ui { namespace spotlight { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Manager::size_set( ::efl::eolian::in_traits<Eina_Size2D>::type size) const
{
     ::efl_ui_spotlight_manager_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(size));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Manager::animated_transition_get() const
{
    Eina_Bool __return_value =  ::efl_ui_spotlight_manager_animated_transition_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Manager::animated_transition_set( ::efl::eolian::in_traits<bool>::type enable) const
{
     ::efl_ui_spotlight_manager_animated_transition_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enable));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Manager::bind( ::efl::eolian::in_traits< ::efl::ui::spotlight::Container>::type spotlight) const
{
     ::efl_ui_spotlight_manager_bind(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Spotlight_Container*,  ::efl::eolian::in_traits< ::efl::ui::spotlight::Container>::type>(spotlight));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Manager::content_add( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type index) const
{
     ::efl_ui_spotlight_manager_content_add(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(index));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Manager::content_del( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type index) const
{
     ::efl_ui_spotlight_manager_content_del(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(index));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Manager::switch_to( ::efl::eolian::in_traits<int>::type from,  ::efl::eolian::in_traits<int>::type to,  ::efl::eolian::in_traits<Efl_Ui_Spotlight_Manager_Switch_Reason>::type reason) const
{
     ::efl_ui_spotlight_manager_switch_to(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(from),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(to),
         ::efl::eolian::convert_to_c<Efl_Ui_Spotlight_Manager_Switch_Reason,  ::efl::eolian::in_traits<Efl_Ui_Spotlight_Manager_Switch_Reason>::type>(reason));
}
#endif
inline efl::ui::spotlight::Manager::operator ::efl::ui::spotlight::Manager() const { return *static_cast< ::efl::ui::spotlight::Manager const*>(static_cast<void const*>(this)); }
inline efl::ui::spotlight::Manager::operator ::efl::ui::spotlight::Manager&() { return *static_cast< ::efl::ui::spotlight::Manager*>(static_cast<void*>(this)); }
inline efl::ui::spotlight::Manager::operator ::efl::ui::spotlight::Manager const&() const { return *static_cast< ::efl::ui::spotlight::Manager const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
