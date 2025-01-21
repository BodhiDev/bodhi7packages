#ifndef EFL_CANVAS_GESTURE_ROTATE_EO_HH
#define EFL_CANVAS_GESTURE_ROTATE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_gesture.eo.h"
#include "efl_canvas_gesture_rotate.eo.h"
#include "efl_class.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_gesture.eo.hh"
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_CANVAS_GESTURE_ROTATE_FWD_GUARD
#define EFL_CANVAS_GESTURE_ROTATE_FWD_GUARD
namespace efl { namespace canvas { 
struct Gesture_Rotate;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Rotate> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Rotate&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Rotate const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Rotate const&> : ::std::true_type {}; } }
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
struct Gesture_Rotate {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< unsigned int>::type radius_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type angle_get() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_GESTURE_ROTATE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gesture_Rotate *>(this))); }
    operator ::efl::canvas::Gesture_Rotate() const;
    operator ::efl::canvas::Gesture_Rotate&();
    operator ::efl::canvas::Gesture_Rotate const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gesture_Rotate,  ::efl::Object,  ::efl::canvas::Gesture> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gesture_Rotate const ,  ::efl::Object const ,  ::efl::canvas::Gesture const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Gesture_Rotate : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::canvas::Gesture)
{
    explicit Gesture_Rotate( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Gesture_Rotate(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Gesture_Rotate() = default;
    Gesture_Rotate(Gesture_Rotate const&) = default;
    Gesture_Rotate(Gesture_Rotate&&) = default;
    Gesture_Rotate& operator=(Gesture_Rotate const&) = default;
    Gesture_Rotate& operator=(Gesture_Rotate&&) = default;
    template <typename Derived>
    Gesture_Rotate(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Gesture_Rotate, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Gesture_Rotate( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Gesture_Rotate( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Gesture_Rotate( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Gesture_Rotate >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Gesture_Rotate(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Gesture_Rotate >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< unsigned int>::type radius_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type angle_get() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_GESTURE_ROTATE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gesture_Rotate *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gesture_Rotate,  ::efl::Object,  ::efl::canvas::Gesture> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gesture_Rotate const ,  ::efl::Object const ,  ::efl::canvas::Gesture const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Gesture_Rotate> _get_wref() const { return ::efl::eo::wref<Gesture_Rotate>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Gesture_Rotate* operator->() const { return this; }
    Gesture_Rotate* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Gesture_Rotate const& lhs, Gesture_Rotate const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Gesture_Rotate const& lhs, Gesture_Rotate const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Gesture_Rotate) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Gesture_Rotate>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
