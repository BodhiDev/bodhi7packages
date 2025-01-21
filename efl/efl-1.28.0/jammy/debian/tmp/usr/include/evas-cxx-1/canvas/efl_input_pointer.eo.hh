#ifndef EFL_INPUT_POINTER_EO_HH
#define EFL_INPUT_POINTER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_duplicate.eo.h"
#include "efl_input_device.eo.h"
#include "efl_input_event.eo.h"
#include "efl_input_pointer.eo.h"
#include "efl_input_state.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_duplicate.eo.hh"
#include "efl_input_device.eo.hh"
#include "efl_input_event.eo.hh"
#include "efl_input_state.eo.hh"
#include "efl_object.eo.hh"
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
#ifndef EFL_INPUT_DEVICE_FWD_GUARD
#define EFL_INPUT_DEVICE_FWD_GUARD
namespace efl { namespace input { 
struct Device;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_DUPLICATE_FWD_GUARD
#define EFL_DUPLICATE_FWD_GUARD
namespace efl { 
struct Duplicate;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Duplicate> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Duplicate&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Duplicate const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Duplicate const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_EVENT_FWD_GUARD
#define EFL_INPUT_EVENT_FWD_GUARD
namespace efl { namespace input { 
struct Event;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Event> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Event&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Event const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Event const&> : ::std::true_type {}; } }
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
#ifndef EFL_INPUT_STATE_FWD_GUARD
#define EFL_INPUT_STATE_FWD_GUARD
namespace efl { namespace input { 
struct State;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::State> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::State&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::State const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::State const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace input { 
struct Pointer {
    ::efl::eolian::return_traits<Efl_Pointer_Action>::type action_get() const;
    ::efl::eolian::return_traits<void>::type action_set( ::efl::eolian::in_traits<Efl_Pointer_Action>::type act) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type value_has_get( ::efl::eolian::in_traits<Efl_Input_Value>::type key) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type value_get( ::efl::eolian::in_traits<Efl_Input_Value>::type key) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type value_set( ::efl::eolian::in_traits<Efl_Input_Value>::type key,  ::efl::eolian::in_traits<double>::type val) const;
#endif
    ::efl::eolian::return_traits<int>::type button_get() const;
    ::efl::eolian::return_traits<void>::type button_set( ::efl::eolian::in_traits<int>::type but) const;
    ::efl::eolian::return_traits<bool>::type button_pressed_get( ::efl::eolian::in_traits<int>::type button) const;
    ::efl::eolian::return_traits<void>::type button_pressed_set( ::efl::eolian::in_traits<int>::type button,  ::efl::eolian::in_traits<bool>::type pressed) const;
    ::efl::eolian::return_traits<Eina_Position2D>::type position_get() const;
    ::efl::eolian::return_traits<void>::type position_set( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const;
    ::efl::eolian::return_traits<Eina_Vector2>::type precise_position_get() const;
    ::efl::eolian::return_traits<void>::type precise_position_set( ::efl::eolian::in_traits<Eina_Vector2>::type pos) const;
    ::efl::eolian::return_traits<Eina_Position2D>::type previous_position_get() const;
    ::efl::eolian::return_traits<void>::type previous_position_set( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const;
    ::efl::eolian::return_traits<int>::type touch_id_get() const;
    ::efl::eolian::return_traits<void>::type touch_id_set( ::efl::eolian::in_traits<int>::type id) const;
    ::efl::eolian::return_traits< ::efl::Object>::type source_get() const;
    ::efl::eolian::return_traits<void>::type source_set( ::efl::eolian::in_traits< ::efl::Object>::type src) const;
    ::efl::eolian::return_traits<Efl_Pointer_Flags>::type button_flags_get() const;
    ::efl::eolian::return_traits<void>::type button_flags_set( ::efl::eolian::in_traits<Efl_Pointer_Flags>::type flags) const;
    ::efl::eolian::return_traits<bool>::type double_click_get() const;
    ::efl::eolian::return_traits<void>::type double_click_set( ::efl::eolian::in_traits<bool>::type val) const;
    ::efl::eolian::return_traits<bool>::type triple_click_get() const;
    ::efl::eolian::return_traits<void>::type triple_click_set( ::efl::eolian::in_traits<bool>::type val) const;
    ::efl::eolian::return_traits<bool>::type wheel_horizontal_get() const;
    ::efl::eolian::return_traits<void>::type wheel_horizontal_set( ::efl::eolian::in_traits<bool>::type horizontal) const;
    ::efl::eolian::return_traits<int>::type wheel_delta_get() const;
    ::efl::eolian::return_traits<void>::type wheel_delta_set( ::efl::eolian::in_traits<int>::type dist) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_INPUT_POINTER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Pointer *>(this))); }
    operator ::efl::input::Pointer() const;
    operator ::efl::input::Pointer&();
    operator ::efl::input::Pointer const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Pointer,  ::efl::Duplicate,  ::efl::Object,  ::efl::input::Event,  ::efl::input::State> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Pointer const ,  ::efl::Duplicate const ,  ::efl::Object const ,  ::efl::input::Event const ,  ::efl::input::State const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace input { 
struct Pointer : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Duplicate)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::input::Event)
    , EO_CXX_INHERIT(::efl::input::State)
{
    explicit Pointer( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Pointer(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Pointer() = default;
    Pointer(Pointer const&) = default;
    Pointer(Pointer&&) = default;
    Pointer& operator=(Pointer const&) = default;
    Pointer& operator=(Pointer&&) = default;
    template <typename Derived>
    Pointer(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Pointer, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Pointer( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Pointer( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Pointer( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Pointer >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Pointer(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Pointer >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    ::efl::eolian::return_traits<Efl_Pointer_Action>::type action_get() const;
    ::efl::eolian::return_traits<void>::type action_set( ::efl::eolian::in_traits<Efl_Pointer_Action>::type act) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type value_has_get( ::efl::eolian::in_traits<Efl_Input_Value>::type key) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type value_get( ::efl::eolian::in_traits<Efl_Input_Value>::type key) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type value_set( ::efl::eolian::in_traits<Efl_Input_Value>::type key,  ::efl::eolian::in_traits<double>::type val) const;
#endif
    ::efl::eolian::return_traits<int>::type button_get() const;
    ::efl::eolian::return_traits<void>::type button_set( ::efl::eolian::in_traits<int>::type but) const;
    ::efl::eolian::return_traits<bool>::type button_pressed_get( ::efl::eolian::in_traits<int>::type button) const;
    ::efl::eolian::return_traits<void>::type button_pressed_set( ::efl::eolian::in_traits<int>::type button,  ::efl::eolian::in_traits<bool>::type pressed) const;
    ::efl::eolian::return_traits<Eina_Position2D>::type position_get() const;
    ::efl::eolian::return_traits<void>::type position_set( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const;
    ::efl::eolian::return_traits<Eina_Vector2>::type precise_position_get() const;
    ::efl::eolian::return_traits<void>::type precise_position_set( ::efl::eolian::in_traits<Eina_Vector2>::type pos) const;
    ::efl::eolian::return_traits<Eina_Position2D>::type previous_position_get() const;
    ::efl::eolian::return_traits<void>::type previous_position_set( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const;
    ::efl::eolian::return_traits<int>::type touch_id_get() const;
    ::efl::eolian::return_traits<void>::type touch_id_set( ::efl::eolian::in_traits<int>::type id) const;
    ::efl::eolian::return_traits< ::efl::Object>::type source_get() const;
    ::efl::eolian::return_traits<void>::type source_set( ::efl::eolian::in_traits< ::efl::Object>::type src) const;
    ::efl::eolian::return_traits<Efl_Pointer_Flags>::type button_flags_get() const;
    ::efl::eolian::return_traits<void>::type button_flags_set( ::efl::eolian::in_traits<Efl_Pointer_Flags>::type flags) const;
    ::efl::eolian::return_traits<bool>::type double_click_get() const;
    ::efl::eolian::return_traits<void>::type double_click_set( ::efl::eolian::in_traits<bool>::type val) const;
    ::efl::eolian::return_traits<bool>::type triple_click_get() const;
    ::efl::eolian::return_traits<void>::type triple_click_set( ::efl::eolian::in_traits<bool>::type val) const;
    ::efl::eolian::return_traits<bool>::type wheel_horizontal_get() const;
    ::efl::eolian::return_traits<void>::type wheel_horizontal_set( ::efl::eolian::in_traits<bool>::type horizontal) const;
    ::efl::eolian::return_traits<int>::type wheel_delta_get() const;
    ::efl::eolian::return_traits<void>::type wheel_delta_set( ::efl::eolian::in_traits<int>::type dist) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_INPUT_POINTER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Pointer *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Pointer,  ::efl::Duplicate,  ::efl::Object,  ::efl::input::Event,  ::efl::input::State> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Pointer const ,  ::efl::Duplicate const ,  ::efl::Object const ,  ::efl::input::Event const ,  ::efl::input::State const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Pointer> _get_wref() const { return ::efl::eo::wref<Pointer>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Pointer* operator->() const { return this; }
    Pointer* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Pointer const& lhs, Pointer const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Pointer const& lhs, Pointer const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Pointer) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Pointer>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
