#ifndef EFL_UI_IMAGE_ZOOMABLE_IMPL_HH
#define EFL_UI_IMAGE_ZOOMABLE_IMPL_HH

#include "efl_ui_image_zoomable.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<bool>::type Image_Zoomable::gesture_enabled_get() const
{
    Eina_Bool __return_value =  ::efl_ui_image_zoomable_gesture_enabled_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image_Zoomable::gesture_enabled_set( ::efl::eolian::in_traits<bool>::type gesture) const
{
     ::efl_ui_image_zoomable_gesture_enabled_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(gesture));
}
inline ::efl::eolian::return_traits<Eina_Rect>::type Image_Zoomable::image_region_get() const
{
    Eina_Rect __return_value =  ::efl_ui_image_zoomable_image_region_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image_Zoomable::image_region_set( ::efl::eolian::in_traits<Eina_Rect>::type region) const
{
     ::efl_ui_image_zoomable_image_region_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(region));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<bool>::type Image_Zoomable::gesture_enabled_get() const
{
    Eina_Bool __return_value =  ::efl_ui_image_zoomable_gesture_enabled_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image_Zoomable::gesture_enabled_set( ::efl::eolian::in_traits<bool>::type gesture) const
{
     ::efl_ui_image_zoomable_gesture_enabled_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(gesture));
}
inline ::efl::eolian::return_traits<Eina_Rect>::type Image_Zoomable::image_region_get() const
{
    Eina_Rect __return_value =  ::efl_ui_image_zoomable_image_region_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image_Zoomable::image_region_set( ::efl::eolian::in_traits<Eina_Rect>::type region) const
{
     ::efl_ui_image_zoomable_image_region_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(region));
}
inline efl::ui::Image_Zoomable::operator ::efl::ui::Image_Zoomable() const { return *static_cast< ::efl::ui::Image_Zoomable const*>(static_cast<void const*>(this)); }
inline efl::ui::Image_Zoomable::operator ::efl::ui::Image_Zoomable&() { return *static_cast< ::efl::ui::Image_Zoomable*>(static_cast<void*>(this)); }
inline efl::ui::Image_Zoomable::operator ::efl::ui::Image_Zoomable const&() const { return *static_cast< ::efl::ui::Image_Zoomable const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
