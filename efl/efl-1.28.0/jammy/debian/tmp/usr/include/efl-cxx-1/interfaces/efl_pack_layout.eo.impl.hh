#ifndef EFL_PACK_LAYOUT_IMPL_HH
#define EFL_PACK_LAYOUT_IMPL_HH

#include "efl_pack_layout.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<void>::type Pack_Layout::layout_request() const
{
     ::efl_pack_layout_request(_eo_ptr());
}
#ifdef EFL_PACK_LAYOUT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Pack_Layout::layout_update() const
{
     ::efl_pack_layout_update(_eo_ptr());
}
#endif
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<void>::type Pack_Layout::layout_request() const
{
     ::efl_pack_layout_request(_eo_ptr());
}
#ifdef EFL_PACK_LAYOUT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Pack_Layout::layout_update() const
{
     ::efl_pack_layout_update(_eo_ptr());
}
#endif
inline efl::Pack_Layout::operator ::efl::Pack_Layout() const { return *static_cast< ::efl::Pack_Layout const*>(static_cast<void const*>(this)); }
inline efl::Pack_Layout::operator ::efl::Pack_Layout&() { return *static_cast< ::efl::Pack_Layout*>(static_cast<void*>(this)); }
inline efl::Pack_Layout::operator ::efl::Pack_Layout const&() const { return *static_cast< ::efl::Pack_Layout const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
