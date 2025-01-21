#ifndef ELDBUS_MODEL_OBJECT_IMPL_HH
#define ELDBUS_MODEL_OBJECT_IMPL_HH

#include "eldbus_model_object.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace eldbus { namespace model { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Object::bus_get() const
{
    const char * __return_value =  ::eldbus_model_object_bus_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::bus_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type bus) const
{
     ::eldbus_model_object_bus_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(bus));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Object::path_get() const
{
    const char * __return_value =  ::eldbus_model_object_path_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::path_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type path) const
{
     ::eldbus_model_object_path_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(path));
}
#endif
} } 
namespace eo_cxx {
namespace eldbus { namespace model { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Object::bus_get() const
{
    const char * __return_value =  ::eldbus_model_object_bus_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::bus_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type bus) const
{
     ::eldbus_model_object_bus_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(bus));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Object::path_get() const
{
    const char * __return_value =  ::eldbus_model_object_path_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::path_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type path) const
{
     ::eldbus_model_object_path_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(path));
}
#endif
inline eldbus::model::Object::operator ::eldbus::model::Object() const { return *static_cast< ::eldbus::model::Object const*>(static_cast<void const*>(this)); }
inline eldbus::model::Object::operator ::eldbus::model::Object&() { return *static_cast< ::eldbus::model::Object*>(static_cast<void*>(this)); }
inline eldbus::model::Object::operator ::eldbus::model::Object const&() const { return *static_cast< ::eldbus::model::Object const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
