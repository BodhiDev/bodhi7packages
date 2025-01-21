#ifndef EFL_CANVAS_GESTURE_MANAGER_EO_HH
#define EFL_CANVAS_GESTURE_MANAGER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_gesture_manager.eo.h"
#include "efl_canvas_gesture_recognizer.eo.h"
#include "efl_canvas_object.eo.h"
#include "efl_class.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_gesture_recognizer.eo.hh"
#include "efl_canvas_object.eo.hh"
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_CANVAS_GESTURE_MANAGER_FWD_GUARD
#define EFL_CANVAS_GESTURE_MANAGER_FWD_GUARD
namespace efl { namespace canvas { 
struct Gesture_Manager;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Manager> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Manager&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Manager const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Gesture_Manager const&> : ::std::true_type {}; } }
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
#ifndef EFL_CANVAS_OBJECT_FWD_GUARD
#define EFL_CANVAS_OBJECT_FWD_GUARD
namespace efl { namespace canvas { 
struct Object;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { 
struct Gesture_Manager {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type recognizer_register( ::efl::eolian::in_traits< ::efl::canvas::Gesture_Recognizer>::type recognizer) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type recognizer_unregister( ::efl::eolian::in_traits< ::efl::canvas::Gesture_Recognizer>::type recognizer) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type recognizer_cleanup( ::efl::eolian::in_traits< ::efl::canvas::Gesture_Recognizer>::type recognizer,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type target) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_GESTURE_MANAGER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gesture_Manager *>(this))); }
    operator ::efl::canvas::Gesture_Manager() const;
    operator ::efl::canvas::Gesture_Manager&();
    operator ::efl::canvas::Gesture_Manager const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gesture_Manager,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gesture_Manager const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Gesture_Manager : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Gesture_Manager( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Gesture_Manager(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Gesture_Manager() = default;
    Gesture_Manager(Gesture_Manager const&) = default;
    Gesture_Manager(Gesture_Manager&&) = default;
    Gesture_Manager& operator=(Gesture_Manager const&) = default;
    Gesture_Manager& operator=(Gesture_Manager&&) = default;
    template <typename Derived>
    Gesture_Manager(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Gesture_Manager, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Gesture_Manager( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Gesture_Manager( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Gesture_Manager( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Gesture_Manager >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Gesture_Manager(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Gesture_Manager >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type recognizer_register( ::efl::eolian::in_traits< ::efl::canvas::Gesture_Recognizer>::type recognizer) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type recognizer_unregister( ::efl::eolian::in_traits< ::efl::canvas::Gesture_Recognizer>::type recognizer) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type recognizer_cleanup( ::efl::eolian::in_traits< ::efl::canvas::Gesture_Recognizer>::type recognizer,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type target) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_GESTURE_MANAGER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gesture_Manager *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gesture_Manager,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gesture_Manager const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Gesture_Manager> _get_wref() const { return ::efl::eo::wref<Gesture_Manager>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Gesture_Manager* operator->() const { return this; }
    Gesture_Manager* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Gesture_Manager const& lhs, Gesture_Manager const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Gesture_Manager const& lhs, Gesture_Manager const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Gesture_Manager) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Gesture_Manager>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
