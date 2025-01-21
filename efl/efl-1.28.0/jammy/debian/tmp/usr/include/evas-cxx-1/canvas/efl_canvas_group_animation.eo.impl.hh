#ifndef EFL_CANVAS_GROUP_ANIMATION_IMPL_HH
#define EFL_CANVAS_GROUP_ANIMATION_IMPL_HH

#include "efl_canvas_group_animation.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::canvas::Animation>>::type Group_Animation::animations_get() const
{
    Eina_Iterator * __return_value =  ::efl_animation_group_animations_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::canvas::Animation>>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Group_Animation::animation_add( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type animation) const
{
     ::efl_animation_group_animation_add(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Animation*,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type>(animation));
}
inline ::efl::eolian::return_traits<void>::type Group_Animation::animation_del( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type animation) const
{
     ::efl_animation_group_animation_del(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Animation*,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type>(animation));
}
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::canvas::Animation>>::type Group_Animation::animations_get() const
{
    Eina_Iterator * __return_value =  ::efl_animation_group_animations_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::canvas::Animation>>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Group_Animation::animation_add( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type animation) const
{
     ::efl_animation_group_animation_add(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Animation*,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type>(animation));
}
inline ::efl::eolian::return_traits<void>::type Group_Animation::animation_del( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type animation) const
{
     ::efl_animation_group_animation_del(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Animation*,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type>(animation));
}
inline efl::canvas::Group_Animation::operator ::efl::canvas::Group_Animation() const { return *static_cast< ::efl::canvas::Group_Animation const*>(static_cast<void const*>(this)); }
inline efl::canvas::Group_Animation::operator ::efl::canvas::Group_Animation&() { return *static_cast< ::efl::canvas::Group_Animation*>(static_cast<void*>(this)); }
inline efl::canvas::Group_Animation::operator ::efl::canvas::Group_Animation const&() const { return *static_cast< ::efl::canvas::Group_Animation const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
