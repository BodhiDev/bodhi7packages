#ifndef EFL_CANVAS_GESTURE_TAP_EO_HH
#define EFL_CANVAS_GESTURE_TAP_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_gesture.eo.h"
#include "efl_canvas_gesture_tap.eo.h"
#include "efl_class.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_gesture.eo.hh"
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_CANVAS_GESTURE_TAP_FWD_GUARD
#define EFL_CANVAS_GESTURE_TAP_FWD_GUARD
namespace efl { namespace canvas { 
struct Gesture_Tap;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Tap> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Tap&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Tap const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Tap const&> : ::std::true_type {}; } }
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
#ifndef EFL_CANVAS_GESTURE_FWD_GUARD
#define EFL_CANVAS_GESTURE_FWD_GUARD
namespace efl { namespace canvas { 
struct Gesture;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { 
struct Gesture_Tap {
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_GESTURE_TAP_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gesture_Tap *>(this))); }
    operator ::efl::canvas::Gesture_Tap() const;
    operator ::efl::canvas::Gesture_Tap&();
    operator ::efl::canvas::Gesture_Tap const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gesture_Tap,  ::efl::Object,  ::efl::canvas::Gesture> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gesture_Tap const ,  ::efl::Object const ,  ::efl::canvas::Gesture const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Gesture_Tap : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::canvas::Gesture)
{
    explicit Gesture_Tap( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Gesture_Tap(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Gesture_Tap() = default;
    Gesture_Tap(Gesture_Tap const&) = default;
    Gesture_Tap(Gesture_Tap&&) = default;
    Gesture_Tap& operator=(Gesture_Tap const&) = default;
    Gesture_Tap& operator=(Gesture_Tap&&) = default;
    template <typename Derived>
    Gesture_Tap(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Gesture_Tap, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Gesture_Tap( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Gesture_Tap( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Gesture_Tap( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Gesture_Tap >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Gesture_Tap(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Gesture_Tap >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_GESTURE_TAP_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gesture_Tap *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gesture_Tap,  ::efl::Object,  ::efl::canvas::Gesture> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gesture_Tap const ,  ::efl::Object const ,  ::efl::canvas::Gesture const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Gesture_Tap> _get_wref() const { return ::efl::eo::wref<Gesture_Tap>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Gesture_Tap* operator->() const { return this; }
    Gesture_Tap* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Gesture_Tap const& lhs, Gesture_Tap const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Gesture_Tap const& lhs, Gesture_Tap const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Gesture_Tap) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Gesture_Tap>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
