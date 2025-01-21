#ifndef EFL_INPUT_FOCUS_IMPL_HH
#define EFL_INPUT_FOCUS_IMPL_HH

#include "efl_input_focus.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace input { 
inline ::efl::eolian::return_traits< ::efl::Object>::type Focus::object_get() const
{
     ::Efl_Object* __return_value =  ::efl_input_focus_object_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Focus::object_set( ::efl::eolian::in_traits< ::efl::Object>::type object) const
{
     ::efl_input_focus_object_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(object));
}
} } 
namespace eo_cxx {
namespace efl { namespace input { 
inline ::efl::eolian::return_traits< ::efl::Object>::type Focus::object_get() const
{
     ::Efl_Object* __return_value =  ::efl_input_focus_object_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Focus::object_set( ::efl::eolian::in_traits< ::efl::Object>::type object) const
{
     ::efl_input_focus_object_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(object));
}
inline efl::input::Focus::operator ::efl::input::Focus() const { return *static_cast< ::efl::input::Focus const*>(static_cast<void const*>(this)); }
inline efl::input::Focus::operator ::efl::input::Focus&() { return *static_cast< ::efl::input::Focus*>(static_cast<void*>(this)); }
inline efl::input::Focus::operator ::efl::input::Focus const&() const { return *static_cast< ::efl::input::Focus const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
