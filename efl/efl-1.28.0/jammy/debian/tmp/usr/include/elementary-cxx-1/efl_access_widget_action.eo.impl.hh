#ifndef EFL_ACCESS_WIDGET_ACTION_IMPL_HH
#define EFL_ACCESS_WIDGET_ACTION_IMPL_HH

#include "efl_access_widget_action.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace access { namespace widget { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_WIDGET_ACTION_PROTECTED
inline ::efl::eolian::return_traits<Efl_Access_Action_Data const*>::type Action::elm_actions_get() const
{
    const Efl_Access_Action_Data * __return_value =  ::efl_access_widget_action_elm_actions_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Access_Action_Data const*>::type>(__return_value);
}
#endif
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace access { namespace widget { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_WIDGET_ACTION_PROTECTED
inline ::efl::eolian::return_traits<Efl_Access_Action_Data const*>::type Action::elm_actions_get() const
{
    const Efl_Access_Action_Data * __return_value =  ::efl_access_widget_action_elm_actions_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Access_Action_Data const*>::type>(__return_value);
}
#endif
#endif
inline efl::access::widget::Action::operator ::efl::access::widget::Action() const { return *static_cast< ::efl::access::widget::Action const*>(static_cast<void const*>(this)); }
inline efl::access::widget::Action::operator ::efl::access::widget::Action&() { return *static_cast< ::efl::access::widget::Action*>(static_cast<void*>(this)); }
inline efl::access::widget::Action::operator ::efl::access::widget::Action const&() const { return *static_cast< ::efl::access::widget::Action const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
