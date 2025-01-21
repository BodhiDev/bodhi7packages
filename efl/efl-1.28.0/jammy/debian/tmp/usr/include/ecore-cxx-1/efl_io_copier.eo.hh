#ifndef EFL_IO_COPIER_EO_HH
#define EFL_IO_COPIER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_io_closer.eo.h"
#include "efl_io_copier.eo.h"
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
#ifndef EFL_IO_COPIER_FWD_GUARD
#define EFL_IO_COPIER_FWD_GUARD
namespace efl { namespace io { 
struct Copier;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Copier> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Copier&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Copier const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Copier const&> : ::std::true_type {}; } }
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
struct Copier {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::io::Reader>::type source_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type source_set( ::efl::eolian::in_traits< ::efl::io::Reader>::type source) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::io::Writer>::type destination_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type destination_set( ::efl::eolian::in_traits< ::efl::io::Writer>::type destination) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<const Eina_Slice>::type line_delimiter_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type line_delimiter_set( ::efl::eolian::in_traits<const Eina_Slice>::type slice) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type buffer_limit_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type buffer_limit_set( ::efl::eolian::in_traits< size_t>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type read_chunk_size_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type read_chunk_size_set( ::efl::eolian::in_traits< size_t>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type progress_get( ::efl::eolian::out_traits< uint64_t*>::type read,  ::efl::eolian::out_traits< uint64_t*>::type written,  ::efl::eolian::out_traits< uint64_t*>::type total) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type timeout_inactivity_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type timeout_inactivity_set( ::efl::eolian::in_traits<double>::type seconds) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type done_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_IO_COPIER_PROTECTED
    ::efl::eolian::return_traits<void>::type done_set( ::efl::eolian::in_traits<bool>::type done) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type pending_size_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::strbuf_view>::type binbuf_steal() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type flush( ::efl::eolian::in_traits<bool>::type may_block,  ::efl::eolian::in_traits<bool>::type ignore_line_delimiter) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_COPIER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Copier *>(this))); }
    operator ::efl::io::Copier() const;
    operator ::efl::io::Copier&();
    operator ::efl::io::Copier const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Copier,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::io::Closer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Copier const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::io::Closer const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace io { 
struct Copier : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::io::Closer)
{
    explicit Copier( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Copier(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Copier() = default;
    Copier(Copier const&) = default;
    Copier(Copier&&) = default;
    Copier& operator=(Copier const&) = default;
    Copier& operator=(Copier&&) = default;
    template <typename Derived>
    Copier(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Copier, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Copier( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Copier( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Copier( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Copier >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Copier(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Copier >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::io::Reader>::type source_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type source_set( ::efl::eolian::in_traits< ::efl::io::Reader>::type source) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::io::Writer>::type destination_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type destination_set( ::efl::eolian::in_traits< ::efl::io::Writer>::type destination) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<const Eina_Slice>::type line_delimiter_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type line_delimiter_set( ::efl::eolian::in_traits<const Eina_Slice>::type slice) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type buffer_limit_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type buffer_limit_set( ::efl::eolian::in_traits< size_t>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type read_chunk_size_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type read_chunk_size_set( ::efl::eolian::in_traits< size_t>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type progress_get( ::efl::eolian::out_traits< uint64_t*>::type read,  ::efl::eolian::out_traits< uint64_t*>::type written,  ::efl::eolian::out_traits< uint64_t*>::type total) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type timeout_inactivity_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type timeout_inactivity_set( ::efl::eolian::in_traits<double>::type seconds) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type done_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_IO_COPIER_PROTECTED
    ::efl::eolian::return_traits<void>::type done_set( ::efl::eolian::in_traits<bool>::type done) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type pending_size_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::strbuf_view>::type binbuf_steal() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type flush( ::efl::eolian::in_traits<bool>::type may_block,  ::efl::eolian::in_traits<bool>::type ignore_line_delimiter) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_COPIER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Copier *>(this))); }
#ifdef EFL_IO_COPIER_BETA
    static struct done_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_COPIER_EVENT_DONE; }
        typedef void parameter_type;
    } const done_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    done_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(done_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    done_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(done_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_IO_COPIER_BETA
    static struct error_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_COPIER_EVENT_ERROR; }
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
#ifdef EFL_IO_COPIER_BETA
    static struct progress_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_COPIER_EVENT_PROGRESS; }
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
#ifdef EFL_IO_COPIER_BETA
    static struct data_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_COPIER_EVENT_DATA; }
        typedef const Eina_Slice * parameter_type;
    } const data_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    data_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(data_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    data_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(data_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_IO_COPIER_BETA
    static struct line_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_COPIER_EVENT_LINE; }
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
     ::efl::eolian::address_of_operator<Copier,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::io::Closer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Copier const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::io::Closer const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Copier> _get_wref() const { return ::efl::eo::wref<Copier>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Copier* operator->() const { return this; }
    Copier* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Copier const& lhs, Copier const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Copier const& lhs, Copier const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Copier) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Copier>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
