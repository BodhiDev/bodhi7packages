#ifndef EFL_OBSERVABLE_IMPL_HH
#define EFL_OBSERVABLE_IMPL_HH

#include "efl_observable.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Observable::observer_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::Observer>::type obs) const
{
     ::efl_observable_observer_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key),
         ::efl::eolian::convert_to_c< ::Efl_Observer*,  ::efl::eolian::in_traits< ::efl::Observer>::type>(obs));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Observable::observer_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::Observer>::type obs) const
{
     ::efl_observable_observer_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key),
         ::efl::eolian::convert_to_c< ::Efl_Observer*,  ::efl::eolian::in_traits< ::efl::Observer>::type>(obs));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Observable::observer_clean( ::efl::eolian::in_traits< ::efl::Observer>::type obs) const
{
     ::efl_observable_observer_clean(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Observer*,  ::efl::eolian::in_traits< ::efl::Observer>::type>(obs));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::Observer>>::type Observable::observers_iterator_new( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const
{
    Eina_Iterator * __return_value =  ::efl_observable_observers_iterator_new(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::Observer>>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Observable::observers_update( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits<void*>::type data) const
{
     ::efl_observable_observers_update(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(data));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::iterator<Efl_Observable_Tuple>>::type Observable::iterator_tuple_new() const
{
    Eina_Iterator * __return_value =  ::efl_observable_iterator_tuple_new(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator<Efl_Observable_Tuple>>::type>(__return_value);
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Observable::observer_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::Observer>::type obs) const
{
     ::efl_observable_observer_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key),
         ::efl::eolian::convert_to_c< ::Efl_Observer*,  ::efl::eolian::in_traits< ::efl::Observer>::type>(obs));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Observable::observer_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::Observer>::type obs) const
{
     ::efl_observable_observer_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key),
         ::efl::eolian::convert_to_c< ::Efl_Observer*,  ::efl::eolian::in_traits< ::efl::Observer>::type>(obs));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Observable::observer_clean( ::efl::eolian::in_traits< ::efl::Observer>::type obs) const
{
     ::efl_observable_observer_clean(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Observer*,  ::efl::eolian::in_traits< ::efl::Observer>::type>(obs));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::Observer>>::type Observable::observers_iterator_new( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const
{
    Eina_Iterator * __return_value =  ::efl_observable_observers_iterator_new(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::Observer>>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Observable::observers_update( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits<void*>::type data) const
{
     ::efl_observable_observers_update(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(data));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::iterator<Efl_Observable_Tuple>>::type Observable::iterator_tuple_new() const
{
    Eina_Iterator * __return_value =  ::efl_observable_iterator_tuple_new(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator<Efl_Observable_Tuple>>::type>(__return_value);
}
#endif
inline efl::Observable::operator ::efl::Observable() const { return *static_cast< ::efl::Observable const*>(static_cast<void const*>(this)); }
inline efl::Observable::operator ::efl::Observable&() { return *static_cast< ::efl::Observable*>(static_cast<void*>(this)); }
inline efl::Observable::operator ::efl::Observable const&() const { return *static_cast< ::efl::Observable const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
