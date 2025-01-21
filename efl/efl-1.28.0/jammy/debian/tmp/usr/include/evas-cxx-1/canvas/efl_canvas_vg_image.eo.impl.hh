#ifndef EFL_CANVAS_VG_IMAGE_IMPL_HH
#define EFL_CANVAS_VG_IMAGE_IMPL_HH

#include "efl_canvas_vg_image.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { namespace vg { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Image::data_set( ::efl::eolian::in_traits<void*>::type pixels,  ::efl::eolian::in_traits<Eina_Size2D>::type size) const
{
     ::efl_canvas_vg_image_data_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(pixels),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(size));
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace canvas { namespace vg { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Image::data_set( ::efl::eolian::in_traits<void*>::type pixels,  ::efl::eolian::in_traits<Eina_Size2D>::type size) const
{
     ::efl_canvas_vg_image_data_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(pixels),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(size));
}
#endif
inline efl::canvas::vg::Image::operator ::efl::canvas::vg::Image() const { return *static_cast< ::efl::canvas::vg::Image const*>(static_cast<void const*>(this)); }
inline efl::canvas::vg::Image::operator ::efl::canvas::vg::Image&() { return *static_cast< ::efl::canvas::vg::Image*>(static_cast<void*>(this)); }
inline efl::canvas::vg::Image::operator ::efl::canvas::vg::Image const&() const { return *static_cast< ::efl::canvas::vg::Image const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
