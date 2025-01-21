#ifndef EFL_COMPOSITE_MODEL_IMPL_HH
#define EFL_COMPOSITE_MODEL_IMPL_HH

#include "efl_composite_model.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits< unsigned int>::type Composite_Model::index_get() const
{
    unsigned int __return_value =  ::efl_composite_model_index_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Composite_Model::index_set( ::efl::eolian::in_traits< unsigned int>::type index) const
{
     ::efl_composite_model_index_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(index));
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits< unsigned int>::type Composite_Model::index_get() const
{
    unsigned int __return_value =  ::efl_composite_model_index_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Composite_Model::index_set( ::efl::eolian::in_traits< unsigned int>::type index) const
{
     ::efl_composite_model_index_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(index));
}
inline efl::Composite_Model::operator ::efl::Composite_Model() const { return *static_cast< ::efl::Composite_Model const*>(static_cast<void const*>(this)); }
inline efl::Composite_Model::operator ::efl::Composite_Model&() { return *static_cast< ::efl::Composite_Model*>(static_cast<void*>(this)); }
inline efl::Composite_Model::operator ::efl::Composite_Model const&() const { return *static_cast< ::efl::Composite_Model const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
