#ifndef EFL_IO_QUEUE_EO_HH
#define EFL_IO_QUEUE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_io_closer.eo.h"
#include "efl_io_queue.eo.h"
#include "efl_io_reader.eo.h"
#include "efl_io_writer.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_io_closer.eo.hh"
#include "efl_io_reader.eo.hh"
#include "efl_io_writer.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_IO_QUEUE_FWD_GUARD
#define EFL_IO_QUEUE_FWD_GUARD
namespace efl { namespace io { 
struct Queue;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Queue> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Queue&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Queue const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Queue const&> : ::std::true_type {}; } }
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
struct Queue {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type limit_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type limit_set( ::efl::eolian::in_traits< size_t>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< size_t>::type usage_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Slice>::type slice_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type preallocate( ::efl::eolian::in_traits< size_t>::type size) const;
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
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_QUEUE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Queue *>(this))); }
    operator ::efl::io::Queue() const;
    operator ::efl::io::Queue&();
    operator ::efl::io::Queue const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Queue,  ::efl::Object,  ::efl::io::Closer,  ::efl::io::Reader,  ::efl::io::Writer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Queue const ,  ::efl::Object const ,  ::efl::io::Closer const ,  ::efl::io::Reader const ,  ::efl::io::Writer const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace io { 
struct Queue : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::io::Closer)
    , EO_CXX_INHERIT(::efl::io::Reader)
    , EO_CXX_INHERIT(::efl::io::Writer)
{
    explicit Queue( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Queue(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Queue() = default;
    Queue(Queue const&) = default;
    Queue(Queue&&) = default;
    Queue& operator=(Queue const&) = default;
    Queue& operator=(Queue&&) = default;
    template <typename Derived>
    Queue(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Queue, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Queue( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Queue( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Queue( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Queue >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Queue(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Queue >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
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
    ::efl::eolian::return_traits< size_t>::type usage_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Slice>::type slice_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type preallocate( ::efl::eolian::in_traits< size_t>::type size) const;
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
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_QUEUE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Queue *>(this))); }
#ifdef EFL_IO_QUEUE_BETA
    static struct slice_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_IO_QUEUE_EVENT_SLICE_CHANGED; }
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
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Queue,  ::efl::Object,  ::efl::io::Closer,  ::efl::io::Reader,  ::efl::io::Writer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Queue const ,  ::efl::Object const ,  ::efl::io::Closer const ,  ::efl::io::Reader const ,  ::efl::io::Writer const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Queue> _get_wref() const { return ::efl::eo::wref<Queue>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Queue* operator->() const { return this; }
    Queue* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Queue const& lhs, Queue const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Queue const& lhs, Queue const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Queue) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Queue>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
