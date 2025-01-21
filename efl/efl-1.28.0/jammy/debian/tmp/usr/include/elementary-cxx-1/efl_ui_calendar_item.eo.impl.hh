#ifndef EFL_UI_CALENDAR_ITEM_IMPL_HH
#define EFL_UI_CALENDAR_ITEM_IMPL_HH

#include "efl_ui_calendar_item.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Calendar_Item::day_number_get() const
{
    int __return_value =  ::efl_ui_calendar_item_day_number_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Calendar_Item::day_number_set( ::efl::eolian::in_traits<int>::type i) const
{
     ::efl_ui_calendar_item_day_number_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(i));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Calendar_Item::day_number_get() const
{
    int __return_value =  ::efl_ui_calendar_item_day_number_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Calendar_Item::day_number_set( ::efl::eolian::in_traits<int>::type i) const
{
     ::efl_ui_calendar_item_day_number_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(i));
}
#endif
inline efl::ui::Calendar_Item::operator ::efl::ui::Calendar_Item() const { return *static_cast< ::efl::ui::Calendar_Item const*>(static_cast<void const*>(this)); }
inline efl::ui::Calendar_Item::operator ::efl::ui::Calendar_Item&() { return *static_cast< ::efl::ui::Calendar_Item*>(static_cast<void*>(this)); }
inline efl::ui::Calendar_Item::operator ::efl::ui::Calendar_Item const&() const { return *static_cast< ::efl::ui::Calendar_Item const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
