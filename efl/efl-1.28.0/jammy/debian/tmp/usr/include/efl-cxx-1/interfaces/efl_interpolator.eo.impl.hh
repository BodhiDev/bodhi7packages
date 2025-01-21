#ifndef EFL_INTERPOLATOR_IMPL_HH
#define EFL_INTERPOLATOR_IMPL_HH

#include "efl_interpolator.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<double>::type Interpolator::interpolate( ::efl::eolian::in_traits<double>::type progress) const
{
    double __return_value =  ::efl_interpolator_interpolate(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(progress));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<double>::type Interpolator::interpolate( ::efl::eolian::in_traits<double>::type progress) const
{
    double __return_value =  ::efl_interpolator_interpolate(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(progress));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline efl::Interpolator::operator ::efl::Interpolator() const { return *static_cast< ::efl::Interpolator const*>(static_cast<void const*>(this)); }
inline efl::Interpolator::operator ::efl::Interpolator&() { return *static_cast< ::efl::Interpolator*>(static_cast<void*>(this)); }
inline efl::Interpolator::operator ::efl::Interpolator const&() const { return *static_cast< ::efl::Interpolator const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
