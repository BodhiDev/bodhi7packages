#ifndef EFL_OBSERVER_IMPL_HH
#define EFL_OBSERVER_IMPL_HH

#include "efl_observer.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Observer::update( ::efl::eolian::in_traits< ::efl::Object>::type obs,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits<void*>::type data) const
{
     ::efl_observer_update(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(obs),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(data));
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Observer::update( ::efl::eolian::in_traits< ::efl::Object>::type obs,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits<void*>::type data) const
{
     ::efl_observer_update(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(obs),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(data));
}
#endif
inline efl::Observer::operator ::efl::Observer() const { return *static_cast< ::efl::Observer const*>(static_cast<void const*>(this)); }
inline efl::Observer::operator ::efl::Observer&() { return *static_cast< ::efl::Observer*>(static_cast<void*>(this)); }
inline efl::Observer::operator ::efl::Observer const&() const { return *static_cast< ::efl::Observer const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
