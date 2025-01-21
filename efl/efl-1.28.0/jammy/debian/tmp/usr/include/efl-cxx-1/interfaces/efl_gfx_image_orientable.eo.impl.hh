#ifndef EFL_GFX_IMAGE_ORIENTABLE_IMPL_HH
#define EFL_GFX_IMAGE_ORIENTABLE_IMPL_HH

#include "efl_gfx_image_orientable.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
inline ::efl::eolian::return_traits<Efl_Gfx_Image_Orientation>::type Image_Orientable::image_orientation_get() const
{
    Efl_Gfx_Image_Orientation __return_value =  ::efl_gfx_image_orientation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Image_Orientation>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image_Orientable::image_orientation_set( ::efl::eolian::in_traits<Efl_Gfx_Image_Orientation>::type dir) const
{
     ::efl_gfx_image_orientation_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Image_Orientation,  ::efl::eolian::in_traits<Efl_Gfx_Image_Orientation>::type>(dir));
}
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
inline ::efl::eolian::return_traits<Efl_Gfx_Image_Orientation>::type Image_Orientable::image_orientation_get() const
{
    Efl_Gfx_Image_Orientation __return_value =  ::efl_gfx_image_orientation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Image_Orientation>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Image_Orientable::image_orientation_set( ::efl::eolian::in_traits<Efl_Gfx_Image_Orientation>::type dir) const
{
     ::efl_gfx_image_orientation_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Image_Orientation,  ::efl::eolian::in_traits<Efl_Gfx_Image_Orientation>::type>(dir));
}
inline efl::gfx::Image_Orientable::operator ::efl::gfx::Image_Orientable() const { return *static_cast< ::efl::gfx::Image_Orientable const*>(static_cast<void const*>(this)); }
inline efl::gfx::Image_Orientable::operator ::efl::gfx::Image_Orientable&() { return *static_cast< ::efl::gfx::Image_Orientable*>(static_cast<void*>(this)); }
inline efl::gfx::Image_Orientable::operator ::efl::gfx::Image_Orientable const&() const { return *static_cast< ::efl::gfx::Image_Orientable const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
