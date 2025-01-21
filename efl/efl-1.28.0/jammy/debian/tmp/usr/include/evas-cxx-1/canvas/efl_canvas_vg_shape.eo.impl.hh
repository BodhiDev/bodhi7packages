#ifndef EFL_CANVAS_VG_SHAPE_IMPL_HH
#define EFL_CANVAS_VG_SHAPE_IMPL_HH

#include "efl_canvas_vg_shape.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { namespace vg { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type Shape::fill_get() const
{
     ::Efl_Canvas_Vg_Node* __return_value =  ::efl_canvas_vg_shape_fill_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::fill_set( ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type f) const
{
     ::efl_canvas_vg_shape_fill_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Vg_Node*,  ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type>(f));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type Shape::stroke_fill_get() const
{
     ::Efl_Canvas_Vg_Node* __return_value =  ::efl_canvas_vg_shape_stroke_fill_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_fill_set( ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type f) const
{
     ::efl_canvas_vg_shape_stroke_fill_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Vg_Node*,  ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type>(f));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type Shape::stroke_marker_get() const
{
     ::Efl_Canvas_Vg_Node* __return_value =  ::efl_canvas_vg_shape_stroke_marker_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_marker_set( ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type m) const
{
     ::efl_canvas_vg_shape_stroke_marker_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Vg_Node*,  ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type>(m));
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace canvas { namespace vg { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type Shape::fill_get() const
{
     ::Efl_Canvas_Vg_Node* __return_value =  ::efl_canvas_vg_shape_fill_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::fill_set( ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type f) const
{
     ::efl_canvas_vg_shape_fill_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Vg_Node*,  ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type>(f));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type Shape::stroke_fill_get() const
{
     ::Efl_Canvas_Vg_Node* __return_value =  ::efl_canvas_vg_shape_stroke_fill_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_fill_set( ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type f) const
{
     ::efl_canvas_vg_shape_stroke_fill_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Vg_Node*,  ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type>(f));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type Shape::stroke_marker_get() const
{
     ::Efl_Canvas_Vg_Node* __return_value =  ::efl_canvas_vg_shape_stroke_marker_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Shape::stroke_marker_set( ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type m) const
{
     ::efl_canvas_vg_shape_stroke_marker_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Vg_Node*,  ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type>(m));
}
#endif
inline efl::canvas::vg::Shape::operator ::efl::canvas::vg::Shape() const { return *static_cast< ::efl::canvas::vg::Shape const*>(static_cast<void const*>(this)); }
inline efl::canvas::vg::Shape::operator ::efl::canvas::vg::Shape&() { return *static_cast< ::efl::canvas::vg::Shape*>(static_cast<void*>(this)); }
inline efl::canvas::vg::Shape::operator ::efl::canvas::vg::Shape const&() const { return *static_cast< ::efl::canvas::vg::Shape const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
