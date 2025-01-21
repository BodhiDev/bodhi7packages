#ifndef EFL_DECELERATE_INTERPOLATOR_IMPL_HH
#define EFL_DECELERATE_INTERPOLATOR_IMPL_HH

#include "efl_decelerate_interpolator.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<double>::type Decelerate_Interpolator::slope_get() const
{
    double __return_value =  ::efl_decelerate_interpolator_slope_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Decelerate_Interpolator::slope_set( ::efl::eolian::in_traits<double>::type slope) const
{
     ::efl_decelerate_interpolator_slope_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(slope));
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<double>::type Decelerate_Interpolator::slope_get() const
{
    double __return_value =  ::efl_decelerate_interpolator_slope_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Decelerate_Interpolator::slope_set( ::efl::eolian::in_traits<double>::type slope) const
{
     ::efl_decelerate_interpolator_slope_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(slope));
}
inline efl::Decelerate_Interpolator::operator ::efl::Decelerate_Interpolator() const { return *static_cast< ::efl::Decelerate_Interpolator const*>(static_cast<void const*>(this)); }
inline efl::Decelerate_Interpolator::operator ::efl::Decelerate_Interpolator&() { return *static_cast< ::efl::Decelerate_Interpolator*>(static_cast<void*>(this)); }
inline efl::Decelerate_Interpolator::operator ::efl::Decelerate_Interpolator const&() const { return *static_cast< ::efl::Decelerate_Interpolator const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
