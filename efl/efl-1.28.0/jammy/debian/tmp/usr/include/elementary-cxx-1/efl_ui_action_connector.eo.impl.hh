#ifndef EFL_UI_ACTION_CONNECTOR_IMPL_HH
#define EFL_UI_ACTION_CONNECTOR_IMPL_HH

#include "efl_ui_action_connector.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Action_Connector::bind_clickable_to_theme( ::efl::eolian::in_traits< ::efl::canvas::Layout>::type object,  ::efl::eolian::in_traits< ::efl::input::Clickable>::type clickable)
{
     ::efl_ui_action_connector_bind_clickable_to_theme(
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Layout*,  ::efl::eolian::in_traits< ::efl::canvas::Layout>::type>(object),
         ::efl::eolian::convert_to_c< ::Efl_Input_Clickable*,  ::efl::eolian::in_traits< ::efl::input::Clickable>::type>(clickable));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Action_Connector::bind_clickable_to_object( ::efl::eolian::in_traits< ::efl::input::Interface>::type object,  ::efl::eolian::in_traits< ::efl::input::Clickable>::type clickable)
{
     ::efl_ui_action_connector_bind_clickable_to_object(
         ::efl::eolian::convert_to_c< ::Efl_Input_Interface*,  ::efl::eolian::in_traits< ::efl::input::Interface>::type>(object),
         ::efl::eolian::convert_to_c< ::Efl_Input_Clickable*,  ::efl::eolian::in_traits< ::efl::input::Clickable>::type>(clickable));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Action_Connector::bind_clickable_to_theme( ::efl::eolian::in_traits< ::efl::canvas::Layout>::type object,  ::efl::eolian::in_traits< ::efl::input::Clickable>::type clickable)
{
     ::efl_ui_action_connector_bind_clickable_to_theme(
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Layout*,  ::efl::eolian::in_traits< ::efl::canvas::Layout>::type>(object),
         ::efl::eolian::convert_to_c< ::Efl_Input_Clickable*,  ::efl::eolian::in_traits< ::efl::input::Clickable>::type>(clickable));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Action_Connector::bind_clickable_to_object( ::efl::eolian::in_traits< ::efl::input::Interface>::type object,  ::efl::eolian::in_traits< ::efl::input::Clickable>::type clickable)
{
     ::efl_ui_action_connector_bind_clickable_to_object(
         ::efl::eolian::convert_to_c< ::Efl_Input_Interface*,  ::efl::eolian::in_traits< ::efl::input::Interface>::type>(object),
         ::efl::eolian::convert_to_c< ::Efl_Input_Clickable*,  ::efl::eolian::in_traits< ::efl::input::Clickable>::type>(clickable));
}
#endif
inline efl::ui::Action_Connector::operator ::efl::ui::Action_Connector() const { return *static_cast< ::efl::ui::Action_Connector const*>(static_cast<void const*>(this)); }
inline efl::ui::Action_Connector::operator ::efl::ui::Action_Connector&() { return *static_cast< ::efl::ui::Action_Connector*>(static_cast<void*>(this)); }
inline efl::ui::Action_Connector::operator ::efl::ui::Action_Connector const&() const { return *static_cast< ::efl::ui::Action_Connector const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
