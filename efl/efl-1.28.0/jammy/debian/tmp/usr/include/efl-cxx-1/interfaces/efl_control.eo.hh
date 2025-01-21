#ifndef EFL_CONTROL_EO_HH
#define EFL_CONTROL_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_control.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_CONTROL_FWD_GUARD
#define EFL_CONTROL_FWD_GUARD
namespace efl { 
struct Control;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Control> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Control&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Control const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Control const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Control {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type priority_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type priority_set( ::efl::eolian::in_traits<int>::type priority) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type suspend_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type suspend_set( ::efl::eolian::in_traits<bool>::type suspend) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CONTROL_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Control *>(this))); }
    operator ::efl::Control() const;
    operator ::efl::Control&();
    operator ::efl::Control const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Control> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Control const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Control : private ::efl::eo::concrete
{
    explicit Control( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Control(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Control() = default;
    Control(Control const&) = default;
    Control(Control&&) = default;
    Control& operator=(Control const&) = default;
    Control& operator=(Control&&) = default;
    template <typename Derived>
    Control(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Control, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type priority_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type priority_set( ::efl::eolian::in_traits<int>::type priority) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type suspend_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type suspend_set( ::efl::eolian::in_traits<bool>::type suspend) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CONTROL_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Control *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Control> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Control const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Control> _get_wref() const { return ::efl::eo::wref<Control>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Control* operator->() const { return this; }
    Control* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Control const& lhs, Control const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Control const& lhs, Control const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Control) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Control>::value, "");
} 

#pragma GCC diagnostic pop

#endif
