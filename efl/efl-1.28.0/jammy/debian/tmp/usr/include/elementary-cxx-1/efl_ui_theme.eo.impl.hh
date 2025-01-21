#ifndef EFL_UI_THEME_IMPL_HH
#define EFL_UI_THEME_IMPL_HH

#include "efl_ui_theme.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::Theme>::type Theme::default_get()
{
     ::Efl_Ui_Theme* __return_value =  ::efl_ui_theme_default_get();
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Theme>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Theme::extension_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type item) const
{
     ::efl_ui_theme_extension_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(item));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Theme::extension_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type item) const
{
     ::efl_ui_theme_extension_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(item));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Theme::overlay_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type item) const
{
     ::efl_ui_theme_overlay_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(item));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Theme::overlay_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type item) const
{
     ::efl_ui_theme_overlay_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(item));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::Theme>::type Theme::default_get()
{
     ::Efl_Ui_Theme* __return_value =  ::efl_ui_theme_default_get();
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::Theme>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Theme::extension_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type item) const
{
     ::efl_ui_theme_extension_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(item));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Theme::extension_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type item) const
{
     ::efl_ui_theme_extension_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(item));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Theme::overlay_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type item) const
{
     ::efl_ui_theme_overlay_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(item));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Theme::overlay_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type item) const
{
     ::efl_ui_theme_overlay_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(item));
}
#endif
inline efl::ui::Theme::operator ::efl::ui::Theme() const { return *static_cast< ::efl::ui::Theme const*>(static_cast<void const*>(this)); }
inline efl::ui::Theme::operator ::efl::ui::Theme&() { return *static_cast< ::efl::ui::Theme*>(static_cast<void*>(this)); }
inline efl::ui::Theme::operator ::efl::ui::Theme const&() const { return *static_cast< ::efl::ui::Theme const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
