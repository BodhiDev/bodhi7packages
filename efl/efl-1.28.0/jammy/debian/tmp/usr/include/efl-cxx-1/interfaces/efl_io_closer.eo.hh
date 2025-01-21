#ifndef EFL_IO_CLOSER_EO_HH
#define EFL_IO_CLOSER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_io_closer.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_IO_CLOSER_FWD_GUARD
#define EFL_IO_CLOSER_FWD_GUARD
namespace efl { namespace io { 
struct Closer;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Closer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Closer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Closer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Closer const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace io { 
struct Closer {
    ::efl::eolian::return_traits<bool>::type closed_get() const;
    ::efl::eolian::return_traits<bool>::type close_on_exec_get() const;
    ::efl::eolian::return_traits<bool>::type close_on_exec_set( ::efl::eolian::in_traits<bool>::type close_on_exec) const;
    ::efl::eolian::return_traits<bool>::type close_on_invalidate_get() const;
    ::efl::eolian::return_traits<void>::type close_on_invalidate_set( ::efl::eolian::in_traits<bool>::type close_on_invalidate) const;
    ::efl::eolian::return_traits<Eina_Error>::type close() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_CLOSER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Closer *>(this))); }
    operator ::efl::io::Closer() const;
    operator ::efl::io::Closer&();
    operator ::efl::io::Closer const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Closer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Closer const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace io { 
struct Closer : private ::efl::eo::concrete
{
    explicit Closer( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Closer(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Closer() = default;
    Closer(Closer const&) = default;
    Closer(Closer&&) = default;
    Closer& operator=(Closer const&) = default;
    Closer& operator=(Closer&&) = default;
    template <typename Derived>
    Closer(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Closer, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<bool>::type closed_get() const;
    ::efl::eolian::return_traits<bool>::type close_on_exec_get() const;
    ::efl::eolian::return_traits<bool>::type close_on_exec_set( ::efl::eolian::in_traits<bool>::type close_on_exec) const;
    ::efl::eolian::return_traits<bool>::type close_on_invalidate_get() const;
    ::efl::eolian::return_traits<void>::type close_on_invalidate_set( ::efl::eolian::in_traits<bool>::type close_on_invalidate) const;
    ::efl::eolian::return_traits<Eina_Error>::type close() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_CLOSER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Closer *>(this))); }
    static struct closed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_CLOSER_EVENT_CLOSED; }
        typedef void parameter_type;
    } const closed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    closed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(closed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    closed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(closed_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Closer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Closer const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Closer> _get_wref() const { return ::efl::eo::wref<Closer>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Closer* operator->() const { return this; }
    Closer* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Closer const& lhs, Closer const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Closer const& lhs, Closer const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Closer) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Closer>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
