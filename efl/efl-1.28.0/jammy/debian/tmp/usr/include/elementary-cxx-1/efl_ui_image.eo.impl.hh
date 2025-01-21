#ifndef EFL_UI_IMAGE_IMPL_HH
#define EFL_UI_IMAGE_IMPL_HH

#include "efl_ui_image.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Image::icon_get() const
{
    const char * __return_value =  ::efl_ui_image_icon_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Image::icon_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
    Eina_Bool __return_value =  ::efl_ui_image_icon_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Image::icon_get() const
{
    const char * __return_value =  ::efl_ui_image_icon_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Image::icon_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
    Eina_Bool __return_value =  ::efl_ui_image_icon_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline efl::ui::Image::operator ::efl::ui::Image() const { return *static_cast< ::efl::ui::Image const*>(static_cast<void const*>(this)); }
inline efl::ui::Image::operator ::efl::ui::Image&() { return *static_cast< ::efl::ui::Image*>(static_cast<void*>(this)); }
inline efl::ui::Image::operator ::efl::ui::Image const&() const { return *static_cast< ::efl::ui::Image const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
