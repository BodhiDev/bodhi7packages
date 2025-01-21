#ifndef EFL_CANVAS_GESTURE_MANAGER_IMPL_HH
#define EFL_CANVAS_GESTURE_MANAGER_IMPL_HH

#include "efl_canvas_gesture_manager.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gesture_Manager::recognizer_register( ::efl::eolian::in_traits< ::efl::canvas::Gesture_Recognizer>::type recognizer) const
{
     ::efl_gesture_manager_recognizer_register(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Gesture_Recognizer*,  ::efl::eolian::in_traits< ::efl::canvas::Gesture_Recognizer>::type>(recognizer));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gesture_Manager::recognizer_unregister( ::efl::eolian::in_traits< ::efl::canvas::Gesture_Recognizer>::type recognizer) const
{
     ::efl_gesture_manager_recognizer_unregister(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Gesture_Recognizer*,  ::efl::eolian::in_traits< ::efl::canvas::Gesture_Recognizer>::type>(recognizer));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gesture_Manager::recognizer_cleanup( ::efl::eolian::in_traits< ::efl::canvas::Gesture_Recognizer>::type recognizer,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type target) const
{
     ::efl_gesture_manager_recognizer_cleanup(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Gesture_Recognizer const*,  ::efl::eolian::in_traits< ::efl::canvas::Gesture_Recognizer>::type>(recognizer),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object const*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(target));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gesture_Manager::recognizer_register( ::efl::eolian::in_traits< ::efl::canvas::Gesture_Recognizer>::type recognizer) const
{
     ::efl_gesture_manager_recognizer_register(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Gesture_Recognizer*,  ::efl::eolian::in_traits< ::efl::canvas::Gesture_Recognizer>::type>(recognizer));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gesture_Manager::recognizer_unregister( ::efl::eolian::in_traits< ::efl::canvas::Gesture_Recognizer>::type recognizer) const
{
     ::efl_gesture_manager_recognizer_unregister(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Gesture_Recognizer*,  ::efl::eolian::in_traits< ::efl::canvas::Gesture_Recognizer>::type>(recognizer));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gesture_Manager::recognizer_cleanup( ::efl::eolian::in_traits< ::efl::canvas::Gesture_Recognizer>::type recognizer,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type target) const
{
     ::efl_gesture_manager_recognizer_cleanup(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Gesture_Recognizer const*,  ::efl::eolian::in_traits< ::efl::canvas::Gesture_Recognizer>::type>(recognizer),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object const*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(target));
}
#endif
inline efl::canvas::Gesture_Manager::operator ::efl::canvas::Gesture_Manager() const { return *static_cast< ::efl::canvas::Gesture_Manager const*>(static_cast<void const*>(this)); }
inline efl::canvas::Gesture_Manager::operator ::efl::canvas::Gesture_Manager&() { return *static_cast< ::efl::canvas::Gesture_Manager*>(static_cast<void*>(this)); }
inline efl::canvas::Gesture_Manager::operator ::efl::canvas::Gesture_Manager const&() const { return *static_cast< ::efl::canvas::Gesture_Manager const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
