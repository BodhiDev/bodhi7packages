#ifndef EFL_IO_STDOUT_EO_HH
#define EFL_IO_STDOUT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_io_stdout.eo.h"
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
#ifndef EFL_IO_STDOUT_FWD_GUARD
#define EFL_IO_STDOUT_FWD_GUARD
namespace efl { namespace io { 
struct Stdout;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Stdout> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Stdout&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Stdout const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Stdout const&> : ::std::true_type {}; } }
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
struct Stdout {
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_STDOUT_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Stdout *>(this))); }
    operator ::efl::io::Stdout() const;
    operator ::efl::io::Stdout&();
    operator ::efl::io::Stdout const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Stdout,  ::efl::Loop_Consumer,  ::efl::Loop_Fd,  ::efl::Object,  ::efl::io::Writer,  ::efl::io::Writer_Fd> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Stdout const ,  ::efl::Loop_Consumer const ,  ::efl::Loop_Fd const ,  ::efl::Object const ,  ::efl::io::Writer const ,  ::efl::io::Writer_Fd const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace io { 
struct Stdout : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Loop_Fd)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::io::Writer)
    , EO_CXX_INHERIT(::efl::io::Writer_Fd)
{
    explicit Stdout( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Stdout(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Stdout() = default;
    Stdout(Stdout const&) = default;
    Stdout(Stdout&&) = default;
    Stdout& operator=(Stdout const&) = default;
    Stdout& operator=(Stdout&&) = default;
    template <typename Derived>
    Stdout(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Stdout, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Stdout( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Stdout( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Stdout( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Stdout >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Stdout(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Stdout >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_IO_STDOUT_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Stdout *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Stdout,  ::efl::Loop_Consumer,  ::efl::Loop_Fd,  ::efl::Object,  ::efl::io::Writer,  ::efl::io::Writer_Fd> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Stdout const ,  ::efl::Loop_Consumer const ,  ::efl::Loop_Fd const ,  ::efl::Object const ,  ::efl::io::Writer const ,  ::efl::io::Writer_Fd const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Stdout> _get_wref() const { return ::efl::eo::wref<Stdout>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Stdout* operator->() const { return this; }
    Stdout* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Stdout const& lhs, Stdout const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Stdout const& lhs, Stdout const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Stdout) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Stdout>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
