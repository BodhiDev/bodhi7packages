#ifndef EFL_CUBIC_BEZIER_INTERPOLATOR_EO_HH
#define EFL_CUBIC_BEZIER_INTERPOLATOR_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_cubic_bezier_interpolator.eo.h"
#include "efl_interpolator.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_interpolator.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_CUBIC_BEZIER_INTERPOLATOR_FWD_GUARD
#define EFL_CUBIC_BEZIER_INTERPOLATOR_FWD_GUARD
namespace efl { 
struct Cubic_Bezier_Interpolator;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Cubic_Bezier_Interpolator> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Cubic_Bezier_Interpolator&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Cubic_Bezier_Interpolator const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Cubic_Bezier_Interpolator const&> : ::std::true_type {}; } }
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
struct Cubic_Bezier_Interpolator {
    ::efl::eolian::return_traits<void>::type control_points_get( ::efl::eolian::out_traits<Eina_Vector2>::type p1,  ::efl::eolian::out_traits<Eina_Vector2>::type p2) const;
    ::efl::eolian::return_traits<void>::type control_points_set( ::efl::eolian::in_traits<Eina_Vector2>::type p1,  ::efl::eolian::in_traits<Eina_Vector2>::type p2) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_CUBIC_BEZIER_INTERPOLATOR_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Cubic_Bezier_Interpolator *>(this))); }
    operator ::efl::Cubic_Bezier_Interpolator() const;
    operator ::efl::Cubic_Bezier_Interpolator&();
    operator ::efl::Cubic_Bezier_Interpolator const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Cubic_Bezier_Interpolator,  ::efl::Interpolator,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Cubic_Bezier_Interpolator const ,  ::efl::Interpolator const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Cubic_Bezier_Interpolator : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Interpolator)
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Cubic_Bezier_Interpolator( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Cubic_Bezier_Interpolator(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Cubic_Bezier_Interpolator() = default;
    Cubic_Bezier_Interpolator(Cubic_Bezier_Interpolator const&) = default;
    Cubic_Bezier_Interpolator(Cubic_Bezier_Interpolator&&) = default;
    Cubic_Bezier_Interpolator& operator=(Cubic_Bezier_Interpolator const&) = default;
    Cubic_Bezier_Interpolator& operator=(Cubic_Bezier_Interpolator&&) = default;
    template <typename Derived>
    Cubic_Bezier_Interpolator(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Cubic_Bezier_Interpolator, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Cubic_Bezier_Interpolator( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Cubic_Bezier_Interpolator( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Cubic_Bezier_Interpolator( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Cubic_Bezier_Interpolator >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Cubic_Bezier_Interpolator(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Cubic_Bezier_Interpolator >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    ::efl::eolian::return_traits<void>::type control_points_get( ::efl::eolian::out_traits<Eina_Vector2>::type p1,  ::efl::eolian::out_traits<Eina_Vector2>::type p2) const;
    ::efl::eolian::return_traits<void>::type control_points_set( ::efl::eolian::in_traits<Eina_Vector2>::type p1,  ::efl::eolian::in_traits<Eina_Vector2>::type p2) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_CUBIC_BEZIER_INTERPOLATOR_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Cubic_Bezier_Interpolator *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Cubic_Bezier_Interpolator,  ::efl::Interpolator,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Cubic_Bezier_Interpolator const ,  ::efl::Interpolator const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Cubic_Bezier_Interpolator> _get_wref() const { return ::efl::eo::wref<Cubic_Bezier_Interpolator>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Cubic_Bezier_Interpolator* operator->() const { return this; }
    Cubic_Bezier_Interpolator* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Cubic_Bezier_Interpolator const& lhs, Cubic_Bezier_Interpolator const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Cubic_Bezier_Interpolator const& lhs, Cubic_Bezier_Interpolator const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Cubic_Bezier_Interpolator) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Cubic_Bezier_Interpolator>::value, "");
} 

#pragma GCC diagnostic pop

#endif
