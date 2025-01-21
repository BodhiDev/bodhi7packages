#ifndef EFL_DUPLICATE_IMPL_HH
#define EFL_DUPLICATE_IMPL_HH

#include "efl_duplicate.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::Duplicate>::type Duplicate::duplicate() const
{
     ::Efl_Duplicate* __return_value =  ::efl_duplicate(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Duplicate>::type>(__return_value);
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::Duplicate>::type Duplicate::duplicate() const
{
     ::Efl_Duplicate* __return_value =  ::efl_duplicate(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Duplicate>::type>(__return_value);
}
#endif
inline efl::Duplicate::operator ::efl::Duplicate() const { return *static_cast< ::efl::Duplicate const*>(static_cast<void const*>(this)); }
inline efl::Duplicate::operator ::efl::Duplicate&() { return *static_cast< ::efl::Duplicate*>(static_cast<void*>(this)); }
inline efl::Duplicate::operator ::efl::Duplicate const&() const { return *static_cast< ::efl::Duplicate const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
