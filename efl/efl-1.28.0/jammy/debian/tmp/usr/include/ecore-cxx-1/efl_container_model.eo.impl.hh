#ifndef EFL_CONTAINER_MODEL_IMPL_HH
#define EFL_CONTAINER_MODEL_IMPL_HH

#include "efl_container_model.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<const Eina_Value_Type *>::type Container_Model::child_property_value_type_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
    const Eina_Value_Type * __return_value =  ::efl_container_model_child_property_value_type_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Eina_Value_Type *>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Container_Model::child_property_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<const Eina_Value_Type *>::type type,  ::efl::eolian::in_traits< ::efl::eina::iterator<void const*>>::type values) const
{
    Eina_Bool __return_value =  ::efl_container_model_child_property_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<const Eina_Value_Type *,  ::efl::eolian::in_traits<const Eina_Value_Type *>::type>(type),
         ::efl::eolian::convert_to_c<Eina_Iterator *,  ::efl::eolian::in_traits< ::efl::eina::iterator<void const*>>::type, true>(values));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<const Eina_Value_Type *>::type Container_Model::child_property_value_type_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
    const Eina_Value_Type * __return_value =  ::efl_container_model_child_property_value_type_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Eina_Value_Type *>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Container_Model::child_property_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<const Eina_Value_Type *>::type type,  ::efl::eolian::in_traits< ::efl::eina::iterator<void const*>>::type values) const
{
    Eina_Bool __return_value =  ::efl_container_model_child_property_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<const Eina_Value_Type *,  ::efl::eolian::in_traits<const Eina_Value_Type *>::type>(type),
         ::efl::eolian::convert_to_c<Eina_Iterator *,  ::efl::eolian::in_traits< ::efl::eina::iterator<void const*>>::type, true>(values));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline efl::Container_Model::operator ::efl::Container_Model() const { return *static_cast< ::efl::Container_Model const*>(static_cast<void const*>(this)); }
inline efl::Container_Model::operator ::efl::Container_Model&() { return *static_cast< ::efl::Container_Model*>(static_cast<void*>(this)); }
inline efl::Container_Model::operator ::efl::Container_Model const&() const { return *static_cast< ::efl::Container_Model const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
