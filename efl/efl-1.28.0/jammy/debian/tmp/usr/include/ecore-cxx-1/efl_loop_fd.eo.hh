#ifndef EFL_LOOP_FD_EO_HH
#define EFL_LOOP_FD_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_loop_fd.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_loop.eo.hh"
#include "efl_loop_consumer.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_LOOP_FD_FWD_GUARD
#define EFL_LOOP_FD_FWD_GUARD
namespace efl { 
struct Loop_Fd;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Fd> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Fd&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Fd const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Fd const&> : ::std::true_type {}; } }
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
struct Loop_Fd {
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
    static Efl_Class const* _eo_class()
    {
        return EFL_LOOP_FD_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Loop_Fd *>(this))); }
    operator ::efl::Loop_Fd() const;
    operator ::efl::Loop_Fd&();
    operator ::efl::Loop_Fd const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Loop_Fd,  ::efl::Loop_Consumer,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Loop_Fd const ,  ::efl::Loop_Consumer const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Loop_Fd : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Loop_Fd( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Loop_Fd(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Loop_Fd() = default;
    Loop_Fd(Loop_Fd const&) = default;
    Loop_Fd(Loop_Fd&&) = default;
    Loop_Fd& operator=(Loop_Fd const&) = default;
    Loop_Fd& operator=(Loop_Fd&&) = default;
    template <typename Derived>
    Loop_Fd(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Loop_Fd, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Loop_Fd( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Loop_Fd( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Loop_Fd( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Loop_Fd >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Loop_Fd(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Loop_Fd >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

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
    static Efl_Class const* _eo_class()
    {
        return EFL_LOOP_FD_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Loop_Fd *>(this))); }
#ifdef EFL_LOOP_FD_BETA
    static struct read_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LOOP_FD_EVENT_READ; }
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
#ifdef EFL_LOOP_FD_BETA
    static struct write_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LOOP_FD_EVENT_WRITE; }
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
#ifdef EFL_LOOP_FD_BETA
    static struct error_event
    {
        static Efl_Event_Description const* description()
        { return EFL_LOOP_FD_EVENT_ERROR; }
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
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Loop_Fd,  ::efl::Loop_Consumer,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Loop_Fd const ,  ::efl::Loop_Consumer const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Loop_Fd> _get_wref() const { return ::efl::eo::wref<Loop_Fd>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Loop_Fd* operator->() const { return this; }
    Loop_Fd* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Loop_Fd const& lhs, Loop_Fd const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Loop_Fd const& lhs, Loop_Fd const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Loop_Fd) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Loop_Fd>::value, "");
} 

#pragma GCC diagnostic pop

#endif
