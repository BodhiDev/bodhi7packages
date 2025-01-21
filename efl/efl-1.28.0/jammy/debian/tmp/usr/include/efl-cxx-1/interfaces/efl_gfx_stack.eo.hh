#ifndef EFL_GFX_STACK_EO_HH
#define EFL_GFX_STACK_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_stack.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_GFX_STACK_FWD_GUARD
#define EFL_GFX_STACK_FWD_GUARD
namespace efl { namespace gfx { 
struct Stack;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_STACK_FWD_GUARD
#define EFL_GFX_STACK_FWD_GUARD
namespace efl { namespace gfx { 
struct Stack;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Stack {
    ::efl::eolian::return_traits<short>::type layer_get() const;
    ::efl::eolian::return_traits<void>::type layer_set( ::efl::eolian::in_traits<short>::type l) const;
    ::efl::eolian::return_traits< ::efl::gfx::Stack>::type below_get() const;
    ::efl::eolian::return_traits< ::efl::gfx::Stack>::type above_get() const;
    ::efl::eolian::return_traits<void>::type stack_below( ::efl::eolian::in_traits< ::efl::gfx::Stack>::type below) const;
    ::efl::eolian::return_traits<void>::type raise_to_top() const;
    ::efl::eolian::return_traits<void>::type stack_above( ::efl::eolian::in_traits< ::efl::gfx::Stack>::type above) const;
    ::efl::eolian::return_traits<void>::type lower_to_bottom() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_STACK_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Stack *>(this))); }
    operator ::efl::gfx::Stack() const;
    operator ::efl::gfx::Stack&();
    operator ::efl::gfx::Stack const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Stack> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Stack const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Stack : private ::efl::eo::concrete
{
    explicit Stack( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Stack(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Stack() = default;
    Stack(Stack const&) = default;
    Stack(Stack&&) = default;
    Stack& operator=(Stack const&) = default;
    Stack& operator=(Stack&&) = default;
    template <typename Derived>
    Stack(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Stack, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<short>::type layer_get() const;
    ::efl::eolian::return_traits<void>::type layer_set( ::efl::eolian::in_traits<short>::type l) const;
    ::efl::eolian::return_traits< ::efl::gfx::Stack>::type below_get() const;
    ::efl::eolian::return_traits< ::efl::gfx::Stack>::type above_get() const;
    ::efl::eolian::return_traits<void>::type stack_below( ::efl::eolian::in_traits< ::efl::gfx::Stack>::type below) const;
    ::efl::eolian::return_traits<void>::type raise_to_top() const;
    ::efl::eolian::return_traits<void>::type stack_above( ::efl::eolian::in_traits< ::efl::gfx::Stack>::type above) const;
    ::efl::eolian::return_traits<void>::type lower_to_bottom() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_STACK_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Stack *>(this))); }
    static struct stacking_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_GFX_ENTITY_EVENT_STACKING_CHANGED; }
        typedef void parameter_type;
    } const stacking_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    stacking_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(stacking_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    stacking_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(stacking_changed_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Stack> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Stack const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Stack> _get_wref() const { return ::efl::eo::wref<Stack>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Stack* operator->() const { return this; }
    Stack* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Stack const& lhs, Stack const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Stack const& lhs, Stack const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Stack) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Stack>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
