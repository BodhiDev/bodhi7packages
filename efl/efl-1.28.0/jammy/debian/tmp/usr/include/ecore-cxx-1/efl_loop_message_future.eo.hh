#ifndef EFL_LOOP_MESSAGE_FUTURE_EO_HH
#define EFL_LOOP_MESSAGE_FUTURE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_loop_message.eo.h"
#include "efl_loop_message_future.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_loop_message.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_LOOP_MESSAGE_FUTURE_FWD_GUARD
#define EFL_LOOP_MESSAGE_FUTURE_FWD_GUARD
namespace efl { 
struct Loop_Message_Future;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Message_Future> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Message_Future&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Message_Future const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Message_Future const&> : ::std::true_type {}; } }
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
#ifndef EFL_LOOP_MESSAGE_FWD_GUARD
#define EFL_LOOP_MESSAGE_FWD_GUARD
namespace efl { 
struct Loop_Message;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Message> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Message&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Message const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Message const&> : ::std::true_type {}; } }
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
struct Loop_Message_Future {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void*>::type data_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type data_set( ::efl::eolian::in_traits<void*>::type data) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_LOOP_MESSAGE_FUTURE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Loop_Message_Future *>(this))); }
    operator ::efl::Loop_Message_Future() const;
    operator ::efl::Loop_Message_Future&();
    operator ::efl::Loop_Message_Future const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Loop_Message_Future,  ::efl::Loop_Message,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Loop_Message_Future const ,  ::efl::Loop_Message const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Loop_Message_Future : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Loop_Message)
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Loop_Message_Future( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Loop_Message_Future(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Loop_Message_Future() = default;
    Loop_Message_Future(Loop_Message_Future const&) = default;
    Loop_Message_Future(Loop_Message_Future&&) = default;
    Loop_Message_Future& operator=(Loop_Message_Future const&) = default;
    Loop_Message_Future& operator=(Loop_Message_Future&&) = default;
    template <typename Derived>
    Loop_Message_Future(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Loop_Message_Future, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Loop_Message_Future( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Loop_Message_Future( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Loop_Message_Future( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Loop_Message_Future >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Loop_Message_Future(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Loop_Message_Future >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void*>::type data_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type data_set( ::efl::eolian::in_traits<void*>::type data) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_LOOP_MESSAGE_FUTURE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Loop_Message_Future *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Loop_Message_Future,  ::efl::Loop_Message,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Loop_Message_Future const ,  ::efl::Loop_Message const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Loop_Message_Future> _get_wref() const { return ::efl::eo::wref<Loop_Message_Future>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Loop_Message_Future* operator->() const { return this; }
    Loop_Message_Future* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Loop_Message_Future const& lhs, Loop_Message_Future const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Loop_Message_Future const& lhs, Loop_Message_Future const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Loop_Message_Future) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Loop_Message_Future>::value, "");
} 

#pragma GCC diagnostic pop

#endif
