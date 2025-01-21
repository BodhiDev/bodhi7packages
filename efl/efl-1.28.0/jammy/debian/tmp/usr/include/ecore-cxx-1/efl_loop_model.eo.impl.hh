#ifndef EFL_LOOP_MODEL_IMPL_HH
#define EFL_LOOP_MODEL_IMPL_HH

#include "efl_loop_model.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<void>::type Loop_Model::volatile_make() const
{
     ::efl_loop_model_volatile_make(_eo_ptr());
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<void>::type Loop_Model::volatile_make() const
{
     ::efl_loop_model_volatile_make(_eo_ptr());
}
inline efl::Loop_Model::operator ::efl::Loop_Model() const { return *static_cast< ::efl::Loop_Model const*>(static_cast<void const*>(this)); }
inline efl::Loop_Model::operator ::efl::Loop_Model&() { return *static_cast< ::efl::Loop_Model*>(static_cast<void*>(this)); }
inline efl::Loop_Model::operator ::efl::Loop_Model const&() const { return *static_cast< ::efl::Loop_Model const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
