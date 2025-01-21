#ifndef EFL_UI_COLLECTION_VIEW_IMPL_HH
#define EFL_UI_COLLECTION_VIEW_IMPL_HH

#include "efl_ui_collection_view.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits< ::efl::ui::Factory>::type Collection_View::factory_get() const
{
     ::Efl_Ui_Factory* __return_value =  ::efl_ui_collection_view_factory_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Factory>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Collection_View::factory_set( ::efl::eolian::in_traits< ::efl::ui::Factory>::type factory) const
{
     ::efl_ui_collection_view_factory_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Factory*,  ::efl::eolian::in_traits< ::efl::ui::Factory>::type>(factory));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::position_manager::Entity>::type Collection_View::position_manager_get() const
{
     ::Efl_Ui_Position_Manager_Entity* __return_value =  ::efl_ui_collection_view_position_manager_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::position_manager::Entity>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Collection_View::position_manager_set( ::efl::eolian::in_traits< ::efl::ui::position_manager::Entity>::type position_manager) const
{
     ::efl_ui_collection_view_position_manager_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Position_Manager_Entity*,  ::efl::eolian::in_traits< ::efl::ui::position_manager::Entity>::type, true>(position_manager));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits< ::efl::ui::Factory>::type Collection_View::factory_get() const
{
     ::Efl_Ui_Factory* __return_value =  ::efl_ui_collection_view_factory_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Factory>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Collection_View::factory_set( ::efl::eolian::in_traits< ::efl::ui::Factory>::type factory) const
{
     ::efl_ui_collection_view_factory_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Factory*,  ::efl::eolian::in_traits< ::efl::ui::Factory>::type>(factory));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::position_manager::Entity>::type Collection_View::position_manager_get() const
{
     ::Efl_Ui_Position_Manager_Entity* __return_value =  ::efl_ui_collection_view_position_manager_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::position_manager::Entity>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Collection_View::position_manager_set( ::efl::eolian::in_traits< ::efl::ui::position_manager::Entity>::type position_manager) const
{
     ::efl_ui_collection_view_position_manager_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Position_Manager_Entity*,  ::efl::eolian::in_traits< ::efl::ui::position_manager::Entity>::type, true>(position_manager));
}
#endif
inline efl::ui::Collection_View::operator ::efl::ui::Collection_View() const { return *static_cast< ::efl::ui::Collection_View const*>(static_cast<void const*>(this)); }
inline efl::ui::Collection_View::operator ::efl::ui::Collection_View&() { return *static_cast< ::efl::ui::Collection_View*>(static_cast<void*>(this)); }
inline efl::ui::Collection_View::operator ::efl::ui::Collection_View const&() const { return *static_cast< ::efl::ui::Collection_View const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
