#ifndef EFL_CANVAS_OBJECT_EO_HH
#define EFL_CANVAS_OBJECT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_animation.eo.h"
#include "efl_canvas_object.eo.h"
#include "efl_canvas_object_animation.eo.h"
#include "efl_canvas_pointer.eo.h"
#include "efl_class.eo.h"
#include "efl_gfx_color.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_gfx_hint.eo.h"
#include "efl_gfx_mapping.eo.h"
#include "efl_gfx_stack.eo.h"
#include "efl_input_device.eo.h"
#include "efl_input_focus.eo.h"
#include "efl_input_hold.eo.h"
#include "efl_input_interface.eo.h"
#include "efl_input_key.eo.h"
#include "efl_input_pointer.eo.h"
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_animation.eo.hh"
#include "efl_canvas_object_animation.eo.hh"
#include "efl_canvas_pointer.eo.hh"
#include "efl_class.eo.hh"
#include "efl_gfx_color.eo.hh"
#include "efl_gfx_entity.eo.hh"
#include "efl_gfx_hint.eo.hh"
#include "efl_gfx_mapping.eo.hh"
#include "efl_gfx_stack.eo.hh"
#include "efl_input_device.eo.hh"
#include "efl_input_focus.eo.hh"
#include "efl_input_hold.eo.hh"
#include "efl_input_interface.eo.hh"
#include "efl_input_key.eo.hh"
#include "efl_input_pointer.eo.hh"
#include "efl_loop.eo.hh"
#include "efl_loop_consumer.eo.hh"
#include "efl_object.eo.hh"
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
#ifndef EFL_CANVAS_ANIMATION_FWD_GUARD
#define EFL_CANVAS_ANIMATION_FWD_GUARD
namespace efl { namespace canvas { 
struct Animation;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Animation> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Animation&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Animation const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Animation const&> : ::std::true_type {}; } }
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
#ifndef EFL_CANVAS_OBJECT_ANIMATION_FWD_GUARD
#define EFL_CANVAS_OBJECT_ANIMATION_FWD_GUARD
namespace efl { namespace canvas { 
struct Object_Animation;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object_Animation> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object_Animation&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object_Animation const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object_Animation const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_POINTER_FWD_GUARD
#define EFL_CANVAS_POINTER_FWD_GUARD
namespace efl { namespace canvas { 
struct Pointer;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Pointer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Pointer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Pointer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Pointer const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_COLOR_FWD_GUARD
#define EFL_GFX_COLOR_FWD_GUARD
namespace efl { namespace gfx { 
struct Color;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color const&> : ::std::true_type {}; } }
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
#ifndef EFL_GFX_ENTITY_FWD_GUARD
#define EFL_GFX_ENTITY_FWD_GUARD
namespace efl { namespace gfx { 
struct Entity;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_HINT_FWD_GUARD
#define EFL_GFX_HINT_FWD_GUARD
namespace efl { namespace gfx { 
struct Hint;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Hint> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Hint&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Hint const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Hint const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_MAPPING_FWD_GUARD
#define EFL_GFX_MAPPING_FWD_GUARD
namespace efl { namespace gfx { 
struct Mapping;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Mapping> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Mapping&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Mapping const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Mapping const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_FOCUS_FWD_GUARD
#define EFL_INPUT_FOCUS_FWD_GUARD
namespace efl { namespace input { 
struct Focus;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Focus> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Focus&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Focus const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Focus const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_HOLD_FWD_GUARD
#define EFL_INPUT_HOLD_FWD_GUARD
namespace efl { namespace input { 
struct Hold;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Hold> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Hold&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Hold const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Hold const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_INTERFACE_FWD_GUARD
#define EFL_INPUT_INTERFACE_FWD_GUARD
namespace efl { namespace input { 
struct Interface;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Interface> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Interface&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Interface const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Interface const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_KEY_FWD_GUARD
#define EFL_INPUT_KEY_FWD_GUARD
namespace efl { namespace input { 
struct Key;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Key> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Key&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Key const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Key const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_LOOP_FWD_GUARD
#define EFL_LOOP_FWD_GUARD
namespace efl { 
struct Loop;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_LOOP_CONSUMER_FWD_GUARD
#define EFL_LOOP_CONSUMER_FWD_GUARD
namespace efl { 
struct Loop_Consumer;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer const&> : ::std::true_type {}; } }
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
#ifndef EFL_GFX_STACK_FWD_GUARD
#define EFL_GFX_STACK_FWD_GUARD
namespace efl { namespace gfx { 
struct Stack;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { 
struct Object {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Input_Object_Pointer_Mode>::type pointer_mode_by_device_get( ::efl::eolian::in_traits< ::efl::input::Device>::type dev) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type pointer_mode_by_device_set( ::efl::eolian::in_traits< ::efl::input::Device>::type dev,  ::efl::eolian::in_traits<Efl_Input_Object_Pointer_Mode>::type pointer_mode) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Input_Object_Pointer_Mode>::type pointer_mode_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type pointer_mode_set( ::efl::eolian::in_traits<Efl_Input_Object_Pointer_Mode>::type pointer_mode) const;
#endif
    ::efl::eolian::return_traits<Efl_Gfx_Render_Op>::type render_op_get() const;
    ::efl::eolian::return_traits<void>::type render_op_set( ::efl::eolian::in_traits<Efl_Gfx_Render_Op>::type render_op) const;
    ::efl::eolian::return_traits< ::efl::canvas::Object>::type clipper_get() const;
    ::efl::eolian::return_traits<void>::type clipper_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type clipper) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type has_fixed_size_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type has_fixed_size_set( ::efl::eolian::in_traits<bool>::type enable) const;
#endif
    ::efl::eolian::return_traits<bool>::type repeat_events_get() const;
    ::efl::eolian::return_traits<void>::type repeat_events_set( ::efl::eolian::in_traits<bool>::type repeat) const;
    ::efl::eolian::return_traits<bool>::type key_focus_get() const;
    ::efl::eolian::return_traits<void>::type key_focus_set( ::efl::eolian::in_traits<bool>::type focus) const;
    ::efl::eolian::return_traits<bool>::type seat_focus_get() const;
    ::efl::eolian::return_traits<bool>::type precise_is_inside_get() const;
    ::efl::eolian::return_traits<void>::type precise_is_inside_set( ::efl::eolian::in_traits<bool>::type precise) const;
    ::efl::eolian::return_traits<bool>::type propagate_events_get() const;
    ::efl::eolian::return_traits<void>::type propagate_events_set( ::efl::eolian::in_traits<bool>::type propagate) const;
    ::efl::eolian::return_traits<bool>::type pass_events_get() const;
    ::efl::eolian::return_traits<void>::type pass_events_set( ::efl::eolian::in_traits<bool>::type pass) const;
    ::efl::eolian::return_traits<bool>::type anti_alias_get() const;
    ::efl::eolian::return_traits<void>::type anti_alias_set( ::efl::eolian::in_traits<bool>::type anti_alias) const;
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::canvas::Object>>::type clipped_objects_get() const;
#ifdef EFL_CANVAS_OBJECT_PROTECTED
    ::efl::eolian::return_traits< ::efl::canvas::Object>::type render_parent_get() const;
#endif
    ::efl::eolian::return_traits<Efl_Text_Bidirectional_Type>::type paragraph_direction_get() const;
    ::efl::eolian::return_traits<void>::type paragraph_direction_set( ::efl::eolian::in_traits<Efl_Text_Bidirectional_Type>::type dir) const;
    ::efl::eolian::return_traits<bool>::type no_render_get() const;
    ::efl::eolian::return_traits<void>::type no_render_set( ::efl::eolian::in_traits<bool>::type enable) const;
    ::efl::eolian::return_traits<bool>::type coords_inside_get( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type seat_focus_check( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type seat_focus_add( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type seat_focus_del( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const;
#endif
    ::efl::eolian::return_traits< unsigned int>::type clipped_objects_count() const;
    ::efl::eolian::return_traits<bool>::type key_grab( ::efl::eolian::in_traits< ::efl::eina::string_view>::type keyname,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type modifiers,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type not_modifiers,  ::efl::eolian::in_traits<bool>::type exclusive) const;
    ::efl::eolian::return_traits<void>::type key_ungrab( ::efl::eolian::in_traits< ::efl::eina::string_view>::type keyname,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type modifiers,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type not_modifiers) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_OBJECT_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Object *>(this))); }
    operator ::efl::canvas::Object() const;
    operator ::efl::canvas::Object&();
    operator ::efl::canvas::Object const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Object,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::canvas::Object_Animation,  ::efl::canvas::Pointer,  ::efl::gfx::Color,  ::efl::gfx::Entity,  ::efl::gfx::Hint,  ::efl::gfx::Mapping,  ::efl::gfx::Stack,  ::efl::input::Interface> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Object const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::canvas::Object_Animation const ,  ::efl::canvas::Pointer const ,  ::efl::gfx::Color const ,  ::efl::gfx::Entity const ,  ::efl::gfx::Hint const ,  ::efl::gfx::Mapping const ,  ::efl::gfx::Stack const ,  ::efl::input::Interface const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Object : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::canvas::Object_Animation)
    , EO_CXX_INHERIT(::efl::canvas::Pointer)
    , EO_CXX_INHERIT(::efl::gfx::Color)
    , EO_CXX_INHERIT(::efl::gfx::Entity)
    , EO_CXX_INHERIT(::efl::gfx::Hint)
    , EO_CXX_INHERIT(::efl::gfx::Mapping)
    , EO_CXX_INHERIT(::efl::gfx::Stack)
    , EO_CXX_INHERIT(::efl::input::Interface)
{
    explicit Object( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Object(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Object() = default;
    Object(Object const&) = default;
    Object(Object&&) = default;
    Object& operator=(Object const&) = default;
    Object& operator=(Object&&) = default;
    template <typename Derived>
    Object(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Object, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Input_Object_Pointer_Mode>::type pointer_mode_by_device_get( ::efl::eolian::in_traits< ::efl::input::Device>::type dev) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type pointer_mode_by_device_set( ::efl::eolian::in_traits< ::efl::input::Device>::type dev,  ::efl::eolian::in_traits<Efl_Input_Object_Pointer_Mode>::type pointer_mode) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Input_Object_Pointer_Mode>::type pointer_mode_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type pointer_mode_set( ::efl::eolian::in_traits<Efl_Input_Object_Pointer_Mode>::type pointer_mode) const;
#endif
    ::efl::eolian::return_traits<Efl_Gfx_Render_Op>::type render_op_get() const;
    ::efl::eolian::return_traits<void>::type render_op_set( ::efl::eolian::in_traits<Efl_Gfx_Render_Op>::type render_op) const;
    ::efl::eolian::return_traits< ::efl::canvas::Object>::type clipper_get() const;
    ::efl::eolian::return_traits<void>::type clipper_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type clipper) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type has_fixed_size_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type has_fixed_size_set( ::efl::eolian::in_traits<bool>::type enable) const;
#endif
    ::efl::eolian::return_traits<bool>::type repeat_events_get() const;
    ::efl::eolian::return_traits<void>::type repeat_events_set( ::efl::eolian::in_traits<bool>::type repeat) const;
    ::efl::eolian::return_traits<bool>::type key_focus_get() const;
    ::efl::eolian::return_traits<void>::type key_focus_set( ::efl::eolian::in_traits<bool>::type focus) const;
    ::efl::eolian::return_traits<bool>::type seat_focus_get() const;
    ::efl::eolian::return_traits<bool>::type precise_is_inside_get() const;
    ::efl::eolian::return_traits<void>::type precise_is_inside_set( ::efl::eolian::in_traits<bool>::type precise) const;
    ::efl::eolian::return_traits<bool>::type propagate_events_get() const;
    ::efl::eolian::return_traits<void>::type propagate_events_set( ::efl::eolian::in_traits<bool>::type propagate) const;
    ::efl::eolian::return_traits<bool>::type pass_events_get() const;
    ::efl::eolian::return_traits<void>::type pass_events_set( ::efl::eolian::in_traits<bool>::type pass) const;
    ::efl::eolian::return_traits<bool>::type anti_alias_get() const;
    ::efl::eolian::return_traits<void>::type anti_alias_set( ::efl::eolian::in_traits<bool>::type anti_alias) const;
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::canvas::Object>>::type clipped_objects_get() const;
#ifdef EFL_CANVAS_OBJECT_PROTECTED
    ::efl::eolian::return_traits< ::efl::canvas::Object>::type render_parent_get() const;
#endif
    ::efl::eolian::return_traits<Efl_Text_Bidirectional_Type>::type paragraph_direction_get() const;
    ::efl::eolian::return_traits<void>::type paragraph_direction_set( ::efl::eolian::in_traits<Efl_Text_Bidirectional_Type>::type dir) const;
    ::efl::eolian::return_traits<bool>::type no_render_get() const;
    ::efl::eolian::return_traits<void>::type no_render_set( ::efl::eolian::in_traits<bool>::type enable) const;
    ::efl::eolian::return_traits<bool>::type coords_inside_get( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type seat_focus_check( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type seat_focus_add( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type seat_focus_del( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const;
#endif
    ::efl::eolian::return_traits< unsigned int>::type clipped_objects_count() const;
    ::efl::eolian::return_traits<bool>::type key_grab( ::efl::eolian::in_traits< ::efl::eina::string_view>::type keyname,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type modifiers,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type not_modifiers,  ::efl::eolian::in_traits<bool>::type exclusive) const;
    ::efl::eolian::return_traits<void>::type key_ungrab( ::efl::eolian::in_traits< ::efl::eina::string_view>::type keyname,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type modifiers,  ::efl::eolian::in_traits<Efl_Input_Modifier>::type not_modifiers) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_OBJECT_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Object *>(this))); }
    static struct animator_tick_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CANVAS_OBJECT_EVENT_ANIMATOR_TICK; }
        typedef Efl_Event_Animator_Tick parameter_type;
    } const animator_tick_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    animator_tick_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(animator_tick_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    animator_tick_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(animator_tick_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Object,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::canvas::Object_Animation,  ::efl::canvas::Pointer,  ::efl::gfx::Color,  ::efl::gfx::Entity,  ::efl::gfx::Hint,  ::efl::gfx::Mapping,  ::efl::gfx::Stack,  ::efl::input::Interface> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Object const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::canvas::Object_Animation const ,  ::efl::canvas::Pointer const ,  ::efl::gfx::Color const ,  ::efl::gfx::Entity const ,  ::efl::gfx::Hint const ,  ::efl::gfx::Mapping const ,  ::efl::gfx::Stack const ,  ::efl::input::Interface const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Object> _get_wref() const { return ::efl::eo::wref<Object>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Object* operator->() const { return this; }
    Object* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Object const& lhs, Object const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Object const& lhs, Object const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Object) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Object>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
