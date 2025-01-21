#ifndef EFL_LOOP_IMPL_HH
#define EFL_LOOP_IMPL_HH

#include "efl_loop.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<double>::type Loop::throttle_get() const
{
    double __return_value =  ::efl_loop_throttle_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Loop::throttle_set( ::efl::eolian::in_traits<double>::type amount) const
{
     ::efl_loop_throttle_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(amount));
}
inline ::efl::eolian::return_traits<double>::type Loop::time_get() const
{
    double __return_value =  ::efl_loop_time_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#ifdef EFL_LOOP_PROTECTED
inline ::efl::eolian::return_traits<void>::type Loop::time_set( ::efl::eolian::in_traits<double>::type timepoint) const
{
     ::efl_loop_time_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(timepoint));
}
#endif
inline ::efl::eolian::return_traits<void>::type Loop::iterate() const
{
     ::efl_loop_iterate(_eo_ptr());
}
inline ::efl::eolian::return_traits<int>::type Loop::iterate_may_block( ::efl::eolian::in_traits<int>::type may_block) const
{
    int __return_value =  ::efl_loop_iterate_may_block(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(may_block));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::value_view>::type Loop::begin() const
{
    Eina_Value * __return_value =  ::efl_loop_begin(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::value_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Loop::quit( ::efl::eolian::in_traits< ::efl::eina::value_view>::type exit_code) const
{
     ::efl_loop_quit(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Value,  ::efl::eolian::in_traits< ::efl::eina::value_view>::type>(exit_code));
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<double>::type Loop::throttle_get() const
{
    double __return_value =  ::efl_loop_throttle_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Loop::throttle_set( ::efl::eolian::in_traits<double>::type amount) const
{
     ::efl_loop_throttle_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(amount));
}
inline ::efl::eolian::return_traits<double>::type Loop::time_get() const
{
    double __return_value =  ::efl_loop_time_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#ifdef EFL_LOOP_PROTECTED
inline ::efl::eolian::return_traits<void>::type Loop::time_set( ::efl::eolian::in_traits<double>::type timepoint) const
{
     ::efl_loop_time_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(timepoint));
}
#endif
inline ::efl::eolian::return_traits<void>::type Loop::iterate() const
{
     ::efl_loop_iterate(_eo_ptr());
}
inline ::efl::eolian::return_traits<int>::type Loop::iterate_may_block( ::efl::eolian::in_traits<int>::type may_block) const
{
    int __return_value =  ::efl_loop_iterate_may_block(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(may_block));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::value_view>::type Loop::begin() const
{
    Eina_Value * __return_value =  ::efl_loop_begin(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::value_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Loop::quit( ::efl::eolian::in_traits< ::efl::eina::value_view>::type exit_code) const
{
     ::efl_loop_quit(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Value,  ::efl::eolian::in_traits< ::efl::eina::value_view>::type>(exit_code));
}
inline efl::Loop::operator ::efl::Loop() const { return *static_cast< ::efl::Loop const*>(static_cast<void const*>(this)); }
inline efl::Loop::operator ::efl::Loop&() { return *static_cast< ::efl::Loop*>(static_cast<void*>(this)); }
inline efl::Loop::operator ::efl::Loop const&() const { return *static_cast< ::efl::Loop const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
