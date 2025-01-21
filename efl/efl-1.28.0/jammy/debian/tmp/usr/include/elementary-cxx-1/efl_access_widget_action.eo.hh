#ifndef EFL_ACCESS_WIDGET_ACTION_EO_HH
#define EFL_ACCESS_WIDGET_ACTION_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_access_action.eo.h"
#include "efl_access_widget_action.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_access_action.eo.hh"
#ifndef EFL_ACCESS_WIDGET_ACTION_FWD_GUARD
#define EFL_ACCESS_WIDGET_ACTION_FWD_GUARD
namespace efl { namespace access { namespace widget { 
struct Action;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::widget::Action> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::widget::Action&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::widget::Action const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::widget::Action const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_ACCESS_ACTION_FWD_GUARD
#define EFL_ACCESS_ACTION_FWD_GUARD
namespace efl { namespace access { 
struct Action;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Action> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Action&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Action const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Action const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace access { namespace widget { 
struct Action {
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_WIDGET_ACTION_PROTECTED
    ::efl::eolian::return_traits<Efl_Access_Action_Data const*>::type elm_actions_get() const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_ACCESS_WIDGET_ACTION_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Action *>(this))); }
    operator ::efl::access::widget::Action() const;
    operator ::efl::access::widget::Action&();
    operator ::efl::access::widget::Action const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Action,  ::efl::access::Action> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Action const ,  ::efl::access::Action const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace access { namespace widget { 
struct Action : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::access::Action)
{
    explicit Action( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Action(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Action() = default;
    Action(Action const&) = default;
    Action(Action&&) = default;
    Action& operator=(Action const&) = default;
    Action& operator=(Action&&) = default;
    template <typename Derived>
    Action(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Action, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_WIDGET_ACTION_PROTECTED
    ::efl::eolian::return_traits<Efl_Access_Action_Data const*>::type elm_actions_get() const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_ACCESS_WIDGET_ACTION_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Action *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Action,  ::efl::access::Action> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Action const ,  ::efl::access::Action const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Action> _get_wref() const { return ::efl::eo::wref<Action>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Action* operator->() const { return this; }
    Action* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Action const& lhs, Action const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Action const& lhs, Action const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Action) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Action>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
