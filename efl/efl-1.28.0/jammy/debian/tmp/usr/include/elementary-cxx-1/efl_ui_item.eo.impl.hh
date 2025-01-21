#ifndef EFL_UI_ITEM_IMPL_HH
#define EFL_UI_ITEM_IMPL_HH

#include "efl_ui_item.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<int>::type Item::index_get() const
{
    int __return_value =  ::efl_ui_item_index_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::ui::Widget>::type Item::container_get() const
{
     ::Efl_Ui_Widget* __return_value =  ::efl_ui_item_container_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Widget>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Item::container_set( ::efl::eolian::in_traits< ::efl::ui::Widget>::type container) const
{
     ::efl_ui_item_container_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Widget*,  ::efl::eolian::in_traits< ::efl::ui::Widget>::type>(container));
}
inline ::efl::eolian::return_traits< ::efl::ui::Item>::type Item::item_parent_get() const
{
     ::Efl_Ui_Item* __return_value =  ::efl_ui_item_parent_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Item>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Item::item_parent_set( ::efl::eolian::in_traits< ::efl::ui::Item>::type parent) const
{
     ::efl_ui_item_parent_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Item*,  ::efl::eolian::in_traits< ::efl::ui::Item>::type>(parent));
}
inline ::efl::eolian::return_traits<bool>::type Item::calc_locked_get() const
{
    Eina_Bool __return_value =  ::efl_ui_item_calc_locked_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Item::calc_locked_set( ::efl::eolian::in_traits<bool>::type locked) const
{
     ::efl_ui_item_calc_locked_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(locked));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<int>::type Item::index_get() const
{
    int __return_value =  ::efl_ui_item_index_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::ui::Widget>::type Item::container_get() const
{
     ::Efl_Ui_Widget* __return_value =  ::efl_ui_item_container_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Widget>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Item::container_set( ::efl::eolian::in_traits< ::efl::ui::Widget>::type container) const
{
     ::efl_ui_item_container_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Widget*,  ::efl::eolian::in_traits< ::efl::ui::Widget>::type>(container));
}
inline ::efl::eolian::return_traits< ::efl::ui::Item>::type Item::item_parent_get() const
{
     ::Efl_Ui_Item* __return_value =  ::efl_ui_item_parent_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Item>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Item::item_parent_set( ::efl::eolian::in_traits< ::efl::ui::Item>::type parent) const
{
     ::efl_ui_item_parent_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Item*,  ::efl::eolian::in_traits< ::efl::ui::Item>::type>(parent));
}
inline ::efl::eolian::return_traits<bool>::type Item::calc_locked_get() const
{
    Eina_Bool __return_value =  ::efl_ui_item_calc_locked_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Item::calc_locked_set( ::efl::eolian::in_traits<bool>::type locked) const
{
     ::efl_ui_item_calc_locked_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(locked));
}
inline efl::ui::Item::operator ::efl::ui::Item() const { return *static_cast< ::efl::ui::Item const*>(static_cast<void const*>(this)); }
inline efl::ui::Item::operator ::efl::ui::Item&() { return *static_cast< ::efl::ui::Item*>(static_cast<void*>(this)); }
inline efl::ui::Item::operator ::efl::ui::Item const&() const { return *static_cast< ::efl::ui::Item const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
