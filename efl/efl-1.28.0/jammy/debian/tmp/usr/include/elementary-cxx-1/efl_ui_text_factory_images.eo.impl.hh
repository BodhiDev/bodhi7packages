#ifndef EFL_UI_TEXT_FACTORY_IMAGES_IMPL_HH
#define EFL_UI_TEXT_FACTORY_IMAGES_IMPL_HH

#include "efl_ui_text_factory_images.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { namespace text_factory { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Images::matches_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type path,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const
{
    Eina_Bool __return_value =  ::efl_ui_text_factory_images_matches_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(path),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Images::matches_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const
{
    Eina_Bool __return_value =  ::efl_ui_text_factory_images_matches_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Images::matches_mmap_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<const Eina_File*>::type file,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const
{
    Eina_Bool __return_value =  ::efl_ui_text_factory_images_matches_mmap_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<const Eina_File *,  ::efl::eolian::in_traits<const Eina_File*>::type>(file),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Images::matches_mmap_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const
{
    Eina_Bool __return_value =  ::efl_ui_text_factory_images_matches_mmap_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace ui { namespace text_factory { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Images::matches_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type path,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const
{
    Eina_Bool __return_value =  ::efl_ui_text_factory_images_matches_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(path),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Images::matches_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const
{
    Eina_Bool __return_value =  ::efl_ui_text_factory_images_matches_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Images::matches_mmap_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<const Eina_File*>::type file,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const
{
    Eina_Bool __return_value =  ::efl_ui_text_factory_images_matches_mmap_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name),
         ::efl::eolian::convert_to_c<const Eina_File *,  ::efl::eolian::in_traits<const Eina_File*>::type>(file),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Images::matches_mmap_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const
{
    Eina_Bool __return_value =  ::efl_ui_text_factory_images_matches_mmap_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline efl::ui::text_factory::Images::operator ::efl::ui::text_factory::Images() const { return *static_cast< ::efl::ui::text_factory::Images const*>(static_cast<void const*>(this)); }
inline efl::ui::text_factory::Images::operator ::efl::ui::text_factory::Images&() { return *static_cast< ::efl::ui::text_factory::Images*>(static_cast<void*>(this)); }
inline efl::ui::text_factory::Images::operator ::efl::ui::text_factory::Images const&() const { return *static_cast< ::efl::ui::text_factory::Images const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
