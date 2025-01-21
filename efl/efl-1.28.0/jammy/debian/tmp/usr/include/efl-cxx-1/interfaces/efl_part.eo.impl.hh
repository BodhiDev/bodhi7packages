#ifndef EFL_PART_IMPL_HH
#define EFL_PART_IMPL_HH

#include "efl_part.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_PART_PROTECTED
inline ::efl::eolian::return_traits< ::efl::Object>::type Part::part_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
     ::Efl_Object* __return_value =  ::efl_part_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_PART_PROTECTED
inline ::efl::eolian::return_traits< ::efl::Object>::type Part::part_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
     ::Efl_Object* __return_value =  ::efl_part_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
#endif
inline efl::Part::operator ::efl::Part() const { return *static_cast< ::efl::Part const*>(static_cast<void const*>(this)); }
inline efl::Part::operator ::efl::Part&() { return *static_cast< ::efl::Part*>(static_cast<void*>(this)); }
inline efl::Part::operator ::efl::Part const&() const { return *static_cast< ::efl::Part const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
