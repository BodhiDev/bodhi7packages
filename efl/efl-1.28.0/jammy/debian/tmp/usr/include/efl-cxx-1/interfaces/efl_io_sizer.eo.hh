#ifndef EFL_IO_SIZER_EO_HH
#define EFL_IO_SIZER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_io_sizer.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_IO_SIZER_FWD_GUARD
#define EFL_IO_SIZER_FWD_GUARD
namespace efl { namespace io { 
struct Sizer;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Sizer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Sizer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Sizer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Sizer const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace io { 
struct Sizer {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< uint64_t>::type size_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type size_set( ::efl::eolian::in_traits< uint64_t>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Error>::type resize( ::efl::eolian::in_traits< uint64_t>::type size) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_SIZER_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Sizer *>(this))); }
    operator ::efl::io::Sizer() const;
    operator ::efl::io::Sizer&();
    operator ::efl::io::Sizer const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Sizer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Sizer const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace io { 
struct Sizer : private ::efl::eo::concrete
{
    explicit Sizer( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Sizer(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Sizer() = default;
    Sizer(Sizer const&) = default;
    Sizer(Sizer&&) = default;
    Sizer& operator=(Sizer const&) = default;
    Sizer& operator=(Sizer&&) = default;
    template <typename Derived>
    Sizer(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Sizer, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< uint64_t>::type size_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type size_set( ::efl::eolian::in_traits< uint64_t>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Error>::type resize( ::efl::eolian::in_traits< uint64_t>::type size) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_SIZER_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Sizer *>(this))); }
#ifdef EFL_IO_SIZER_BETA
    static struct size_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_SIZER_EVENT_SIZE_CHANGED; }
        typedef void parameter_type;
    } const size_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    size_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(size_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    size_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(size_changed_event, *this, std::bind(function));
    }
#endif
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Sizer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Sizer const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Sizer> _get_wref() const { return ::efl::eo::wref<Sizer>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Sizer* operator->() const { return this; }
    Sizer* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Sizer const& lhs, Sizer const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Sizer const& lhs, Sizer const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Sizer) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Sizer>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
