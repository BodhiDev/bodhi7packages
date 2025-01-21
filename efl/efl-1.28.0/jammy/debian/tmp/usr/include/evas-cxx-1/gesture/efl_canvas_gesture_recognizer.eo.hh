#ifndef EFL_CANVAS_GESTURE_RECOGNIZER_EO_HH
#define EFL_CANVAS_GESTURE_RECOGNIZER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_gesture.eo.h"
#include "efl_canvas_gesture_recognizer.eo.h"
#include "efl_canvas_gesture_touch.eo.h"
#include "efl_class.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_gesture.eo.hh"
#include "efl_canvas_gesture_touch.eo.hh"
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { 
struct Gesture_Recognizer {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::Class>::type type_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type continues_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type continues_set( ::efl::eolian::in_traits<bool>::type value) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Canvas_Gesture_Recognizer_Result>::type recognize( ::efl::eolian::in_traits< ::efl::canvas::Gesture>::type gesture,  ::efl::eolian::in_traits< ::efl::Object>::type watched,  ::efl::eolian::in_traits< ::efl::canvas::Gesture_Touch>::type event) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_GESTURE_RECOGNIZER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gesture_Recognizer *>(this))); }
    operator ::efl::canvas::Gesture_Recognizer() const;
    operator ::efl::canvas::Gesture_Recognizer&();
    operator ::efl::canvas::Gesture_Recognizer const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gesture_Recognizer,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gesture_Recognizer const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Gesture_Recognizer : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Gesture_Recognizer( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Gesture_Recognizer(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Gesture_Recognizer() = default;
    Gesture_Recognizer(Gesture_Recognizer const&) = default;
    Gesture_Recognizer(Gesture_Recognizer&&) = default;
    Gesture_Recognizer& operator=(Gesture_Recognizer const&) = default;
    Gesture_Recognizer& operator=(Gesture_Recognizer&&) = default;
    template <typename Derived>
    Gesture_Recognizer(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Gesture_Recognizer, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::Class>::type type_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type continues_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type continues_set( ::efl::eolian::in_traits<bool>::type value) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Canvas_Gesture_Recognizer_Result>::type recognize( ::efl::eolian::in_traits< ::efl::canvas::Gesture>::type gesture,  ::efl::eolian::in_traits< ::efl::Object>::type watched,  ::efl::eolian::in_traits< ::efl::canvas::Gesture_Touch>::type event) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_GESTURE_RECOGNIZER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gesture_Recognizer *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gesture_Recognizer,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gesture_Recognizer const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Gesture_Recognizer> _get_wref() const { return ::efl::eo::wref<Gesture_Recognizer>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Gesture_Recognizer* operator->() const { return this; }
    Gesture_Recognizer* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Gesture_Recognizer const& lhs, Gesture_Recognizer const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Gesture_Recognizer const& lhs, Gesture_Recognizer const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Gesture_Recognizer) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Gesture_Recognizer>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
