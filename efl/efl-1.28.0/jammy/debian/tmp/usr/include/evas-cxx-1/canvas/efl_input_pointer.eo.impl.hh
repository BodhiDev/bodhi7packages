#ifndef EFL_INPUT_POINTER_IMPL_HH
#define EFL_INPUT_POINTER_IMPL_HH

#include "efl_input_pointer.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace input { 
inline ::efl::eolian::return_traits<Efl_Pointer_Action>::type Pointer::action_get() const
{
    Efl_Pointer_Action __return_value =  ::efl_input_pointer_action_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Pointer_Action>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::action_set( ::efl::eolian::in_traits<Efl_Pointer_Action>::type act) const
{
     ::efl_input_pointer_action_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Pointer_Action,  ::efl::eolian::in_traits<Efl_Pointer_Action>::type>(act));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Pointer::value_has_get( ::efl::eolian::in_traits<Efl_Input_Value>::type key) const
{
    Eina_Bool __return_value =  ::efl_input_pointer_value_has_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Value,  ::efl::eolian::in_traits<Efl_Input_Value>::type>(key));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Pointer::value_get( ::efl::eolian::in_traits<Efl_Input_Value>::type key) const
{
    double __return_value =  ::efl_input_pointer_value_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Value,  ::efl::eolian::in_traits<Efl_Input_Value>::type>(key));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Pointer::value_set( ::efl::eolian::in_traits<Efl_Input_Value>::type key,  ::efl::eolian::in_traits<double>::type val) const
{
    Eina_Bool __return_value =  ::efl_input_pointer_value_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Value,  ::efl::eolian::in_traits<Efl_Input_Value>::type>(key),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(val));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits<int>::type Pointer::button_get() const
{
    int __return_value =  ::efl_input_pointer_button_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::button_set( ::efl::eolian::in_traits<int>::type but) const
{
     ::efl_input_pointer_button_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(but));
}
inline ::efl::eolian::return_traits<bool>::type Pointer::button_pressed_get( ::efl::eolian::in_traits<int>::type button) const
{
    Eina_Bool __return_value =  ::efl_input_pointer_button_pressed_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(button));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::button_pressed_set( ::efl::eolian::in_traits<int>::type button,  ::efl::eolian::in_traits<bool>::type pressed) const
{
     ::efl_input_pointer_button_pressed_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(button),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(pressed));
}
inline ::efl::eolian::return_traits<Eina_Position2D>::type Pointer::position_get() const
{
    Eina_Position2D __return_value =  ::efl_input_pointer_position_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::position_set( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const
{
     ::efl_input_pointer_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(pos));
}
inline ::efl::eolian::return_traits<Eina_Vector2>::type Pointer::precise_position_get() const
{
    Eina_Vector2 __return_value =  ::efl_input_pointer_precise_position_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Vector2>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::precise_position_set( ::efl::eolian::in_traits<Eina_Vector2>::type pos) const
{
     ::efl_input_pointer_precise_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Vector2,  ::efl::eolian::in_traits<Eina_Vector2>::type>(pos));
}
inline ::efl::eolian::return_traits<Eina_Position2D>::type Pointer::previous_position_get() const
{
    Eina_Position2D __return_value =  ::efl_input_pointer_previous_position_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::previous_position_set( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const
{
     ::efl_input_pointer_previous_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(pos));
}
inline ::efl::eolian::return_traits<int>::type Pointer::touch_id_get() const
{
    int __return_value =  ::efl_input_pointer_touch_id_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::touch_id_set( ::efl::eolian::in_traits<int>::type id) const
{
     ::efl_input_pointer_touch_id_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(id));
}
inline ::efl::eolian::return_traits< ::efl::Object>::type Pointer::source_get() const
{
     ::Efl_Object* __return_value =  ::efl_input_pointer_source_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::source_set( ::efl::eolian::in_traits< ::efl::Object>::type src) const
{
     ::efl_input_pointer_source_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(src));
}
inline ::efl::eolian::return_traits<Efl_Pointer_Flags>::type Pointer::button_flags_get() const
{
    Efl_Pointer_Flags __return_value =  ::efl_input_pointer_button_flags_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Pointer_Flags>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::button_flags_set( ::efl::eolian::in_traits<Efl_Pointer_Flags>::type flags) const
{
     ::efl_input_pointer_button_flags_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Pointer_Flags,  ::efl::eolian::in_traits<Efl_Pointer_Flags>::type>(flags));
}
inline ::efl::eolian::return_traits<bool>::type Pointer::double_click_get() const
{
    Eina_Bool __return_value =  ::efl_input_pointer_double_click_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::double_click_set( ::efl::eolian::in_traits<bool>::type val) const
{
     ::efl_input_pointer_double_click_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(val));
}
inline ::efl::eolian::return_traits<bool>::type Pointer::triple_click_get() const
{
    Eina_Bool __return_value =  ::efl_input_pointer_triple_click_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::triple_click_set( ::efl::eolian::in_traits<bool>::type val) const
{
     ::efl_input_pointer_triple_click_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(val));
}
inline ::efl::eolian::return_traits<bool>::type Pointer::wheel_horizontal_get() const
{
    Eina_Bool __return_value =  ::efl_input_pointer_wheel_horizontal_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::wheel_horizontal_set( ::efl::eolian::in_traits<bool>::type horizontal) const
{
     ::efl_input_pointer_wheel_horizontal_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(horizontal));
}
inline ::efl::eolian::return_traits<int>::type Pointer::wheel_delta_get() const
{
    int __return_value =  ::efl_input_pointer_wheel_delta_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::wheel_delta_set( ::efl::eolian::in_traits<int>::type dist) const
{
     ::efl_input_pointer_wheel_delta_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(dist));
}
} } 
namespace eo_cxx {
namespace efl { namespace input { 
inline ::efl::eolian::return_traits<Efl_Pointer_Action>::type Pointer::action_get() const
{
    Efl_Pointer_Action __return_value =  ::efl_input_pointer_action_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Pointer_Action>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::action_set( ::efl::eolian::in_traits<Efl_Pointer_Action>::type act) const
{
     ::efl_input_pointer_action_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Pointer_Action,  ::efl::eolian::in_traits<Efl_Pointer_Action>::type>(act));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Pointer::value_has_get( ::efl::eolian::in_traits<Efl_Input_Value>::type key) const
{
    Eina_Bool __return_value =  ::efl_input_pointer_value_has_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Value,  ::efl::eolian::in_traits<Efl_Input_Value>::type>(key));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Pointer::value_get( ::efl::eolian::in_traits<Efl_Input_Value>::type key) const
{
    double __return_value =  ::efl_input_pointer_value_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Value,  ::efl::eolian::in_traits<Efl_Input_Value>::type>(key));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Pointer::value_set( ::efl::eolian::in_traits<Efl_Input_Value>::type key,  ::efl::eolian::in_traits<double>::type val) const
{
    Eina_Bool __return_value =  ::efl_input_pointer_value_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Value,  ::efl::eolian::in_traits<Efl_Input_Value>::type>(key),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(val));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits<int>::type Pointer::button_get() const
{
    int __return_value =  ::efl_input_pointer_button_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::button_set( ::efl::eolian::in_traits<int>::type but) const
{
     ::efl_input_pointer_button_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(but));
}
inline ::efl::eolian::return_traits<bool>::type Pointer::button_pressed_get( ::efl::eolian::in_traits<int>::type button) const
{
    Eina_Bool __return_value =  ::efl_input_pointer_button_pressed_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(button));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::button_pressed_set( ::efl::eolian::in_traits<int>::type button,  ::efl::eolian::in_traits<bool>::type pressed) const
{
     ::efl_input_pointer_button_pressed_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(button),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(pressed));
}
inline ::efl::eolian::return_traits<Eina_Position2D>::type Pointer::position_get() const
{
    Eina_Position2D __return_value =  ::efl_input_pointer_position_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::position_set( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const
{
     ::efl_input_pointer_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(pos));
}
inline ::efl::eolian::return_traits<Eina_Vector2>::type Pointer::precise_position_get() const
{
    Eina_Vector2 __return_value =  ::efl_input_pointer_precise_position_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Vector2>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::precise_position_set( ::efl::eolian::in_traits<Eina_Vector2>::type pos) const
{
     ::efl_input_pointer_precise_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Vector2,  ::efl::eolian::in_traits<Eina_Vector2>::type>(pos));
}
inline ::efl::eolian::return_traits<Eina_Position2D>::type Pointer::previous_position_get() const
{
    Eina_Position2D __return_value =  ::efl_input_pointer_previous_position_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Position2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::previous_position_set( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const
{
     ::efl_input_pointer_previous_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(pos));
}
inline ::efl::eolian::return_traits<int>::type Pointer::touch_id_get() const
{
    int __return_value =  ::efl_input_pointer_touch_id_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::touch_id_set( ::efl::eolian::in_traits<int>::type id) const
{
     ::efl_input_pointer_touch_id_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(id));
}
inline ::efl::eolian::return_traits< ::efl::Object>::type Pointer::source_get() const
{
     ::Efl_Object* __return_value =  ::efl_input_pointer_source_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::source_set( ::efl::eolian::in_traits< ::efl::Object>::type src) const
{
     ::efl_input_pointer_source_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(src));
}
inline ::efl::eolian::return_traits<Efl_Pointer_Flags>::type Pointer::button_flags_get() const
{
    Efl_Pointer_Flags __return_value =  ::efl_input_pointer_button_flags_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Pointer_Flags>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::button_flags_set( ::efl::eolian::in_traits<Efl_Pointer_Flags>::type flags) const
{
     ::efl_input_pointer_button_flags_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Pointer_Flags,  ::efl::eolian::in_traits<Efl_Pointer_Flags>::type>(flags));
}
inline ::efl::eolian::return_traits<bool>::type Pointer::double_click_get() const
{
    Eina_Bool __return_value =  ::efl_input_pointer_double_click_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::double_click_set( ::efl::eolian::in_traits<bool>::type val) const
{
     ::efl_input_pointer_double_click_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(val));
}
inline ::efl::eolian::return_traits<bool>::type Pointer::triple_click_get() const
{
    Eina_Bool __return_value =  ::efl_input_pointer_triple_click_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::triple_click_set( ::efl::eolian::in_traits<bool>::type val) const
{
     ::efl_input_pointer_triple_click_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(val));
}
inline ::efl::eolian::return_traits<bool>::type Pointer::wheel_horizontal_get() const
{
    Eina_Bool __return_value =  ::efl_input_pointer_wheel_horizontal_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::wheel_horizontal_set( ::efl::eolian::in_traits<bool>::type horizontal) const
{
     ::efl_input_pointer_wheel_horizontal_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(horizontal));
}
inline ::efl::eolian::return_traits<int>::type Pointer::wheel_delta_get() const
{
    int __return_value =  ::efl_input_pointer_wheel_delta_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Pointer::wheel_delta_set( ::efl::eolian::in_traits<int>::type dist) const
{
     ::efl_input_pointer_wheel_delta_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(dist));
}
inline efl::input::Pointer::operator ::efl::input::Pointer() const { return *static_cast< ::efl::input::Pointer const*>(static_cast<void const*>(this)); }
inline efl::input::Pointer::operator ::efl::input::Pointer&() { return *static_cast< ::efl::input::Pointer*>(static_cast<void*>(this)); }
inline efl::input::Pointer::operator ::efl::input::Pointer const&() const { return *static_cast< ::efl::input::Pointer const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
