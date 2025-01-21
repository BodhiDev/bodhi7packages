#ifndef EFL_UI_AUTOREPEAT_EO_HH
#define EFL_UI_AUTOREPEAT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_autorepeat.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_UI_AUTOREPEAT_FWD_GUARD
#define EFL_UI_AUTOREPEAT_FWD_GUARD
namespace efl { namespace ui { 
struct Autorepeat;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Autorepeat> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Autorepeat&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Autorepeat const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Autorepeat const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Autorepeat {
    ::efl::eolian::return_traits<double>::type autorepeat_initial_timeout_get() const;
    ::efl::eolian::return_traits<void>::type autorepeat_initial_timeout_set( ::efl::eolian::in_traits<double>::type t) const;
    ::efl::eolian::return_traits<double>::type autorepeat_gap_timeout_get() const;
    ::efl::eolian::return_traits<void>::type autorepeat_gap_timeout_set( ::efl::eolian::in_traits<double>::type t) const;
    ::efl::eolian::return_traits<bool>::type autorepeat_enabled_get() const;
    ::efl::eolian::return_traits<void>::type autorepeat_enabled_set( ::efl::eolian::in_traits<bool>::type on) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_AUTOREPEAT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Autorepeat *>(this))); }
    operator ::efl::ui::Autorepeat() const;
    operator ::efl::ui::Autorepeat&();
    operator ::efl::ui::Autorepeat const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Autorepeat> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Autorepeat const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Autorepeat : private ::efl::eo::concrete
{
    explicit Autorepeat( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Autorepeat(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Autorepeat() = default;
    Autorepeat(Autorepeat const&) = default;
    Autorepeat(Autorepeat&&) = default;
    Autorepeat& operator=(Autorepeat const&) = default;
    Autorepeat& operator=(Autorepeat&&) = default;
    template <typename Derived>
    Autorepeat(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Autorepeat, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<double>::type autorepeat_initial_timeout_get() const;
    ::efl::eolian::return_traits<void>::type autorepeat_initial_timeout_set( ::efl::eolian::in_traits<double>::type t) const;
    ::efl::eolian::return_traits<double>::type autorepeat_gap_timeout_get() const;
    ::efl::eolian::return_traits<void>::type autorepeat_gap_timeout_set( ::efl::eolian::in_traits<double>::type t) const;
    ::efl::eolian::return_traits<bool>::type autorepeat_enabled_get() const;
    ::efl::eolian::return_traits<void>::type autorepeat_enabled_set( ::efl::eolian::in_traits<bool>::type on) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_AUTOREPEAT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Autorepeat *>(this))); }
    static struct repeated_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_AUTOREPEAT_EVENT_REPEATED; }
        typedef void parameter_type;
    } const repeated_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    repeated_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(repeated_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    repeated_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(repeated_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Autorepeat> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Autorepeat const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Autorepeat> _get_wref() const { return ::efl::eo::wref<Autorepeat>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Autorepeat* operator->() const { return this; }
    Autorepeat* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Autorepeat const& lhs, Autorepeat const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Autorepeat const& lhs, Autorepeat const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Autorepeat) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Autorepeat>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
