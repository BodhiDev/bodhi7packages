#ifndef EFL_CANVAS_GESTURE_RECOGNIZER_CUSTOM_IMPL_HH
#define EFL_CANVAS_GESTURE_RECOGNIZER_CUSTOM_IMPL_HH

#include "efl_canvas_gesture_recognizer_custom.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Gesture_Recognizer_Custom::gesture_name_get() const
{
    const char * __return_value =  ::efl_gesture_recognizer_custom_gesture_name_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gesture_Recognizer_Custom::gesture_name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type gesture_name) const
{
     ::efl_gesture_recognizer_custom_gesture_name_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(gesture_name));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Gesture_Recognizer_Custom::gesture_name_get() const
{
    const char * __return_value =  ::efl_gesture_recognizer_custom_gesture_name_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Gesture_Recognizer_Custom::gesture_name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type gesture_name) const
{
     ::efl_gesture_recognizer_custom_gesture_name_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(gesture_name));
}
#endif
inline efl::canvas::Gesture_Recognizer_Custom::operator ::efl::canvas::Gesture_Recognizer_Custom() const { return *static_cast< ::efl::canvas::Gesture_Recognizer_Custom const*>(static_cast<void const*>(this)); }
inline efl::canvas::Gesture_Recognizer_Custom::operator ::efl::canvas::Gesture_Recognizer_Custom&() { return *static_cast< ::efl::canvas::Gesture_Recognizer_Custom*>(static_cast<void*>(this)); }
inline efl::canvas::Gesture_Recognizer_Custom::operator ::efl::canvas::Gesture_Recognizer_Custom const&() const { return *static_cast< ::efl::canvas::Gesture_Recognizer_Custom const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
