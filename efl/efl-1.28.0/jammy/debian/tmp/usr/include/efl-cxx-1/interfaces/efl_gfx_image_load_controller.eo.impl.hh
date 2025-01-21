#ifndef EFL_GFX_IMAGE_LOAD_CONTROLLER_IMPL_HH
#define EFL_GFX_IMAGE_LOAD_CONTROLLER_IMPL_HH

#include "efl_gfx_image_load_controller.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
inline ::efl::eolian::return_traits<Eina_Size2D>::type Image_Load_Controller::load_size_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_image_load_controller_load_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image_Load_Controller::load_size_set( ::efl::eolian::in_traits<Eina_Size2D>::type size) const
{
     ::efl_gfx_image_load_controller_load_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(size));
}
inline ::efl::eolian::return_traits<double>::type Image_Load_Controller::load_dpi_get() const
{
    double __return_value =  ::efl_gfx_image_load_controller_load_dpi_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image_Load_Controller::load_dpi_set( ::efl::eolian::in_traits<double>::type dpi) const
{
     ::efl_gfx_image_load_controller_load_dpi_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dpi));
}
inline ::efl::eolian::return_traits<bool>::type Image_Load_Controller::load_region_support_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_image_load_controller_load_region_support_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Rect>::type Image_Load_Controller::load_region_get() const
{
    Eina_Rect __return_value =  ::efl_gfx_image_load_controller_load_region_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image_Load_Controller::load_region_set( ::efl::eolian::in_traits<Eina_Rect>::type region) const
{
     ::efl_gfx_image_load_controller_load_region_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(region));
}
inline ::efl::eolian::return_traits<bool>::type Image_Load_Controller::load_orientation_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_image_load_controller_load_orientation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image_Load_Controller::load_orientation_set( ::efl::eolian::in_traits<bool>::type enable) const
{
     ::efl_gfx_image_load_controller_load_orientation_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enable));
}
inline ::efl::eolian::return_traits<int>::type Image_Load_Controller::load_scale_down_get() const
{
    int __return_value =  ::efl_gfx_image_load_controller_load_scale_down_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image_Load_Controller::load_scale_down_set( ::efl::eolian::in_traits<int>::type div) const
{
     ::efl_gfx_image_load_controller_load_scale_down_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(div));
}
inline ::efl::eolian::return_traits<bool>::type Image_Load_Controller::load_skip_header_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_image_load_controller_load_skip_header_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image_Load_Controller::load_skip_header_set( ::efl::eolian::in_traits<bool>::type skip) const
{
     ::efl_gfx_image_load_controller_load_skip_header_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(skip));
}
inline ::efl::eolian::return_traits<void>::type Image_Load_Controller::load_async_start() const
{
     ::efl_gfx_image_load_controller_load_async_start(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Image_Load_Controller::load_async_cancel() const
{
     ::efl_gfx_image_load_controller_load_async_cancel(_eo_ptr());
}
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
inline ::efl::eolian::return_traits<Eina_Size2D>::type Image_Load_Controller::load_size_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_image_load_controller_load_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image_Load_Controller::load_size_set( ::efl::eolian::in_traits<Eina_Size2D>::type size) const
{
     ::efl_gfx_image_load_controller_load_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(size));
}
inline ::efl::eolian::return_traits<double>::type Image_Load_Controller::load_dpi_get() const
{
    double __return_value =  ::efl_gfx_image_load_controller_load_dpi_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image_Load_Controller::load_dpi_set( ::efl::eolian::in_traits<double>::type dpi) const
{
     ::efl_gfx_image_load_controller_load_dpi_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dpi));
}
inline ::efl::eolian::return_traits<bool>::type Image_Load_Controller::load_region_support_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_image_load_controller_load_region_support_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Rect>::type Image_Load_Controller::load_region_get() const
{
    Eina_Rect __return_value =  ::efl_gfx_image_load_controller_load_region_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image_Load_Controller::load_region_set( ::efl::eolian::in_traits<Eina_Rect>::type region) const
{
     ::efl_gfx_image_load_controller_load_region_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(region));
}
inline ::efl::eolian::return_traits<bool>::type Image_Load_Controller::load_orientation_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_image_load_controller_load_orientation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image_Load_Controller::load_orientation_set( ::efl::eolian::in_traits<bool>::type enable) const
{
     ::efl_gfx_image_load_controller_load_orientation_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enable));
}
inline ::efl::eolian::return_traits<int>::type Image_Load_Controller::load_scale_down_get() const
{
    int __return_value =  ::efl_gfx_image_load_controller_load_scale_down_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image_Load_Controller::load_scale_down_set( ::efl::eolian::in_traits<int>::type div) const
{
     ::efl_gfx_image_load_controller_load_scale_down_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(div));
}
inline ::efl::eolian::return_traits<bool>::type Image_Load_Controller::load_skip_header_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_image_load_controller_load_skip_header_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image_Load_Controller::load_skip_header_set( ::efl::eolian::in_traits<bool>::type skip) const
{
     ::efl_gfx_image_load_controller_load_skip_header_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(skip));
}
inline ::efl::eolian::return_traits<void>::type Image_Load_Controller::load_async_start() const
{
     ::efl_gfx_image_load_controller_load_async_start(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Image_Load_Controller::load_async_cancel() const
{
     ::efl_gfx_image_load_controller_load_async_cancel(_eo_ptr());
}
inline efl::gfx::Image_Load_Controller::operator ::efl::gfx::Image_Load_Controller() const { return *static_cast< ::efl::gfx::Image_Load_Controller const*>(static_cast<void const*>(this)); }
inline efl::gfx::Image_Load_Controller::operator ::efl::gfx::Image_Load_Controller&() { return *static_cast< ::efl::gfx::Image_Load_Controller*>(static_cast<void*>(this)); }
inline efl::gfx::Image_Load_Controller::operator ::efl::gfx::Image_Load_Controller const&() const { return *static_cast< ::efl::gfx::Image_Load_Controller const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
