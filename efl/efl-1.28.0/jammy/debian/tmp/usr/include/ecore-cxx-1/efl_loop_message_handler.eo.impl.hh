#ifndef EFL_LOOP_MESSAGE_HANDLER_IMPL_HH
#define EFL_LOOP_MESSAGE_HANDLER_IMPL_HH

#include "efl_loop_message_handler.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::Loop_Message>::type Loop_Message_Handler::message_add() const
{
     ::Efl_Loop_Message* __return_value =  ::efl_loop_message_handler_message_add(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Loop_Message>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Loop_Message_Handler::message_send( ::efl::eolian::in_traits< ::efl::Loop_Message>::type message) const
{
     ::efl_loop_message_handler_message_send(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Loop_Message*,  ::efl::eolian::in_traits< ::efl::Loop_Message>::type>(message));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Loop_Message_Handler::message_call( ::efl::eolian::in_traits< ::efl::Loop_Message>::type message) const
{
     ::efl_loop_message_handler_message_call(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Loop_Message*,  ::efl::eolian::in_traits< ::efl::Loop_Message>::type>(message));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Loop_Message_Handler::message_clear() const
{
    Eina_Bool __return_value =  ::efl_loop_message_handler_message_clear(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::Loop_Message>::type Loop_Message_Handler::message_add() const
{
     ::Efl_Loop_Message* __return_value =  ::efl_loop_message_handler_message_add(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Loop_Message>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Loop_Message_Handler::message_send( ::efl::eolian::in_traits< ::efl::Loop_Message>::type message) const
{
     ::efl_loop_message_handler_message_send(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Loop_Message*,  ::efl::eolian::in_traits< ::efl::Loop_Message>::type>(message));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Loop_Message_Handler::message_call( ::efl::eolian::in_traits< ::efl::Loop_Message>::type message) const
{
     ::efl_loop_message_handler_message_call(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Loop_Message*,  ::efl::eolian::in_traits< ::efl::Loop_Message>::type>(message));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Loop_Message_Handler::message_clear() const
{
    Eina_Bool __return_value =  ::efl_loop_message_handler_message_clear(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline efl::Loop_Message_Handler::operator ::efl::Loop_Message_Handler() const { return *static_cast< ::efl::Loop_Message_Handler const*>(static_cast<void const*>(this)); }
inline efl::Loop_Message_Handler::operator ::efl::Loop_Message_Handler&() { return *static_cast< ::efl::Loop_Message_Handler*>(static_cast<void*>(this)); }
inline efl::Loop_Message_Handler::operator ::efl::Loop_Message_Handler const&() const { return *static_cast< ::efl::Loop_Message_Handler const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
