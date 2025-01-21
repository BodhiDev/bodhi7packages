#ifndef EFL_INPUT_STATE_EO_HH
#define EFL_INPUT_STATE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_input_device.eo.h"
#include "efl_input_state.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_input_device.eo.hh"
#ifndef EFL_INPUT_STATE_FWD_GUARD
#define EFL_INPUT_STATE_FWD_GUARD
namespace efl { namespace input { 
struct State;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::State> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::State&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::State const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::State const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_DEVICE_FWD_GUARD
#define EFL_INPUT_DEVICE_FWD_GUARD
namespace efl { namespace input { 
struct Device;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace input { 
struct State {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type modifier_enabled_get( ::efl::eolian::in_traits<Efl_Input_Modifier>::type mod,  ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type lock_enabled_get( ::efl::eolian::in_traits<Efl_Input_Lock>::type lock,  ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_INPUT_STATE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<State *>(this))); }
    operator ::efl::input::State() const;
    operator ::efl::input::State&();
    operator ::efl::input::State const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<State> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<State const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace input { 
struct State : private ::efl::eo::concrete
{
    explicit State( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    State(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit State() = default;
    State(State const&) = default;
    State(State&&) = default;
    State& operator=(State const&) = default;
    State& operator=(State&&) = default;
    template <typename Derived>
    State(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< State, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type modifier_enabled_get( ::efl::eolian::in_traits<Efl_Input_Modifier>::type mod,  ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type lock_enabled_get( ::efl::eolian::in_traits<Efl_Input_Lock>::type lock,  ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_INPUT_STATE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<State *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<State> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<State const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<State> _get_wref() const { return ::efl::eo::wref<State>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const State* operator->() const { return this; }
    State* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(State const& lhs, State const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(State const& lhs, State const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(State) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<State>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
