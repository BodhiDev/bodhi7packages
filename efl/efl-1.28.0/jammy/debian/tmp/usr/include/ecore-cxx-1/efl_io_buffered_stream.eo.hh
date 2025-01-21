#ifndef EFL_IO_BUFFERED_STREAM_EO_HH
#define EFL_IO_BUFFERED_STREAM_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_io_buffered_stream.eo.h"
#include "efl_io_closer.eo.h"
#include "efl_io_reader.eo.h"
#include "efl_io_writer.eo.h"
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_io_closer.eo.hh"
#include "efl_io_reader.eo.hh"
#include "efl_io_writer.eo.hh"
#include "efl_loop.eo.hh"
#include "efl_loop_consumer.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_IO_BUFFERED_STREAM_FWD_GUARD
#define EFL_IO_BUFFERED_STREAM_FWD_GUARD
namespace efl { namespace io { 
struct Buffered_Stream;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Buffered_Stream> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Buffered_Stream&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Buffered_Stream const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Buffered_Stream const&> : ::std::true_type {}; } }
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
struct Buffered_Stream {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::Object>::type inner_io_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type inner_io_set( ::efl::eolian::in_traits< ::efl::Object>::type io) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type max_queue_size_input_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type max_queue_size_input_set( ::efl::eolian::in_traits< size_t>::type max_queue_size_input) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type max_queue_size_output_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type max_queue_size_output_set( ::efl::eolian::in_traits< size_t>::type max_queue_size_output) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<const Eina_Slice>::type line_delimiter_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type line_delimiter_set( ::efl::eolian::in_traits<const Eina_Slice>::type slice) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type timeout_inactivity_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type timeout_inactivity_set( ::efl::eolian::in_traits<double>::type seconds) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type read_chunk_size_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type read_chunk_size_set( ::efl::eolian::in_traits< size_t>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type pending_write_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type pending_read_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type progress_get( ::efl::eolian::out_traits< size_t>::type read_bytes,  ::efl::eolian::out_traits< size_t>::type written_bytes) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Slice>::type slice_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type discard( ::efl::eolian::in_traits< size_t>::type amount) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type clear() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type eos_mark() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type flush( ::efl::eolian::in_traits<bool>::type may_block,  ::efl::eolian::in_traits<bool>::type ignore_line_delimiter) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_BUFFERED_STREAM_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Buffered_Stream *>(this))); }
    operator ::efl::io::Buffered_Stream() const;
    operator ::efl::io::Buffered_Stream&();
    operator ::efl::io::Buffered_Stream const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Buffered_Stream,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::io::Closer,  ::efl::io::Reader,  ::efl::io::Writer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Buffered_Stream const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::io::Closer const ,  ::efl::io::Reader const ,  ::efl::io::Writer const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace io { 
struct Buffered_Stream : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::io::Closer)
    , EO_CXX_INHERIT(::efl::io::Reader)
    , EO_CXX_INHERIT(::efl::io::Writer)
{
    explicit Buffered_Stream( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Buffered_Stream(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Buffered_Stream() = default;
    Buffered_Stream(Buffered_Stream const&) = default;
    Buffered_Stream(Buffered_Stream&&) = default;
    Buffered_Stream& operator=(Buffered_Stream const&) = default;
    Buffered_Stream& operator=(Buffered_Stream&&) = default;
    template <typename Derived>
    Buffered_Stream(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Buffered_Stream, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Buffered_Stream( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Buffered_Stream( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Buffered_Stream( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Buffered_Stream >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Buffered_Stream(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Buffered_Stream >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::Object>::type inner_io_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type inner_io_set( ::efl::eolian::in_traits< ::efl::Object>::type io) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type max_queue_size_input_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type max_queue_size_input_set( ::efl::eolian::in_traits< size_t>::type max_queue_size_input) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type max_queue_size_output_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type max_queue_size_output_set( ::efl::eolian::in_traits< size_t>::type max_queue_size_output) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<const Eina_Slice>::type line_delimiter_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type line_delimiter_set( ::efl::eolian::in_traits<const Eina_Slice>::type slice) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type timeout_inactivity_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type timeout_inactivity_set( ::efl::eolian::in_traits<double>::type seconds) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type read_chunk_size_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type read_chunk_size_set( ::efl::eolian::in_traits< size_t>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type pending_write_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type pending_read_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type progress_get( ::efl::eolian::out_traits< size_t>::type read_bytes,  ::efl::eolian::out_traits< size_t>::type written_bytes) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Slice>::type slice_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type discard( ::efl::eolian::in_traits< size_t>::type amount) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type clear() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type eos_mark() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type flush( ::efl::eolian::in_traits<bool>::type may_block,  ::efl::eolian::in_traits<bool>::type ignore_line_delimiter) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_BUFFERED_STREAM_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Buffered_Stream *>(this))); }
#ifdef EFL_IO_BUFFERED_STREAM_BETA
    static struct write_finished_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_BUFFERED_STREAM_EVENT_WRITE_FINISHED; }
        typedef void parameter_type;
    } const write_finished_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    write_finished_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(write_finished_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    write_finished_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(write_finished_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_IO_BUFFERED_STREAM_BETA
    static struct read_finished_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_BUFFERED_STREAM_EVENT_READ_FINISHED; }
        typedef void parameter_type;
    } const read_finished_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    read_finished_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(read_finished_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    read_finished_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(read_finished_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_IO_BUFFERED_STREAM_BETA
    static struct finished_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_BUFFERED_STREAM_EVENT_FINISHED; }
        typedef void parameter_type;
    } const finished_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    finished_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(finished_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    finished_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(finished_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_IO_BUFFERED_STREAM_BETA
    static struct error_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_BUFFERED_STREAM_EVENT_ERROR; }
        typedef Eina_Error parameter_type;
    } const error_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    error_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(error_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    error_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(error_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_IO_BUFFERED_STREAM_BETA
    static struct progress_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_BUFFERED_STREAM_EVENT_PROGRESS; }
        typedef void parameter_type;
    } const progress_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    progress_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(progress_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    progress_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(progress_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_IO_BUFFERED_STREAM_BETA
    static struct slice_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_BUFFERED_STREAM_EVENT_SLICE_CHANGED; }
        typedef void parameter_type;
    } const slice_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    slice_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(slice_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    slice_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(slice_changed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_IO_BUFFERED_STREAM_BETA
    static struct line_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_BUFFERED_STREAM_EVENT_LINE; }
        typedef const Eina_Slice * parameter_type;
    } const line_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    line_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(line_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    line_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(line_event, *this, std::bind(function));
    }
#endif
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Buffered_Stream,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::io::Closer,  ::efl::io::Reader,  ::efl::io::Writer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Buffered_Stream const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::io::Closer const ,  ::efl::io::Reader const ,  ::efl::io::Writer const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Buffered_Stream> _get_wref() const { return ::efl::eo::wref<Buffered_Stream>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Buffered_Stream* operator->() const { return this; }
    Buffered_Stream* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Buffered_Stream const& lhs, Buffered_Stream const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Buffered_Stream const& lhs, Buffered_Stream const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Buffered_Stream) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Buffered_Stream>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
