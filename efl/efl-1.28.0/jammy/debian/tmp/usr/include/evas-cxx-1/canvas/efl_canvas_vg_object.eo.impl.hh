#ifndef EFL_CANVAS_VG_OBJECT_IMPL_HH
#define EFL_CANVAS_VG_OBJECT_IMPL_HH

#include "efl_canvas_vg_object.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { namespace vg { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Canvas_Vg_Fill_Mode>::type Object::fill_mode_get() const
{
    Efl_Canvas_Vg_Fill_Mode __return_value =  ::efl_canvas_vg_object_fill_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Canvas_Vg_Fill_Mode>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::fill_mode_set( ::efl::eolian::in_traits<Efl_Canvas_Vg_Fill_Mode>::type fill_mode) const
{
     ::efl_canvas_vg_object_fill_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Canvas_Vg_Fill_Mode,  ::efl::eolian::in_traits<Efl_Canvas_Vg_Fill_Mode>::type>(fill_mode));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Rect>::type Object::viewbox_get() const
{
    Eina_Rect __return_value =  ::efl_canvas_vg_object_viewbox_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::viewbox_set( ::efl::eolian::in_traits<Eina_Rect>::type viewbox) const
{
     ::efl_canvas_vg_object_viewbox_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(viewbox));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::viewbox_align_get( ::efl::eolian::out_traits<double>::type align_x,  ::efl::eolian::out_traits<double>::type align_y) const
{
    double __out_param_align_x = {};
    double __out_param_align_y = {};
     ::efl_canvas_vg_object_viewbox_align_get(_eo_ptr(),
        & __out_param_align_x,
        & __out_param_align_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(align_x, __out_param_align_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(align_y, __out_param_align_y);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::viewbox_align_set( ::efl::eolian::in_traits<double>::type align_x,  ::efl::eolian::in_traits<double>::type align_y) const
{
     ::efl_canvas_vg_object_viewbox_align_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(align_x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(align_y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type Object::root_node_get() const
{
     ::Efl_Canvas_Vg_Node* __return_value =  ::efl_canvas_vg_object_root_node_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::root_node_set( ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type root) const
{
     ::efl_canvas_vg_object_root_node_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Vg_Node*,  ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type>(root));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Size2D>::type Object::default_size_get() const
{
    Eina_Size2D __return_value =  ::efl_canvas_vg_object_default_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace canvas { namespace vg { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Canvas_Vg_Fill_Mode>::type Object::fill_mode_get() const
{
    Efl_Canvas_Vg_Fill_Mode __return_value =  ::efl_canvas_vg_object_fill_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Canvas_Vg_Fill_Mode>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::fill_mode_set( ::efl::eolian::in_traits<Efl_Canvas_Vg_Fill_Mode>::type fill_mode) const
{
     ::efl_canvas_vg_object_fill_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Canvas_Vg_Fill_Mode,  ::efl::eolian::in_traits<Efl_Canvas_Vg_Fill_Mode>::type>(fill_mode));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Rect>::type Object::viewbox_get() const
{
    Eina_Rect __return_value =  ::efl_canvas_vg_object_viewbox_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::viewbox_set( ::efl::eolian::in_traits<Eina_Rect>::type viewbox) const
{
     ::efl_canvas_vg_object_viewbox_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(viewbox));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::viewbox_align_get( ::efl::eolian::out_traits<double>::type align_x,  ::efl::eolian::out_traits<double>::type align_y) const
{
    double __out_param_align_x = {};
    double __out_param_align_y = {};
     ::efl_canvas_vg_object_viewbox_align_get(_eo_ptr(),
        & __out_param_align_x,
        & __out_param_align_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(align_x, __out_param_align_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(align_y, __out_param_align_y);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::viewbox_align_set( ::efl::eolian::in_traits<double>::type align_x,  ::efl::eolian::in_traits<double>::type align_y) const
{
     ::efl_canvas_vg_object_viewbox_align_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(align_x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(align_y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type Object::root_node_get() const
{
     ::Efl_Canvas_Vg_Node* __return_value =  ::efl_canvas_vg_object_root_node_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::root_node_set( ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type root) const
{
     ::efl_canvas_vg_object_root_node_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Vg_Node*,  ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type>(root));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Size2D>::type Object::default_size_get() const
{
    Eina_Size2D __return_value =  ::efl_canvas_vg_object_default_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
#endif
inline efl::canvas::vg::Object::operator ::efl::canvas::vg::Object() const { return *static_cast< ::efl::canvas::vg::Object const*>(static_cast<void const*>(this)); }
inline efl::canvas::vg::Object::operator ::efl::canvas::vg::Object&() { return *static_cast< ::efl::canvas::vg::Object*>(static_cast<void*>(this)); }
inline efl::canvas::vg::Object::operator ::efl::canvas::vg::Object const&() const { return *static_cast< ::efl::canvas::vg::Object const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
