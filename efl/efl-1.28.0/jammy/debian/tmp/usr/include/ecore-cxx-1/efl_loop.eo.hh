#ifndef EFL_LOOP_EO_HH
#define EFL_LOOP_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_object.eo.h"
#include "efl_task.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_loop_consumer.eo.hh"
#include "efl_object.eo.hh"
#include "efl_task.eo.hh"
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
#ifndef EFL_TASK_FWD_GUARD
#define EFL_TASK_FWD_GUARD
namespace efl { 
struct Task;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Task> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Task&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Task const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Task const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Loop {
    ::efl::eolian::return_traits<double>::type throttle_get() const;
    ::efl::eolian::return_traits<void>::type throttle_set( ::efl::eolian::in_traits<double>::type amount) const;
    ::efl::eolian::return_traits<double>::type time_get() const;
#ifdef EFL_LOOP_PROTECTED
    ::efl::eolian::return_traits<void>::type time_set( ::efl::eolian::in_traits<double>::type timepoint) const;
#endif
    ::efl::eolian::return_traits<void>::type iterate() const;
    ::efl::eolian::return_traits<int>::type iterate_may_block( ::efl::eolian::in_traits<int>::type may_block) const;
    ::efl::eolian::return_traits< ::efl::eina::value_view>::type begin() const;
    ::efl::eolian::return_traits<void>::type quit( ::efl::eolian::in_traits< ::efl::eina::value_view>::type exit_code) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_LOOP_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Loop *>(this))); }
    operator ::efl::Loop() const;
    operator ::efl::Loop&();
    operator ::efl::Loop const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Loop,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::Task> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Loop const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::Task const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Loop : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::Task)
{
    explicit Loop( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Loop(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Loop() = default;
    Loop(Loop const&) = default;
    Loop(Loop&&) = default;
    Loop& operator=(Loop const&) = default;
    Loop& operator=(Loop&&) = default;
    template <typename Derived>
    Loop(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Loop, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<double>::type throttle_get() const;
    ::efl::eolian::return_traits<void>::type throttle_set( ::efl::eolian::in_traits<double>::type amount) const;
    ::efl::eolian::return_traits<double>::type time_get() const;
#ifdef EFL_LOOP_PROTECTED
    ::efl::eolian::return_traits<void>::type time_set( ::efl::eolian::in_traits<double>::type timepoint) const;
#endif
    ::efl::eolian::return_traits<void>::type iterate() const;
    ::efl::eolian::return_traits<int>::type iterate_may_block( ::efl::eolian::in_traits<int>::type may_block) const;
    ::efl::eolian::return_traits< ::efl::eina::value_view>::type begin() const;
    ::efl::eolian::return_traits<void>::type quit( ::efl::eolian::in_traits< ::efl::eina::value_view>::type exit_code) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_LOOP_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Loop *>(this))); }
    static struct idle_enter_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LOOP_EVENT_IDLE_ENTER; }
        typedef void parameter_type;
    } const idle_enter_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    idle_enter_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(idle_enter_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    idle_enter_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(idle_enter_event, *this, std::bind(function));
    }
#endif
    static struct idle_exit_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LOOP_EVENT_IDLE_EXIT; }
        typedef void parameter_type;
    } const idle_exit_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    idle_exit_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(idle_exit_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    idle_exit_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(idle_exit_event, *this, std::bind(function));
    }
#endif
    static struct idle_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LOOP_EVENT_IDLE; }
        typedef void parameter_type;
    } const idle_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    idle_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(idle_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    idle_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(idle_event, *this, std::bind(function));
    }
#endif
    static struct arguments_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LOOP_EVENT_ARGUMENTS; }
        typedef Efl_Loop_Arguments parameter_type;
    } const arguments_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    arguments_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(arguments_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    arguments_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(arguments_event, *this, std::bind(function));
    }
#endif
    static struct poll_high_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LOOP_EVENT_POLL_HIGH; }
        typedef void parameter_type;
    } const poll_high_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    poll_high_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(poll_high_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    poll_high_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(poll_high_event, *this, std::bind(function));
    }
#endif
    static struct poll_medium_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LOOP_EVENT_POLL_MEDIUM; }
        typedef void parameter_type;
    } const poll_medium_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    poll_medium_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(poll_medium_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    poll_medium_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(poll_medium_event, *this, std::bind(function));
    }
#endif
    static struct poll_low_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LOOP_EVENT_POLL_LOW; }
        typedef void parameter_type;
    } const poll_low_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    poll_low_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(poll_low_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    poll_low_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(poll_low_event, *this, std::bind(function));
    }
#endif
    static struct quit_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LOOP_EVENT_QUIT; }
        typedef void parameter_type;
    } const quit_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    quit_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(quit_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    quit_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(quit_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Loop,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::Task> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Loop const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::Task const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Loop> _get_wref() const { return ::efl::eo::wref<Loop>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Loop* operator->() const { return this; }
    Loop* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Loop const& lhs, Loop const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Loop const& lhs, Loop const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Loop) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Loop>::value, "");
} 

#pragma GCC diagnostic pop

#endif
