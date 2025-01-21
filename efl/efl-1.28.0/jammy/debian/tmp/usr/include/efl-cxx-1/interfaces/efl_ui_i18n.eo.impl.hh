#ifndef EFL_UI_I18N_IMPL_HH
#define EFL_UI_I18N_IMPL_HH

#include "efl_ui_i18n.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type I18n::mirrored_get() const
{
    Eina_Bool __return_value =  ::efl_ui_mirrored_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type I18n::mirrored_set( ::efl::eolian::in_traits<bool>::type rtl) const
{
     ::efl_ui_mirrored_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(rtl));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type I18n::mirrored_automatic_get() const
{
    Eina_Bool __return_value =  ::efl_ui_mirrored_automatic_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type I18n::mirrored_automatic_set( ::efl::eolian::in_traits<bool>::type automatic) const
{
     ::efl_ui_mirrored_automatic_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(automatic));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type I18n::language_get() const
{
    const char * __return_value =  ::efl_ui_language_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type I18n::language_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type language) const
{
     ::efl_ui_language_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(language));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type I18n::mirrored_get() const
{
    Eina_Bool __return_value =  ::efl_ui_mirrored_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type I18n::mirrored_set( ::efl::eolian::in_traits<bool>::type rtl) const
{
     ::efl_ui_mirrored_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(rtl));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type I18n::mirrored_automatic_get() const
{
    Eina_Bool __return_value =  ::efl_ui_mirrored_automatic_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type I18n::mirrored_automatic_set( ::efl::eolian::in_traits<bool>::type automatic) const
{
     ::efl_ui_mirrored_automatic_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(automatic));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type I18n::language_get() const
{
    const char * __return_value =  ::efl_ui_language_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type I18n::language_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type language) const
{
     ::efl_ui_language_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(language));
}
#endif
inline efl::ui::I18n::operator ::efl::ui::I18n() const { return *static_cast< ::efl::ui::I18n const*>(static_cast<void const*>(this)); }
inline efl::ui::I18n::operator ::efl::ui::I18n&() { return *static_cast< ::efl::ui::I18n*>(static_cast<void*>(this)); }
inline efl::ui::I18n::operator ::efl::ui::I18n const&() const { return *static_cast< ::efl::ui::I18n const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
