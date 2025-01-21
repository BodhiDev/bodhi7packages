#ifndef EFL_UI_RANGE_DISPLAY_EO_HH
#define EFL_UI_RANGE_DISPLAY_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_range_display.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_UI_RANGE_DISPLAY_FWD_GUARD
#define EFL_UI_RANGE_DISPLAY_FWD_GUARD
namespace efl { namespace ui { 
struct Range_Display;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Range_Display> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Range_Display&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Range_Display const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Range_Display const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Range_Display {
    ::efl::eolian::return_traits<double>::type range_value_get() const;
    ::efl::eolian::return_traits<void>::type range_value_set( ::efl::eolian::in_traits<double>::type val) const;
    ::efl::eolian::return_traits<void>::type range_limits_get( ::efl::eolian::out_traits<double>::type min,  ::efl::eolian::out_traits<double>::type max) const;
    ::efl::eolian::return_traits<void>::type range_limits_set( ::efl::eolian::in_traits<double>::type min,  ::efl::eolian::in_traits<double>::type max) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_RANGE_DISPLAY_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Range_Display *>(this))); }
    operator ::efl::ui::Range_Display() const;
    operator ::efl::ui::Range_Display&();
    operator ::efl::ui::Range_Display const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Range_Display> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Range_Display const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Range_Display : private ::efl::eo::concrete
{
    explicit Range_Display( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Range_Display(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Range_Display() = default;
    Range_Display(Range_Display const&) = default;
    Range_Display(Range_Display&&) = default;
    Range_Display& operator=(Range_Display const&) = default;
    Range_Display& operator=(Range_Display&&) = default;
    template <typename Derived>
    Range_Display(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Range_Display, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<double>::type range_value_get() const;
    ::efl::eolian::return_traits<void>::type range_value_set( ::efl::eolian::in_traits<double>::type val) const;
    ::efl::eolian::return_traits<void>::type range_limits_get( ::efl::eolian::out_traits<double>::type min,  ::efl::eolian::out_traits<double>::type max) const;
    ::efl::eolian::return_traits<void>::type range_limits_set( ::efl::eolian::in_traits<double>::type min,  ::efl::eolian::in_traits<double>::type max) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_RANGE_DISPLAY_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Range_Display *>(this))); }
    static struct changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_RANGE_EVENT_CHANGED; }
        typedef void parameter_type;
    } const changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(changed_event, *this, std::bind(function));
    }
#endif
    static struct min_reached_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_RANGE_EVENT_MIN_REACHED; }
        typedef void parameter_type;
    } const min_reached_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    min_reached_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(min_reached_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    min_reached_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(min_reached_event, *this, std::bind(function));
    }
#endif
    static struct max_reached_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_RANGE_EVENT_MAX_REACHED; }
        typedef void parameter_type;
    } const max_reached_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    max_reached_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(max_reached_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    max_reached_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(max_reached_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Range_Display> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Range_Display const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Range_Display> _get_wref() const { return ::efl::eo::wref<Range_Display>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Range_Display* operator->() const { return this; }
    Range_Display* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Range_Display const& lhs, Range_Display const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Range_Display const& lhs, Range_Display const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Range_Display) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Range_Display>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
