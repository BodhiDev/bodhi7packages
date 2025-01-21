#ifndef EFL_IO_FILE_EO_HH
#define EFL_IO_FILE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_file.eo.h"
#include "efl_io_closer.eo.h"
#include "efl_io_closer_fd.eo.h"
#include "efl_io_file.eo.h"
#include "efl_io_positioner.eo.h"
#include "efl_io_positioner_fd.eo.h"
#include "efl_io_reader.eo.h"
#include "efl_io_reader_fd.eo.h"
#include "efl_io_sizer.eo.h"
#include "efl_io_sizer_fd.eo.h"
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
#include "efl_file.eo.hh"
#include "efl_io_closer.eo.hh"
#include "efl_io_closer_fd.eo.hh"
#include "efl_io_positioner.eo.hh"
#include "efl_io_positioner_fd.eo.hh"
#include "efl_io_reader.eo.hh"
#include "efl_io_reader_fd.eo.hh"
#include "efl_io_sizer.eo.hh"
#include "efl_io_sizer_fd.eo.hh"
#include "efl_io_writer.eo.hh"
#include "efl_io_writer_fd.eo.hh"
#include "efl_loop.eo.hh"
#include "efl_loop_consumer.eo.hh"
#include "efl_loop_fd.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_IO_FILE_FWD_GUARD
#define EFL_IO_FILE_FWD_GUARD
namespace efl { namespace io { 
struct File;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::File> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::File&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::File const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::File const&> : ::std::true_type {}; } }
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
#ifndef EFL_FILE_FWD_GUARD
#define EFL_FILE_FWD_GUARD
namespace efl { 
struct File;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::File> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::File&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::File const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::File const&> : ::std::true_type {}; } }
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
#ifndef EFL_IO_SIZER_FD_FWD_GUARD
#define EFL_IO_SIZER_FD_FWD_GUARD
namespace efl { namespace io { 
struct Sizer_Fd;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Sizer_Fd> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Sizer_Fd&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Sizer_Fd const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Sizer_Fd const&> : ::std::true_type {}; } }
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
struct File {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< uint32_t>::type flags_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type flags_set( ::efl::eolian::in_traits< uint32_t>::type flags) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< uint32_t>::type mode_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type mode_set( ::efl::eolian::in_traits< uint32_t>::type mode) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_FILE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<File *>(this))); }
    operator ::efl::io::File() const;
    operator ::efl::io::File&();
    operator ::efl::io::File const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<File,  ::efl::File,  ::efl::Loop_Consumer,  ::efl::Loop_Fd,  ::efl::Object,  ::efl::io::Closer,  ::efl::io::Closer_Fd,  ::efl::io::Positioner,  ::efl::io::Positioner_Fd,  ::efl::io::Reader,  ::efl::io::Reader_Fd,  ::efl::io::Sizer,  ::efl::io::Sizer_Fd,  ::efl::io::Writer,  ::efl::io::Writer_Fd> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<File const ,  ::efl::File const ,  ::efl::Loop_Consumer const ,  ::efl::Loop_Fd const ,  ::efl::Object const ,  ::efl::io::Closer const ,  ::efl::io::Closer_Fd const ,  ::efl::io::Positioner const ,  ::efl::io::Positioner_Fd const ,  ::efl::io::Reader const ,  ::efl::io::Reader_Fd const ,  ::efl::io::Sizer const ,  ::efl::io::Sizer_Fd const ,  ::efl::io::Writer const ,  ::efl::io::Writer_Fd const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace io { 
struct File : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::File)
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Loop_Fd)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::io::Closer)
    , EO_CXX_INHERIT(::efl::io::Closer_Fd)
    , EO_CXX_INHERIT(::efl::io::Positioner)
    , EO_CXX_INHERIT(::efl::io::Positioner_Fd)
    , EO_CXX_INHERIT(::efl::io::Reader)
    , EO_CXX_INHERIT(::efl::io::Reader_Fd)
    , EO_CXX_INHERIT(::efl::io::Sizer)
    , EO_CXX_INHERIT(::efl::io::Sizer_Fd)
    , EO_CXX_INHERIT(::efl::io::Writer)
    , EO_CXX_INHERIT(::efl::io::Writer_Fd)
{
    explicit File( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    File(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit File() = default;
    File(File const&) = default;
    File(File&&) = default;
    File& operator=(File const&) = default;
    File& operator=(File&&) = default;
    template <typename Derived>
    File(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< File, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    File( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit File( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> File( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, File >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> File(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, File >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< uint32_t>::type flags_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type flags_set( ::efl::eolian::in_traits< uint32_t>::type flags) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< uint32_t>::type mode_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type mode_set( ::efl::eolian::in_traits< uint32_t>::type mode) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_FILE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<File *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<File,  ::efl::File,  ::efl::Loop_Consumer,  ::efl::Loop_Fd,  ::efl::Object,  ::efl::io::Closer,  ::efl::io::Closer_Fd,  ::efl::io::Positioner,  ::efl::io::Positioner_Fd,  ::efl::io::Reader,  ::efl::io::Reader_Fd,  ::efl::io::Sizer,  ::efl::io::Sizer_Fd,  ::efl::io::Writer,  ::efl::io::Writer_Fd> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<File const ,  ::efl::File const ,  ::efl::Loop_Consumer const ,  ::efl::Loop_Fd const ,  ::efl::Object const ,  ::efl::io::Closer const ,  ::efl::io::Closer_Fd const ,  ::efl::io::Positioner const ,  ::efl::io::Positioner_Fd const ,  ::efl::io::Reader const ,  ::efl::io::Reader_Fd const ,  ::efl::io::Sizer const ,  ::efl::io::Sizer_Fd const ,  ::efl::io::Writer const ,  ::efl::io::Writer_Fd const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<File> _get_wref() const { return ::efl::eo::wref<File>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const File* operator->() const { return this; }
    File* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(File const& lhs, File const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(File const& lhs, File const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(File) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<File>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
