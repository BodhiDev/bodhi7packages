#ifndef EFL_CANVAS_EVENT_GRABBER_IMPL_HH
#define EFL_CANVAS_EVENT_GRABBER_IMPL_HH

#include "efl_canvas_event_grabber.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Event_Grabber::freeze_when_visible_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_event_grabber_freeze_when_visible_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Event_Grabber::freeze_when_visible_set( ::efl::eolian::in_traits<bool>::type set) const
{
     ::efl_canvas_event_grabber_freeze_when_visible_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(set));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Event_Grabber::freeze_when_visible_get() const
{
    Eina_Bool __return_value =  ::efl_canvas_event_grabber_freeze_when_visible_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Event_Grabber::freeze_when_visible_set( ::efl::eolian::in_traits<bool>::type set) const
{
     ::efl_canvas_event_grabber_freeze_when_visible_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(set));
}
#endif
inline efl::canvas::Event_Grabber::operator ::efl::canvas::Event_Grabber() const { return *static_cast< ::efl::canvas::Event_Grabber const*>(static_cast<void const*>(this)); }
inline efl::canvas::Event_Grabber::operator ::efl::canvas::Event_Grabber&() { return *static_cast< ::efl::canvas::Event_Grabber*>(static_cast<void*>(this)); }
inline efl::canvas::Event_Grabber::operator ::efl::canvas::Event_Grabber const&() const { return *static_cast< ::efl::canvas::Event_Grabber const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
