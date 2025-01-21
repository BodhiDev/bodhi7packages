#ifndef EFL_LOOP_TIMER_IMPL_HH
#define EFL_LOOP_TIMER_IMPL_HH

#include "efl_loop_timer.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<double>::type Loop_Timer::timer_interval_get() const
{
    double __return_value =  ::efl_loop_timer_interval_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Loop_Timer::timer_interval_set( ::efl::eolian::in_traits<double>::type in) const
{
     ::efl_loop_timer_interval_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(in));
}
inline ::efl::eolian::return_traits<double>::type Loop_Timer::time_pending_get() const
{
    double __return_value =  ::efl_loop_timer_time_pending_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Loop_Timer::timer_reset() const
{
     ::efl_loop_timer_reset(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Loop_Timer::timer_loop_reset() const
{
     ::efl_loop_timer_loop_reset(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Loop_Timer::timer_delay( ::efl::eolian::in_traits<double>::type add) const
{
     ::efl_loop_timer_delay(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(add));
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<double>::type Loop_Timer::timer_interval_get() const
{
    double __return_value =  ::efl_loop_timer_interval_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Loop_Timer::timer_interval_set( ::efl::eolian::in_traits<double>::type in) const
{
     ::efl_loop_timer_interval_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(in));
}
inline ::efl::eolian::return_traits<double>::type Loop_Timer::time_pending_get() const
{
    double __return_value =  ::efl_loop_timer_time_pending_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Loop_Timer::timer_reset() const
{
     ::efl_loop_timer_reset(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Loop_Timer::timer_loop_reset() const
{
     ::efl_loop_timer_loop_reset(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Loop_Timer::timer_delay( ::efl::eolian::in_traits<double>::type add) const
{
     ::efl_loop_timer_delay(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(add));
}
inline efl::Loop_Timer::operator ::efl::Loop_Timer() const { return *static_cast< ::efl::Loop_Timer const*>(static_cast<void const*>(this)); }
inline efl::Loop_Timer::operator ::efl::Loop_Timer&() { return *static_cast< ::efl::Loop_Timer*>(static_cast<void*>(this)); }
inline efl::Loop_Timer::operator ::efl::Loop_Timer const&() const { return *static_cast< ::efl::Loop_Timer const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
