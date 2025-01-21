#ifndef EFL_AUDIO_CONTROL_IMPL_HH
#define EFL_AUDIO_CONTROL_IMPL_HH

#include "efl_audio_control.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Audio_Control::volume_get() const
{
    double __return_value =  ::efl_audio_control_volume_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Audio_Control::volume_set( ::efl::eolian::in_traits<double>::type volume) const
{
     ::efl_audio_control_volume_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(volume));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Audio_Control::mute_get() const
{
    Eina_Bool __return_value =  ::efl_audio_control_mute_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Audio_Control::mute_set( ::efl::eolian::in_traits<bool>::type mute) const
{
     ::efl_audio_control_mute_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(mute));
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Audio_Control::volume_get() const
{
    double __return_value =  ::efl_audio_control_volume_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Audio_Control::volume_set( ::efl::eolian::in_traits<double>::type volume) const
{
     ::efl_audio_control_volume_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(volume));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Audio_Control::mute_get() const
{
    Eina_Bool __return_value =  ::efl_audio_control_mute_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Audio_Control::mute_set( ::efl::eolian::in_traits<bool>::type mute) const
{
     ::efl_audio_control_mute_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(mute));
}
#endif
inline efl::Audio_Control::operator ::efl::Audio_Control() const { return *static_cast< ::efl::Audio_Control const*>(static_cast<void const*>(this)); }
inline efl::Audio_Control::operator ::efl::Audio_Control&() { return *static_cast< ::efl::Audio_Control*>(static_cast<void*>(this)); }
inline efl::Audio_Control::operator ::efl::Audio_Control const&() const { return *static_cast< ::efl::Audio_Control const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
