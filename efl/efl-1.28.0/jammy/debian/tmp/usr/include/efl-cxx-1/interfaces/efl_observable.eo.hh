#ifndef EFL_OBSERVABLE_EO_HH
#define EFL_OBSERVABLE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_object.eo.h"
#include "efl_observable.eo.h"
#include "efl_observer.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#include "efl_observer.eo.hh"
#ifndef EFL_OBSERVABLE_FWD_GUARD
#define EFL_OBSERVABLE_FWD_GUARD
namespace efl { 
struct Observable;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Observable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Observable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Observable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Observable const&> : ::std::true_type {}; } }
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
#ifndef EFL_OBSERVER_FWD_GUARD
#define EFL_OBSERVER_FWD_GUARD
namespace efl { 
struct Observer;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Observer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Observer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Observer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Observer const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Observable {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type observer_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::Observer>::type obs) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type observer_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::Observer>::type obs) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type observer_clean( ::efl::eolian::in_traits< ::efl::Observer>::type obs) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::Observer>>::type observers_iterator_new( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type observers_update( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits<void*>::type data) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::iterator<Efl_Observable_Tuple>>::type iterator_tuple_new() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_OBSERVABLE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Observable *>(this))); }
    operator ::efl::Observable() const;
    operator ::efl::Observable&();
    operator ::efl::Observable const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Observable,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Observable const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Observable : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Observable( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Observable(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Observable() = default;
    Observable(Observable const&) = default;
    Observable(Observable&&) = default;
    Observable& operator=(Observable const&) = default;
    Observable& operator=(Observable&&) = default;
    template <typename Derived>
    Observable(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Observable, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Observable( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Observable( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Observable( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Observable >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Observable(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Observable >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type observer_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::Observer>::type obs) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type observer_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::Observer>::type obs) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type observer_clean( ::efl::eolian::in_traits< ::efl::Observer>::type obs) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::Observer>>::type observers_iterator_new( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type observers_update( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits<void*>::type data) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::iterator<Efl_Observable_Tuple>>::type iterator_tuple_new() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_OBSERVABLE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Observable *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Observable,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Observable const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Observable> _get_wref() const { return ::efl::eo::wref<Observable>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Observable* operator->() const { return this; }
    Observable* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Observable const& lhs, Observable const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Observable const& lhs, Observable const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Observable) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Observable>::value, "");
} 

#pragma GCC diagnostic pop

#endif
