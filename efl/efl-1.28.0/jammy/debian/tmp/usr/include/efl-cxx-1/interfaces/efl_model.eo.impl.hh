#ifndef EFL_MODEL_IMPL_HH
#define EFL_MODEL_IMPL_HH

#include "efl_model.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type Model::properties_get() const
{
    Eina_Iterator * __return_value =  ::efl_model_properties_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::value_view>::type Model::property_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type property) const
{
    Eina_Value * __return_value =  ::efl_model_property_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(property));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::value_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits< unsigned int>::type Model::children_count_get() const
{
    unsigned int __return_value =  ::efl_model_children_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::Object>::type Model::child_add() const
{
     ::Efl_Object* __return_value =  ::efl_model_child_add(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Model::child_del( ::efl::eolian::in_traits< ::efl::Object>::type child) const
{
     ::efl_model_child_del(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(child));
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type Model::properties_get() const
{
    Eina_Iterator * __return_value =  ::efl_model_properties_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::value_view>::type Model::property_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type property) const
{
    Eina_Value * __return_value =  ::efl_model_property_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(property));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::value_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits< unsigned int>::type Model::children_count_get() const
{
    unsigned int __return_value =  ::efl_model_children_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::Object>::type Model::child_add() const
{
     ::Efl_Object* __return_value =  ::efl_model_child_add(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Model::child_del( ::efl::eolian::in_traits< ::efl::Object>::type child) const
{
     ::efl_model_child_del(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(child));
}
inline efl::Model::operator ::efl::Model() const { return *static_cast< ::efl::Model const*>(static_cast<void const*>(this)); }
inline efl::Model::operator ::efl::Model&() { return *static_cast< ::efl::Model*>(static_cast<void*>(this)); }
inline efl::Model::operator ::efl::Model const&() const { return *static_cast< ::efl::Model const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
