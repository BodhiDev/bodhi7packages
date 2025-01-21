#ifndef EFL_UI_FORMAT_IMPL_HH
#define EFL_UI_FORMAT_IMPL_HH

#include "efl_ui_format.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<Efl_Ui_Format_Func>::type Format::format_func_get() const
{
    Efl_Ui_Format_Func __return_value =  ::efl_ui_format_func_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Format_Func>::type>(__return_value);
}
template <typename F>
inline ::efl::eolian::return_traits<void>::type Format::format_func_set(F func) const
{
    auto fw_func = new ::efl::eolian::function_wrapper<Efl_Ui_Format_Func, F, ::efl::eolian::Efl_Ui_Format_Func__function_tag>(func);
     ::efl_ui_format_func_set(_eo_ptr(),
        fw_func->data_to_c(), fw_func->func_to_c(), fw_func->free_to_c());
}
inline ::efl::eolian::return_traits< ::efl::eina::accessor<Efl_Ui_Format_Value>>::type Format::format_values_get() const
{
    Eina_Accessor * __return_value =  ::efl_ui_format_values_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::accessor<Efl_Ui_Format_Value>>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Format::format_values_set( ::efl::eolian::in_traits< ::efl::eina::accessor<Efl_Ui_Format_Value>>::type values) const
{
     ::efl_ui_format_values_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Accessor *,  ::efl::eolian::in_traits< ::efl::eina::accessor<Efl_Ui_Format_Value>>::type, true>(values));
}
inline ::efl::eolian::return_traits<void>::type Format::format_string_get( ::efl::eolian::out_traits< ::efl::eina::string_view>::type string,  ::efl::eolian::out_traits<Efl_Ui_Format_String_Type>::type type) const
{
    const char * __out_param_string = {};
    Efl_Ui_Format_String_Type __out_param_type = {};
     ::efl_ui_format_string_get(_eo_ptr(),
        & __out_param_string,
        & __out_param_type);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(string, __out_param_string);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Ui_Format_String_Type>::type, Efl_Ui_Format_String_Type>(type, __out_param_type);
}
inline ::efl::eolian::return_traits<void>::type Format::format_string_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type string,  ::efl::eolian::in_traits<Efl_Ui_Format_String_Type>::type type) const
{
     ::efl_ui_format_string_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(string),
         ::efl::eolian::convert_to_c<Efl_Ui_Format_String_Type,  ::efl::eolian::in_traits<Efl_Ui_Format_String_Type>::type>(type));
}
#ifdef EFL_UI_FORMAT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Format::formatted_value_get( ::efl::eolian::in_traits< ::efl::eina::strbuf>::type str,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type value) const
{
     ::efl_ui_format_formatted_value_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Strbuf *,  ::efl::eolian::in_traits< ::efl::eina::strbuf>::type>(str),
         ::efl::eolian::convert_to_c<const Eina_Value,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type>(value));
}
#endif
#ifdef EFL_UI_FORMAT_PROTECTED
inline ::efl::eolian::return_traits<int>::type Format::decimal_places_get() const
{
    int __return_value =  ::efl_ui_format_decimal_places_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_UI_FORMAT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Format::apply_formatted_value() const
{
     ::efl_ui_format_apply_formatted_value(_eo_ptr());
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<Efl_Ui_Format_Func>::type Format::format_func_get() const
{
    Efl_Ui_Format_Func __return_value =  ::efl_ui_format_func_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Format_Func>::type>(__return_value);
}
template <typename F>
inline ::efl::eolian::return_traits<void>::type Format::format_func_set(F func) const
{
    auto fw_func = new ::efl::eolian::function_wrapper<Efl_Ui_Format_Func, F, ::efl::eolian::Efl_Ui_Format_Func__function_tag>(func);
     ::efl_ui_format_func_set(_eo_ptr(),
        fw_func->data_to_c(), fw_func->func_to_c(), fw_func->free_to_c());
}
inline ::efl::eolian::return_traits< ::efl::eina::accessor<Efl_Ui_Format_Value>>::type Format::format_values_get() const
{
    Eina_Accessor * __return_value =  ::efl_ui_format_values_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::accessor<Efl_Ui_Format_Value>>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Format::format_values_set( ::efl::eolian::in_traits< ::efl::eina::accessor<Efl_Ui_Format_Value>>::type values) const
{
     ::efl_ui_format_values_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Accessor *,  ::efl::eolian::in_traits< ::efl::eina::accessor<Efl_Ui_Format_Value>>::type, true>(values));
}
inline ::efl::eolian::return_traits<void>::type Format::format_string_get( ::efl::eolian::out_traits< ::efl::eina::string_view>::type string,  ::efl::eolian::out_traits<Efl_Ui_Format_String_Type>::type type) const
{
    const char * __out_param_string = {};
    Efl_Ui_Format_String_Type __out_param_type = {};
     ::efl_ui_format_string_get(_eo_ptr(),
        & __out_param_string,
        & __out_param_type);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(string, __out_param_string);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Ui_Format_String_Type>::type, Efl_Ui_Format_String_Type>(type, __out_param_type);
}
inline ::efl::eolian::return_traits<void>::type Format::format_string_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type string,  ::efl::eolian::in_traits<Efl_Ui_Format_String_Type>::type type) const
{
     ::efl_ui_format_string_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(string),
         ::efl::eolian::convert_to_c<Efl_Ui_Format_String_Type,  ::efl::eolian::in_traits<Efl_Ui_Format_String_Type>::type>(type));
}
#ifdef EFL_UI_FORMAT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Format::formatted_value_get( ::efl::eolian::in_traits< ::efl::eina::strbuf>::type str,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type value) const
{
     ::efl_ui_format_formatted_value_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Strbuf *,  ::efl::eolian::in_traits< ::efl::eina::strbuf>::type>(str),
         ::efl::eolian::convert_to_c<const Eina_Value,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type>(value));
}
#endif
#ifdef EFL_UI_FORMAT_PROTECTED
inline ::efl::eolian::return_traits<int>::type Format::decimal_places_get() const
{
    int __return_value =  ::efl_ui_format_decimal_places_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_UI_FORMAT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Format::apply_formatted_value() const
{
     ::efl_ui_format_apply_formatted_value(_eo_ptr());
}
#endif
inline efl::ui::Format::operator ::efl::ui::Format() const { return *static_cast< ::efl::ui::Format const*>(static_cast<void const*>(this)); }
inline efl::ui::Format::operator ::efl::ui::Format&() { return *static_cast< ::efl::ui::Format*>(static_cast<void*>(this)); }
inline efl::ui::Format::operator ::efl::ui::Format const&() const { return *static_cast< ::efl::ui::Format const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
