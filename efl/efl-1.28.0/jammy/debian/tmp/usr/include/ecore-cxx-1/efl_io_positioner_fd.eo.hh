#ifndef EFL_IO_POSITIONER_FD_EO_HH
#define EFL_IO_POSITIONER_FD_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_io_positioner.eo.h"
#include "efl_io_positioner_fd.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_io_positioner.eo.hh"
#ifndef EFL_IO_POSITIONER_FD_FWD_GUARD
#define EFL_IO_POSITIONER_FD_FWD_GUARD
namespace efl { namespace io { 
struct Positioner_Fd;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Positioner_Fd> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Positioner_Fd&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Positioner_Fd const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Positioner_Fd const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_IO_POSITIONER_FWD_GUARD
#define EFL_IO_POSITIONER_FWD_GUARD
namespace efl { namespace io { 
struct Positioner;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Positioner> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Positioner&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Positioner const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Positioner const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace io { 
struct Positioner_Fd {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type positioner_fd_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_IO_POSITIONER_FD_PROTECTED
    ::efl::eolian::return_traits<void>::type positioner_fd_set( ::efl::eolian::in_traits<int>::type fd) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_POSITIONER_FD_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Positioner_Fd *>(this))); }
    operator ::efl::io::Positioner_Fd() const;
    operator ::efl::io::Positioner_Fd&();
    operator ::efl::io::Positioner_Fd const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Positioner_Fd,  ::efl::io::Positioner> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Positioner_Fd const ,  ::efl::io::Positioner const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace io { 
struct Positioner_Fd : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::io::Positioner)
{
    explicit Positioner_Fd( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Positioner_Fd(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Positioner_Fd() = default;
    Positioner_Fd(Positioner_Fd const&) = default;
    Positioner_Fd(Positioner_Fd&&) = default;
    Positioner_Fd& operator=(Positioner_Fd const&) = default;
    Positioner_Fd& operator=(Positioner_Fd&&) = default;
    template <typename Derived>
    Positioner_Fd(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Positioner_Fd, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type positioner_fd_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_IO_POSITIONER_FD_PROTECTED
    ::efl::eolian::return_traits<void>::type positioner_fd_set( ::efl::eolian::in_traits<int>::type fd) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_POSITIONER_FD_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Positioner_Fd *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Positioner_Fd,  ::efl::io::Positioner> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Positioner_Fd const ,  ::efl::io::Positioner const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Positioner_Fd> _get_wref() const { return ::efl::eo::wref<Positioner_Fd>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Positioner_Fd* operator->() const { return this; }
    Positioner_Fd* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Positioner_Fd const& lhs, Positioner_Fd const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Positioner_Fd const& lhs, Positioner_Fd const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Positioner_Fd) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Positioner_Fd>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
