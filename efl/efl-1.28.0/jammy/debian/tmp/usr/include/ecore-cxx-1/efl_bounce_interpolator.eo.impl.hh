#ifndef EFL_BOUNCE_INTERPOLATOR_IMPL_HH
#define EFL_BOUNCE_INTERPOLATOR_IMPL_HH

#include "efl_bounce_interpolator.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<int>::type Bounce_Interpolator::bounces_get() const
{
    int __return_value =  ::efl_bounce_interpolator_bounces_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Bounce_Interpolator::bounces_set( ::efl::eolian::in_traits<int>::type bounces) const
{
     ::efl_bounce_interpolator_bounces_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(bounces));
}
inline ::efl::eolian::return_traits<double>::type Bounce_Interpolator::rigidness_get() const
{
    double __return_value =  ::efl_bounce_interpolator_rigidness_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Bounce_Interpolator::rigidness_set( ::efl::eolian::in_traits<double>::type rigidness) const
{
     ::efl_bounce_interpolator_rigidness_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(rigidness));
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<int>::type Bounce_Interpolator::bounces_get() const
{
    int __return_value =  ::efl_bounce_interpolator_bounces_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Bounce_Interpolator::bounces_set( ::efl::eolian::in_traits<int>::type bounces) const
{
     ::efl_bounce_interpolator_bounces_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(bounces));
}
inline ::efl::eolian::return_traits<double>::type Bounce_Interpolator::rigidness_get() const
{
    double __return_value =  ::efl_bounce_interpolator_rigidness_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Bounce_Interpolator::rigidness_set( ::efl::eolian::in_traits<double>::type rigidness) const
{
     ::efl_bounce_interpolator_rigidness_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(rigidness));
}
inline efl::Bounce_Interpolator::operator ::efl::Bounce_Interpolator() const { return *static_cast< ::efl::Bounce_Interpolator const*>(static_cast<void const*>(this)); }
inline efl::Bounce_Interpolator::operator ::efl::Bounce_Interpolator&() { return *static_cast< ::efl::Bounce_Interpolator*>(static_cast<void*>(this)); }
inline efl::Bounce_Interpolator::operator ::efl::Bounce_Interpolator const&() const { return *static_cast< ::efl::Bounce_Interpolator const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
