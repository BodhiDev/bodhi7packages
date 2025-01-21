#ifndef EFL_IO_STDERR_EO_HH
#define EFL_IO_STDERR_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_io_stderr.eo.h"
#include "efl_io_writer.eo.h"
#include "efl_io_writer_fd.eo.h"
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_loop_fd.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_io_writer.eo.hh"
#include "efl_io_writer_fd.eo.hh"
#include "efl_loop.eo.hh"
#include "efl_loop_consumer.eo.hh"
#include "efl_loop_fd.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_IO_STDERR_FWD_GUARD
#define EFL_IO_STDERR_FWD_GUARD
namespace efl { namespace io { 
struct Stderr;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Stderr> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Stderr&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Stderr const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Stderr const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace io { 
struct Stderr {
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_STDERR_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Stderr *>(this))); }
    operator ::efl::io::Stderr() const;
    operator ::efl::io::Stderr&();
    operator ::efl::io::Stderr const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Stderr,  ::efl::Loop_Consumer,  ::efl::Loop_Fd,  ::efl::Object,  ::efl::io::Writer,  ::efl::io::Writer_Fd> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Stderr const ,  ::efl::Loop_Consumer const ,  ::efl::Loop_Fd const ,  ::efl::Object const ,  ::efl::io::Writer const ,  ::efl::io::Writer_Fd const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace io { 
struct Stderr : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Loop_Fd)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::io::Writer)
    , EO_CXX_INHERIT(::efl::io::Writer_Fd)
{
    explicit Stderr( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Stderr(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Stderr() = default;
    Stderr(Stderr const&) = default;
    Stderr(Stderr&&) = default;
    Stderr& operator=(Stderr const&) = default;
    Stderr& operator=(Stderr&&) = default;
    template <typename Derived>
    Stderr(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Stderr, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Stderr( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Stderr( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Stderr( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Stderr >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Stderr(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Stderr >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_IO_STDERR_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Stderr *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Stderr,  ::efl::Loop_Consumer,  ::efl::Loop_Fd,  ::efl::Object,  ::efl::io::Writer,  ::efl::io::Writer_Fd> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Stderr const ,  ::efl::Loop_Consumer const ,  ::efl::Loop_Fd const ,  ::efl::Object const ,  ::efl::io::Writer const ,  ::efl::io::Writer_Fd const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Stderr> _get_wref() const { return ::efl::eo::wref<Stderr>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Stderr* operator->() const { return this; }
    Stderr* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Stderr const& lhs, Stderr const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Stderr const& lhs, Stderr const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Stderr) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Stderr>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
