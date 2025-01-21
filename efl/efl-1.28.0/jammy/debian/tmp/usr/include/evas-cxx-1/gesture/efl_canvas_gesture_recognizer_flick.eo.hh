#ifndef EFL_CANVAS_GESTURE_RECOGNIZER_FLICK_EO_HH
#define EFL_CANVAS_GESTURE_RECOGNIZER_FLICK_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_gesture.eo.h"
#include "efl_canvas_gesture_recognizer.eo.h"
#include "efl_canvas_gesture_recognizer_flick.eo.h"
#include "efl_canvas_gesture_touch.eo.h"
#include "efl_class.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_gesture.eo.hh"
#include "efl_canvas_gesture_recognizer.eo.hh"
#include "efl_canvas_gesture_touch.eo.hh"
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_CANVAS_GESTURE_RECOGNIZER_FLICK_FWD_GUARD
#define EFL_CANVAS_GESTURE_RECOGNIZER_FLICK_FWD_GUARD
namespace efl { namespace canvas { 
struct Gesture_Recognizer_Flick;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Recognizer_Flick> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Recognizer_Flick&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Recognizer_Flick const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Recognizer_Flick const&> : ::std::true_type {}; } }
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
#ifndef EFL_CANVAS_GESTURE_TOUCH_FWD_GUARD
#define EFL_CANVAS_GESTURE_TOUCH_FWD_GUARD
namespace efl { namespace canvas { 
struct Gesture_Touch;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Touch> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Touch&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Touch const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Touch const&> : ::std::true_type {}; } }
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
#ifndef EFL_CANVAS_GESTURE_RECOGNIZER_FWD_GUARD
#define EFL_CANVAS_GESTURE_RECOGNIZER_FWD_GUARD
namespace efl { namespace canvas { 
struct Gesture_Recognizer;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Recognizer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Recognizer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Recognizer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Recognizer const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { 
struct Gesture_Recognizer_Flick {
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_GESTURE_RECOGNIZER_FLICK_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gesture_Recognizer_Flick *>(this))); }
    operator ::efl::canvas::Gesture_Recognizer_Flick() const;
    operator ::efl::canvas::Gesture_Recognizer_Flick&();
    operator ::efl::canvas::Gesture_Recognizer_Flick const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gesture_Recognizer_Flick,  ::efl::Object,  ::efl::canvas::Gesture_Recognizer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gesture_Recognizer_Flick const ,  ::efl::Object const ,  ::efl::canvas::Gesture_Recognizer const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Gesture_Recognizer_Flick : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::canvas::Gesture_Recognizer)
{
    explicit Gesture_Recognizer_Flick( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Gesture_Recognizer_Flick(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Gesture_Recognizer_Flick() = default;
    Gesture_Recognizer_Flick(Gesture_Recognizer_Flick const&) = default;
    Gesture_Recognizer_Flick(Gesture_Recognizer_Flick&&) = default;
    Gesture_Recognizer_Flick& operator=(Gesture_Recognizer_Flick const&) = default;
    Gesture_Recognizer_Flick& operator=(Gesture_Recognizer_Flick&&) = default;
    template <typename Derived>
    Gesture_Recognizer_Flick(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Gesture_Recognizer_Flick, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Gesture_Recognizer_Flick( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Gesture_Recognizer_Flick( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Gesture_Recognizer_Flick( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Gesture_Recognizer_Flick >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Gesture_Recognizer_Flick(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Gesture_Recognizer_Flick >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_GESTURE_RECOGNIZER_FLICK_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gesture_Recognizer_Flick *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gesture_Recognizer_Flick,  ::efl::Object,  ::efl::canvas::Gesture_Recognizer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gesture_Recognizer_Flick const ,  ::efl::Object const ,  ::efl::canvas::Gesture_Recognizer const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Gesture_Recognizer_Flick> _get_wref() const { return ::efl::eo::wref<Gesture_Recognizer_Flick>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Gesture_Recognizer_Flick* operator->() const { return this; }
    Gesture_Recognizer_Flick* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Gesture_Recognizer_Flick const& lhs, Gesture_Recognizer_Flick const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Gesture_Recognizer_Flick const& lhs, Gesture_Recognizer_Flick const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Gesture_Recognizer_Flick) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Gesture_Recognizer_Flick>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
