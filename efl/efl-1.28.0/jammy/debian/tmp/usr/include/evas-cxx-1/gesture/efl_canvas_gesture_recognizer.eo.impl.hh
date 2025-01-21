#ifndef EFL_CANVAS_GESTURE_RECOGNIZER_IMPL_HH
#define EFL_CANVAS_GESTURE_RECOGNIZER_IMPL_HH

#include "efl_canvas_gesture_recognizer.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::Class>::type Gesture_Recognizer::type_get() const
{
     ::Efl_Class const* __return_value =  ::efl_gesture_recognizer_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Class>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Gesture_Recognizer::continues_get() const
{
    Eina_Bool __return_value =  ::efl_gesture_recognizer_continues_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gesture_Recognizer::continues_set( ::efl::eolian::in_traits<bool>::type value) const
{
     ::efl_gesture_recognizer_continues_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(value));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Canvas_Gesture_Recognizer_Result>::type Gesture_Recognizer::recognize( ::efl::eolian::in_traits< ::efl::canvas::Gesture>::type gesture,  ::efl::eolian::in_traits< ::efl::Object>::type watched,  ::efl::eolian::in_traits< ::efl::canvas::Gesture_Touch>::type event) const
{
    Efl_Canvas_Gesture_Recognizer_Result __return_value =  ::efl_gesture_recognizer_recognize(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Gesture*,  ::efl::eolian::in_traits< ::efl::canvas::Gesture>::type>(gesture),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(watched),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Gesture_Touch*,  ::efl::eolian::in_traits< ::efl::canvas::Gesture_Touch>::type>(event));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Canvas_Gesture_Recognizer_Result>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::Class>::type Gesture_Recognizer::type_get() const
{
     ::Efl_Class const* __return_value =  ::efl_gesture_recognizer_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Class>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Gesture_Recognizer::continues_get() const
{
    Eina_Bool __return_value =  ::efl_gesture_recognizer_continues_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gesture_Recognizer::continues_set( ::efl::eolian::in_traits<bool>::type value) const
{
     ::efl_gesture_recognizer_continues_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(value));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Canvas_Gesture_Recognizer_Result>::type Gesture_Recognizer::recognize( ::efl::eolian::in_traits< ::efl::canvas::Gesture>::type gesture,  ::efl::eolian::in_traits< ::efl::Object>::type watched,  ::efl::eolian::in_traits< ::efl::canvas::Gesture_Touch>::type event) const
{
    Efl_Canvas_Gesture_Recognizer_Result __return_value =  ::efl_gesture_recognizer_recognize(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Gesture*,  ::efl::eolian::in_traits< ::efl::canvas::Gesture>::type>(gesture),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(watched),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Gesture_Touch*,  ::efl::eolian::in_traits< ::efl::canvas::Gesture_Touch>::type>(event));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Canvas_Gesture_Recognizer_Result>::type>(__return_value);
}
#endif
inline efl::canvas::Gesture_Recognizer::operator ::efl::canvas::Gesture_Recognizer() const { return *static_cast< ::efl::canvas::Gesture_Recognizer const*>(static_cast<void const*>(this)); }
inline efl::canvas::Gesture_Recognizer::operator ::efl::canvas::Gesture_Recognizer&() { return *static_cast< ::efl::canvas::Gesture_Recognizer*>(static_cast<void*>(this)); }
inline efl::canvas::Gesture_Recognizer::operator ::efl::canvas::Gesture_Recognizer const&() const { return *static_cast< ::efl::canvas::Gesture_Recognizer const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
