#ifndef EFL_IO_READER_FD_EO_HH
#define EFL_IO_READER_FD_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_io_reader.eo.h"
#include "efl_io_reader_fd.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_io_reader.eo.hh"
#ifndef EFL_IO_READER_FD_FWD_GUARD
#define EFL_IO_READER_FD_FWD_GUARD
namespace efl { namespace io { 
struct Reader_Fd;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Reader_Fd> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Reader_Fd&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Reader_Fd const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Reader_Fd const&> : ::std::true_type {}; } }
#endif
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
struct Reader_Fd {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type reader_fd_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_IO_READER_FD_PROTECTED
    ::efl::eolian::return_traits<void>::type reader_fd_set( ::efl::eolian::in_traits<int>::type fd) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_READER_FD_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Reader_Fd *>(this))); }
    operator ::efl::io::Reader_Fd() const;
    operator ::efl::io::Reader_Fd&();
    operator ::efl::io::Reader_Fd const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Reader_Fd,  ::efl::io::Reader> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Reader_Fd const ,  ::efl::io::Reader const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace io { 
struct Reader_Fd : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::io::Reader)
{
    explicit Reader_Fd( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Reader_Fd(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Reader_Fd() = default;
    Reader_Fd(Reader_Fd const&) = default;
    Reader_Fd(Reader_Fd&&) = default;
    Reader_Fd& operator=(Reader_Fd const&) = default;
    Reader_Fd& operator=(Reader_Fd&&) = default;
    template <typename Derived>
    Reader_Fd(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Reader_Fd, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type reader_fd_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_IO_READER_FD_PROTECTED
    ::efl::eolian::return_traits<void>::type reader_fd_set( ::efl::eolian::in_traits<int>::type fd) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_READER_FD_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Reader_Fd *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Reader_Fd,  ::efl::io::Reader> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Reader_Fd const ,  ::efl::io::Reader const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Reader_Fd> _get_wref() const { return ::efl::eo::wref<Reader_Fd>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Reader_Fd* operator->() const { return this; }
    Reader_Fd* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Reader_Fd const& lhs, Reader_Fd const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Reader_Fd const& lhs, Reader_Fd const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Reader_Fd) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Reader_Fd>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
