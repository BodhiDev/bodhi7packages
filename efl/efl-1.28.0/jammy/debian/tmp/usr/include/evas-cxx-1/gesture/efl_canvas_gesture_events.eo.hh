#ifndef EFL_CANVAS_GESTURE_EVENTS_EO_HH
#define EFL_CANVAS_GESTURE_EVENTS_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_gesture_custom.eo.h"
#include "efl_canvas_gesture_double_tap.eo.h"
#include "efl_canvas_gesture_events.eo.h"
#include "efl_canvas_gesture_flick.eo.h"
#include "efl_canvas_gesture_long_press.eo.h"
#include "efl_canvas_gesture_momentum.eo.h"
#include "efl_canvas_gesture_rotate.eo.h"
#include "efl_canvas_gesture_tap.eo.h"
#include "efl_canvas_gesture_triple_tap.eo.h"
#include "efl_canvas_gesture_zoom.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_gesture_custom.eo.hh"
#include "efl_canvas_gesture_double_tap.eo.hh"
#include "efl_canvas_gesture_flick.eo.hh"
#include "efl_canvas_gesture_long_press.eo.hh"
#include "efl_canvas_gesture_momentum.eo.hh"
#include "efl_canvas_gesture_rotate.eo.hh"
#include "efl_canvas_gesture_tap.eo.hh"
#include "efl_canvas_gesture_triple_tap.eo.hh"
#include "efl_canvas_gesture_zoom.eo.hh"
#ifndef EFL_CANVAS_GESTURE_EVENTS_FWD_GUARD
#define EFL_CANVAS_GESTURE_EVENTS_FWD_GUARD
namespace efl { namespace canvas { 
struct Gesture_Events;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Events> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Events&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Events const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Events const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_GESTURE_CUSTOM_FWD_GUARD
#define EFL_CANVAS_GESTURE_CUSTOM_FWD_GUARD
namespace efl { namespace canvas { 
struct Gesture_Custom;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Custom> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Custom&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Custom const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Custom const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_GESTURE_DOUBLE_TAP_FWD_GUARD
#define EFL_CANVAS_GESTURE_DOUBLE_TAP_FWD_GUARD
namespace efl { namespace canvas { 
struct Gesture_Double_Tap;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Double_Tap> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Double_Tap&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Double_Tap const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Double_Tap const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_GESTURE_FLICK_FWD_GUARD
#define EFL_CANVAS_GESTURE_FLICK_FWD_GUARD
namespace efl { namespace canvas { 
struct Gesture_Flick;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Flick> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Flick&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Flick const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Flick const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_GESTURE_LONG_PRESS_FWD_GUARD
#define EFL_CANVAS_GESTURE_LONG_PRESS_FWD_GUARD
namespace efl { namespace canvas { 
struct Gesture_Long_Press;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Long_Press> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Long_Press&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Long_Press const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Long_Press const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_GESTURE_MOMENTUM_FWD_GUARD
#define EFL_CANVAS_GESTURE_MOMENTUM_FWD_GUARD
namespace efl { namespace canvas { 
struct Gesture_Momentum;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Momentum> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Momentum&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Momentum const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Momentum const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_GESTURE_ROTATE_FWD_GUARD
#define EFL_CANVAS_GESTURE_ROTATE_FWD_GUARD
namespace efl { namespace canvas { 
struct Gesture_Rotate;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Rotate> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Rotate&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Rotate const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Rotate const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_GESTURE_TAP_FWD_GUARD
#define EFL_CANVAS_GESTURE_TAP_FWD_GUARD
namespace efl { namespace canvas { 
struct Gesture_Tap;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Tap> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Tap&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Tap const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Tap const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_GESTURE_TRIPLE_TAP_FWD_GUARD
#define EFL_CANVAS_GESTURE_TRIPLE_TAP_FWD_GUARD
namespace efl { namespace canvas { 
struct Gesture_Triple_Tap;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Triple_Tap> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Triple_Tap&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Triple_Tap const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Triple_Tap const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_GESTURE_ZOOM_FWD_GUARD
#define EFL_CANVAS_GESTURE_ZOOM_FWD_GUARD
namespace efl { namespace canvas { 
struct Gesture_Zoom;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Zoom> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Zoom&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Zoom const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Zoom const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { 
struct Gesture_Events {
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_GESTURE_EVENTS_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gesture_Events *>(this))); }
    operator ::efl::canvas::Gesture_Events() const;
    operator ::efl::canvas::Gesture_Events&();
    operator ::efl::canvas::Gesture_Events const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gesture_Events> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gesture_Events const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Gesture_Events : private ::efl::eo::concrete
{
    explicit Gesture_Events( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Gesture_Events(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Gesture_Events() = default;
    Gesture_Events(Gesture_Events const&) = default;
    Gesture_Events(Gesture_Events&&) = default;
    Gesture_Events& operator=(Gesture_Events const&) = default;
    Gesture_Events& operator=(Gesture_Events&&) = default;
    template <typename Derived>
    Gesture_Events(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Gesture_Events, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_GESTURE_EVENTS_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gesture_Events *>(this))); }
#ifdef EFL_CANVAS_GESTURE_EVENTS_BETA
    static struct gesture_tap_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_GESTURE_TAP; }
        typedef  ::efl::canvas::Gesture_Tap parameter_type;
    } const gesture_tap_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    gesture_tap_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(gesture_tap_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    gesture_tap_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(gesture_tap_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_CANVAS_GESTURE_EVENTS_BETA
    static struct gesture_double_tap_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_GESTURE_DOUBLE_TAP; }
        typedef  ::efl::canvas::Gesture_Double_Tap parameter_type;
    } const gesture_double_tap_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    gesture_double_tap_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(gesture_double_tap_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    gesture_double_tap_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(gesture_double_tap_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_CANVAS_GESTURE_EVENTS_BETA
    static struct gesture_triple_tap_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_GESTURE_TRIPLE_TAP; }
        typedef  ::efl::canvas::Gesture_Triple_Tap parameter_type;
    } const gesture_triple_tap_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    gesture_triple_tap_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(gesture_triple_tap_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    gesture_triple_tap_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(gesture_triple_tap_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_CANVAS_GESTURE_EVENTS_BETA
    static struct gesture_long_press_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_GESTURE_LONG_PRESS; }
        typedef  ::efl::canvas::Gesture_Long_Press parameter_type;
    } const gesture_long_press_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    gesture_long_press_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(gesture_long_press_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    gesture_long_press_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(gesture_long_press_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_CANVAS_GESTURE_EVENTS_BETA
    static struct gesture_momentum_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_GESTURE_MOMENTUM; }
        typedef  ::efl::canvas::Gesture_Momentum parameter_type;
    } const gesture_momentum_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    gesture_momentum_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(gesture_momentum_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    gesture_momentum_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(gesture_momentum_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_CANVAS_GESTURE_EVENTS_BETA
    static struct gesture_flick_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_GESTURE_FLICK; }
        typedef  ::efl::canvas::Gesture_Flick parameter_type;
    } const gesture_flick_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    gesture_flick_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(gesture_flick_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    gesture_flick_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(gesture_flick_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_CANVAS_GESTURE_EVENTS_BETA
    static struct gesture_rotate_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_GESTURE_ROTATE; }
        typedef  ::efl::canvas::Gesture_Rotate parameter_type;
    } const gesture_rotate_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    gesture_rotate_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(gesture_rotate_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    gesture_rotate_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(gesture_rotate_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_CANVAS_GESTURE_EVENTS_BETA
    static struct gesture_zoom_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_GESTURE_ZOOM; }
        typedef  ::efl::canvas::Gesture_Zoom parameter_type;
    } const gesture_zoom_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    gesture_zoom_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(gesture_zoom_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    gesture_zoom_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(gesture_zoom_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_CANVAS_GESTURE_EVENTS_BETA
    static struct gesture_custom_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_GESTURE_CUSTOM; }
        typedef  ::efl::canvas::Gesture_Custom parameter_type;
    } const gesture_custom_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    gesture_custom_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(gesture_custom_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    gesture_custom_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(gesture_custom_event, *this, std::bind(function));
    }
#endif
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gesture_Events> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gesture_Events const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Gesture_Events> _get_wref() const { return ::efl::eo::wref<Gesture_Events>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Gesture_Events* operator->() const { return this; }
    Gesture_Events* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Gesture_Events const& lhs, Gesture_Events const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Gesture_Events const& lhs, Gesture_Events const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Gesture_Events) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Gesture_Events>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
