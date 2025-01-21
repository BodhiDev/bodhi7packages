#ifndef EFL_CANVAS_VG_NODE_IMPL_HH
#define EFL_CANVAS_VG_NODE_IMPL_HH

#include "efl_canvas_vg_node.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { namespace vg { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<const Eina_Matrix3 *>::type Node::transformation_get() const
{
    const Eina_Matrix3 * __return_value =  ::efl_canvas_vg_node_transformation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Eina_Matrix3 *>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Node::transformation_set( ::efl::eolian::in_traits<const Eina_Matrix3 *>::type m) const
{
     ::efl_canvas_vg_node_transformation_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Matrix3 *,  ::efl::eolian::in_traits<const Eina_Matrix3 *>::type>(m));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Node::origin_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const
{
    double __out_param_x = {};
    double __out_param_y = {};
     ::efl_canvas_vg_node_origin_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(y, __out_param_y);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Node::origin_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_canvas_vg_node_origin_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Node::comp_method_set( ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type target,  ::efl::eolian::in_traits<Efl_Gfx_Vg_Composite_Method>::type method) const
{
     ::efl_canvas_vg_node_comp_method_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Vg_Node*,  ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type>(target),
         ::efl::eolian::convert_to_c<Efl_Gfx_Vg_Composite_Method,  ::efl::eolian::in_traits<Efl_Gfx_Vg_Composite_Method>::type>(method));
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace canvas { namespace vg { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<const Eina_Matrix3 *>::type Node::transformation_get() const
{
    const Eina_Matrix3 * __return_value =  ::efl_canvas_vg_node_transformation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<const Eina_Matrix3 *>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Node::transformation_set( ::efl::eolian::in_traits<const Eina_Matrix3 *>::type m) const
{
     ::efl_canvas_vg_node_transformation_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Matrix3 *,  ::efl::eolian::in_traits<const Eina_Matrix3 *>::type>(m));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Node::origin_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const
{
    double __out_param_x = {};
    double __out_param_y = {};
     ::efl_canvas_vg_node_origin_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(y, __out_param_y);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Node::origin_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_canvas_vg_node_origin_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Node::comp_method_set( ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type target,  ::efl::eolian::in_traits<Efl_Gfx_Vg_Composite_Method>::type method) const
{
     ::efl_canvas_vg_node_comp_method_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Vg_Node*,  ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type>(target),
         ::efl::eolian::convert_to_c<Efl_Gfx_Vg_Composite_Method,  ::efl::eolian::in_traits<Efl_Gfx_Vg_Composite_Method>::type>(method));
}
#endif
inline efl::canvas::vg::Node::operator ::efl::canvas::vg::Node() const { return *static_cast< ::efl::canvas::vg::Node const*>(static_cast<void const*>(this)); }
inline efl::canvas::vg::Node::operator ::efl::canvas::vg::Node&() { return *static_cast< ::efl::canvas::vg::Node*>(static_cast<void*>(this)); }
inline efl::canvas::vg::Node::operator ::efl::canvas::vg::Node const&() const { return *static_cast< ::efl::canvas::vg::Node const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
