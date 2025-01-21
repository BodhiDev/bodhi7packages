#ifndef EFL_LOOP_TIMER_EO_HH
#define EFL_LOOP_TIMER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_loop_timer.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_loop.eo.hh"
#include "efl_loop_consumer.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_LOOP_TIMER_FWD_GUARD
#define EFL_LOOP_TIMER_FWD_GUARD
namespace efl { 
struct Loop_Timer;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Timer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Timer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Timer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Timer const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CLASS_FWD_GUARD
#define EFL_CLASS_FWD_GUARD
namespace efl { 
struct Class;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_LOOP_FWD_GUARD
#define EFL_LOOP_FWD_GUARD
namespace efl { 
struct Loop;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_LOOP_CONSUMER_FWD_GUARD
#define EFL_LOOP_CONSUMER_FWD_GUARD
namespace efl { 
struct Loop_Consumer;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_OBJECT_FWD_GUARD
#define EFL_OBJECT_FWD_GUARD
namespace efl { 
struct Object;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Loop_Timer {
    ::efl::eolian::return_traits<double>::type timer_interval_get() const;
    ::efl::eolian::return_traits<void>::type timer_interval_set( ::efl::eolian::in_traits<double>::type in) const;
    ::efl::eolian::return_traits<double>::type time_pending_get() const;
    ::efl::eolian::return_traits<void>::type timer_reset() const;
    ::efl::eolian::return_traits<void>::type timer_loop_reset() const;
    ::efl::eolian::return_traits<void>::type timer_delay( ::efl::eolian::in_traits<double>::type add) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_LOOP_TIMER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Loop_Timer *>(this))); }
    operator ::efl::Loop_Timer() const;
    operator ::efl::Loop_Timer&();
    operator ::efl::Loop_Timer const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Loop_Timer,  ::efl::Loop_Consumer,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Loop_Timer const ,  ::efl::Loop_Consumer const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Loop_Timer : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Loop_Timer( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Loop_Timer(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Loop_Timer() = default;
    Loop_Timer(Loop_Timer const&) = default;
    Loop_Timer(Loop_Timer&&) = default;
    Loop_Timer& operator=(Loop_Timer const&) = default;
    Loop_Timer& operator=(Loop_Timer&&) = default;
    template <typename Derived>
    Loop_Timer(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Loop_Timer, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Loop_Timer( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Loop_Timer( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Loop_Timer( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Loop_Timer >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Loop_Timer(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Loop_Timer >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    ::efl::eolian::return_traits<double>::type timer_interval_get() const;
    ::efl::eolian::return_traits<void>::type timer_interval_set( ::efl::eolian::in_traits<double>::type in) const;
    ::efl::eolian::return_traits<double>::type time_pending_get() const;
    ::efl::eolian::return_traits<void>::type timer_reset() const;
    ::efl::eolian::return_traits<void>::type timer_loop_reset() const;
    ::efl::eolian::return_traits<void>::type timer_delay( ::efl::eolian::in_traits<double>::type add) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_LOOP_TIMER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Loop_Timer *>(this))); }
    static struct timer_tick_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LOOP_TIMER_EVENT_TIMER_TICK; }
        typedef void parameter_type;
    } const timer_tick_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    timer_tick_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(timer_tick_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    timer_tick_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(timer_tick_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Loop_Timer,  ::efl::Loop_Consumer,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Loop_Timer const ,  ::efl::Loop_Consumer const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Loop_Timer> _get_wref() const { return ::efl::eo::wref<Loop_Timer>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Loop_Timer* operator->() const { return this; }
    Loop_Timer* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Loop_Timer const& lhs, Loop_Timer const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Loop_Timer const& lhs, Loop_Timer const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Loop_Timer) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Loop_Timer>::value, "");
} 

#pragma GCC diagnostic pop

#endif
