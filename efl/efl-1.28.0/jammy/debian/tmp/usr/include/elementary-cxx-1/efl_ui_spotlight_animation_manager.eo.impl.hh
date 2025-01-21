#ifndef EFL_UI_SPOTLIGHT_ANIMATION_MANAGER_IMPL_HH
#define EFL_UI_SPOTLIGHT_ANIMATION_MANAGER_IMPL_HH

#include "efl_ui_spotlight_animation_manager.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { namespace spotlight { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Animation_Manager::push_setup_set( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type in,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type out) const
{
     ::efl_ui_spotlight_manager_animation_push_setup_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Animation*,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type>(in),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Animation*,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type>(out));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Animation_Manager::pop_setup_set( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type in,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type out) const
{
     ::efl_ui_spotlight_manager_animation_pop_setup_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Animation*,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type>(in),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Animation*,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type>(out));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Animation_Manager::jump_setup_set( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type in,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type out) const
{
     ::efl_ui_spotlight_manager_animation_jump_setup_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Animation*,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type>(in),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Animation*,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type>(out));
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace ui { namespace spotlight { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Animation_Manager::push_setup_set( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type in,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type out) const
{
     ::efl_ui_spotlight_manager_animation_push_setup_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Animation*,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type>(in),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Animation*,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type>(out));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Animation_Manager::pop_setup_set( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type in,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type out) const
{
     ::efl_ui_spotlight_manager_animation_pop_setup_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Animation*,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type>(in),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Animation*,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type>(out));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Animation_Manager::jump_setup_set( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type in,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type out) const
{
     ::efl_ui_spotlight_manager_animation_jump_setup_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Animation*,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type>(in),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Animation*,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type>(out));
}
#endif
inline efl::ui::spotlight::Animation_Manager::operator ::efl::ui::spotlight::Animation_Manager() const { return *static_cast< ::efl::ui::spotlight::Animation_Manager const*>(static_cast<void const*>(this)); }
inline efl::ui::spotlight::Animation_Manager::operator ::efl::ui::spotlight::Animation_Manager&() { return *static_cast< ::efl::ui::spotlight::Animation_Manager*>(static_cast<void*>(this)); }
inline efl::ui::spotlight::Animation_Manager::operator ::efl::ui::spotlight::Animation_Manager const&() const { return *static_cast< ::efl::ui::spotlight::Animation_Manager const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
