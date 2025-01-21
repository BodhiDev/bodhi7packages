#ifndef EFL_IO_BUFFER_EO_HH
#define EFL_IO_BUFFER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_io_buffer.eo.h"
#include "efl_io_closer.eo.h"
#include "efl_io_positioner.eo.h"
#include "efl_io_reader.eo.h"
#include "efl_io_sizer.eo.h"
#include "efl_io_writer.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_io_closer.eo.hh"
#include "efl_io_positioner.eo.hh"
#include "efl_io_reader.eo.hh"
#include "efl_io_sizer.eo.hh"
#include "efl_io_writer.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_IO_BUFFER_FWD_GUARD
#define EFL_IO_BUFFER_FWD_GUARD
namespace efl { namespace io { 
struct Buffer;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Buffer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Buffer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Buffer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Buffer const&> : ::std::true_type {}; } }
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
struct Buffer {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type limit_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type limit_set( ::efl::eolian::in_traits< size_t>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< uint64_t>::type position_read_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type position_read_set( ::efl::eolian::in_traits< uint64_t>::type position) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< uint64_t>::type position_write_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type position_write_set( ::efl::eolian::in_traits< uint64_t>::type position) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Slice>::type slice_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type preallocate( ::efl::eolian::in_traits< size_t>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type adopt_readonly( ::efl::eolian::in_traits<const Eina_Slice>::type slice) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type adopt_readwrite( ::efl::eolian::in_traits<Eina_Rw_Slice>::type slice) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::strbuf_view>::type binbuf_steal() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_BUFFER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Buffer *>(this))); }
    operator ::efl::io::Buffer() const;
    operator ::efl::io::Buffer&();
    operator ::efl::io::Buffer const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Buffer,  ::efl::Object,  ::efl::io::Closer,  ::efl::io::Positioner,  ::efl::io::Reader,  ::efl::io::Sizer,  ::efl::io::Writer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Buffer const ,  ::efl::Object const ,  ::efl::io::Closer const ,  ::efl::io::Positioner const ,  ::efl::io::Reader const ,  ::efl::io::Sizer const ,  ::efl::io::Writer const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace io { 
struct Buffer : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::io::Closer)
    , EO_CXX_INHERIT(::efl::io::Positioner)
    , EO_CXX_INHERIT(::efl::io::Reader)
    , EO_CXX_INHERIT(::efl::io::Sizer)
    , EO_CXX_INHERIT(::efl::io::Writer)
{
    explicit Buffer( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Buffer(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Buffer() = default;
    Buffer(Buffer const&) = default;
    Buffer(Buffer&&) = default;
    Buffer& operator=(Buffer const&) = default;
    Buffer& operator=(Buffer&&) = default;
    template <typename Derived>
    Buffer(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Buffer, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Buffer( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Buffer( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Buffer( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Buffer >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Buffer(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Buffer >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type limit_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type limit_set( ::efl::eolian::in_traits< size_t>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< uint64_t>::type position_read_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type position_read_set( ::efl::eolian::in_traits< uint64_t>::type position) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< uint64_t>::type position_write_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type position_write_set( ::efl::eolian::in_traits< uint64_t>::type position) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Slice>::type slice_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type preallocate( ::efl::eolian::in_traits< size_t>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type adopt_readonly( ::efl::eolian::in_traits<const Eina_Slice>::type slice) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type adopt_readwrite( ::efl::eolian::in_traits<Eina_Rw_Slice>::type slice) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::strbuf_view>::type binbuf_steal() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_BUFFER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Buffer *>(this))); }
#ifdef EFL_IO_BUFFER_BETA
    static struct position_read_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_BUFFER_EVENT_POSITION_READ_CHANGED; }
        typedef void parameter_type;
    } const position_read_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    position_read_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(position_read_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    position_read_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(position_read_changed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_IO_BUFFER_BETA
    static struct position_write_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_BUFFER_EVENT_POSITION_WRITE_CHANGED; }
        typedef void parameter_type;
    } const position_write_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    position_write_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(position_write_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    position_write_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(position_write_changed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_IO_BUFFER_BETA
    static struct reallocated_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_BUFFER_EVENT_REALLOCATED; }
        typedef void parameter_type;
    } const reallocated_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    reallocated_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(reallocated_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    reallocated_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(reallocated_event, *this, std::bind(function));
    }
#endif
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Buffer,  ::efl::Object,  ::efl::io::Closer,  ::efl::io::Positioner,  ::efl::io::Reader,  ::efl::io::Sizer,  ::efl::io::Writer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Buffer const ,  ::efl::Object const ,  ::efl::io::Closer const ,  ::efl::io::Positioner const ,  ::efl::io::Reader const ,  ::efl::io::Sizer const ,  ::efl::io::Writer const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Buffer> _get_wref() const { return ::efl::eo::wref<Buffer>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Buffer* operator->() const { return this; }
    Buffer* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Buffer const& lhs, Buffer const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Buffer const& lhs, Buffer const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Buffer) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Buffer>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
