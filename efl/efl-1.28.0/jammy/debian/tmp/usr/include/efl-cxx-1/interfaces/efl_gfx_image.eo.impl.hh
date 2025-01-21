#ifndef EFL_GFX_IMAGE_IMPL_HH
#define EFL_GFX_IMAGE_IMPL_HH

#include "efl_gfx_image.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
inline ::efl::eolian::return_traits<bool>::type Image::smooth_scale_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_image_smooth_scale_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image::smooth_scale_set( ::efl::eolian::in_traits<bool>::type smooth_scale) const
{
     ::efl_gfx_image_smooth_scale_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(smooth_scale));
}
inline ::efl::eolian::return_traits<Efl_Gfx_Image_Scale_Method>::type Image::scale_method_get() const
{
    Efl_Gfx_Image_Scale_Method __return_value =  ::efl_gfx_image_scale_method_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Image_Scale_Method>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image::scale_method_set( ::efl::eolian::in_traits<Efl_Gfx_Image_Scale_Method>::type scale_method) const
{
     ::efl_gfx_image_scale_method_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Image_Scale_Method,  ::efl::eolian::in_traits<Efl_Gfx_Image_Scale_Method>::type>(scale_method));
}
inline ::efl::eolian::return_traits<bool>::type Image::can_upscale_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_image_can_upscale_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image::can_upscale_set( ::efl::eolian::in_traits<bool>::type upscale) const
{
     ::efl_gfx_image_can_upscale_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(upscale));
}
inline ::efl::eolian::return_traits<bool>::type Image::can_downscale_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_image_can_downscale_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image::can_downscale_set( ::efl::eolian::in_traits<bool>::type downscale) const
{
     ::efl_gfx_image_can_downscale_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(downscale));
}
inline ::efl::eolian::return_traits<double>::type Image::ratio_get() const
{
    double __return_value =  ::efl_gfx_image_ratio_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Rect>::type Image::content_region_get() const
{
    Eina_Rect __return_value =  ::efl_gfx_image_content_region_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image::border_insets_get( ::efl::eolian::out_traits<int>::type l,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type t,  ::efl::eolian::out_traits<int>::type b) const
{
    int __out_param_l = {};
    int __out_param_r = {};
    int __out_param_t = {};
    int __out_param_b = {};
     ::efl_gfx_image_border_insets_get(_eo_ptr(),
        & __out_param_l,
        & __out_param_r,
        & __out_param_t,
        & __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(l, __out_param_l);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(t, __out_param_t);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(b, __out_param_b);
}
inline ::efl::eolian::return_traits<void>::type Image::border_insets_set( ::efl::eolian::in_traits<int>::type l,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type t,  ::efl::eolian::in_traits<int>::type b) const
{
     ::efl_gfx_image_border_insets_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(l),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(r),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(t),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(b));
}
inline ::efl::eolian::return_traits<double>::type Image::border_insets_scale_get() const
{
    double __return_value =  ::efl_gfx_image_border_insets_scale_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image::border_insets_scale_set( ::efl::eolian::in_traits<double>::type scale) const
{
     ::efl_gfx_image_border_insets_scale_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(scale));
}
inline ::efl::eolian::return_traits<Efl_Gfx_Center_Fill_Mode>::type Image::center_fill_mode_get() const
{
    Efl_Gfx_Center_Fill_Mode __return_value =  ::efl_gfx_image_center_fill_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Center_Fill_Mode>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image::center_fill_mode_set( ::efl::eolian::in_traits<Efl_Gfx_Center_Fill_Mode>::type fill) const
{
     ::efl_gfx_image_center_fill_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Center_Fill_Mode,  ::efl::eolian::in_traits<Efl_Gfx_Center_Fill_Mode>::type>(fill));
}
inline ::efl::eolian::return_traits<void>::type Image::stretch_region_get( ::efl::eolian::out_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type horizontal,  ::efl::eolian::out_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type vertical) const
{
    Eina_Iterator * __out_param_horizontal = {};
    Eina_Iterator * __out_param_vertical = {};
     ::efl_gfx_image_stretch_region_get(_eo_ptr(),
        & __out_param_horizontal,
        & __out_param_vertical);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type, Eina_Iterator *, true>(horizontal, __out_param_horizontal);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type, Eina_Iterator *, true>(vertical, __out_param_vertical);
}
inline ::efl::eolian::return_traits<Eina_Error>::type Image::stretch_region_set( ::efl::eolian::in_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type horizontal,  ::efl::eolian::in_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type vertical) const
{
    Eina_Error __return_value =  ::efl_gfx_image_stretch_region_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Iterator *,  ::efl::eolian::in_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type, true>(horizontal),
         ::efl::eolian::convert_to_c<Eina_Iterator *,  ::efl::eolian::in_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type, true>(vertical));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Image::image_size_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_image_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Efl_Gfx_Image_Content_Hint>::type Image::content_hint_get() const
{
    Efl_Gfx_Image_Content_Hint __return_value =  ::efl_gfx_image_content_hint_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Image_Content_Hint>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image::content_hint_set( ::efl::eolian::in_traits<Efl_Gfx_Image_Content_Hint>::type hint) const
{
     ::efl_gfx_image_content_hint_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Image_Content_Hint,  ::efl::eolian::in_traits<Efl_Gfx_Image_Content_Hint>::type>(hint));
}
inline ::efl::eolian::return_traits<Efl_Gfx_Image_Scale_Hint>::type Image::scale_hint_get() const
{
    Efl_Gfx_Image_Scale_Hint __return_value =  ::efl_gfx_image_scale_hint_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Image_Scale_Hint>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image::scale_hint_set( ::efl::eolian::in_traits<Efl_Gfx_Image_Scale_Hint>::type hint) const
{
     ::efl_gfx_image_scale_hint_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Image_Scale_Hint,  ::efl::eolian::in_traits<Efl_Gfx_Image_Scale_Hint>::type>(hint));
}
inline ::efl::eolian::return_traits<Eina_Error>::type Image::image_load_error_get() const
{
    Eina_Error __return_value =  ::efl_gfx_image_load_error_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
inline ::efl::eolian::return_traits<bool>::type Image::smooth_scale_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_image_smooth_scale_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image::smooth_scale_set( ::efl::eolian::in_traits<bool>::type smooth_scale) const
{
     ::efl_gfx_image_smooth_scale_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(smooth_scale));
}
inline ::efl::eolian::return_traits<Efl_Gfx_Image_Scale_Method>::type Image::scale_method_get() const
{
    Efl_Gfx_Image_Scale_Method __return_value =  ::efl_gfx_image_scale_method_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Image_Scale_Method>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image::scale_method_set( ::efl::eolian::in_traits<Efl_Gfx_Image_Scale_Method>::type scale_method) const
{
     ::efl_gfx_image_scale_method_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Image_Scale_Method,  ::efl::eolian::in_traits<Efl_Gfx_Image_Scale_Method>::type>(scale_method));
}
inline ::efl::eolian::return_traits<bool>::type Image::can_upscale_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_image_can_upscale_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image::can_upscale_set( ::efl::eolian::in_traits<bool>::type upscale) const
{
     ::efl_gfx_image_can_upscale_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(upscale));
}
inline ::efl::eolian::return_traits<bool>::type Image::can_downscale_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_image_can_downscale_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image::can_downscale_set( ::efl::eolian::in_traits<bool>::type downscale) const
{
     ::efl_gfx_image_can_downscale_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(downscale));
}
inline ::efl::eolian::return_traits<double>::type Image::ratio_get() const
{
    double __return_value =  ::efl_gfx_image_ratio_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Rect>::type Image::content_region_get() const
{
    Eina_Rect __return_value =  ::efl_gfx_image_content_region_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image::border_insets_get( ::efl::eolian::out_traits<int>::type l,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type t,  ::efl::eolian::out_traits<int>::type b) const
{
    int __out_param_l = {};
    int __out_param_r = {};
    int __out_param_t = {};
    int __out_param_b = {};
     ::efl_gfx_image_border_insets_get(_eo_ptr(),
        & __out_param_l,
        & __out_param_r,
        & __out_param_t,
        & __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(l, __out_param_l);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(t, __out_param_t);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(b, __out_param_b);
}
inline ::efl::eolian::return_traits<void>::type Image::border_insets_set( ::efl::eolian::in_traits<int>::type l,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type t,  ::efl::eolian::in_traits<int>::type b) const
{
     ::efl_gfx_image_border_insets_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(l),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(r),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(t),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(b));
}
inline ::efl::eolian::return_traits<double>::type Image::border_insets_scale_get() const
{
    double __return_value =  ::efl_gfx_image_border_insets_scale_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image::border_insets_scale_set( ::efl::eolian::in_traits<double>::type scale) const
{
     ::efl_gfx_image_border_insets_scale_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(scale));
}
inline ::efl::eolian::return_traits<Efl_Gfx_Center_Fill_Mode>::type Image::center_fill_mode_get() const
{
    Efl_Gfx_Center_Fill_Mode __return_value =  ::efl_gfx_image_center_fill_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Center_Fill_Mode>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image::center_fill_mode_set( ::efl::eolian::in_traits<Efl_Gfx_Center_Fill_Mode>::type fill) const
{
     ::efl_gfx_image_center_fill_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Center_Fill_Mode,  ::efl::eolian::in_traits<Efl_Gfx_Center_Fill_Mode>::type>(fill));
}
inline ::efl::eolian::return_traits<void>::type Image::stretch_region_get( ::efl::eolian::out_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type horizontal,  ::efl::eolian::out_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type vertical) const
{
    Eina_Iterator * __out_param_horizontal = {};
    Eina_Iterator * __out_param_vertical = {};
     ::efl_gfx_image_stretch_region_get(_eo_ptr(),
        & __out_param_horizontal,
        & __out_param_vertical);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type, Eina_Iterator *, true>(horizontal, __out_param_horizontal);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type, Eina_Iterator *, true>(vertical, __out_param_vertical);
}
inline ::efl::eolian::return_traits<Eina_Error>::type Image::stretch_region_set( ::efl::eolian::in_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type horizontal,  ::efl::eolian::in_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type vertical) const
{
    Eina_Error __return_value =  ::efl_gfx_image_stretch_region_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Iterator *,  ::efl::eolian::in_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type, true>(horizontal),
         ::efl::eolian::convert_to_c<Eina_Iterator *,  ::efl::eolian::in_traits< ::efl::eina::iterator<Efl_Gfx_Image_Stretch_Region>>::type, true>(vertical));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Image::image_size_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_image_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Efl_Gfx_Image_Content_Hint>::type Image::content_hint_get() const
{
    Efl_Gfx_Image_Content_Hint __return_value =  ::efl_gfx_image_content_hint_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Image_Content_Hint>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image::content_hint_set( ::efl::eolian::in_traits<Efl_Gfx_Image_Content_Hint>::type hint) const
{
     ::efl_gfx_image_content_hint_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Image_Content_Hint,  ::efl::eolian::in_traits<Efl_Gfx_Image_Content_Hint>::type>(hint));
}
inline ::efl::eolian::return_traits<Efl_Gfx_Image_Scale_Hint>::type Image::scale_hint_get() const
{
    Efl_Gfx_Image_Scale_Hint __return_value =  ::efl_gfx_image_scale_hint_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Image_Scale_Hint>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image::scale_hint_set( ::efl::eolian::in_traits<Efl_Gfx_Image_Scale_Hint>::type hint) const
{
     ::efl_gfx_image_scale_hint_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Image_Scale_Hint,  ::efl::eolian::in_traits<Efl_Gfx_Image_Scale_Hint>::type>(hint));
}
inline ::efl::eolian::return_traits<Eina_Error>::type Image::image_load_error_get() const
{
    Eina_Error __return_value =  ::efl_gfx_image_load_error_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
inline efl::gfx::Image::operator ::efl::gfx::Image() const { return *static_cast< ::efl::gfx::Image const*>(static_cast<void const*>(this)); }
inline efl::gfx::Image::operator ::efl::gfx::Image&() { return *static_cast< ::efl::gfx::Image*>(static_cast<void*>(this)); }
inline efl::gfx::Image::operator ::efl::gfx::Image const&() const { return *static_cast< ::efl::gfx::Image const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
