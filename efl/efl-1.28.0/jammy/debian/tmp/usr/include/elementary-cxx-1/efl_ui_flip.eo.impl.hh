#ifndef EFL_UI_FLIP_IMPL_HH
#define EFL_UI_FLIP_IMPL_HH

#include "efl_ui_flip.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Flip_Interaction>::type Flip::interaction_get() const
{
    Efl_Ui_Flip_Interaction __return_value =  ::efl_ui_flip_interaction_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Flip_Interaction>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Flip::interaction_set( ::efl::eolian::in_traits<Efl_Ui_Flip_Interaction>::type mode) const
{
     ::efl_ui_flip_interaction_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Flip_Interaction,  ::efl::eolian::in_traits<Efl_Ui_Flip_Interaction>::type>(mode));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Flip::front_visible_get() const
{
    Eina_Bool __return_value =  ::efl_ui_flip_front_visible_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Flip::interaction_direction_hitsize_set( ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type dir,  ::efl::eolian::in_traits<double>::type hitsize) const
{
     ::efl_ui_flip_interaction_direction_hitsize_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Layout_Orientation,  ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type>(dir),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(hitsize));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Flip::interaction_direction_hitsize_get( ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type dir) const
{
    double __return_value =  ::efl_ui_flip_interaction_direction_hitsize_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Layout_Orientation,  ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type>(dir));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Flip::interaction_direction_enabled_set( ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type dir,  ::efl::eolian::in_traits<bool>::type enabled) const
{
     ::efl_ui_flip_interaction_direction_enabled_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Layout_Orientation,  ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type>(dir),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enabled));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Flip::interaction_direction_enabled_get( ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type dir) const
{
    Eina_Bool __return_value =  ::efl_ui_flip_interaction_direction_enabled_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Layout_Orientation,  ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type>(dir));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Flip::go( ::efl::eolian::in_traits<Efl_Ui_Flip_Mode>::type mode) const
{
     ::efl_ui_flip_go(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Flip_Mode,  ::efl::eolian::in_traits<Efl_Ui_Flip_Mode>::type>(mode));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Flip::go_to( ::efl::eolian::in_traits<bool>::type front,  ::efl::eolian::in_traits<Efl_Ui_Flip_Mode>::type mode) const
{
     ::efl_ui_flip_go_to(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(front),
         ::efl::eolian::convert_to_c<Efl_Ui_Flip_Mode,  ::efl::eolian::in_traits<Efl_Ui_Flip_Mode>::type>(mode));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Flip_Interaction>::type Flip::interaction_get() const
{
    Efl_Ui_Flip_Interaction __return_value =  ::efl_ui_flip_interaction_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Flip_Interaction>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Flip::interaction_set( ::efl::eolian::in_traits<Efl_Ui_Flip_Interaction>::type mode) const
{
     ::efl_ui_flip_interaction_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Flip_Interaction,  ::efl::eolian::in_traits<Efl_Ui_Flip_Interaction>::type>(mode));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Flip::front_visible_get() const
{
    Eina_Bool __return_value =  ::efl_ui_flip_front_visible_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Flip::interaction_direction_hitsize_set( ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type dir,  ::efl::eolian::in_traits<double>::type hitsize) const
{
     ::efl_ui_flip_interaction_direction_hitsize_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Layout_Orientation,  ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type>(dir),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(hitsize));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Flip::interaction_direction_hitsize_get( ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type dir) const
{
    double __return_value =  ::efl_ui_flip_interaction_direction_hitsize_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Layout_Orientation,  ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type>(dir));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Flip::interaction_direction_enabled_set( ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type dir,  ::efl::eolian::in_traits<bool>::type enabled) const
{
     ::efl_ui_flip_interaction_direction_enabled_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Layout_Orientation,  ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type>(dir),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enabled));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Flip::interaction_direction_enabled_get( ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type dir) const
{
    Eina_Bool __return_value =  ::efl_ui_flip_interaction_direction_enabled_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Layout_Orientation,  ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type>(dir));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Flip::go( ::efl::eolian::in_traits<Efl_Ui_Flip_Mode>::type mode) const
{
     ::efl_ui_flip_go(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Flip_Mode,  ::efl::eolian::in_traits<Efl_Ui_Flip_Mode>::type>(mode));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Flip::go_to( ::efl::eolian::in_traits<bool>::type front,  ::efl::eolian::in_traits<Efl_Ui_Flip_Mode>::type mode) const
{
     ::efl_ui_flip_go_to(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(front),
         ::efl::eolian::convert_to_c<Efl_Ui_Flip_Mode,  ::efl::eolian::in_traits<Efl_Ui_Flip_Mode>::type>(mode));
}
#endif
inline efl::ui::Flip::operator ::efl::ui::Flip() const { return *static_cast< ::efl::ui::Flip const*>(static_cast<void const*>(this)); }
inline efl::ui::Flip::operator ::efl::ui::Flip&() { return *static_cast< ::efl::ui::Flip*>(static_cast<void*>(this)); }
inline efl::ui::Flip::operator ::efl::ui::Flip const&() const { return *static_cast< ::efl::ui::Flip const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
