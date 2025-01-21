#ifndef EFL_ACCESS_VALUE_IMPL_HH
#define EFL_ACCESS_VALUE_IMPL_HH

#include "efl_access_value.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace access { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
inline ::efl::eolian::return_traits<void>::type Value::value_and_text_get( ::efl::eolian::out_traits<double>::type value,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type text) const
{
    double __out_param_value = {};
    const char * __out_param_text = {};
     ::efl_access_value_and_text_get(_eo_ptr(),
        & __out_param_value,
        & __out_param_text);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(value, __out_param_value);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(text, __out_param_text);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Value::value_and_text_set( ::efl::eolian::in_traits<double>::type value,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type text) const
{
    Eina_Bool __return_value =  ::efl_access_value_and_text_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(value),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
inline ::efl::eolian::return_traits<void>::type Value::range_get( ::efl::eolian::out_traits<double>::type lower_limit,  ::efl::eolian::out_traits<double>::type upper_limit,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type description) const
{
    double __out_param_lower_limit = {};
    double __out_param_upper_limit = {};
    const char * __out_param_description = {};
     ::efl_access_value_range_get(_eo_ptr(),
        & __out_param_lower_limit,
        & __out_param_upper_limit,
        & __out_param_description);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(lower_limit, __out_param_lower_limit);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(upper_limit, __out_param_upper_limit);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(description, __out_param_description);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
inline ::efl::eolian::return_traits<double>::type Value::increment_get() const
{
    double __return_value =  ::efl_access_value_increment_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#endif
} } 
namespace eo_cxx {
namespace efl { namespace access { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
inline ::efl::eolian::return_traits<void>::type Value::value_and_text_get( ::efl::eolian::out_traits<double>::type value,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type text) const
{
    double __out_param_value = {};
    const char * __out_param_text = {};
     ::efl_access_value_and_text_get(_eo_ptr(),
        & __out_param_value,
        & __out_param_text);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(value, __out_param_value);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(text, __out_param_text);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Value::value_and_text_set( ::efl::eolian::in_traits<double>::type value,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type text) const
{
    Eina_Bool __return_value =  ::efl_access_value_and_text_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(value),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
inline ::efl::eolian::return_traits<void>::type Value::range_get( ::efl::eolian::out_traits<double>::type lower_limit,  ::efl::eolian::out_traits<double>::type upper_limit,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type description) const
{
    double __out_param_lower_limit = {};
    double __out_param_upper_limit = {};
    const char * __out_param_description = {};
     ::efl_access_value_range_get(_eo_ptr(),
        & __out_param_lower_limit,
        & __out_param_upper_limit,
        & __out_param_description);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(lower_limit, __out_param_lower_limit);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(upper_limit, __out_param_upper_limit);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(description, __out_param_description);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
inline ::efl::eolian::return_traits<double>::type Value::increment_get() const
{
    double __return_value =  ::efl_access_value_increment_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#endif
inline efl::access::Value::operator ::efl::access::Value() const { return *static_cast< ::efl::access::Value const*>(static_cast<void const*>(this)); }
inline efl::access::Value::operator ::efl::access::Value&() { return *static_cast< ::efl::access::Value*>(static_cast<void*>(this)); }
inline efl::access::Value::operator ::efl::access::Value const&() const { return *static_cast< ::efl::access::Value const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
