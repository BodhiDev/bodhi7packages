#ifndef EFL_UI_RANGE_INTERACTIVE_EO_HH
#define EFL_UI_RANGE_INTERACTIVE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_range_display.eo.h"
#include "efl_ui_range_interactive.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_ui_range_display.eo.hh"
#ifndef EFL_UI_RANGE_INTERACTIVE_FWD_GUARD
#define EFL_UI_RANGE_INTERACTIVE_FWD_GUARD
namespace efl { namespace ui { 
struct Range_Interactive;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Range_Interactive> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Range_Interactive&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Range_Interactive const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Range_Interactive const&> : ::std::true_type {}; } }
#endif
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
struct Range_Interactive {
    ::efl::eolian::return_traits<double>::type range_step_get() const;
    ::efl::eolian::return_traits<void>::type range_step_set( ::efl::eolian::in_traits<double>::type step) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_RANGE_INTERACTIVE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Range_Interactive *>(this))); }
    operator ::efl::ui::Range_Interactive() const;
    operator ::efl::ui::Range_Interactive&();
    operator ::efl::ui::Range_Interactive const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Range_Interactive,  ::efl::ui::Range_Display> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Range_Interactive const ,  ::efl::ui::Range_Display const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Range_Interactive : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::ui::Range_Display)
{
    explicit Range_Interactive( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Range_Interactive(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Range_Interactive() = default;
    Range_Interactive(Range_Interactive const&) = default;
    Range_Interactive(Range_Interactive&&) = default;
    Range_Interactive& operator=(Range_Interactive const&) = default;
    Range_Interactive& operator=(Range_Interactive&&) = default;
    template <typename Derived>
    Range_Interactive(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Range_Interactive, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<double>::type range_step_get() const;
    ::efl::eolian::return_traits<void>::type range_step_set( ::efl::eolian::in_traits<double>::type step) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_RANGE_INTERACTIVE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Range_Interactive *>(this))); }
    static struct steady_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_RANGE_EVENT_STEADY; }
        typedef void parameter_type;
    } const steady_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    steady_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(steady_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    steady_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(steady_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Range_Interactive,  ::efl::ui::Range_Display> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Range_Interactive const ,  ::efl::ui::Range_Display const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Range_Interactive> _get_wref() const { return ::efl::eo::wref<Range_Interactive>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Range_Interactive* operator->() const { return this; }
    Range_Interactive* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Range_Interactive const& lhs, Range_Interactive const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Range_Interactive const& lhs, Range_Interactive const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Range_Interactive) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Range_Interactive>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
