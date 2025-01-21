#ifndef EFL_CANVAS_GESTURE_CUSTOM_EO_HH
#define EFL_CANVAS_GESTURE_CUSTOM_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_gesture.eo.h"
#include "efl_canvas_gesture_custom.eo.h"
#include "efl_class.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_gesture.eo.hh"
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_CANVAS_GESTURE_CUSTOM_FWD_GUARD
#define EFL_CANVAS_GESTURE_CUSTOM_FWD_GUARD
namespace efl { namespace canvas { 
struct Gesture_Custom;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Custom> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Custom&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Custom const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Custom const&> : ::std::true_type {}; } }
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
struct Gesture_Custom {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type gesture_name_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_GESTURE_CUSTOM_PROTECTED
    ::efl::eolian::return_traits<void>::type gesture_name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type gesture_name) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_GESTURE_CUSTOM_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gesture_Custom *>(this))); }
    operator ::efl::canvas::Gesture_Custom() const;
    operator ::efl::canvas::Gesture_Custom&();
    operator ::efl::canvas::Gesture_Custom const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gesture_Custom,  ::efl::Object,  ::efl::canvas::Gesture> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gesture_Custom const ,  ::efl::Object const ,  ::efl::canvas::Gesture const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Gesture_Custom : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::canvas::Gesture)
{
    explicit Gesture_Custom( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Gesture_Custom(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Gesture_Custom() = default;
    Gesture_Custom(Gesture_Custom const&) = default;
    Gesture_Custom(Gesture_Custom&&) = default;
    Gesture_Custom& operator=(Gesture_Custom const&) = default;
    Gesture_Custom& operator=(Gesture_Custom&&) = default;
    template <typename Derived>
    Gesture_Custom(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Gesture_Custom, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Gesture_Custom( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Gesture_Custom( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Gesture_Custom( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Gesture_Custom >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Gesture_Custom(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Gesture_Custom >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type gesture_name_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_GESTURE_CUSTOM_PROTECTED
    ::efl::eolian::return_traits<void>::type gesture_name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type gesture_name) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_GESTURE_CUSTOM_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gesture_Custom *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gesture_Custom,  ::efl::Object,  ::efl::canvas::Gesture> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gesture_Custom const ,  ::efl::Object const ,  ::efl::canvas::Gesture const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Gesture_Custom> _get_wref() const { return ::efl::eo::wref<Gesture_Custom>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Gesture_Custom* operator->() const { return this; }
    Gesture_Custom* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Gesture_Custom const& lhs, Gesture_Custom const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Gesture_Custom const& lhs, Gesture_Custom const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Gesture_Custom) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Gesture_Custom>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
