#ifndef EFL_CANVAS_GESTURE_EO_HH
#define EFL_CANVAS_GESTURE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_gesture.eo.h"
#include "efl_class.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { 
struct Gesture {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Canvas_Gesture_State>::type state_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type state_set( ::efl::eolian::in_traits<Efl_Canvas_Gesture_State>::type state) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Position2D>::type hotspot_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type hotspot_set( ::efl::eolian::in_traits<Eina_Position2D>::type hotspot) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< unsigned int>::type timestamp_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type timestamp_set( ::efl::eolian::in_traits< unsigned int>::type timestamp) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< unsigned int>::type touch_count_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_GESTURE_PROTECTED
    ::efl::eolian::return_traits<void>::type touch_count_set( ::efl::eolian::in_traits< unsigned int>::type touch_count) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_GESTURE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gesture *>(this))); }
    operator ::efl::canvas::Gesture() const;
    operator ::efl::canvas::Gesture&();
    operator ::efl::canvas::Gesture const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gesture,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gesture const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Gesture : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Gesture( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Gesture(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Gesture() = default;
    Gesture(Gesture const&) = default;
    Gesture(Gesture&&) = default;
    Gesture& operator=(Gesture const&) = default;
    Gesture& operator=(Gesture&&) = default;
    template <typename Derived>
    Gesture(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Gesture, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Canvas_Gesture_State>::type state_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type state_set( ::efl::eolian::in_traits<Efl_Canvas_Gesture_State>::type state) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Position2D>::type hotspot_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type hotspot_set( ::efl::eolian::in_traits<Eina_Position2D>::type hotspot) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< unsigned int>::type timestamp_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type timestamp_set( ::efl::eolian::in_traits< unsigned int>::type timestamp) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< unsigned int>::type touch_count_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_GESTURE_PROTECTED
    ::efl::eolian::return_traits<void>::type touch_count_set( ::efl::eolian::in_traits< unsigned int>::type touch_count) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_GESTURE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gesture *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gesture,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gesture const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Gesture> _get_wref() const { return ::efl::eo::wref<Gesture>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Gesture* operator->() const { return this; }
    Gesture* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Gesture const& lhs, Gesture const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Gesture const& lhs, Gesture const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Gesture) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Gesture>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
