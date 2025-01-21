#ifndef EFL_UI_RELATIVE_CONTAINER_IMPL_HH
#define EFL_UI_RELATIVE_CONTAINER_IMPL_HH

#include "efl_ui_relative_container.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<void>::type Relative_Container::relation_left_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type child,  ::efl::eolian::out_traits< ::efl::gfx::Entity>::type base,  ::efl::eolian::out_traits<Efl_Gfx_Align>::type relative_position) const
{
     ::Efl_Gfx_Entity* __out_param_base = {};
    Efl_Gfx_Align __out_param_relative_position = {};
     ::efl_ui_relative_container_relation_left_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(child),
        & __out_param_base,
        & __out_param_relative_position);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::gfx::Entity>::type,  ::Efl_Gfx_Entity*>(base, __out_param_base);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Align>::type, Efl_Gfx_Align>(relative_position, __out_param_relative_position);
}
inline ::efl::eolian::return_traits<void>::type Relative_Container::relation_left_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type child,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type base,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type relative_position) const
{
     ::efl_ui_relative_container_relation_left_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(child),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(base),
         ::efl::eolian::convert_to_c<Efl_Gfx_Align,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type>(relative_position));
}
inline ::efl::eolian::return_traits<void>::type Relative_Container::relation_right_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type child,  ::efl::eolian::out_traits< ::efl::gfx::Entity>::type base,  ::efl::eolian::out_traits<Efl_Gfx_Align>::type relative_position) const
{
     ::Efl_Gfx_Entity* __out_param_base = {};
    Efl_Gfx_Align __out_param_relative_position = {};
     ::efl_ui_relative_container_relation_right_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(child),
        & __out_param_base,
        & __out_param_relative_position);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::gfx::Entity>::type,  ::Efl_Gfx_Entity*>(base, __out_param_base);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Align>::type, Efl_Gfx_Align>(relative_position, __out_param_relative_position);
}
inline ::efl::eolian::return_traits<void>::type Relative_Container::relation_right_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type child,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type base,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type relative_position) const
{
     ::efl_ui_relative_container_relation_right_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(child),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(base),
         ::efl::eolian::convert_to_c<Efl_Gfx_Align,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type>(relative_position));
}
inline ::efl::eolian::return_traits<void>::type Relative_Container::relation_top_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type child,  ::efl::eolian::out_traits< ::efl::gfx::Entity>::type base,  ::efl::eolian::out_traits<Efl_Gfx_Align>::type relative_position) const
{
     ::Efl_Gfx_Entity* __out_param_base = {};
    Efl_Gfx_Align __out_param_relative_position = {};
     ::efl_ui_relative_container_relation_top_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(child),
        & __out_param_base,
        & __out_param_relative_position);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::gfx::Entity>::type,  ::Efl_Gfx_Entity*>(base, __out_param_base);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Align>::type, Efl_Gfx_Align>(relative_position, __out_param_relative_position);
}
inline ::efl::eolian::return_traits<void>::type Relative_Container::relation_top_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type child,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type base,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type relative_position) const
{
     ::efl_ui_relative_container_relation_top_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(child),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(base),
         ::efl::eolian::convert_to_c<Efl_Gfx_Align,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type>(relative_position));
}
inline ::efl::eolian::return_traits<void>::type Relative_Container::relation_bottom_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type child,  ::efl::eolian::out_traits< ::efl::gfx::Entity>::type base,  ::efl::eolian::out_traits<Efl_Gfx_Align>::type relative_position) const
{
     ::Efl_Gfx_Entity* __out_param_base = {};
    Efl_Gfx_Align __out_param_relative_position = {};
     ::efl_ui_relative_container_relation_bottom_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(child),
        & __out_param_base,
        & __out_param_relative_position);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::gfx::Entity>::type,  ::Efl_Gfx_Entity*>(base, __out_param_base);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Align>::type, Efl_Gfx_Align>(relative_position, __out_param_relative_position);
}
inline ::efl::eolian::return_traits<void>::type Relative_Container::relation_bottom_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type child,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type base,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type relative_position) const
{
     ::efl_ui_relative_container_relation_bottom_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(child),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(base),
         ::efl::eolian::convert_to_c<Efl_Gfx_Align,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type>(relative_position));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<void>::type Relative_Container::relation_left_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type child,  ::efl::eolian::out_traits< ::efl::gfx::Entity>::type base,  ::efl::eolian::out_traits<Efl_Gfx_Align>::type relative_position) const
{
     ::Efl_Gfx_Entity* __out_param_base = {};
    Efl_Gfx_Align __out_param_relative_position = {};
     ::efl_ui_relative_container_relation_left_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(child),
        & __out_param_base,
        & __out_param_relative_position);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::gfx::Entity>::type,  ::Efl_Gfx_Entity*>(base, __out_param_base);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Align>::type, Efl_Gfx_Align>(relative_position, __out_param_relative_position);
}
inline ::efl::eolian::return_traits<void>::type Relative_Container::relation_left_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type child,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type base,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type relative_position) const
{
     ::efl_ui_relative_container_relation_left_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(child),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(base),
         ::efl::eolian::convert_to_c<Efl_Gfx_Align,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type>(relative_position));
}
inline ::efl::eolian::return_traits<void>::type Relative_Container::relation_right_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type child,  ::efl::eolian::out_traits< ::efl::gfx::Entity>::type base,  ::efl::eolian::out_traits<Efl_Gfx_Align>::type relative_position) const
{
     ::Efl_Gfx_Entity* __out_param_base = {};
    Efl_Gfx_Align __out_param_relative_position = {};
     ::efl_ui_relative_container_relation_right_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(child),
        & __out_param_base,
        & __out_param_relative_position);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::gfx::Entity>::type,  ::Efl_Gfx_Entity*>(base, __out_param_base);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Align>::type, Efl_Gfx_Align>(relative_position, __out_param_relative_position);
}
inline ::efl::eolian::return_traits<void>::type Relative_Container::relation_right_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type child,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type base,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type relative_position) const
{
     ::efl_ui_relative_container_relation_right_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(child),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(base),
         ::efl::eolian::convert_to_c<Efl_Gfx_Align,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type>(relative_position));
}
inline ::efl::eolian::return_traits<void>::type Relative_Container::relation_top_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type child,  ::efl::eolian::out_traits< ::efl::gfx::Entity>::type base,  ::efl::eolian::out_traits<Efl_Gfx_Align>::type relative_position) const
{
     ::Efl_Gfx_Entity* __out_param_base = {};
    Efl_Gfx_Align __out_param_relative_position = {};
     ::efl_ui_relative_container_relation_top_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(child),
        & __out_param_base,
        & __out_param_relative_position);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::gfx::Entity>::type,  ::Efl_Gfx_Entity*>(base, __out_param_base);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Align>::type, Efl_Gfx_Align>(relative_position, __out_param_relative_position);
}
inline ::efl::eolian::return_traits<void>::type Relative_Container::relation_top_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type child,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type base,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type relative_position) const
{
     ::efl_ui_relative_container_relation_top_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(child),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(base),
         ::efl::eolian::convert_to_c<Efl_Gfx_Align,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type>(relative_position));
}
inline ::efl::eolian::return_traits<void>::type Relative_Container::relation_bottom_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type child,  ::efl::eolian::out_traits< ::efl::gfx::Entity>::type base,  ::efl::eolian::out_traits<Efl_Gfx_Align>::type relative_position) const
{
     ::Efl_Gfx_Entity* __out_param_base = {};
    Efl_Gfx_Align __out_param_relative_position = {};
     ::efl_ui_relative_container_relation_bottom_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(child),
        & __out_param_base,
        & __out_param_relative_position);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::gfx::Entity>::type,  ::Efl_Gfx_Entity*>(base, __out_param_base);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Align>::type, Efl_Gfx_Align>(relative_position, __out_param_relative_position);
}
inline ::efl::eolian::return_traits<void>::type Relative_Container::relation_bottom_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type child,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type base,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type relative_position) const
{
     ::efl_ui_relative_container_relation_bottom_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(child),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(base),
         ::efl::eolian::convert_to_c<Efl_Gfx_Align,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type>(relative_position));
}
inline efl::ui::Relative_Container::operator ::efl::ui::Relative_Container() const { return *static_cast< ::efl::ui::Relative_Container const*>(static_cast<void const*>(this)); }
inline efl::ui::Relative_Container::operator ::efl::ui::Relative_Container&() { return *static_cast< ::efl::ui::Relative_Container*>(static_cast<void*>(this)); }
inline efl::ui::Relative_Container::operator ::efl::ui::Relative_Container const&() const { return *static_cast< ::efl::ui::Relative_Container const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
