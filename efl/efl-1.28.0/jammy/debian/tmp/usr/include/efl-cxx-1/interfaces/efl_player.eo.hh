#ifndef EFL_PLAYER_EO_HH
#define EFL_PLAYER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_player.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_PLAYER_FWD_GUARD
#define EFL_PLAYER_FWD_GUARD
namespace efl { 
struct Player;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Player> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Player&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Player const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Player const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Player {
    ::efl::eolian::return_traits<bool>::type playing_get() const;
    ::efl::eolian::return_traits<bool>::type playing_set( ::efl::eolian::in_traits<bool>::type playing) const;
    ::efl::eolian::return_traits<bool>::type paused_get() const;
    ::efl::eolian::return_traits<bool>::type paused_set( ::efl::eolian::in_traits<bool>::type paused) const;
    ::efl::eolian::return_traits<double>::type playback_position_get() const;
    ::efl::eolian::return_traits<void>::type playback_position_set( ::efl::eolian::in_traits<double>::type sec) const;
    ::efl::eolian::return_traits<double>::type playback_progress_get() const;
    ::efl::eolian::return_traits<void>::type playback_progress_set( ::efl::eolian::in_traits<double>::type progress) const;
    ::efl::eolian::return_traits<double>::type playback_speed_get() const;
    ::efl::eolian::return_traits<void>::type playback_speed_set( ::efl::eolian::in_traits<double>::type speed) const;
    ::efl::eolian::return_traits<bool>::type autoplay_get() const;
    ::efl::eolian::return_traits<void>::type autoplay_set( ::efl::eolian::in_traits<bool>::type autoplay) const;
    ::efl::eolian::return_traits<bool>::type playback_loop_get() const;
    ::efl::eolian::return_traits<void>::type playback_loop_set( ::efl::eolian::in_traits<bool>::type looping) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_PLAYER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Player *>(this))); }
    operator ::efl::Player() const;
    operator ::efl::Player&();
    operator ::efl::Player const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Player> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Player const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Player : private ::efl::eo::concrete
{
    explicit Player( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Player(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Player() = default;
    Player(Player const&) = default;
    Player(Player&&) = default;
    Player& operator=(Player const&) = default;
    Player& operator=(Player&&) = default;
    template <typename Derived>
    Player(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Player, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<bool>::type playing_get() const;
    ::efl::eolian::return_traits<bool>::type playing_set( ::efl::eolian::in_traits<bool>::type playing) const;
    ::efl::eolian::return_traits<bool>::type paused_get() const;
    ::efl::eolian::return_traits<bool>::type paused_set( ::efl::eolian::in_traits<bool>::type paused) const;
    ::efl::eolian::return_traits<double>::type playback_position_get() const;
    ::efl::eolian::return_traits<void>::type playback_position_set( ::efl::eolian::in_traits<double>::type sec) const;
    ::efl::eolian::return_traits<double>::type playback_progress_get() const;
    ::efl::eolian::return_traits<void>::type playback_progress_set( ::efl::eolian::in_traits<double>::type progress) const;
    ::efl::eolian::return_traits<double>::type playback_speed_get() const;
    ::efl::eolian::return_traits<void>::type playback_speed_set( ::efl::eolian::in_traits<double>::type speed) const;
    ::efl::eolian::return_traits<bool>::type autoplay_get() const;
    ::efl::eolian::return_traits<void>::type autoplay_set( ::efl::eolian::in_traits<bool>::type autoplay) const;
    ::efl::eolian::return_traits<bool>::type playback_loop_get() const;
    ::efl::eolian::return_traits<void>::type playback_loop_set( ::efl::eolian::in_traits<bool>::type looping) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_PLAYER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Player *>(this))); }
    static struct playing_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_PLAYER_EVENT_PLAYING_CHANGED; }
        typedef bool parameter_type;
    } const playing_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    playing_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(playing_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    playing_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(playing_changed_event, *this, std::bind(function));
    }
#endif
    static struct paused_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_PLAYER_EVENT_PAUSED_CHANGED; }
        typedef bool parameter_type;
    } const paused_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    paused_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(paused_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    paused_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(paused_changed_event, *this, std::bind(function));
    }
#endif
    static struct playback_progress_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_PLAYER_EVENT_PLAYBACK_PROGRESS_CHANGED; }
        typedef double parameter_type;
    } const playback_progress_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    playback_progress_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(playback_progress_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    playback_progress_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(playback_progress_changed_event, *this, std::bind(function));
    }
#endif
    static struct playback_position_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_PLAYER_EVENT_PLAYBACK_POSITION_CHANGED; }
        typedef double parameter_type;
    } const playback_position_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    playback_position_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(playback_position_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    playback_position_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(playback_position_changed_event, *this, std::bind(function));
    }
#endif
    static struct playback_repeated_event
    {
        static Efl_Event_Description const* description()
        { return EFL_PLAYER_EVENT_PLAYBACK_REPEATED; }
        typedef int parameter_type;
    } const playback_repeated_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    playback_repeated_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(playback_repeated_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    playback_repeated_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(playback_repeated_event, *this, std::bind(function));
    }
#endif
    static struct playback_finished_event
    {
        static Efl_Event_Description const* description()
        { return EFL_PLAYER_EVENT_PLAYBACK_FINISHED; }
        typedef void parameter_type;
    } const playback_finished_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    playback_finished_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(playback_finished_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    playback_finished_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(playback_finished_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Player> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Player const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Player> _get_wref() const { return ::efl::eo::wref<Player>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Player* operator->() const { return this; }
    Player* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Player const& lhs, Player const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Player const& lhs, Player const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Player) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Player>::value, "");
} 

#pragma GCC diagnostic pop

#endif
