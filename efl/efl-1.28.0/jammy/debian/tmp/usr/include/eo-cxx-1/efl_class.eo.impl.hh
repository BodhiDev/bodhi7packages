#ifndef EFL_CLASS_IMPL_HH
#define EFL_CLASS_IMPL_HH

#include "efl_class.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
} 
namespace eo_cxx {
namespace efl { 
inline efl::Class::operator ::efl::Class() const { return *static_cast< ::efl::Class const*>(static_cast<void const*>(this)); }
inline efl::Class::operator ::efl::Class&() { return *static_cast< ::efl::Class*>(static_cast<void*>(this)); }
inline efl::Class::operator ::efl::Class const&() const { return *static_cast< ::efl::Class const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
