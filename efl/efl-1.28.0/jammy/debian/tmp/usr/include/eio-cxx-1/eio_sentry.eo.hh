#ifndef EIO_SENTRY_EO_HH
#define EIO_SENTRY_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_object.eo.h"
#include "eio_sentry.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#ifndef EIO_SENTRY_FWD_GUARD
#define EIO_SENTRY_FWD_GUARD
namespace eio { 
struct Sentry;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::eio::Sentry> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::eio::Sentry&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::eio::Sentry const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::eio::Sentry const&> : ::std::true_type {}; } }
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
namespace eio { 
struct Sentry {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type path) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type remove( ::efl::eolian::in_traits< ::efl::eina::string_view>::type path) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type fallback_check( ::efl::eolian::in_traits< ::efl::eina::string_view>::type path) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EIO_SENTRY_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Sentry *>(this))); }
    operator ::eio::Sentry() const;
    operator ::eio::Sentry&();
    operator ::eio::Sentry const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Sentry,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Sentry const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace eio { 
struct Sentry : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Sentry( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Sentry(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Sentry() = default;
    Sentry(Sentry const&) = default;
    Sentry(Sentry&&) = default;
    Sentry& operator=(Sentry const&) = default;
    Sentry& operator=(Sentry&&) = default;
    template <typename Derived>
    Sentry(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Sentry, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Sentry( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Sentry( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Sentry( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Sentry >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Sentry(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Sentry >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type path) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type remove( ::efl::eolian::in_traits< ::efl::eina::string_view>::type path) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type fallback_check( ::efl::eolian::in_traits< ::efl::eina::string_view>::type path) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EIO_SENTRY_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Sentry *>(this))); }
#ifdef EIO_SENTRY_BETA
    static struct file_created_event
    {
        static Efl_Event_Description const* description()
        { return EIO_SENTRY_EVENT_FILE_CREATED; }
        typedef Eio_Sentry_Event parameter_type;
    } const file_created_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    file_created_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(file_created_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    file_created_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(file_created_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EIO_SENTRY_BETA
    static struct file_deleted_event
    {
        static Efl_Event_Description const* description()
        { return EIO_SENTRY_EVENT_FILE_DELETED; }
        typedef Eio_Sentry_Event parameter_type;
    } const file_deleted_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    file_deleted_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(file_deleted_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    file_deleted_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(file_deleted_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EIO_SENTRY_BETA
    static struct file_modified_event
    {
        static Efl_Event_Description const* description()
        { return EIO_SENTRY_EVENT_FILE_MODIFIED; }
        typedef Eio_Sentry_Event parameter_type;
    } const file_modified_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    file_modified_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(file_modified_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    file_modified_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(file_modified_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EIO_SENTRY_BETA
    static struct file_closed_event
    {
        static Efl_Event_Description const* description()
        { return EIO_SENTRY_EVENT_FILE_CLOSED; }
        typedef Eio_Sentry_Event parameter_type;
    } const file_closed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    file_closed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(file_closed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    file_closed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(file_closed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EIO_SENTRY_BETA
    static struct directory_created_event
    {
        static Efl_Event_Description const* description()
        { return EIO_SENTRY_EVENT_DIRECTORY_CREATED; }
        typedef Eio_Sentry_Event parameter_type;
    } const directory_created_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    directory_created_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(directory_created_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    directory_created_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(directory_created_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EIO_SENTRY_BETA
    static struct directory_deleted_event
    {
        static Efl_Event_Description const* description()
        { return EIO_SENTRY_EVENT_DIRECTORY_DELETED; }
        typedef Eio_Sentry_Event parameter_type;
    } const directory_deleted_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    directory_deleted_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(directory_deleted_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    directory_deleted_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(directory_deleted_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EIO_SENTRY_BETA
    static struct directory_modified_event
    {
        static Efl_Event_Description const* description()
        { return EIO_SENTRY_EVENT_DIRECTORY_MODIFIED; }
        typedef Eio_Sentry_Event parameter_type;
    } const directory_modified_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    directory_modified_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(directory_modified_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    directory_modified_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(directory_modified_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EIO_SENTRY_BETA
    static struct directory_closed_event
    {
        static Efl_Event_Description const* description()
        { return EIO_SENTRY_EVENT_DIRECTORY_CLOSED; }
        typedef Eio_Sentry_Event parameter_type;
    } const directory_closed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    directory_closed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(directory_closed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    directory_closed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(directory_closed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EIO_SENTRY_BETA
    static struct self_rename_event
    {
        static Efl_Event_Description const* description()
        { return EIO_SENTRY_EVENT_SELF_RENAME; }
        typedef Eio_Sentry_Event parameter_type;
    } const self_rename_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    self_rename_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(self_rename_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    self_rename_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(self_rename_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EIO_SENTRY_BETA
    static struct self_deleted_event
    {
        static Efl_Event_Description const* description()
        { return EIO_SENTRY_EVENT_SELF_DELETED; }
        typedef Eio_Sentry_Event parameter_type;
    } const self_deleted_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    self_deleted_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(self_deleted_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    self_deleted_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(self_deleted_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EIO_SENTRY_BETA
    static struct error_event
    {
        static Efl_Event_Description const* description()
        { return EIO_SENTRY_EVENT_ERROR; }
        typedef Eio_Sentry_Event parameter_type;
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
     ::efl::eolian::address_of_operator<Sentry,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Sentry const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Sentry> _get_wref() const { return ::efl::eo::wref<Sentry>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Sentry* operator->() const { return this; }
    Sentry* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Sentry const& lhs, Sentry const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Sentry const& lhs, Sentry const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Sentry) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Sentry>::value, "");
} 

#pragma GCC diagnostic pop

#endif
