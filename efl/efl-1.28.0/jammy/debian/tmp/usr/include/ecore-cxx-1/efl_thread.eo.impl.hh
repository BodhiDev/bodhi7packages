#ifndef EFL_THREAD_IMPL_HH
#define EFL_THREAD_IMPL_HH

#include "efl_thread.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
} 
namespace eo_cxx {
namespace efl { 
inline efl::Thread::operator ::efl::Thread() const { return *static_cast< ::efl::Thread const*>(static_cast<void const*>(this)); }
inline efl::Thread::operator ::efl::Thread&() { return *static_cast< ::efl::Thread*>(static_cast<void*>(this)); }
inline efl::Thread::operator ::efl::Thread const&() const { return *static_cast< ::efl::Thread const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
