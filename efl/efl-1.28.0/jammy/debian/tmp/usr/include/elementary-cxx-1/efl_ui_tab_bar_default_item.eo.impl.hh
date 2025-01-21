#ifndef EFL_UI_TAB_BAR_DEFAULT_ITEM_IMPL_HH
#define EFL_UI_TAB_BAR_DEFAULT_ITEM_IMPL_HH

#include "efl_ui_tab_bar_default_item.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Tab_Bar_Default_Item::icon_get() const
{
    const char * __return_value =  ::efl_ui_tab_bar_default_item_icon_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Tab_Bar_Default_Item::icon_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type standard_name) const
{
     ::efl_ui_tab_bar_default_item_icon_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(standard_name));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Tab_Bar_Default_Item::icon_get() const
{
    const char * __return_value =  ::efl_ui_tab_bar_default_item_icon_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Tab_Bar_Default_Item::icon_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type standard_name) const
{
     ::efl_ui_tab_bar_default_item_icon_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(standard_name));
}
#endif
inline efl::ui::Tab_Bar_Default_Item::operator ::efl::ui::Tab_Bar_Default_Item() const { return *static_cast< ::efl::ui::Tab_Bar_Default_Item const*>(static_cast<void const*>(this)); }
inline efl::ui::Tab_Bar_Default_Item::operator ::efl::ui::Tab_Bar_Default_Item&() { return *static_cast< ::efl::ui::Tab_Bar_Default_Item*>(static_cast<void*>(this)); }
inline efl::ui::Tab_Bar_Default_Item::operator ::efl::ui::Tab_Bar_Default_Item const&() const { return *static_cast< ::efl::ui::Tab_Bar_Default_Item const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
