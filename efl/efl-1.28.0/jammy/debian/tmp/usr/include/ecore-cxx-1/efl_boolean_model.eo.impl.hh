#ifndef EFL_BOOLEAN_MODEL_IMPL_HH
#define EFL_BOOLEAN_MODEL_IMPL_HH

#include "efl_boolean_model.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Boolean_Model::boolean_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<bool>::type default_value) const
{
     ::efl_boolean_model_boolean_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(default_value));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Boolean_Model::boolean_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
     ::efl_boolean_model_boolean_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::iterator< uint64_t>>::type Boolean_Model::boolean_iterator_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<bool>::type request) const
{
    Eina_Iterator * __return_value =  ::efl_boolean_model_boolean_iterator_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(request));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< uint64_t>>::type>(__return_value);
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Boolean_Model::boolean_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<bool>::type default_value) const
{
     ::efl_boolean_model_boolean_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(default_value));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Boolean_Model::boolean_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
     ::efl_boolean_model_boolean_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::iterator< uint64_t>>::type Boolean_Model::boolean_iterator_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<bool>::type request) const
{
    Eina_Iterator * __return_value =  ::efl_boolean_model_boolean_iterator_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(request));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< uint64_t>>::type>(__return_value);
}
#endif
inline efl::Boolean_Model::operator ::efl::Boolean_Model() const { return *static_cast< ::efl::Boolean_Model const*>(static_cast<void const*>(this)); }
inline efl::Boolean_Model::operator ::efl::Boolean_Model&() { return *static_cast< ::efl::Boolean_Model*>(static_cast<void*>(this)); }
inline efl::Boolean_Model::operator ::efl::Boolean_Model const&() const { return *static_cast< ::efl::Boolean_Model const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
