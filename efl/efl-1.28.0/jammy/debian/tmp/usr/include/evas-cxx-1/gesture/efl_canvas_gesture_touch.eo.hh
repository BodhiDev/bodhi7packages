#ifndef EFL_CANVAS_GESTURE_TOUCH_EO_HH
#define EFL_CANVAS_GESTURE_TOUCH_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_gesture_touch.eo.h"
#include "efl_class.eo.h"
#include "efl_input_pointer.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_input_pointer.eo.hh"
#include "efl_object.eo.hh"
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
#ifndef EFL_INPUT_POINTER_FWD_GUARD
#define EFL_INPUT_POINTER_FWD_GUARD
namespace efl { namespace input { 
struct Pointer;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Pointer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Pointer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Pointer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Pointer const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { 
struct Gesture_Touch {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Position2D>::type start_point_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Position2D>::type current_point_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< unsigned int>::type current_timestamp_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< unsigned int>::type touch_points_count_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Canvas_Gesture_Touch_State>::type state_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<const Efl_Gesture_Touch_Point_Data *>::type current_data_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<const Efl_Gesture_Touch_Point_Data *>::type previous_data_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type point_record( ::efl::eolian::in_traits< ::efl::input::Pointer>::type event) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Vector2>::type delta( ::efl::eolian::in_traits<int>::type tool) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Vector2>::type distance( ::efl::eolian::in_traits<int>::type tool) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<const Efl_Gesture_Touch_Point_Data *>::type data_get( ::efl::eolian::in_traits< unsigned int>::type id) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_GESTURE_TOUCH_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gesture_Touch *>(this))); }
    operator ::efl::canvas::Gesture_Touch() const;
    operator ::efl::canvas::Gesture_Touch&();
    operator ::efl::canvas::Gesture_Touch const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gesture_Touch,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gesture_Touch const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Gesture_Touch : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Gesture_Touch( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Gesture_Touch(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Gesture_Touch() = default;
    Gesture_Touch(Gesture_Touch const&) = default;
    Gesture_Touch(Gesture_Touch&&) = default;
    Gesture_Touch& operator=(Gesture_Touch const&) = default;
    Gesture_Touch& operator=(Gesture_Touch&&) = default;
    template <typename Derived>
    Gesture_Touch(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Gesture_Touch, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Gesture_Touch( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Gesture_Touch( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Gesture_Touch( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Gesture_Touch >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Gesture_Touch(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Gesture_Touch >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Position2D>::type start_point_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Position2D>::type current_point_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< unsigned int>::type current_timestamp_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< unsigned int>::type touch_points_count_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Canvas_Gesture_Touch_State>::type state_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<const Efl_Gesture_Touch_Point_Data *>::type current_data_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<const Efl_Gesture_Touch_Point_Data *>::type previous_data_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type point_record( ::efl::eolian::in_traits< ::efl::input::Pointer>::type event) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Vector2>::type delta( ::efl::eolian::in_traits<int>::type tool) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Vector2>::type distance( ::efl::eolian::in_traits<int>::type tool) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<const Efl_Gesture_Touch_Point_Data *>::type data_get( ::efl::eolian::in_traits< unsigned int>::type id) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_GESTURE_TOUCH_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gesture_Touch *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gesture_Touch,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gesture_Touch const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Gesture_Touch> _get_wref() const { return ::efl::eo::wref<Gesture_Touch>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Gesture_Touch* operator->() const { return this; }
    Gesture_Touch* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Gesture_Touch const& lhs, Gesture_Touch const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Gesture_Touch const& lhs, Gesture_Touch const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Gesture_Touch) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Gesture_Touch>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
