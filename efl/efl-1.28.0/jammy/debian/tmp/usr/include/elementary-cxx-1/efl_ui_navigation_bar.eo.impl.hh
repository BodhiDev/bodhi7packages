#ifndef EFL_UI_NAVIGATION_BAR_IMPL_HH
#define EFL_UI_NAVIGATION_BAR_IMPL_HH

#include "efl_ui_navigation_bar.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Navigation_Bar_Part_Back_Button>::type Navigation_Bar::back_button() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "back_button");
    return ::efl::ui::Navigation_Bar_Part_Back_Button{__return_value};
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Navigation_Bar_Part_Back_Button>::type Navigation_Bar::back_button() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "back_button");
    return ::efl::ui::Navigation_Bar_Part_Back_Button{__return_value};
}
#endif
inline efl::ui::Navigation_Bar::operator ::efl::ui::Navigation_Bar() const { return *static_cast< ::efl::ui::Navigation_Bar const*>(static_cast<void const*>(this)); }
inline efl::ui::Navigation_Bar::operator ::efl::ui::Navigation_Bar&() { return *static_cast< ::efl::ui::Navigation_Bar*>(static_cast<void*>(this)); }
inline efl::ui::Navigation_Bar::operator ::efl::ui::Navigation_Bar const&() const { return *static_cast< ::efl::ui::Navigation_Bar const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
