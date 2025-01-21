#ifndef EFL_UI_FACTORY_BIND_IMPL_HH
#define EFL_UI_FACTORY_BIND_IMPL_HH

#include "efl_ui_factory_bind.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<Eina_Error>::type Factory_Bind::factory_bind( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::ui::Factory>::type factory) const
{
    Eina_Error __return_value =  ::efl_ui_factory_bind(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Factory*,  ::efl::eolian::in_traits< ::efl::ui::Factory>::type>(factory));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<Eina_Error>::type Factory_Bind::factory_bind( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::ui::Factory>::type factory) const
{
    Eina_Error __return_value =  ::efl_ui_factory_bind(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Factory*,  ::efl::eolian::in_traits< ::efl::ui::Factory>::type>(factory));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
inline efl::ui::Factory_Bind::operator ::efl::ui::Factory_Bind() const { return *static_cast< ::efl::ui::Factory_Bind const*>(static_cast<void const*>(this)); }
inline efl::ui::Factory_Bind::operator ::efl::ui::Factory_Bind&() { return *static_cast< ::efl::ui::Factory_Bind*>(static_cast<void*>(this)); }
inline efl::ui::Factory_Bind::operator ::efl::ui::Factory_Bind const&() const { return *static_cast< ::efl::ui::Factory_Bind const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
