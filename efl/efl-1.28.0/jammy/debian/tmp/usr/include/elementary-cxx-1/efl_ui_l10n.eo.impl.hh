#ifndef EFL_UI_L10N_IMPL_HH
#define EFL_UI_L10N_IMPL_HH

#include "efl_ui_l10n.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type L10n::l10n_text_get( ::efl::eolian::out_traits< ::efl::eina::string_view*>::type domain) const
{
    const char * __out_param_domain = {};
    const char * __return_value =  ::efl_ui_l10n_text_get(_eo_ptr(),
        & __out_param_domain);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view*>::type, const char *>(domain, __out_param_domain);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type L10n::l10n_text_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type label,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type domain) const
{
     ::efl_ui_l10n_text_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(label),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type>(domain));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_L10N_PROTECTED
inline ::efl::eolian::return_traits<void>::type L10n::translation_update() const
{
     ::efl_ui_l10n_translation_update(_eo_ptr());
}
#endif
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type L10n::l10n_text_get( ::efl::eolian::out_traits< ::efl::eina::string_view*>::type domain) const
{
    const char * __out_param_domain = {};
    const char * __return_value =  ::efl_ui_l10n_text_get(_eo_ptr(),
        & __out_param_domain);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view*>::type, const char *>(domain, __out_param_domain);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type L10n::l10n_text_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type label,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type domain) const
{
     ::efl_ui_l10n_text_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(label),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type>(domain));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_L10N_PROTECTED
inline ::efl::eolian::return_traits<void>::type L10n::translation_update() const
{
     ::efl_ui_l10n_translation_update(_eo_ptr());
}
#endif
#endif
inline efl::ui::L10n::operator ::efl::ui::L10n() const { return *static_cast< ::efl::ui::L10n const*>(static_cast<void const*>(this)); }
inline efl::ui::L10n::operator ::efl::ui::L10n&() { return *static_cast< ::efl::ui::L10n*>(static_cast<void*>(this)); }
inline efl::ui::L10n::operator ::efl::ui::L10n const&() const { return *static_cast< ::efl::ui::L10n const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
