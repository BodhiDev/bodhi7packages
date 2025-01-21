#ifndef EFL_UI_COLLECTION_IMPL_HH
#define EFL_UI_COLLECTION_IMPL_HH

#include "efl_ui_collection.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::position_manager::Entity>::type Collection::position_manager_get() const
{
     ::Efl_Ui_Position_Manager_Entity* __return_value =  ::efl_ui_collection_position_manager_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::position_manager::Entity>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Collection::position_manager_set( ::efl::eolian::in_traits< ::efl::ui::position_manager::Entity>::type position_manager) const
{
     ::efl_ui_collection_position_manager_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Position_Manager_Entity*,  ::efl::eolian::in_traits< ::efl::ui::position_manager::Entity>::type, true>(position_manager));
}
#endif
inline ::efl::eolian::return_traits<void>::type Collection::item_scroll( ::efl::eolian::in_traits< ::efl::ui::Item>::type item,  ::efl::eolian::in_traits<bool>::type animation) const
{
     ::efl_ui_collection_item_scroll(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Item*,  ::efl::eolian::in_traits< ::efl::ui::Item>::type>(item),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(animation));
}
inline ::efl::eolian::return_traits<void>::type Collection::item_scroll_align( ::efl::eolian::in_traits< ::efl::ui::Item>::type item,  ::efl::eolian::in_traits<double>::type align,  ::efl::eolian::in_traits<bool>::type animation) const
{
     ::efl_ui_collection_item_scroll_align(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Item*,  ::efl::eolian::in_traits< ::efl::ui::Item>::type>(item),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(align),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(animation));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::position_manager::Entity>::type Collection::position_manager_get() const
{
     ::Efl_Ui_Position_Manager_Entity* __return_value =  ::efl_ui_collection_position_manager_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::position_manager::Entity>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Collection::position_manager_set( ::efl::eolian::in_traits< ::efl::ui::position_manager::Entity>::type position_manager) const
{
     ::efl_ui_collection_position_manager_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Position_Manager_Entity*,  ::efl::eolian::in_traits< ::efl::ui::position_manager::Entity>::type, true>(position_manager));
}
#endif
inline ::efl::eolian::return_traits<void>::type Collection::item_scroll( ::efl::eolian::in_traits< ::efl::ui::Item>::type item,  ::efl::eolian::in_traits<bool>::type animation) const
{
     ::efl_ui_collection_item_scroll(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Item*,  ::efl::eolian::in_traits< ::efl::ui::Item>::type>(item),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(animation));
}
inline ::efl::eolian::return_traits<void>::type Collection::item_scroll_align( ::efl::eolian::in_traits< ::efl::ui::Item>::type item,  ::efl::eolian::in_traits<double>::type align,  ::efl::eolian::in_traits<bool>::type animation) const
{
     ::efl_ui_collection_item_scroll_align(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Item*,  ::efl::eolian::in_traits< ::efl::ui::Item>::type>(item),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(align),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(animation));
}
inline efl::ui::Collection::operator ::efl::ui::Collection() const { return *static_cast< ::efl::ui::Collection const*>(static_cast<void const*>(this)); }
inline efl::ui::Collection::operator ::efl::ui::Collection&() { return *static_cast< ::efl::ui::Collection*>(static_cast<void*>(this)); }
inline efl::ui::Collection::operator ::efl::ui::Collection const&() const { return *static_cast< ::efl::ui::Collection const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
