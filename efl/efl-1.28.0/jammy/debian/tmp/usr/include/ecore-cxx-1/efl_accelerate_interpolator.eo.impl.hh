#ifndef EFL_ACCELERATE_INTERPOLATOR_IMPL_HH
#define EFL_ACCELERATE_INTERPOLATOR_IMPL_HH

#include "efl_accelerate_interpolator.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<double>::type Accelerate_Interpolator::slope_get() const
{
    double __return_value =  ::efl_accelerate_interpolator_slope_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Accelerate_Interpolator::slope_set( ::efl::eolian::in_traits<double>::type slope) const
{
     ::efl_accelerate_interpolator_slope_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(slope));
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<double>::type Accelerate_Interpolator::slope_get() const
{
    double __return_value =  ::efl_accelerate_interpolator_slope_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Accelerate_Interpolator::slope_set( ::efl::eolian::in_traits<double>::type slope) const
{
     ::efl_accelerate_interpolator_slope_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(slope));
}
inline efl::Accelerate_Interpolator::operator ::efl::Accelerate_Interpolator() const { return *static_cast< ::efl::Accelerate_Interpolator const*>(static_cast<void const*>(this)); }
inline efl::Accelerate_Interpolator::operator ::efl::Accelerate_Interpolator&() { return *static_cast< ::efl::Accelerate_Interpolator*>(static_cast<void*>(this)); }
inline efl::Accelerate_Interpolator::operator ::efl::Accelerate_Interpolator const&() const { return *static_cast< ::efl::Accelerate_Interpolator const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
