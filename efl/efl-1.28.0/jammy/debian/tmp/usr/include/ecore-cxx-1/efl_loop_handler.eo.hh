#ifndef EFL_LOOP_HANDLER_EO_HH
#define EFL_LOOP_HANDLER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_loop_handler.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_LOOP_HANDLER_FWD_GUARD
#define EFL_LOOP_HANDLER_FWD_GUARD
namespace efl { 
struct Loop_Handler;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Handler> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Handler&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Handler const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Handler const&> : ::std::true_type {}; } }
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
struct Loop_Handler {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Loop_Handler_Flags>::type active_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type active_set( ::efl::eolian::in_traits<Efl_Loop_Handler_Flags>::type flags) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type fd_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type fd_set( ::efl::eolian::in_traits<int>::type fd) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type fd_file_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type fd_file_set( ::efl::eolian::in_traits<int>::type fd) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void*>::type win32_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type win32_set( ::efl::eolian::in_traits<void*>::type handle) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_LOOP_HANDLER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Loop_Handler *>(this))); }
    operator ::efl::Loop_Handler() const;
    operator ::efl::Loop_Handler&();
    operator ::efl::Loop_Handler const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Loop_Handler,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Loop_Handler const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Loop_Handler : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Loop_Handler( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Loop_Handler(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Loop_Handler() = default;
    Loop_Handler(Loop_Handler const&) = default;
    Loop_Handler(Loop_Handler&&) = default;
    Loop_Handler& operator=(Loop_Handler const&) = default;
    Loop_Handler& operator=(Loop_Handler&&) = default;
    template <typename Derived>
    Loop_Handler(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Loop_Handler, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Loop_Handler( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Loop_Handler( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Loop_Handler( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Loop_Handler >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Loop_Handler(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Loop_Handler >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Loop_Handler_Flags>::type active_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type active_set( ::efl::eolian::in_traits<Efl_Loop_Handler_Flags>::type flags) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type fd_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type fd_set( ::efl::eolian::in_traits<int>::type fd) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type fd_file_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type fd_file_set( ::efl::eolian::in_traits<int>::type fd) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void*>::type win32_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type win32_set( ::efl::eolian::in_traits<void*>::type handle) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_LOOP_HANDLER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Loop_Handler *>(this))); }
#ifdef EFL_LOOP_HANDLER_BETA
    static struct read_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LOOP_HANDLER_EVENT_READ; }
        typedef void parameter_type;
    } const read_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    read_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(read_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    read_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(read_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_LOOP_HANDLER_BETA
    static struct write_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LOOP_HANDLER_EVENT_WRITE; }
        typedef void parameter_type;
    } const write_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    write_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(write_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    write_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(write_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_LOOP_HANDLER_BETA
    static struct error_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LOOP_HANDLER_EVENT_ERROR; }
        typedef void parameter_type;
    } const error_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    error_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(error_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    error_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(error_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_LOOP_HANDLER_BETA
    static struct buffer_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LOOP_HANDLER_EVENT_BUFFER; }
        typedef void parameter_type;
    } const buffer_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    buffer_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(buffer_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    buffer_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(buffer_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_LOOP_HANDLER_BETA
    static struct prepare_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LOOP_HANDLER_EVENT_PREPARE; }
        typedef void parameter_type;
    } const prepare_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    prepare_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(prepare_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    prepare_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(prepare_event, *this, std::bind(function));
    }
#endif
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Loop_Handler,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Loop_Handler const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Loop_Handler> _get_wref() const { return ::efl::eo::wref<Loop_Handler>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Loop_Handler* operator->() const { return this; }
    Loop_Handler* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Loop_Handler const& lhs, Loop_Handler const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Loop_Handler const& lhs, Loop_Handler const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Loop_Handler) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Loop_Handler>::value, "");
} 

#pragma GCC diagnostic pop

#endif
