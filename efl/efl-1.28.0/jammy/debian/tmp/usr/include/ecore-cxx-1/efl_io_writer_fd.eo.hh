#ifndef EFL_IO_WRITER_FD_EO_HH
#define EFL_IO_WRITER_FD_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_io_writer.eo.h"
#include "efl_io_writer_fd.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_io_writer.eo.hh"
#ifndef EFL_IO_WRITER_FD_FWD_GUARD
#define EFL_IO_WRITER_FD_FWD_GUARD
namespace efl { namespace io { 
struct Writer_Fd;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Writer_Fd> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Writer_Fd&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Writer_Fd const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Writer_Fd const&> : ::std::true_type {}; } }
#endif
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
struct Writer_Fd {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type writer_fd_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_IO_WRITER_FD_PROTECTED
    ::efl::eolian::return_traits<void>::type writer_fd_set( ::efl::eolian::in_traits<int>::type fd) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_WRITER_FD_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Writer_Fd *>(this))); }
    operator ::efl::io::Writer_Fd() const;
    operator ::efl::io::Writer_Fd&();
    operator ::efl::io::Writer_Fd const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Writer_Fd,  ::efl::io::Writer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Writer_Fd const ,  ::efl::io::Writer const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace io { 
struct Writer_Fd : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::io::Writer)
{
    explicit Writer_Fd( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Writer_Fd(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Writer_Fd() = default;
    Writer_Fd(Writer_Fd const&) = default;
    Writer_Fd(Writer_Fd&&) = default;
    Writer_Fd& operator=(Writer_Fd const&) = default;
    Writer_Fd& operator=(Writer_Fd&&) = default;
    template <typename Derived>
    Writer_Fd(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Writer_Fd, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type writer_fd_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_IO_WRITER_FD_PROTECTED
    ::efl::eolian::return_traits<void>::type writer_fd_set( ::efl::eolian::in_traits<int>::type fd) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_WRITER_FD_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Writer_Fd *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Writer_Fd,  ::efl::io::Writer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Writer_Fd const ,  ::efl::io::Writer const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Writer_Fd> _get_wref() const { return ::efl::eo::wref<Writer_Fd>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Writer_Fd* operator->() const { return this; }
    Writer_Fd* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Writer_Fd const& lhs, Writer_Fd const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Writer_Fd const& lhs, Writer_Fd const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Writer_Fd) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Writer_Fd>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
