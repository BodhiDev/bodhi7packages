#ifndef EFL_DIVISOR_INTERPOLATOR_EO_HH
#define EFL_DIVISOR_INTERPOLATOR_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_divisor_interpolator.eo.h"
#include "efl_interpolator.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_interpolator.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_DIVISOR_INTERPOLATOR_FWD_GUARD
#define EFL_DIVISOR_INTERPOLATOR_FWD_GUARD
namespace efl { 
struct Divisor_Interpolator;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Divisor_Interpolator> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Divisor_Interpolator&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Divisor_Interpolator const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Divisor_Interpolator const&> : ::std::true_type {}; } }
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
#ifndef EFL_INTERPOLATOR_FWD_GUARD
#define EFL_INTERPOLATOR_FWD_GUARD
namespace efl { 
struct Interpolator;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Interpolator> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Interpolator&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Interpolator const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Interpolator const&> : ::std::true_type {}; } }
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
struct Divisor_Interpolator {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type divisor_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type divisor_set( ::efl::eolian::in_traits<double>::type divisor) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type power_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type power_set( ::efl::eolian::in_traits<int>::type power) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_DIVISOR_INTERPOLATOR_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Divisor_Interpolator *>(this))); }
    operator ::efl::Divisor_Interpolator() const;
    operator ::efl::Divisor_Interpolator&();
    operator ::efl::Divisor_Interpolator const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Divisor_Interpolator,  ::efl::Interpolator,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Divisor_Interpolator const ,  ::efl::Interpolator const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Divisor_Interpolator : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Interpolator)
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Divisor_Interpolator( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Divisor_Interpolator(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Divisor_Interpolator() = default;
    Divisor_Interpolator(Divisor_Interpolator const&) = default;
    Divisor_Interpolator(Divisor_Interpolator&&) = default;
    Divisor_Interpolator& operator=(Divisor_Interpolator const&) = default;
    Divisor_Interpolator& operator=(Divisor_Interpolator&&) = default;
    template <typename Derived>
    Divisor_Interpolator(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Divisor_Interpolator, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Divisor_Interpolator( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Divisor_Interpolator( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Divisor_Interpolator( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Divisor_Interpolator >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Divisor_Interpolator(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Divisor_Interpolator >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type divisor_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type divisor_set( ::efl::eolian::in_traits<double>::type divisor) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type power_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type power_set( ::efl::eolian::in_traits<int>::type power) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_DIVISOR_INTERPOLATOR_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Divisor_Interpolator *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Divisor_Interpolator,  ::efl::Interpolator,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Divisor_Interpolator const ,  ::efl::Interpolator const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Divisor_Interpolator> _get_wref() const { return ::efl::eo::wref<Divisor_Interpolator>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Divisor_Interpolator* operator->() const { return this; }
    Divisor_Interpolator* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Divisor_Interpolator const& lhs, Divisor_Interpolator const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Divisor_Interpolator const& lhs, Divisor_Interpolator const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Divisor_Interpolator) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Divisor_Interpolator>::value, "");
} 

#pragma GCC diagnostic pop

#endif
