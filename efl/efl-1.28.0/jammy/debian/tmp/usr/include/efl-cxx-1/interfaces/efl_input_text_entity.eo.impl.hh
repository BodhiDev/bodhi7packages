#ifndef EFL_INPUT_TEXT_ENTITY_IMPL_HH
#define EFL_INPUT_TEXT_ENTITY_IMPL_HH

#include "efl_input_text_entity.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace input_text { 
inline ::efl::eolian::return_traits<bool>::type Entity::input_panel_show_on_demand_get() const
{
    Eina_Bool __return_value =  ::efl_input_text_input_panel_show_on_demand_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_show_on_demand_set( ::efl::eolian::in_traits<bool>::type ondemand) const
{
     ::efl_input_text_input_panel_show_on_demand_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(ondemand));
}
inline ::efl::eolian::return_traits<Efl_Input_Text_Panel_Language_Type>::type Entity::input_panel_language_get() const
{
    Efl_Input_Text_Panel_Language_Type __return_value =  ::efl_input_text_input_panel_language_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Text_Panel_Language_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_language_set( ::efl::eolian::in_traits<Efl_Input_Text_Panel_Language_Type>::type lang) const
{
     ::efl_input_text_input_panel_language_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Text_Panel_Language_Type,  ::efl::eolian::in_traits<Efl_Input_Text_Panel_Language_Type>::type>(lang));
}
inline ::efl::eolian::return_traits<int>::type Entity::input_panel_layout_variation_get() const
{
    int __return_value =  ::efl_input_text_input_panel_layout_variation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_layout_variation_set( ::efl::eolian::in_traits<int>::type variation) const
{
     ::efl_input_text_input_panel_layout_variation_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(variation));
}
inline ::efl::eolian::return_traits<Efl_Input_Text_Capitalize_Type>::type Entity::autocapitalization_get() const
{
    Efl_Input_Text_Capitalize_Type __return_value =  ::efl_input_text_autocapitalization_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Text_Capitalize_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::autocapitalization_set( ::efl::eolian::in_traits<Efl_Input_Text_Capitalize_Type>::type autocapital_type) const
{
     ::efl_input_text_autocapitalization_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Text_Capitalize_Type,  ::efl::eolian::in_traits<Efl_Input_Text_Capitalize_Type>::type>(autocapital_type));
}
inline ::efl::eolian::return_traits<bool>::type Entity::predictable_get() const
{
    Eina_Bool __return_value =  ::efl_input_text_predictable_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::predictable_set( ::efl::eolian::in_traits<bool>::type prediction) const
{
     ::efl_input_text_predictable_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(prediction));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Input_Text_Content_Type>::type Entity::input_content_type_get() const
{
    Efl_Input_Text_Content_Type __return_value =  ::efl_input_text_input_content_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Text_Content_Type>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Entity::input_content_type_set( ::efl::eolian::in_traits<Efl_Input_Text_Content_Type>::type hints) const
{
     ::efl_input_text_input_content_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Text_Content_Type,  ::efl::eolian::in_traits<Efl_Input_Text_Content_Type>::type>(hints));
}
#endif
inline ::efl::eolian::return_traits<Efl_Input_Text_Panel_Layout_Type>::type Entity::input_panel_layout_get() const
{
    Efl_Input_Text_Panel_Layout_Type __return_value =  ::efl_input_text_input_panel_layout_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Text_Panel_Layout_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_layout_set( ::efl::eolian::in_traits<Efl_Input_Text_Panel_Layout_Type>::type layout) const
{
     ::efl_input_text_input_panel_layout_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Text_Panel_Layout_Type,  ::efl::eolian::in_traits<Efl_Input_Text_Panel_Layout_Type>::type>(layout));
}
inline ::efl::eolian::return_traits<Efl_Input_Text_Panel_Return_Key_Type>::type Entity::input_panel_return_key_type_get() const
{
    Efl_Input_Text_Panel_Return_Key_Type __return_value =  ::efl_input_text_input_panel_return_key_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Text_Panel_Return_Key_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_return_key_type_set( ::efl::eolian::in_traits<Efl_Input_Text_Panel_Return_Key_Type>::type return_key_type) const
{
     ::efl_input_text_input_panel_return_key_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Text_Panel_Return_Key_Type,  ::efl::eolian::in_traits<Efl_Input_Text_Panel_Return_Key_Type>::type>(return_key_type));
}
inline ::efl::eolian::return_traits<bool>::type Entity::input_panel_autoshow_get() const
{
    Eina_Bool __return_value =  ::efl_input_text_input_panel_autoshow_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_autoshow_set( ::efl::eolian::in_traits<bool>::type enabled) const
{
     ::efl_input_text_input_panel_autoshow_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enabled));
}
inline ::efl::eolian::return_traits<Efl_Input_Text_Panel_Return_Key_State>::type Entity::input_panel_return_key_state_get() const
{
    Efl_Input_Text_Panel_Return_Key_State __return_value =  ::efl_input_text_input_panel_return_key_state_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Text_Panel_Return_Key_State>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_return_key_state_set( ::efl::eolian::in_traits<Efl_Input_Text_Panel_Return_Key_State>::type state) const
{
     ::efl_input_text_input_panel_return_key_state_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Text_Panel_Return_Key_State,  ::efl::eolian::in_traits<Efl_Input_Text_Panel_Return_Key_State>::type>(state));
}
inline ::efl::eolian::return_traits< Eina_Slice>::type Entity::input_panel_imdata_get() const
{
    Eina_Slice __return_value =  ::efl_input_text_input_panel_imdata_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< Eina_Slice>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_imdata_set( ::efl::eolian::in_traits< Eina_Slice>::type value) const
{
     ::efl_input_text_input_panel_imdata_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Slice,  ::efl::eolian::in_traits< Eina_Slice>::type>(value));
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_show() const
{
     ::efl_input_text_input_panel_show(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_hide() const
{
     ::efl_input_text_input_panel_hide(_eo_ptr());
}
} } 
namespace eo_cxx {
namespace efl { namespace input_text { 
inline ::efl::eolian::return_traits<bool>::type Entity::input_panel_show_on_demand_get() const
{
    Eina_Bool __return_value =  ::efl_input_text_input_panel_show_on_demand_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_show_on_demand_set( ::efl::eolian::in_traits<bool>::type ondemand) const
{
     ::efl_input_text_input_panel_show_on_demand_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(ondemand));
}
inline ::efl::eolian::return_traits<Efl_Input_Text_Panel_Language_Type>::type Entity::input_panel_language_get() const
{
    Efl_Input_Text_Panel_Language_Type __return_value =  ::efl_input_text_input_panel_language_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Text_Panel_Language_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_language_set( ::efl::eolian::in_traits<Efl_Input_Text_Panel_Language_Type>::type lang) const
{
     ::efl_input_text_input_panel_language_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Text_Panel_Language_Type,  ::efl::eolian::in_traits<Efl_Input_Text_Panel_Language_Type>::type>(lang));
}
inline ::efl::eolian::return_traits<int>::type Entity::input_panel_layout_variation_get() const
{
    int __return_value =  ::efl_input_text_input_panel_layout_variation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_layout_variation_set( ::efl::eolian::in_traits<int>::type variation) const
{
     ::efl_input_text_input_panel_layout_variation_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(variation));
}
inline ::efl::eolian::return_traits<Efl_Input_Text_Capitalize_Type>::type Entity::autocapitalization_get() const
{
    Efl_Input_Text_Capitalize_Type __return_value =  ::efl_input_text_autocapitalization_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Text_Capitalize_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::autocapitalization_set( ::efl::eolian::in_traits<Efl_Input_Text_Capitalize_Type>::type autocapital_type) const
{
     ::efl_input_text_autocapitalization_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Text_Capitalize_Type,  ::efl::eolian::in_traits<Efl_Input_Text_Capitalize_Type>::type>(autocapital_type));
}
inline ::efl::eolian::return_traits<bool>::type Entity::predictable_get() const
{
    Eina_Bool __return_value =  ::efl_input_text_predictable_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::predictable_set( ::efl::eolian::in_traits<bool>::type prediction) const
{
     ::efl_input_text_predictable_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(prediction));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Input_Text_Content_Type>::type Entity::input_content_type_get() const
{
    Efl_Input_Text_Content_Type __return_value =  ::efl_input_text_input_content_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Text_Content_Type>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Entity::input_content_type_set( ::efl::eolian::in_traits<Efl_Input_Text_Content_Type>::type hints) const
{
     ::efl_input_text_input_content_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Text_Content_Type,  ::efl::eolian::in_traits<Efl_Input_Text_Content_Type>::type>(hints));
}
#endif
inline ::efl::eolian::return_traits<Efl_Input_Text_Panel_Layout_Type>::type Entity::input_panel_layout_get() const
{
    Efl_Input_Text_Panel_Layout_Type __return_value =  ::efl_input_text_input_panel_layout_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Text_Panel_Layout_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_layout_set( ::efl::eolian::in_traits<Efl_Input_Text_Panel_Layout_Type>::type layout) const
{
     ::efl_input_text_input_panel_layout_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Text_Panel_Layout_Type,  ::efl::eolian::in_traits<Efl_Input_Text_Panel_Layout_Type>::type>(layout));
}
inline ::efl::eolian::return_traits<Efl_Input_Text_Panel_Return_Key_Type>::type Entity::input_panel_return_key_type_get() const
{
    Efl_Input_Text_Panel_Return_Key_Type __return_value =  ::efl_input_text_input_panel_return_key_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Text_Panel_Return_Key_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_return_key_type_set( ::efl::eolian::in_traits<Efl_Input_Text_Panel_Return_Key_Type>::type return_key_type) const
{
     ::efl_input_text_input_panel_return_key_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Text_Panel_Return_Key_Type,  ::efl::eolian::in_traits<Efl_Input_Text_Panel_Return_Key_Type>::type>(return_key_type));
}
inline ::efl::eolian::return_traits<bool>::type Entity::input_panel_autoshow_get() const
{
    Eina_Bool __return_value =  ::efl_input_text_input_panel_autoshow_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_autoshow_set( ::efl::eolian::in_traits<bool>::type enabled) const
{
     ::efl_input_text_input_panel_autoshow_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enabled));
}
inline ::efl::eolian::return_traits<Efl_Input_Text_Panel_Return_Key_State>::type Entity::input_panel_return_key_state_get() const
{
    Efl_Input_Text_Panel_Return_Key_State __return_value =  ::efl_input_text_input_panel_return_key_state_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Text_Panel_Return_Key_State>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_return_key_state_set( ::efl::eolian::in_traits<Efl_Input_Text_Panel_Return_Key_State>::type state) const
{
     ::efl_input_text_input_panel_return_key_state_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Text_Panel_Return_Key_State,  ::efl::eolian::in_traits<Efl_Input_Text_Panel_Return_Key_State>::type>(state));
}
inline ::efl::eolian::return_traits< Eina_Slice>::type Entity::input_panel_imdata_get() const
{
    Eina_Slice __return_value =  ::efl_input_text_input_panel_imdata_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< Eina_Slice>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_imdata_set( ::efl::eolian::in_traits< Eina_Slice>::type value) const
{
     ::efl_input_text_input_panel_imdata_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Slice,  ::efl::eolian::in_traits< Eina_Slice>::type>(value));
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_show() const
{
     ::efl_input_text_input_panel_show(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Entity::input_panel_hide() const
{
     ::efl_input_text_input_panel_hide(_eo_ptr());
}
inline efl::input_text::Entity::operator ::efl::input_text::Entity() const { return *static_cast< ::efl::input_text::Entity const*>(static_cast<void const*>(this)); }
inline efl::input_text::Entity::operator ::efl::input_text::Entity&() { return *static_cast< ::efl::input_text::Entity*>(static_cast<void*>(this)); }
inline efl::input_text::Entity::operator ::efl::input_text::Entity const&() const { return *static_cast< ::efl::input_text::Entity const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
