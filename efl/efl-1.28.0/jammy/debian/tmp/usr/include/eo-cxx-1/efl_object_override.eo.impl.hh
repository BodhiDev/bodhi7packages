#ifndef EFL_OBJECT_OVERRIDE_IMPL_HH
#define EFL_OBJECT_OVERRIDE_IMPL_HH

#include "efl_object_override.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
} 
namespace eo_cxx {
namespace efl { 
inline efl::Object_Override::operator ::efl::Object_Override() const { return *static_cast< ::efl::Object_Override const*>(static_cast<void const*>(this)); }
inline efl::Object_Override::operator ::efl::Object_Override&() { return *static_cast< ::efl::Object_Override*>(static_cast<void*>(this)); }
inline efl::Object_Override::operator ::efl::Object_Override const&() const { return *static_cast< ::efl::Object_Override const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
