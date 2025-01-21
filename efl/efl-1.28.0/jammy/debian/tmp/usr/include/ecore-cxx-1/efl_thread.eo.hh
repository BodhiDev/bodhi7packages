#ifndef EFL_THREAD_EO_HH
#define EFL_THREAD_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_core_command_line.eo.h"
#include "efl_io_closer.eo.h"
#include "efl_io_reader.eo.h"
#include "efl_io_writer.eo.h"
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_object.eo.h"
#include "efl_task.eo.h"
#include "efl_thread.eo.h"
#include "efl_threadio.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_core_command_line.eo.hh"
#include "efl_io_closer.eo.hh"
#include "efl_io_reader.eo.hh"
#include "efl_io_writer.eo.hh"
#include "efl_loop.eo.hh"
#include "efl_loop_consumer.eo.hh"
#include "efl_object.eo.hh"
#include "efl_task.eo.hh"
#include "efl_threadio.eo.hh"
#ifndef EFL_THREAD_FWD_GUARD
#define EFL_THREAD_FWD_GUARD
namespace efl { 
struct Thread;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Thread> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Thread&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Thread const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Thread const&> : ::std::true_type {}; } }
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
#ifndef EFL_CORE_COMMAND_LINE_FWD_GUARD
#define EFL_CORE_COMMAND_LINE_FWD_GUARD
namespace efl { namespace core { 
struct Command_Line;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Command_Line> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Command_Line&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Command_Line const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Command_Line const&> : ::std::true_type {}; } }
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
#ifndef EFL_TASK_FWD_GUARD
#define EFL_TASK_FWD_GUARD
namespace efl { 
struct Task;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Task> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Task&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Task const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Task const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_THREADIO_FWD_GUARD
#define EFL_THREADIO_FWD_GUARD
namespace efl { 
struct ThreadIO;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ThreadIO> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ThreadIO&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ThreadIO const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ThreadIO const&> : ::std::true_type {}; } }
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
namespace efl { 
struct Thread {
    static Efl_Class const* _eo_class()
    {
        return EFL_THREAD_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Thread *>(this))); }
    operator ::efl::Thread() const;
    operator ::efl::Thread&();
    operator ::efl::Thread const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Thread,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::Task,  ::efl::ThreadIO,  ::efl::core::Command_Line,  ::efl::io::Closer,  ::efl::io::Reader,  ::efl::io::Writer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Thread const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::Task const ,  ::efl::ThreadIO const ,  ::efl::core::Command_Line const ,  ::efl::io::Closer const ,  ::efl::io::Reader const ,  ::efl::io::Writer const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Thread : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::Task)
    , EO_CXX_INHERIT(::efl::ThreadIO)
    , EO_CXX_INHERIT(::efl::core::Command_Line)
    , EO_CXX_INHERIT(::efl::io::Closer)
    , EO_CXX_INHERIT(::efl::io::Reader)
    , EO_CXX_INHERIT(::efl::io::Writer)
{
    explicit Thread( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Thread(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Thread() = default;
    Thread(Thread const&) = default;
    Thread(Thread&&) = default;
    Thread& operator=(Thread const&) = default;
    Thread& operator=(Thread&&) = default;
    template <typename Derived>
    Thread(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Thread, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Thread( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Thread( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Thread( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Thread >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Thread(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Thread >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_THREAD_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Thread *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Thread,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::Task,  ::efl::ThreadIO,  ::efl::core::Command_Line,  ::efl::io::Closer,  ::efl::io::Reader,  ::efl::io::Writer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Thread const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::Task const ,  ::efl::ThreadIO const ,  ::efl::core::Command_Line const ,  ::efl::io::Closer const ,  ::efl::io::Reader const ,  ::efl::io::Writer const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Thread> _get_wref() const { return ::efl::eo::wref<Thread>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Thread* operator->() const { return this; }
    Thread* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Thread const& lhs, Thread const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Thread const& lhs, Thread const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Thread) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Thread>::value, "");
} 

#pragma GCC diagnostic pop

#endif
