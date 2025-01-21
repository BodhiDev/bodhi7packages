#ifndef EFL_UI_POSITION_MANAGER_DATA_ACCESS_V1_IMPL_HH
#define EFL_UI_POSITION_MANAGER_DATA_ACCESS_V1_IMPL_HH

#include "efl_ui_position_manager_data_access_v1.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { namespace position_manager { 
#ifdef EFL_BETA_API_SUPPORT
template <typename F, typename G>
inline ::efl::eolian::return_traits<void>::type Data_Access_V1::data_access_set( ::efl::eolian::in_traits< ::efl::ui::Win>::type canvas, F obj_access, F size_access,  ::efl::eolian::in_traits<int>::type size) const
{
    auto fw_obj_access = new ::efl::eolian::function_wrapper<Efl_Ui_Position_Manager_Object_Batch_Callback, F, ::efl::eolian::Efl_Ui_Position_Manager_Object_Batch_Callback__function_tag>(obj_access);auto fw_size_access = new ::efl::eolian::function_wrapper<Efl_Ui_Position_Manager_Size_Batch_Callback, G, ::efl::eolian::Efl_Ui_Position_Manager_Size_Batch_Callback__function_tag>(size_access);
     ::efl_ui_position_manager_data_access_v1_data_access_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Win*,  ::efl::eolian::in_traits< ::efl::ui::Win>::type>(canvas),
        fw_obj_access->data_to_c(), fw_obj_access->func_to_c(), fw_obj_access->free_to_c(),
        fw_size_access->data_to_c(), fw_size_access->func_to_c(), fw_size_access->free_to_c(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(size));
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace ui { namespace position_manager { 
#ifdef EFL_BETA_API_SUPPORT
template <typename F, typename G>
inline ::efl::eolian::return_traits<void>::type Data_Access_V1::data_access_set( ::efl::eolian::in_traits< ::efl::ui::Win>::type canvas, F obj_access, F size_access,  ::efl::eolian::in_traits<int>::type size) const
{
    auto fw_obj_access = new ::efl::eolian::function_wrapper<Efl_Ui_Position_Manager_Object_Batch_Callback, F, ::efl::eolian::Efl_Ui_Position_Manager_Object_Batch_Callback__function_tag>(obj_access);auto fw_size_access = new ::efl::eolian::function_wrapper<Efl_Ui_Position_Manager_Size_Batch_Callback, G, ::efl::eolian::Efl_Ui_Position_Manager_Size_Batch_Callback__function_tag>(size_access);
     ::efl_ui_position_manager_data_access_v1_data_access_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Win*,  ::efl::eolian::in_traits< ::efl::ui::Win>::type>(canvas),
        fw_obj_access->data_to_c(), fw_obj_access->func_to_c(), fw_obj_access->free_to_c(),
        fw_size_access->data_to_c(), fw_size_access->func_to_c(), fw_size_access->free_to_c(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(size));
}
#endif
inline efl::ui::position_manager::Data_Access_V1::operator ::efl::ui::position_manager::Data_Access_V1() const { return *static_cast< ::efl::ui::position_manager::Data_Access_V1 const*>(static_cast<void const*>(this)); }
inline efl::ui::position_manager::Data_Access_V1::operator ::efl::ui::position_manager::Data_Access_V1&() { return *static_cast< ::efl::ui::position_manager::Data_Access_V1*>(static_cast<void*>(this)); }
inline efl::ui::position_manager::Data_Access_V1::operator ::efl::ui::position_manager::Data_Access_V1 const&() const { return *static_cast< ::efl::ui::position_manager::Data_Access_V1 const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
