#ifndef EFL_LAYOUT_CALC_EO_HH
#define EFL_LAYOUT_CALC_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_layout_calc.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_LAYOUT_CALC_FWD_GUARD
#define EFL_LAYOUT_CALC_FWD_GUARD
namespace efl { namespace layout { 
struct Calc;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Calc> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Calc&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Calc const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Calc const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace layout { 
struct Calc {
    ::efl::eolian::return_traits<bool>::type calc_auto_update_hints_get() const;
    ::efl::eolian::return_traits<void>::type calc_auto_update_hints_set( ::efl::eolian::in_traits<bool>::type update) const;
    ::efl::eolian::return_traits<Eina_Size2D>::type calc_size_min( ::efl::eolian::in_traits< ::efl::eina::optional<Eina_Size2D>>::type restricted) const;
    ::efl::eolian::return_traits<Eina_Rect>::type calc_parts_extends() const;
    ::efl::eolian::return_traits<int>::type calc_freeze() const;
    ::efl::eolian::return_traits<int>::type calc_thaw() const;
#ifdef EFL_LAYOUT_CALC_PROTECTED
    ::efl::eolian::return_traits<void>::type calc_force() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_LAYOUT_CALC_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Calc *>(this))); }
    operator ::efl::layout::Calc() const;
    operator ::efl::layout::Calc&();
    operator ::efl::layout::Calc const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Calc> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Calc const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace layout { 
struct Calc : private ::efl::eo::concrete
{
    explicit Calc( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Calc(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Calc() = default;
    Calc(Calc const&) = default;
    Calc(Calc&&) = default;
    Calc& operator=(Calc const&) = default;
    Calc& operator=(Calc&&) = default;
    template <typename Derived>
    Calc(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Calc, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<bool>::type calc_auto_update_hints_get() const;
    ::efl::eolian::return_traits<void>::type calc_auto_update_hints_set( ::efl::eolian::in_traits<bool>::type update) const;
    ::efl::eolian::return_traits<Eina_Size2D>::type calc_size_min( ::efl::eolian::in_traits< ::efl::eina::optional<Eina_Size2D>>::type restricted) const;
    ::efl::eolian::return_traits<Eina_Rect>::type calc_parts_extends() const;
    ::efl::eolian::return_traits<int>::type calc_freeze() const;
    ::efl::eolian::return_traits<int>::type calc_thaw() const;
#ifdef EFL_LAYOUT_CALC_PROTECTED
    ::efl::eolian::return_traits<void>::type calc_force() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_LAYOUT_CALC_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Calc *>(this))); }
    static struct recalc_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LAYOUT_EVENT_RECALC; }
        typedef void parameter_type;
    } const recalc_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    recalc_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(recalc_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    recalc_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(recalc_event, *this, std::bind(function));
    }
#endif
    static struct circular_dependency_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LAYOUT_EVENT_CIRCULAR_DEPENDENCY; }
        typedef   ::efl::eina::range_array< ::efl::eina::string_view> parameter_type;
    } const circular_dependency_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    circular_dependency_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(circular_dependency_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    circular_dependency_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(circular_dependency_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Calc> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Calc const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Calc> _get_wref() const { return ::efl::eo::wref<Calc>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Calc* operator->() const { return this; }
    Calc* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Calc const& lhs, Calc const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Calc const& lhs, Calc const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Calc) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Calc>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
