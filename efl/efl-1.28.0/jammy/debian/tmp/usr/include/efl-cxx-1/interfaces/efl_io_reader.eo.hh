#ifndef EFL_IO_READER_EO_HH
#define EFL_IO_READER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_io_reader.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_IO_READER_FWD_GUARD
#define EFL_IO_READER_FWD_GUARD
namespace efl { namespace io { 
struct Reader;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Reader> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Reader&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Reader const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Reader const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace io { 
struct Reader {
    ::efl::eolian::return_traits<bool>::type can_read_get() const;
#ifdef EFL_IO_READER_PROTECTED
    ::efl::eolian::return_traits<void>::type can_read_set( ::efl::eolian::in_traits<bool>::type can_read) const;
#endif
    ::efl::eolian::return_traits<bool>::type eos_get() const;
#ifdef EFL_IO_READER_PROTECTED
    ::efl::eolian::return_traits<void>::type eos_set( ::efl::eolian::in_traits<bool>::type is_eos) const;
#endif
    ::efl::eolian::return_traits<Eina_Error>::type read( ::efl::eolian::inout_traits< Eina_Rw_Slice>::type rw_slice) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_READER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Reader *>(this))); }
    operator ::efl::io::Reader() const;
    operator ::efl::io::Reader&();
    operator ::efl::io::Reader const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Reader> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Reader const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace io { 
struct Reader : private ::efl::eo::concrete
{
    explicit Reader( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Reader(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Reader() = default;
    Reader(Reader const&) = default;
    Reader(Reader&&) = default;
    Reader& operator=(Reader const&) = default;
    Reader& operator=(Reader&&) = default;
    template <typename Derived>
    Reader(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Reader, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<bool>::type can_read_get() const;
#ifdef EFL_IO_READER_PROTECTED
    ::efl::eolian::return_traits<void>::type can_read_set( ::efl::eolian::in_traits<bool>::type can_read) const;
#endif
    ::efl::eolian::return_traits<bool>::type eos_get() const;
#ifdef EFL_IO_READER_PROTECTED
    ::efl::eolian::return_traits<void>::type eos_set( ::efl::eolian::in_traits<bool>::type is_eos) const;
#endif
    ::efl::eolian::return_traits<Eina_Error>::type read( ::efl::eolian::inout_traits< Eina_Rw_Slice>::type rw_slice) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_READER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Reader *>(this))); }
    static struct can_read_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_READER_EVENT_CAN_READ_CHANGED; }
        typedef bool parameter_type;
    } const can_read_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    can_read_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(can_read_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    can_read_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(can_read_changed_event, *this, std::bind(function));
    }
#endif
    static struct eos_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_READER_EVENT_EOS; }
        typedef void parameter_type;
    } const eos_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    eos_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(eos_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    eos_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(eos_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Reader> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Reader const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Reader> _get_wref() const { return ::efl::eo::wref<Reader>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Reader* operator->() const { return this; }
    Reader* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Reader const& lhs, Reader const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Reader const& lhs, Reader const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Reader) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Reader>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
