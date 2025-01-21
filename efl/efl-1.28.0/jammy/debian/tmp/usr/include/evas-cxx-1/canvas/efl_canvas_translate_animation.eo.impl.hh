#ifndef EFL_CANVAS_TRANSLATE_ANIMATION_IMPL_HH
#define EFL_CANVAS_TRANSLATE_ANIMATION_IMPL_HH

#include "efl_canvas_translate_animation.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
inline ::efl::eolian::return_traits<void>::type Translate_Animation::translate_get( ::efl::eolian::out_traits<Eina_Position2D>::type from,  ::efl::eolian::out_traits<Eina_Position2D>::type to) const
{
    Eina_Position2D __out_param_from = {};
    Eina_Position2D __out_param_to = {};
     ::efl_animation_translate_get(_eo_ptr(),
        & __out_param_from,
        & __out_param_to);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Position2D>::type, Eina_Position2D>(from, __out_param_from);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Position2D>::type, Eina_Position2D>(to, __out_param_to);
}
inline ::efl::eolian::return_traits<void>::type Translate_Animation::translate_set( ::efl::eolian::in_traits<Eina_Position2D>::type from,  ::efl::eolian::in_traits<Eina_Position2D>::type to) const
{
     ::efl_animation_translate_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(from),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(to));
}
inline ::efl::eolian::return_traits<void>::type Translate_Animation::translate_absolute_get( ::efl::eolian::out_traits<Eina_Position2D>::type from,  ::efl::eolian::out_traits<Eina_Position2D>::type to) const
{
    Eina_Position2D __out_param_from = {};
    Eina_Position2D __out_param_to = {};
     ::efl_animation_translate_absolute_get(_eo_ptr(),
        & __out_param_from,
        & __out_param_to);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Position2D>::type, Eina_Position2D>(from, __out_param_from);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Position2D>::type, Eina_Position2D>(to, __out_param_to);
}
inline ::efl::eolian::return_traits<void>::type Translate_Animation::translate_absolute_set( ::efl::eolian::in_traits<Eina_Position2D>::type from,  ::efl::eolian::in_traits<Eina_Position2D>::type to) const
{
     ::efl_animation_translate_absolute_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(from),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(to));
}
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
inline ::efl::eolian::return_traits<void>::type Translate_Animation::translate_get( ::efl::eolian::out_traits<Eina_Position2D>::type from,  ::efl::eolian::out_traits<Eina_Position2D>::type to) const
{
    Eina_Position2D __out_param_from = {};
    Eina_Position2D __out_param_to = {};
     ::efl_animation_translate_get(_eo_ptr(),
        & __out_param_from,
        & __out_param_to);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Position2D>::type, Eina_Position2D>(from, __out_param_from);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Position2D>::type, Eina_Position2D>(to, __out_param_to);
}
inline ::efl::eolian::return_traits<void>::type Translate_Animation::translate_set( ::efl::eolian::in_traits<Eina_Position2D>::type from,  ::efl::eolian::in_traits<Eina_Position2D>::type to) const
{
     ::efl_animation_translate_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(from),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(to));
}
inline ::efl::eolian::return_traits<void>::type Translate_Animation::translate_absolute_get( ::efl::eolian::out_traits<Eina_Position2D>::type from,  ::efl::eolian::out_traits<Eina_Position2D>::type to) const
{
    Eina_Position2D __out_param_from = {};
    Eina_Position2D __out_param_to = {};
     ::efl_animation_translate_absolute_get(_eo_ptr(),
        & __out_param_from,
        & __out_param_to);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Position2D>::type, Eina_Position2D>(from, __out_param_from);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Position2D>::type, Eina_Position2D>(to, __out_param_to);
}
inline ::efl::eolian::return_traits<void>::type Translate_Animation::translate_absolute_set( ::efl::eolian::in_traits<Eina_Position2D>::type from,  ::efl::eolian::in_traits<Eina_Position2D>::type to) const
{
     ::efl_animation_translate_absolute_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(from),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(to));
}
inline efl::canvas::Translate_Animation::operator ::efl::canvas::Translate_Animation() const { return *static_cast< ::efl::canvas::Translate_Animation const*>(static_cast<void const*>(this)); }
inline efl::canvas::Translate_Animation::operator ::efl::canvas::Translate_Animation&() { return *static_cast< ::efl::canvas::Translate_Animation*>(static_cast<void*>(this)); }
inline efl::canvas::Translate_Animation::operator ::efl::canvas::Translate_Animation const&() const { return *static_cast< ::efl::canvas::Translate_Animation const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
