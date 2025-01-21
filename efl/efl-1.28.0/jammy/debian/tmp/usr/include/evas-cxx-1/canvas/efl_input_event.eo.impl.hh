#ifndef EFL_INPUT_EVENT_IMPL_HH
#define EFL_INPUT_EVENT_IMPL_HH

#include "efl_input_event.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace input { 
inline ::efl::eolian::return_traits<double>::type Event::timestamp_get() const
{
    double __return_value =  ::efl_input_timestamp_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Event::timestamp_set( ::efl::eolian::in_traits<double>::type ms) const
{
     ::efl_input_timestamp_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ms));
}
inline ::efl::eolian::return_traits< ::efl::input::Device>::type Event::device_get() const
{
     ::Efl_Input_Device* __return_value =  ::efl_input_device_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::input::Device>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Event::device_set( ::efl::eolian::in_traits< ::efl::input::Device>::type dev) const
{
     ::efl_input_device_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(dev));
}
inline ::efl::eolian::return_traits<Efl_Input_Flags>::type Event::event_flags_get() const
{
    Efl_Input_Flags __return_value =  ::efl_input_event_flags_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Flags>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Event::event_flags_set( ::efl::eolian::in_traits<Efl_Input_Flags>::type flags) const
{
     ::efl_input_event_flags_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Flags,  ::efl::eolian::in_traits<Efl_Input_Flags>::type>(flags));
}
inline ::efl::eolian::return_traits<bool>::type Event::processed_get() const
{
    Eina_Bool __return_value =  ::efl_input_processed_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Event::processed_set( ::efl::eolian::in_traits<bool>::type val) const
{
     ::efl_input_processed_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(val));
}
inline ::efl::eolian::return_traits<bool>::type Event::scrolling_get() const
{
    Eina_Bool __return_value =  ::efl_input_scrolling_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Event::scrolling_set( ::efl::eolian::in_traits<bool>::type val) const
{
     ::efl_input_scrolling_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(val));
}
inline ::efl::eolian::return_traits<bool>::type Event::fake_get() const
{
    Eina_Bool __return_value =  ::efl_input_fake_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Event::reset() const
{
     ::efl_input_reset(_eo_ptr());
}
} } 
namespace eo_cxx {
namespace efl { namespace input { 
inline ::efl::eolian::return_traits<double>::type Event::timestamp_get() const
{
    double __return_value =  ::efl_input_timestamp_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Event::timestamp_set( ::efl::eolian::in_traits<double>::type ms) const
{
     ::efl_input_timestamp_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ms));
}
inline ::efl::eolian::return_traits< ::efl::input::Device>::type Event::device_get() const
{
     ::Efl_Input_Device* __return_value =  ::efl_input_device_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::input::Device>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Event::device_set( ::efl::eolian::in_traits< ::efl::input::Device>::type dev) const
{
     ::efl_input_device_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(dev));
}
inline ::efl::eolian::return_traits<Efl_Input_Flags>::type Event::event_flags_get() const
{
    Efl_Input_Flags __return_value =  ::efl_input_event_flags_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Flags>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Event::event_flags_set( ::efl::eolian::in_traits<Efl_Input_Flags>::type flags) const
{
     ::efl_input_event_flags_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Flags,  ::efl::eolian::in_traits<Efl_Input_Flags>::type>(flags));
}
inline ::efl::eolian::return_traits<bool>::type Event::processed_get() const
{
    Eina_Bool __return_value =  ::efl_input_processed_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Event::processed_set( ::efl::eolian::in_traits<bool>::type val) const
{
     ::efl_input_processed_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(val));
}
inline ::efl::eolian::return_traits<bool>::type Event::scrolling_get() const
{
    Eina_Bool __return_value =  ::efl_input_scrolling_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Event::scrolling_set( ::efl::eolian::in_traits<bool>::type val) const
{
     ::efl_input_scrolling_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(val));
}
inline ::efl::eolian::return_traits<bool>::type Event::fake_get() const
{
    Eina_Bool __return_value =  ::efl_input_fake_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Event::reset() const
{
     ::efl_input_reset(_eo_ptr());
}
inline efl::input::Event::operator ::efl::input::Event() const { return *static_cast< ::efl::input::Event const*>(static_cast<void const*>(this)); }
inline efl::input::Event::operator ::efl::input::Event&() { return *static_cast< ::efl::input::Event*>(static_cast<void*>(this)); }
inline efl::input::Event::operator ::efl::input::Event const&() const { return *static_cast< ::efl::input::Event const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
