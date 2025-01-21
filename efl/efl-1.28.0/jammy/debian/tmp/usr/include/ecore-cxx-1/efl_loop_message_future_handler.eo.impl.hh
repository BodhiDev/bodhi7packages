#ifndef EFL_LOOP_MESSAGE_FUTURE_HANDLER_IMPL_HH
#define EFL_LOOP_MESSAGE_FUTURE_HANDLER_IMPL_HH

#include "efl_loop_message_future_handler.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::Loop_Message_Future>::type Loop_Message_Future_Handler::message_type_add() const
{
     ::Efl_Loop_Message_Future* __return_value =  ::efl_loop_message_future_handler_message_type_add(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Loop_Message_Future>::type>(__return_value);
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::Loop_Message_Future>::type Loop_Message_Future_Handler::message_type_add() const
{
     ::Efl_Loop_Message_Future* __return_value =  ::efl_loop_message_future_handler_message_type_add(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Loop_Message_Future>::type>(__return_value);
}
#endif
inline efl::Loop_Message_Future_Handler::operator ::efl::Loop_Message_Future_Handler() const { return *static_cast< ::efl::Loop_Message_Future_Handler const*>(static_cast<void const*>(this)); }
inline efl::Loop_Message_Future_Handler::operator ::efl::Loop_Message_Future_Handler&() { return *static_cast< ::efl::Loop_Message_Future_Handler*>(static_cast<void*>(this)); }
inline efl::Loop_Message_Future_Handler::operator ::efl::Loop_Message_Future_Handler const&() const { return *static_cast< ::efl::Loop_Message_Future_Handler const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
