#ifndef EFL_LOOP_CONSUMER_EO_HH
#define EFL_LOOP_CONSUMER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_loop.eo.hh"
#include "efl_object.eo.hh"
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Loop_Consumer {
    ::efl::eolian::return_traits< ::efl::Loop>::type loop_get() const;
    ::efl::eolian::return_traits< ::std::unique_ptr<Eina_Promise, ::efl::eina::malloc_deleter>>::type promise_new() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_LOOP_CONSUMER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Loop_Consumer *>(this))); }
    operator ::efl::Loop_Consumer() const;
    operator ::efl::Loop_Consumer&();
    operator ::efl::Loop_Consumer const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Loop_Consumer,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Loop_Consumer const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Loop_Consumer : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Loop_Consumer( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Loop_Consumer(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Loop_Consumer() = default;
    Loop_Consumer(Loop_Consumer const&) = default;
    Loop_Consumer(Loop_Consumer&&) = default;
    Loop_Consumer& operator=(Loop_Consumer const&) = default;
    Loop_Consumer& operator=(Loop_Consumer&&) = default;
    template <typename Derived>
    Loop_Consumer(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Loop_Consumer, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits< ::efl::Loop>::type loop_get() const;
    ::efl::eolian::return_traits< ::std::unique_ptr<Eina_Promise, ::efl::eina::malloc_deleter>>::type promise_new() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_LOOP_CONSUMER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Loop_Consumer *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Loop_Consumer,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Loop_Consumer const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Loop_Consumer> _get_wref() const { return ::efl::eo::wref<Loop_Consumer>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Loop_Consumer* operator->() const { return this; }
    Loop_Consumer* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Loop_Consumer const& lhs, Loop_Consumer const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Loop_Consumer const& lhs, Loop_Consumer const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Loop_Consumer) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Loop_Consumer>::value, "");
} 

#pragma GCC diagnostic pop

#endif
