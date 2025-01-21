#ifndef EFL_UI_FOCUS_UTIL_IMPL_HH
#define EFL_UI_FOCUS_UTIL_IMPL_HH

#include "efl_ui_focus_util.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { namespace focus { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Util::focus( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type focus_elem)
{
     ::efl_ui_focus_util_focus(
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(focus_elem));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type Util::active_manager( ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type manager)
{
     ::Efl_Ui_Focus_Manager* __return_value =  ::efl_ui_focus_util_active_manager(
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Manager*,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type>(manager));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Focus_Direction>::type Util::direction_complement( ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type dir)
{
    Efl_Ui_Focus_Direction __return_value =  ::efl_ui_focus_util_direction_complement(
         ::efl::eolian::convert_to_c<Efl_Ui_Focus_Direction,  ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type>(dir));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Focus_Direction>::type>(__return_value);
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace ui { namespace focus { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Util::focus( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type focus_elem)
{
     ::efl_ui_focus_util_focus(
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(focus_elem));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type Util::active_manager( ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type manager)
{
     ::Efl_Ui_Focus_Manager* __return_value =  ::efl_ui_focus_util_active_manager(
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Manager*,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type>(manager));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Focus_Direction>::type Util::direction_complement( ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type dir)
{
    Efl_Ui_Focus_Direction __return_value =  ::efl_ui_focus_util_direction_complement(
         ::efl::eolian::convert_to_c<Efl_Ui_Focus_Direction,  ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type>(dir));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Focus_Direction>::type>(__return_value);
}
#endif
inline efl::ui::focus::Util::operator ::efl::ui::focus::Util() const { return *static_cast< ::efl::ui::focus::Util const*>(static_cast<void const*>(this)); }
inline efl::ui::focus::Util::operator ::efl::ui::focus::Util&() { return *static_cast< ::efl::ui::focus::Util*>(static_cast<void*>(this)); }
inline efl::ui::focus::Util::operator ::efl::ui::focus::Util const&() const { return *static_cast< ::efl::ui::focus::Util const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
