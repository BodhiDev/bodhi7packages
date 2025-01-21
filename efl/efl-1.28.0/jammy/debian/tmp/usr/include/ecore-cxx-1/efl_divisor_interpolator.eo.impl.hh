#ifndef EFL_DIVISOR_INTERPOLATOR_IMPL_HH
#define EFL_DIVISOR_INTERPOLATOR_IMPL_HH

#include "efl_divisor_interpolator.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Divisor_Interpolator::divisor_get() const
{
    double __return_value =  ::efl_divisor_interpolator_divisor_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Divisor_Interpolator::divisor_set( ::efl::eolian::in_traits<double>::type divisor) const
{
     ::efl_divisor_interpolator_divisor_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(divisor));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Divisor_Interpolator::power_get() const
{
    int __return_value =  ::efl_divisor_interpolator_power_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Divisor_Interpolator::power_set( ::efl::eolian::in_traits<int>::type power) const
{
     ::efl_divisor_interpolator_power_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(power));
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Divisor_Interpolator::divisor_get() const
{
    double __return_value =  ::efl_divisor_interpolator_divisor_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Divisor_Interpolator::divisor_set( ::efl::eolian::in_traits<double>::type divisor) const
{
     ::efl_divisor_interpolator_divisor_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(divisor));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Divisor_Interpolator::power_get() const
{
    int __return_value =  ::efl_divisor_interpolator_power_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Divisor_Interpolator::power_set( ::efl::eolian::in_traits<int>::type power) const
{
     ::efl_divisor_interpolator_power_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(power));
}
#endif
inline efl::Divisor_Interpolator::operator ::efl::Divisor_Interpolator() const { return *static_cast< ::efl::Divisor_Interpolator const*>(static_cast<void const*>(this)); }
inline efl::Divisor_Interpolator::operator ::efl::Divisor_Interpolator&() { return *static_cast< ::efl::Divisor_Interpolator*>(static_cast<void*>(this)); }
inline efl::Divisor_Interpolator::operator ::efl::Divisor_Interpolator const&() const { return *static_cast< ::efl::Divisor_Interpolator const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
