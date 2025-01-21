#ifndef EFL_UI_VIDEO_IMPL_HH
#define EFL_UI_VIDEO_IMPL_HH

#include "efl_ui_video.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Video::remember_position_get() const
{
    Eina_Bool __return_value =  ::efl_ui_video_remember_position_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Video::remember_position_set( ::efl::eolian::in_traits<bool>::type remember) const
{
     ::efl_ui_video_remember_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(remember));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Video::emotion_get() const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_ui_video_emotion_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Video::title_get() const
{
    const char * __return_value =  ::efl_ui_video_title_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Video::remember_position_get() const
{
    Eina_Bool __return_value =  ::efl_ui_video_remember_position_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Video::remember_position_set( ::efl::eolian::in_traits<bool>::type remember) const
{
     ::efl_ui_video_remember_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(remember));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Video::emotion_get() const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_ui_video_emotion_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Video::title_get() const
{
    const char * __return_value =  ::efl_ui_video_title_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
inline efl::ui::Video::operator ::efl::ui::Video() const { return *static_cast< ::efl::ui::Video const*>(static_cast<void const*>(this)); }
inline efl::ui::Video::operator ::efl::ui::Video&() { return *static_cast< ::efl::ui::Video*>(static_cast<void*>(this)); }
inline efl::ui::Video::operator ::efl::ui::Video const&() const { return *static_cast< ::efl::ui::Video const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
