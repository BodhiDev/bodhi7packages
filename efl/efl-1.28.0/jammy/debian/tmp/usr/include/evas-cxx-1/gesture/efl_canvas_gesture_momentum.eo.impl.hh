#ifndef EFL_CANVAS_GESTURE_MOMENTUM_IMPL_HH
#define EFL_CANVAS_GESTURE_MOMENTUM_IMPL_HH

#include "efl_canvas_gesture_momentum.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Vector2>::type Gesture_Momentum::momentum_get() const
{
    Eina_Vector2 __return_value =  ::efl_gesture_momentum_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Vector2>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Vector2>::type Gesture_Momentum::momentum_get() const
{
    Eina_Vector2 __return_value =  ::efl_gesture_momentum_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Vector2>::type>(__return_value);
}
#endif
inline efl::canvas::Gesture_Momentum::operator ::efl::canvas::Gesture_Momentum() const { return *static_cast< ::efl::canvas::Gesture_Momentum const*>(static_cast<void const*>(this)); }
inline efl::canvas::Gesture_Momentum::operator ::efl::canvas::Gesture_Momentum&() { return *static_cast< ::efl::canvas::Gesture_Momentum*>(static_cast<void*>(this)); }
inline efl::canvas::Gesture_Momentum::operator ::efl::canvas::Gesture_Momentum const&() const { return *static_cast< ::efl::canvas::Gesture_Momentum const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
