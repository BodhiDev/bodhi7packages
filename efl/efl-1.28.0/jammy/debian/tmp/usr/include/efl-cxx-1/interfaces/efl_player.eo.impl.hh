#ifndef EFL_PLAYER_IMPL_HH
#define EFL_PLAYER_IMPL_HH

#include "efl_player.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<bool>::type Player::playing_get() const
{
    Eina_Bool __return_value =  ::efl_player_playing_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Player::playing_set( ::efl::eolian::in_traits<bool>::type playing) const
{
    Eina_Bool __return_value =  ::efl_player_playing_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(playing));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Player::paused_get() const
{
    Eina_Bool __return_value =  ::efl_player_paused_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Player::paused_set( ::efl::eolian::in_traits<bool>::type paused) const
{
    Eina_Bool __return_value =  ::efl_player_paused_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(paused));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<double>::type Player::playback_position_get() const
{
    double __return_value =  ::efl_player_playback_position_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Player::playback_position_set( ::efl::eolian::in_traits<double>::type sec) const
{
     ::efl_player_playback_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(sec));
}
inline ::efl::eolian::return_traits<double>::type Player::playback_progress_get() const
{
    double __return_value =  ::efl_player_playback_progress_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Player::playback_progress_set( ::efl::eolian::in_traits<double>::type progress) const
{
     ::efl_player_playback_progress_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(progress));
}
inline ::efl::eolian::return_traits<double>::type Player::playback_speed_get() const
{
    double __return_value =  ::efl_player_playback_speed_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Player::playback_speed_set( ::efl::eolian::in_traits<double>::type speed) const
{
     ::efl_player_playback_speed_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(speed));
}
inline ::efl::eolian::return_traits<bool>::type Player::autoplay_get() const
{
    Eina_Bool __return_value =  ::efl_player_autoplay_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Player::autoplay_set( ::efl::eolian::in_traits<bool>::type autoplay) const
{
     ::efl_player_autoplay_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(autoplay));
}
inline ::efl::eolian::return_traits<bool>::type Player::playback_loop_get() const
{
    Eina_Bool __return_value =  ::efl_player_playback_loop_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Player::playback_loop_set( ::efl::eolian::in_traits<bool>::type looping) const
{
     ::efl_player_playback_loop_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(looping));
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<bool>::type Player::playing_get() const
{
    Eina_Bool __return_value =  ::efl_player_playing_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Player::playing_set( ::efl::eolian::in_traits<bool>::type playing) const
{
    Eina_Bool __return_value =  ::efl_player_playing_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(playing));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Player::paused_get() const
{
    Eina_Bool __return_value =  ::efl_player_paused_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Player::paused_set( ::efl::eolian::in_traits<bool>::type paused) const
{
    Eina_Bool __return_value =  ::efl_player_paused_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(paused));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<double>::type Player::playback_position_get() const
{
    double __return_value =  ::efl_player_playback_position_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Player::playback_position_set( ::efl::eolian::in_traits<double>::type sec) const
{
     ::efl_player_playback_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(sec));
}
inline ::efl::eolian::return_traits<double>::type Player::playback_progress_get() const
{
    double __return_value =  ::efl_player_playback_progress_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Player::playback_progress_set( ::efl::eolian::in_traits<double>::type progress) const
{
     ::efl_player_playback_progress_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(progress));
}
inline ::efl::eolian::return_traits<double>::type Player::playback_speed_get() const
{
    double __return_value =  ::efl_player_playback_speed_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Player::playback_speed_set( ::efl::eolian::in_traits<double>::type speed) const
{
     ::efl_player_playback_speed_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(speed));
}
inline ::efl::eolian::return_traits<bool>::type Player::autoplay_get() const
{
    Eina_Bool __return_value =  ::efl_player_autoplay_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Player::autoplay_set( ::efl::eolian::in_traits<bool>::type autoplay) const
{
     ::efl_player_autoplay_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(autoplay));
}
inline ::efl::eolian::return_traits<bool>::type Player::playback_loop_get() const
{
    Eina_Bool __return_value =  ::efl_player_playback_loop_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Player::playback_loop_set( ::efl::eolian::in_traits<bool>::type looping) const
{
     ::efl_player_playback_loop_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(looping));
}
inline efl::Player::operator ::efl::Player() const { return *static_cast< ::efl::Player const*>(static_cast<void const*>(this)); }
inline efl::Player::operator ::efl::Player&() { return *static_cast< ::efl::Player*>(static_cast<void*>(this)); }
inline efl::Player::operator ::efl::Player const&() const { return *static_cast< ::efl::Player const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
