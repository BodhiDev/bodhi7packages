#ifndef EFL_LOOP_MESSAGE_FUTURE_IMPL_HH
#define EFL_LOOP_MESSAGE_FUTURE_IMPL_HH

#include "efl_loop_message_future.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void*>::type Loop_Message_Future::data_get() const
{
    void * __return_value =  ::efl_loop_message_future_data_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<void*>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Loop_Message_Future::data_set( ::efl::eolian::in_traits<void*>::type data) const
{
     ::efl_loop_message_future_data_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(data));
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void*>::type Loop_Message_Future::data_get() const
{
    void * __return_value =  ::efl_loop_message_future_data_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<void*>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Loop_Message_Future::data_set( ::efl::eolian::in_traits<void*>::type data) const
{
     ::efl_loop_message_future_data_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(data));
}
#endif
inline efl::Loop_Message_Future::operator ::efl::Loop_Message_Future() const { return *static_cast< ::efl::Loop_Message_Future const*>(static_cast<void const*>(this)); }
inline efl::Loop_Message_Future::operator ::efl::Loop_Message_Future&() { return *static_cast< ::efl::Loop_Message_Future*>(static_cast<void*>(this)); }
inline efl::Loop_Message_Future::operator ::efl::Loop_Message_Future const&() const { return *static_cast< ::efl::Loop_Message_Future const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
