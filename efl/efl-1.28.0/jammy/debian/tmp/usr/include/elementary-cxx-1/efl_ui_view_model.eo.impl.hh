#ifndef EFL_UI_VIEW_MODEL_IMPL_HH
#define EFL_UI_VIEW_MODEL_IMPL_HH

#include "efl_ui_view_model.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<bool>::type View_Model::children_bind_get() const
{
    Eina_Bool __return_value =  ::efl_ui_view_model_children_bind_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type View_Model::children_bind_set( ::efl::eolian::in_traits<bool>::type enable) const
{
     ::efl_ui_view_model_children_bind_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enable));
}
inline ::efl::eolian::return_traits<Eina_Error>::type View_Model::property_string_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type definition,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type not_ready,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type on_error) const
{
    Eina_Error __return_value =  ::efl_ui_view_model_property_string_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(definition),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(not_ready),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(on_error));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Error>::type View_Model::property_string_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
    Eina_Error __return_value =  ::efl_ui_view_model_property_string_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
template <typename F, typename G>
inline ::efl::eolian::return_traits<Eina_Error>::type View_Model::property_logic_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type property, F get, F set,  ::efl::eolian::in_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type bound) const
{
    auto fw_get = new ::efl::eolian::function_wrapper<EflUiViewModelPropertyGet, F, ::efl::eolian::EflUiViewModelPropertyGet__function_tag>(get);auto fw_set = new ::efl::eolian::function_wrapper<EflUiViewModelPropertySet, G, ::efl::eolian::EflUiViewModelPropertySet__function_tag>(set);
    Eina_Error __return_value =  ::efl_ui_view_model_property_logic_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(property),
        fw_get->data_to_c(), fw_get->func_to_c(), fw_get->free_to_c(),
        fw_set->data_to_c(), fw_set->func_to_c(), fw_set->free_to_c(),
         ::efl::eolian::convert_to_c<Eina_Iterator *,  ::efl::eolian::in_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type, true>(bound));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Error>::type View_Model::property_logic_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type property) const
{
    Eina_Error __return_value =  ::efl_ui_view_model_property_logic_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(property));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits<void>::type View_Model::property_bind( ::efl::eolian::in_traits< ::efl::eina::string_view>::type source,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type destination) const
{
     ::efl_ui_view_model_property_bind(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(source),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(destination));
}
inline ::efl::eolian::return_traits<void>::type View_Model::property_unbind( ::efl::eolian::in_traits< ::efl::eina::string_view>::type source,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type destination) const
{
     ::efl_ui_view_model_property_unbind(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(source),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(destination));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<bool>::type View_Model::children_bind_get() const
{
    Eina_Bool __return_value =  ::efl_ui_view_model_children_bind_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type View_Model::children_bind_set( ::efl::eolian::in_traits<bool>::type enable) const
{
     ::efl_ui_view_model_children_bind_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enable));
}
inline ::efl::eolian::return_traits<Eina_Error>::type View_Model::property_string_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type definition,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type not_ready,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type on_error) const
{
    Eina_Error __return_value =  ::efl_ui_view_model_property_string_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(definition),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(not_ready),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(on_error));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Error>::type View_Model::property_string_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
    Eina_Error __return_value =  ::efl_ui_view_model_property_string_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
template <typename F, typename G>
inline ::efl::eolian::return_traits<Eina_Error>::type View_Model::property_logic_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type property, F get, F set,  ::efl::eolian::in_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type bound) const
{
    auto fw_get = new ::efl::eolian::function_wrapper<EflUiViewModelPropertyGet, F, ::efl::eolian::EflUiViewModelPropertyGet__function_tag>(get);auto fw_set = new ::efl::eolian::function_wrapper<EflUiViewModelPropertySet, G, ::efl::eolian::EflUiViewModelPropertySet__function_tag>(set);
    Eina_Error __return_value =  ::efl_ui_view_model_property_logic_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(property),
        fw_get->data_to_c(), fw_get->func_to_c(), fw_get->free_to_c(),
        fw_set->data_to_c(), fw_set->func_to_c(), fw_set->free_to_c(),
         ::efl::eolian::convert_to_c<Eina_Iterator *,  ::efl::eolian::in_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type, true>(bound));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Error>::type View_Model::property_logic_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type property) const
{
    Eina_Error __return_value =  ::efl_ui_view_model_property_logic_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(property));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits<void>::type View_Model::property_bind( ::efl::eolian::in_traits< ::efl::eina::string_view>::type source,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type destination) const
{
     ::efl_ui_view_model_property_bind(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(source),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(destination));
}
inline ::efl::eolian::return_traits<void>::type View_Model::property_unbind( ::efl::eolian::in_traits< ::efl::eina::string_view>::type source,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type destination) const
{
     ::efl_ui_view_model_property_unbind(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(source),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(destination));
}
inline efl::ui::View_Model::operator ::efl::ui::View_Model() const { return *static_cast< ::efl::ui::View_Model const*>(static_cast<void const*>(this)); }
inline efl::ui::View_Model::operator ::efl::ui::View_Model&() { return *static_cast< ::efl::ui::View_Model*>(static_cast<void*>(this)); }
inline efl::ui::View_Model::operator ::efl::ui::View_Model const&() const { return *static_cast< ::efl::ui::View_Model const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
