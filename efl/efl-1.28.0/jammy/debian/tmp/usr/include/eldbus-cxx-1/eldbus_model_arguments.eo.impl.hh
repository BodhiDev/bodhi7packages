#ifndef ELDBUS_MODEL_ARGUMENTS_IMPL_HH
#define ELDBUS_MODEL_ARGUMENTS_IMPL_HH

#include "eldbus_model_arguments.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace eldbus { namespace model { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Arguments::arg_name_get() const
{
    const char * __return_value =  ::eldbus_model_arguments_arg_name_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Arguments::custom_constructor( ::efl::eolian::in_traits<Eldbus_Proxy *>::type proxy,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<  ::efl::eina::range_list<Eldbus_Introspection_Argument>>::type arguments) const
{
     ::eldbus_model_arguments_custom_constructor(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eldbus_Proxy *,  ::efl::eolian::in_traits<Eldbus_Proxy *>::type>(proxy),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<const Eina_List *,  ::efl::eolian::in_traits<  ::efl::eina::range_list<Eldbus_Introspection_Argument>>::type>(arguments));
}
#endif
} } 
namespace eo_cxx {
namespace eldbus { namespace model { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Arguments::arg_name_get() const
{
    const char * __return_value =  ::eldbus_model_arguments_arg_name_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Arguments::custom_constructor( ::efl::eolian::in_traits<Eldbus_Proxy *>::type proxy,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<  ::efl::eina::range_list<Eldbus_Introspection_Argument>>::type arguments) const
{
     ::eldbus_model_arguments_custom_constructor(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eldbus_Proxy *,  ::efl::eolian::in_traits<Eldbus_Proxy *>::type>(proxy),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<const Eina_List *,  ::efl::eolian::in_traits<  ::efl::eina::range_list<Eldbus_Introspection_Argument>>::type>(arguments));
}
#endif
inline eldbus::model::Arguments::operator ::eldbus::model::Arguments() const { return *static_cast< ::eldbus::model::Arguments const*>(static_cast<void const*>(this)); }
inline eldbus::model::Arguments::operator ::eldbus::model::Arguments&() { return *static_cast< ::eldbus::model::Arguments*>(static_cast<void*>(this)); }
inline eldbus::model::Arguments::operator ::eldbus::model::Arguments const&() const { return *static_cast< ::eldbus::model::Arguments const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
