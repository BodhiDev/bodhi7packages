#ifndef EFL_IO_WRITER_EO_HH
#define EFL_IO_WRITER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_io_writer.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_IO_WRITER_FWD_GUARD
#define EFL_IO_WRITER_FWD_GUARD
namespace efl { namespace io { 
struct Writer;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Writer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Writer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Writer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Writer const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace io { 
struct Writer {
    ::efl::eolian::return_traits<bool>::type can_write_get() const;
#ifdef EFL_IO_WRITER_PROTECTED
    ::efl::eolian::return_traits<void>::type can_write_set( ::efl::eolian::in_traits<bool>::type can_write) const;
#endif
    ::efl::eolian::return_traits<Eina_Error>::type write( ::efl::eolian::inout_traits< Eina_Slice>::type slice,  ::efl::eolian::out_traits< Eina_Slice*>::type remaining) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_WRITER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Writer *>(this))); }
    operator ::efl::io::Writer() const;
    operator ::efl::io::Writer&();
    operator ::efl::io::Writer const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Writer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Writer const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace io { 
struct Writer : private ::efl::eo::concrete
{
    explicit Writer( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Writer(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Writer() = default;
    Writer(Writer const&) = default;
    Writer(Writer&&) = default;
    Writer& operator=(Writer const&) = default;
    Writer& operator=(Writer&&) = default;
    template <typename Derived>
    Writer(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Writer, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<bool>::type can_write_get() const;
#ifdef EFL_IO_WRITER_PROTECTED
    ::efl::eolian::return_traits<void>::type can_write_set( ::efl::eolian::in_traits<bool>::type can_write) const;
#endif
    ::efl::eolian::return_traits<Eina_Error>::type write( ::efl::eolian::inout_traits< Eina_Slice>::type slice,  ::efl::eolian::out_traits< Eina_Slice*>::type remaining) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_WRITER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Writer *>(this))); }
    static struct can_write_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_WRITER_EVENT_CAN_WRITE_CHANGED; }
        typedef bool parameter_type;
    } const can_write_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    can_write_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(can_write_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    can_write_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(can_write_changed_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Writer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Writer const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Writer> _get_wref() const { return ::efl::eo::wref<Writer>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Writer* operator->() const { return this; }
    Writer* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Writer const& lhs, Writer const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Writer const& lhs, Writer const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Writer) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Writer>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
