#ifndef EFL_UI_TAB_PAGE_IMPL_HH
#define EFL_UI_TAB_PAGE_IMPL_HH

#include "efl_ui_tab_page.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::Tab_Bar_Default_Item>::type Tab_Page::tab_bar_item_get() const
{
     ::Efl_Ui_Tab_Bar_Default_Item* __return_value =  ::efl_ui_tab_page_tab_bar_item_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Tab_Bar_Default_Item>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::Tab_Bar_Default_Item>::type Tab_Page::tab_bar_item_get() const
{
     ::Efl_Ui_Tab_Bar_Default_Item* __return_value =  ::efl_ui_tab_page_tab_bar_item_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Tab_Bar_Default_Item>::type>(__return_value);
}
#endif
inline efl::ui::Tab_Page::operator ::efl::ui::Tab_Page() const { return *static_cast< ::efl::ui::Tab_Page const*>(static_cast<void const*>(this)); }
inline efl::ui::Tab_Page::operator ::efl::ui::Tab_Page&() { return *static_cast< ::efl::ui::Tab_Page*>(static_cast<void*>(this)); }
inline efl::ui::Tab_Page::operator ::efl::ui::Tab_Page const&() const { return *static_cast< ::efl::ui::Tab_Page const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
