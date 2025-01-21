#ifndef EFL_IO_CLOSER_FD_EO_HH
#define EFL_IO_CLOSER_FD_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_io_closer.eo.h"
#include "efl_io_closer_fd.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_io_closer.eo.hh"
#ifndef EFL_IO_CLOSER_FD_FWD_GUARD
#define EFL_IO_CLOSER_FD_FWD_GUARD
namespace efl { namespace io { 
struct Closer_Fd;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Closer_Fd> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Closer_Fd&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Closer_Fd const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Closer_Fd const&> : ::std::true_type {}; } }
#endif
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
struct Closer_Fd {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type closer_fd_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_IO_CLOSER_FD_PROTECTED
    ::efl::eolian::return_traits<void>::type closer_fd_set( ::efl::eolian::in_traits<int>::type fd) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_CLOSER_FD_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Closer_Fd *>(this))); }
    operator ::efl::io::Closer_Fd() const;
    operator ::efl::io::Closer_Fd&();
    operator ::efl::io::Closer_Fd const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Closer_Fd,  ::efl::io::Closer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Closer_Fd const ,  ::efl::io::Closer const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace io { 
struct Closer_Fd : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::io::Closer)
{
    explicit Closer_Fd( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Closer_Fd(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Closer_Fd() = default;
    Closer_Fd(Closer_Fd const&) = default;
    Closer_Fd(Closer_Fd&&) = default;
    Closer_Fd& operator=(Closer_Fd const&) = default;
    Closer_Fd& operator=(Closer_Fd&&) = default;
    template <typename Derived>
    Closer_Fd(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Closer_Fd, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type closer_fd_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_IO_CLOSER_FD_PROTECTED
    ::efl::eolian::return_traits<void>::type closer_fd_set( ::efl::eolian::in_traits<int>::type fd) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_CLOSER_FD_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Closer_Fd *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Closer_Fd,  ::efl::io::Closer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Closer_Fd const ,  ::efl::io::Closer const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Closer_Fd> _get_wref() const { return ::efl::eo::wref<Closer_Fd>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Closer_Fd* operator->() const { return this; }
    Closer_Fd* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Closer_Fd const& lhs, Closer_Fd const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Closer_Fd const& lhs, Closer_Fd const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Closer_Fd) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Closer_Fd>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
