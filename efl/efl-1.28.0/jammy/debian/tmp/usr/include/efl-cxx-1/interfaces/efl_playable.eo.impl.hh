#ifndef EFL_PLAYABLE_IMPL_HH
#define EFL_PLAYABLE_IMPL_HH

#include "efl_playable.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Playable::length_get() const
{
    double __return_value =  ::efl_playable_length_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Playable::playable_get() const
{
    Eina_Bool __return_value =  ::efl_playable_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Playable::seekable_get() const
{
    Eina_Bool __return_value =  ::efl_playable_seekable_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<double>::type Playable::length_get() const
{
    double __return_value =  ::efl_playable_length_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Playable::playable_get() const
{
    Eina_Bool __return_value =  ::efl_playable_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Playable::seekable_get() const
{
    Eina_Bool __return_value =  ::efl_playable_seekable_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline efl::Playable::operator ::efl::Playable() const { return *static_cast< ::efl::Playable const*>(static_cast<void const*>(this)); }
inline efl::Playable::operator ::efl::Playable&() { return *static_cast< ::efl::Playable*>(static_cast<void*>(this)); }
inline efl::Playable::operator ::efl::Playable const&() const { return *static_cast< ::efl::Playable const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
