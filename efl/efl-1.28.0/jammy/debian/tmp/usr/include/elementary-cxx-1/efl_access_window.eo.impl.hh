#ifndef EFL_ACCESS_WINDOW_IMPL_HH
#define EFL_ACCESS_WINDOW_IMPL_HH

#include "efl_access_window.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace access { 
} } 
namespace eo_cxx {
namespace efl { namespace access { 
inline efl::access::Window::operator ::efl::access::Window() const { return *static_cast< ::efl::access::Window const*>(static_cast<void const*>(this)); }
inline efl::access::Window::operator ::efl::access::Window&() { return *static_cast< ::efl::access::Window*>(static_cast<void*>(this)); }
inline efl::access::Window::operator ::efl::access::Window const&() const { return *static_cast< ::efl::access::Window const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
