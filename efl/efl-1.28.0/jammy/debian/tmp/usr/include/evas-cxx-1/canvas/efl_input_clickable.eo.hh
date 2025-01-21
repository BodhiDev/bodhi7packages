#ifndef EFL_INPUT_CLICKABLE_EO_HH
#define EFL_INPUT_CLICKABLE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_input_clickable.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_INPUT_CLICKABLE_FWD_GUARD
#define EFL_INPUT_CLICKABLE_FWD_GUARD
namespace efl { namespace input { 
struct Clickable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Clickable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Clickable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Clickable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Clickable const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace input { 
struct Clickable {
    ::efl::eolian::return_traits<bool>::type interaction_get() const;
#ifdef EFL_INPUT_CLICKABLE_PROTECTED
    ::efl::eolian::return_traits<void>::type press( ::efl::eolian::in_traits< unsigned int>::type button) const;
#endif
#ifdef EFL_INPUT_CLICKABLE_PROTECTED
    ::efl::eolian::return_traits<void>::type unpress( ::efl::eolian::in_traits< unsigned int>::type button) const;
#endif
#ifdef EFL_INPUT_CLICKABLE_PROTECTED
    ::efl::eolian::return_traits<void>::type button_state_reset( ::efl::eolian::in_traits< unsigned int>::type button) const;
#endif
#ifdef EFL_INPUT_CLICKABLE_PROTECTED
    ::efl::eolian::return_traits<void>::type longpress_abort( ::efl::eolian::in_traits< unsigned int>::type button) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_INPUT_CLICKABLE_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Clickable *>(this))); }
    operator ::efl::input::Clickable() const;
    operator ::efl::input::Clickable&();
    operator ::efl::input::Clickable const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Clickable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Clickable const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace input { 
struct Clickable : private ::efl::eo::concrete
{
    explicit Clickable( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Clickable(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Clickable() = default;
    Clickable(Clickable const&) = default;
    Clickable(Clickable&&) = default;
    Clickable& operator=(Clickable const&) = default;
    Clickable& operator=(Clickable&&) = default;
    template <typename Derived>
    Clickable(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Clickable, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<bool>::type interaction_get() const;
#ifdef EFL_INPUT_CLICKABLE_PROTECTED
    ::efl::eolian::return_traits<void>::type press( ::efl::eolian::in_traits< unsigned int>::type button) const;
#endif
#ifdef EFL_INPUT_CLICKABLE_PROTECTED
    ::efl::eolian::return_traits<void>::type unpress( ::efl::eolian::in_traits< unsigned int>::type button) const;
#endif
#ifdef EFL_INPUT_CLICKABLE_PROTECTED
    ::efl::eolian::return_traits<void>::type button_state_reset( ::efl::eolian::in_traits< unsigned int>::type button) const;
#endif
#ifdef EFL_INPUT_CLICKABLE_PROTECTED
    ::efl::eolian::return_traits<void>::type longpress_abort( ::efl::eolian::in_traits< unsigned int>::type button) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_INPUT_CLICKABLE_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Clickable *>(this))); }
    static struct clicked_event
    {
        static Efl_Event_Description const* description()
        { return EFL_INPUT_EVENT_CLICKED; }
        typedef Efl_Input_Clickable_Clicked parameter_type;
    } const clicked_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    clicked_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(clicked_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    clicked_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(clicked_event, *this, std::bind(function));
    }
#endif
    static struct clicked_any_event
    {
        static Efl_Event_Description const* description()
        { return EFL_INPUT_EVENT_CLICKED_ANY; }
        typedef Efl_Input_Clickable_Clicked parameter_type;
    } const clicked_any_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    clicked_any_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(clicked_any_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    clicked_any_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(clicked_any_event, *this, std::bind(function));
    }
#endif
    static struct pressed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_INPUT_EVENT_PRESSED; }
        typedef int parameter_type;
    } const pressed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pressed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pressed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pressed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pressed_event, *this, std::bind(function));
    }
#endif
    static struct unpressed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_INPUT_EVENT_UNPRESSED; }
        typedef int parameter_type;
    } const unpressed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    unpressed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(unpressed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    unpressed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(unpressed_event, *this, std::bind(function));
    }
#endif
    static struct longpressed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_INPUT_EVENT_LONGPRESSED; }
        typedef int parameter_type;
    } const longpressed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    longpressed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(longpressed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    longpressed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(longpressed_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Clickable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Clickable const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Clickable> _get_wref() const { return ::efl::eo::wref<Clickable>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Clickable* operator->() const { return this; }
    Clickable* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Clickable const& lhs, Clickable const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Clickable const& lhs, Clickable const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Clickable) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Clickable>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
