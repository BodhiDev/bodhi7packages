#ifndef EFL_SPRING_INTERPOLATOR_EO_HH
#define EFL_SPRING_INTERPOLATOR_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_interpolator.eo.h"
#include "efl_object.eo.h"
#include "efl_spring_interpolator.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_interpolator.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_SPRING_INTERPOLATOR_FWD_GUARD
#define EFL_SPRING_INTERPOLATOR_FWD_GUARD
namespace efl { 
struct Spring_Interpolator;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Spring_Interpolator> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Spring_Interpolator&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Spring_Interpolator const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Spring_Interpolator const&> : ::std::true_type {}; } }
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
struct Spring_Interpolator {
    ::efl::eolian::return_traits<double>::type decay_get() const;
    ::efl::eolian::return_traits<void>::type decay_set( ::efl::eolian::in_traits<double>::type decay) const;
    ::efl::eolian::return_traits<int>::type oscillations_get() const;
    ::efl::eolian::return_traits<void>::type oscillations_set( ::efl::eolian::in_traits<int>::type oscillations) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_SPRING_INTERPOLATOR_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Spring_Interpolator *>(this))); }
    operator ::efl::Spring_Interpolator() const;
    operator ::efl::Spring_Interpolator&();
    operator ::efl::Spring_Interpolator const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Spring_Interpolator,  ::efl::Interpolator,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Spring_Interpolator const ,  ::efl::Interpolator const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Spring_Interpolator : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Interpolator)
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Spring_Interpolator( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Spring_Interpolator(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Spring_Interpolator() = default;
    Spring_Interpolator(Spring_Interpolator const&) = default;
    Spring_Interpolator(Spring_Interpolator&&) = default;
    Spring_Interpolator& operator=(Spring_Interpolator const&) = default;
    Spring_Interpolator& operator=(Spring_Interpolator&&) = default;
    template <typename Derived>
    Spring_Interpolator(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Spring_Interpolator, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Spring_Interpolator( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Spring_Interpolator( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Spring_Interpolator( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Spring_Interpolator >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Spring_Interpolator(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Spring_Interpolator >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    ::efl::eolian::return_traits<double>::type decay_get() const;
    ::efl::eolian::return_traits<void>::type decay_set( ::efl::eolian::in_traits<double>::type decay) const;
    ::efl::eolian::return_traits<int>::type oscillations_get() const;
    ::efl::eolian::return_traits<void>::type oscillations_set( ::efl::eolian::in_traits<int>::type oscillations) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_SPRING_INTERPOLATOR_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Spring_Interpolator *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Spring_Interpolator,  ::efl::Interpolator,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Spring_Interpolator const ,  ::efl::Interpolator const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Spring_Interpolator> _get_wref() const { return ::efl::eo::wref<Spring_Interpolator>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Spring_Interpolator* operator->() const { return this; }
    Spring_Interpolator* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Spring_Interpolator const& lhs, Spring_Interpolator const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Spring_Interpolator const& lhs, Spring_Interpolator const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Spring_Interpolator) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Spring_Interpolator>::value, "");
} 

#pragma GCC diagnostic pop

#endif
