#ifndef EFL_SPRING_INTERPOLATOR_IMPL_HH
#define EFL_SPRING_INTERPOLATOR_IMPL_HH

#include "efl_spring_interpolator.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<double>::type Spring_Interpolator::decay_get() const
{
    double __return_value =  ::efl_spring_interpolator_decay_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Spring_Interpolator::decay_set( ::efl::eolian::in_traits<double>::type decay) const
{
     ::efl_spring_interpolator_decay_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(decay));
}
inline ::efl::eolian::return_traits<int>::type Spring_Interpolator::oscillations_get() const
{
    int __return_value =  ::efl_spring_interpolator_oscillations_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Spring_Interpolator::oscillations_set( ::efl::eolian::in_traits<int>::type oscillations) const
{
     ::efl_spring_interpolator_oscillations_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(oscillations));
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<double>::type Spring_Interpolator::decay_get() const
{
    double __return_value =  ::efl_spring_interpolator_decay_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Spring_Interpolator::decay_set( ::efl::eolian::in_traits<double>::type decay) const
{
     ::efl_spring_interpolator_decay_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(decay));
}
inline ::efl::eolian::return_traits<int>::type Spring_Interpolator::oscillations_get() const
{
    int __return_value =  ::efl_spring_interpolator_oscillations_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Spring_Interpolator::oscillations_set( ::efl::eolian::in_traits<int>::type oscillations) const
{
     ::efl_spring_interpolator_oscillations_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(oscillations));
}
inline efl::Spring_Interpolator::operator ::efl::Spring_Interpolator() const { return *static_cast< ::efl::Spring_Interpolator const*>(static_cast<void const*>(this)); }
inline efl::Spring_Interpolator::operator ::efl::Spring_Interpolator&() { return *static_cast< ::efl::Spring_Interpolator*>(static_cast<void*>(this)); }
inline efl::Spring_Interpolator::operator ::efl::Spring_Interpolator const&() const { return *static_cast< ::efl::Spring_Interpolator const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
