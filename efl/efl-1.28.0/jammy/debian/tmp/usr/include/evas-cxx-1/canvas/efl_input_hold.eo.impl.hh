#ifndef EFL_INPUT_HOLD_IMPL_HH
#define EFL_INPUT_HOLD_IMPL_HH

#include "efl_input_hold.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace input { 
inline ::efl::eolian::return_traits<bool>::type Hold::input_hold_get() const
{
    Eina_Bool __return_value =  ::efl_input_hold_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Hold::input_hold_set( ::efl::eolian::in_traits<bool>::type val) const
{
     ::efl_input_hold_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(val));
}
} } 
namespace eo_cxx {
namespace efl { namespace input { 
inline ::efl::eolian::return_traits<bool>::type Hold::input_hold_get() const
{
    Eina_Bool __return_value =  ::efl_input_hold_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Hold::input_hold_set( ::efl::eolian::in_traits<bool>::type val) const
{
     ::efl_input_hold_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(val));
}
inline efl::input::Hold::operator ::efl::input::Hold() const { return *static_cast< ::efl::input::Hold const*>(static_cast<void const*>(this)); }
inline efl::input::Hold::operator ::efl::input::Hold&() { return *static_cast< ::efl::input::Hold*>(static_cast<void*>(this)); }
inline efl::input::Hold::operator ::efl::input::Hold const&() const { return *static_cast< ::efl::input::Hold const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
