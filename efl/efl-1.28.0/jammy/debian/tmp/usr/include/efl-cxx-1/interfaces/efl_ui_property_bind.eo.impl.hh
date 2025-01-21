#ifndef EFL_UI_PROPERTY_BIND_IMPL_HH
#define EFL_UI_PROPERTY_BIND_IMPL_HH

#include "efl_ui_property_bind.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<Eina_Error>::type Property_Bind::property_bind( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type property) const
{
    Eina_Error __return_value =  ::efl_ui_property_bind(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(property));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<Eina_Error>::type Property_Bind::property_bind( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type property) const
{
    Eina_Error __return_value =  ::efl_ui_property_bind(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(property));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
inline efl::ui::Property_Bind::operator ::efl::ui::Property_Bind() const { return *static_cast< ::efl::ui::Property_Bind const*>(static_cast<void const*>(this)); }
inline efl::ui::Property_Bind::operator ::efl::ui::Property_Bind&() { return *static_cast< ::efl::ui::Property_Bind*>(static_cast<void*>(this)); }
inline efl::ui::Property_Bind::operator ::efl::ui::Property_Bind const&() const { return *static_cast< ::efl::ui::Property_Bind const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
