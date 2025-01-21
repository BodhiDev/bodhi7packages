#ifndef EFL_ACCESS_WINDOW_EO_HH
#define EFL_ACCESS_WINDOW_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_access_window.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_ACCESS_WINDOW_FWD_GUARD
#define EFL_ACCESS_WINDOW_FWD_GUARD
namespace efl { namespace access { 
struct Window;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Window> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Window&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Window const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Window const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace access { 
struct Window {
    static Efl_Class const* _eo_class()
    {
        return EFL_ACCESS_WINDOW_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Window *>(this))); }
    operator ::efl::access::Window() const;
    operator ::efl::access::Window&();
    operator ::efl::access::Window const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Window> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Window const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace access { 
struct Window : private ::efl::eo::concrete
{
    explicit Window( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Window(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Window() = default;
    Window(Window const&) = default;
    Window(Window&&) = default;
    Window& operator=(Window const&) = default;
    Window& operator=(Window&&) = default;
    template <typename Derived>
    Window(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Window, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    static Efl_Class const* _eo_class()
    {
        return EFL_ACCESS_WINDOW_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Window *>(this))); }
#ifdef EFL_ACCESS_WINDOW_BETA
    static struct window_created_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_WINDOW_EVENT_WINDOW_CREATED; }
        typedef void parameter_type;
    } const window_created_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    window_created_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(window_created_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    window_created_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(window_created_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_ACCESS_WINDOW_BETA
    static struct window_destroyed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_WINDOW_EVENT_WINDOW_DESTROYED; }
        typedef void parameter_type;
    } const window_destroyed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    window_destroyed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(window_destroyed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    window_destroyed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(window_destroyed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_ACCESS_WINDOW_BETA
    static struct window_activated_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_WINDOW_EVENT_WINDOW_ACTIVATED; }
        typedef void parameter_type;
    } const window_activated_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    window_activated_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(window_activated_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    window_activated_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(window_activated_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_ACCESS_WINDOW_BETA
    static struct window_deactivated_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_WINDOW_EVENT_WINDOW_DEACTIVATED; }
        typedef void parameter_type;
    } const window_deactivated_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    window_deactivated_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(window_deactivated_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    window_deactivated_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(window_deactivated_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_ACCESS_WINDOW_BETA
    static struct window_maximized_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_WINDOW_EVENT_WINDOW_MAXIMIZED; }
        typedef void parameter_type;
    } const window_maximized_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    window_maximized_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(window_maximized_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    window_maximized_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(window_maximized_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_ACCESS_WINDOW_BETA
    static struct window_minimized_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_WINDOW_EVENT_WINDOW_MINIMIZED; }
        typedef void parameter_type;
    } const window_minimized_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    window_minimized_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(window_minimized_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    window_minimized_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(window_minimized_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_ACCESS_WINDOW_BETA
    static struct window_restored_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_WINDOW_EVENT_WINDOW_RESTORED; }
        typedef void parameter_type;
    } const window_restored_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    window_restored_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(window_restored_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    window_restored_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(window_restored_event, *this, std::bind(function));
    }
#endif
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Window> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Window const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Window> _get_wref() const { return ::efl::eo::wref<Window>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Window* operator->() const { return this; }
    Window* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Window const& lhs, Window const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Window const& lhs, Window const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Window) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Window>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
