#ifndef EFL_CACHED_ITEM_IMPL_HH
#define EFL_CACHED_ITEM_IMPL_HH

#include "efl_cached_item.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace cached { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< unsigned int>::type Item::memory_size_get() const
{
    unsigned int __return_value =  ::efl_cached_item_memory_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace cached { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< unsigned int>::type Item::memory_size_get() const
{
    unsigned int __return_value =  ::efl_cached_item_memory_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
#endif
inline efl::cached::Item::operator ::efl::cached::Item() const { return *static_cast< ::efl::cached::Item const*>(static_cast<void const*>(this)); }
inline efl::cached::Item::operator ::efl::cached::Item&() { return *static_cast< ::efl::cached::Item*>(static_cast<void*>(this)); }
inline efl::cached::Item::operator ::efl::cached::Item const&() const { return *static_cast< ::efl::cached::Item const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
