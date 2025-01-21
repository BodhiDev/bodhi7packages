#ifndef EFL_TASK_EO_HH
#define EFL_TASK_EO_HH
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
#include "efl_loop.eo.hh"
#include "efl_loop_consumer.eo.hh"
#include "efl_object.eo.hh"
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
struct Task {
    ::efl::eolian::return_traits<Efl_Task_Priority>::type priority_get() const;
    ::efl::eolian::return_traits<void>::type priority_set( ::efl::eolian::in_traits<Efl_Task_Priority>::type priority) const;
    ::efl::eolian::return_traits<int>::type exit_code_get() const;
    ::efl::eolian::return_traits<Efl_Task_Flags>::type flags_get() const;
    ::efl::eolian::return_traits<void>::type flags_set( ::efl::eolian::in_traits<Efl_Task_Flags>::type flags) const;
    ::efl::eolian::return_traits<bool>::type run() const;
    ::efl::eolian::return_traits<void>::type end() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_TASK_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Task *>(this))); }
    operator ::efl::Task() const;
    operator ::efl::Task&();
    operator ::efl::Task const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Task,  ::efl::Loop_Consumer,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Task const ,  ::efl::Loop_Consumer const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Task : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Task( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Task(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Task() = default;
    Task(Task const&) = default;
    Task(Task&&) = default;
    Task& operator=(Task const&) = default;
    Task& operator=(Task&&) = default;
    template <typename Derived>
    Task(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Task, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<Efl_Task_Priority>::type priority_get() const;
    ::efl::eolian::return_traits<void>::type priority_set( ::efl::eolian::in_traits<Efl_Task_Priority>::type priority) const;
    ::efl::eolian::return_traits<int>::type exit_code_get() const;
    ::efl::eolian::return_traits<Efl_Task_Flags>::type flags_get() const;
    ::efl::eolian::return_traits<void>::type flags_set( ::efl::eolian::in_traits<Efl_Task_Flags>::type flags) const;
    ::efl::eolian::return_traits<bool>::type run() const;
    ::efl::eolian::return_traits<void>::type end() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_TASK_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Task *>(this))); }
    static struct exit_event
    {
        static Efl_Event_Description const* description()
        { return EFL_TASK_EVENT_EXIT; }
        typedef void parameter_type;
    } const exit_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    exit_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(exit_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    exit_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(exit_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Task,  ::efl::Loop_Consumer,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Task const ,  ::efl::Loop_Consumer const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Task> _get_wref() const { return ::efl::eo::wref<Task>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Task* operator->() const { return this; }
    Task* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Task const& lhs, Task const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Task const& lhs, Task const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Task) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Task>::value, "");
} 

#pragma GCC diagnostic pop

#endif
