#ifndef EFL_APP_EO_HH
#define EFL_APP_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_app.eo.h"
#include "efl_class.eo.h"
#include "efl_core_command_line.eo.h"
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_object.eo.h"
#include "efl_task.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_core_command_line.eo.hh"
#include "efl_loop.eo.hh"
#include "efl_loop_consumer.eo.hh"
#include "efl_object.eo.hh"
#include "efl_task.eo.hh"
#ifndef EFL_APP_FWD_GUARD
#define EFL_APP_FWD_GUARD
namespace efl { 
struct App;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::App> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::App&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::App const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::App const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_APP_FWD_GUARD
#define EFL_APP_FWD_GUARD
namespace efl { 
struct App;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::App> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::App&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::App const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::App const&> : ::std::true_type {}; } }
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
#ifndef EFL_CORE_COMMAND_LINE_FWD_GUARD
#define EFL_CORE_COMMAND_LINE_FWD_GUARD
namespace efl { namespace core { 
struct Command_Line;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Command_Line> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Command_Line&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Command_Line const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Command_Line const&> : ::std::true_type {}; } }
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
struct App {
    static ::efl::eolian::return_traits< ::efl::App>::type app_main_get();
    ::efl::eolian::return_traits<const Efl_Version *>::type build_efl_version_get() const;
    ::efl::eolian::return_traits<const Efl_Version *>::type efl_version_get() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_APP_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<App *>(this))); }
    operator ::efl::App() const;
    operator ::efl::App&();
    operator ::efl::App const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<App,  ::efl::Loop,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::Task,  ::efl::core::Command_Line> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<App const ,  ::efl::Loop const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::Task const ,  ::efl::core::Command_Line const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct App : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Loop)
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::Task)
    , EO_CXX_INHERIT(::efl::core::Command_Line)
{
    explicit App( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    App(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit App() = default;
    App(App const&) = default;
    App(App&&) = default;
    App& operator=(App const&) = default;
    App& operator=(App&&) = default;
    template <typename Derived>
    App(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< App, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    static ::efl::eolian::return_traits< ::efl::App>::type app_main_get();
    ::efl::eolian::return_traits<const Efl_Version *>::type build_efl_version_get() const;
    ::efl::eolian::return_traits<const Efl_Version *>::type efl_version_get() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_APP_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<App *>(this))); }
    static struct pause_event
    {
        static Efl_Event_Description const* description()
        { return EFL_APP_EVENT_PAUSE; }
        typedef void parameter_type;
    } const pause_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pause_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pause_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pause_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pause_event, *this, std::bind(function));
    }
#endif
    static struct resume_event
    {
        static Efl_Event_Description const* description()
        { return EFL_APP_EVENT_RESUME; }
        typedef void parameter_type;
    } const resume_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    resume_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(resume_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    resume_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(resume_event, *this, std::bind(function));
    }
#endif
    static struct standby_event
    {
        static Efl_Event_Description const* description()
        { return EFL_APP_EVENT_STANDBY; }
        typedef void parameter_type;
    } const standby_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    standby_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(standby_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    standby_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(standby_event, *this, std::bind(function));
    }
#endif
    static struct terminate_event
    {
        static Efl_Event_Description const* description()
        { return EFL_APP_EVENT_TERMINATE; }
        typedef void parameter_type;
    } const terminate_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    terminate_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(terminate_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    terminate_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(terminate_event, *this, std::bind(function));
    }
#endif
    static struct signal_usr1_event
    {
        static Efl_Event_Description const* description()
        { return EFL_APP_EVENT_SIGNAL_USR1; }
        typedef void parameter_type;
    } const signal_usr1_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    signal_usr1_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(signal_usr1_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    signal_usr1_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(signal_usr1_event, *this, std::bind(function));
    }
#endif
    static struct signal_usr2_event
    {
        static Efl_Event_Description const* description()
        { return EFL_APP_EVENT_SIGNAL_USR2; }
        typedef void parameter_type;
    } const signal_usr2_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    signal_usr2_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(signal_usr2_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    signal_usr2_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(signal_usr2_event, *this, std::bind(function));
    }
#endif
    static struct signal_hup_event
    {
        static Efl_Event_Description const* description()
        { return EFL_APP_EVENT_SIGNAL_HUP; }
        typedef void parameter_type;
    } const signal_hup_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    signal_hup_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(signal_hup_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    signal_hup_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(signal_hup_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<App,  ::efl::Loop,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::Task,  ::efl::core::Command_Line> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<App const ,  ::efl::Loop const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::Task const ,  ::efl::core::Command_Line const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<App> _get_wref() const { return ::efl::eo::wref<App>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const App* operator->() const { return this; }
    App* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(App const& lhs, App const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(App const& lhs, App const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(App) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<App>::value, "");
} 

#pragma GCC diagnostic pop

#endif
