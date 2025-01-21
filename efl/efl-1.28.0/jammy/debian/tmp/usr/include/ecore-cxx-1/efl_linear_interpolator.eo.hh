#ifndef EFL_LINEAR_INTERPOLATOR_EO_HH
#define EFL_LINEAR_INTERPOLATOR_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_interpolator.eo.h"
#include "efl_linear_interpolator.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_interpolator.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_LINEAR_INTERPOLATOR_FWD_GUARD
#define EFL_LINEAR_INTERPOLATOR_FWD_GUARD
namespace efl { 
struct Linear_Interpolator;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Linear_Interpolator> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Linear_Interpolator&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Linear_Interpolator const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Linear_Interpolator const&> : ::std::true_type {}; } }
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
struct Linear_Interpolator {
    static Efl_Class const* _eo_class()
    {
        return EFL_LINEAR_INTERPOLATOR_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Linear_Interpolator *>(this))); }
    operator ::efl::Linear_Interpolator() const;
    operator ::efl::Linear_Interpolator&();
    operator ::efl::Linear_Interpolator const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Linear_Interpolator,  ::efl::Interpolator,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Linear_Interpolator const ,  ::efl::Interpolator const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Linear_Interpolator : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Interpolator)
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Linear_Interpolator( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Linear_Interpolator(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Linear_Interpolator() = default;
    Linear_Interpolator(Linear_Interpolator const&) = default;
    Linear_Interpolator(Linear_Interpolator&&) = default;
    Linear_Interpolator& operator=(Linear_Interpolator const&) = default;
    Linear_Interpolator& operator=(Linear_Interpolator&&) = default;
    template <typename Derived>
    Linear_Interpolator(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Linear_Interpolator, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Linear_Interpolator( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Linear_Interpolator( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Linear_Interpolator( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Linear_Interpolator >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Linear_Interpolator(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Linear_Interpolator >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_LINEAR_INTERPOLATOR_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Linear_Interpolator *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Linear_Interpolator,  ::efl::Interpolator,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Linear_Interpolator const ,  ::efl::Interpolator const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Linear_Interpolator> _get_wref() const { return ::efl::eo::wref<Linear_Interpolator>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Linear_Interpolator* operator->() const { return this; }
    Linear_Interpolator* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Linear_Interpolator const& lhs, Linear_Interpolator const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Linear_Interpolator const& lhs, Linear_Interpolator const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Linear_Interpolator) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Linear_Interpolator>::value, "");
} 

#pragma GCC diagnostic pop

#endif
