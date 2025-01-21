#ifndef EFL_GFX_PATH_IMPL_HH
#define EFL_GFX_PATH_IMPL_HH

#include "efl_gfx_path.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::path_get( ::efl::eolian::out_traits<Efl_Gfx_Path_Command_Type const&>::type op,  ::efl::eolian::out_traits<double const&>::type points) const
{
    const Efl_Gfx_Path_Command_Type * __out_param_op = {};
    const double * __out_param_points = {};
     ::efl_gfx_path_get(_eo_ptr(),
        & __out_param_op,
        & __out_param_points);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Path_Command_Type const&>::type, const Efl_Gfx_Path_Command_Type *>(op, __out_param_op);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double const&>::type, const double *>(points, __out_param_points);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::path_set( ::efl::eolian::in_traits<Efl_Gfx_Path_Command_Type const&>::type op,  ::efl::eolian::in_traits<double const&>::type points) const
{
     ::efl_gfx_path_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Efl_Gfx_Path_Command_Type *,  ::efl::eolian::in_traits<Efl_Gfx_Path_Command_Type const&>::type>(op),
         ::efl::eolian::convert_to_c<const double *,  ::efl::eolian::in_traits<double const&>::type>(points));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::length_get( ::efl::eolian::out_traits< unsigned int>::type commands,  ::efl::eolian::out_traits< unsigned int>::type points) const
{
    unsigned int __out_param_commands = {};
    unsigned int __out_param_points = {};
     ::efl_gfx_path_length_get(_eo_ptr(),
        & __out_param_commands,
        & __out_param_points);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(commands, __out_param_commands);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(points, __out_param_points);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::current_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const
{
    double __out_param_x = {};
    double __out_param_y = {};
     ::efl_gfx_path_current_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(y, __out_param_y);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::current_ctrl_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const
{
    double __out_param_x = {};
    double __out_param_y = {};
     ::efl_gfx_path_current_ctrl_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(y, __out_param_y);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::copy_from( ::efl::eolian::in_traits< ::efl::Object>::type dup_from) const
{
     ::efl_gfx_path_copy_from(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object const*,  ::efl::eolian::in_traits< ::efl::Object>::type>(dup_from));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::bounds_get( ::efl::eolian::out_traits<Eina_Rect>::type r) const
{
    Eina_Rect __out_param_r = {};
     ::efl_gfx_path_bounds_get(_eo_ptr(),
        & __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Rect>::type, Eina_Rect>(r, __out_param_r);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::reset() const
{
     ::efl_gfx_path_reset(_eo_ptr());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_move_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_gfx_path_append_move_to(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_line_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_gfx_path_append_line_to(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_quadratic_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type ctrl_x,  ::efl::eolian::in_traits<double>::type ctrl_y) const
{
     ::efl_gfx_path_append_quadratic_to(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ctrl_x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ctrl_y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_squadratic_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_gfx_path_append_squadratic_to(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_cubic_to( ::efl::eolian::in_traits<double>::type ctrl_x0,  ::efl::eolian::in_traits<double>::type ctrl_y0,  ::efl::eolian::in_traits<double>::type ctrl_x1,  ::efl::eolian::in_traits<double>::type ctrl_y1,  ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_gfx_path_append_cubic_to(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ctrl_x0),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ctrl_y0),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ctrl_x1),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ctrl_y1),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_scubic_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type ctrl_x,  ::efl::eolian::in_traits<double>::type ctrl_y) const
{
     ::efl_gfx_path_append_scubic_to(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ctrl_x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ctrl_y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_arc_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type rx,  ::efl::eolian::in_traits<double>::type ry,  ::efl::eolian::in_traits<double>::type angle,  ::efl::eolian::in_traits<bool>::type large_arc,  ::efl::eolian::in_traits<bool>::type sweep) const
{
     ::efl_gfx_path_append_arc_to(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(rx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ry),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(angle),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(large_arc),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(sweep));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_arc( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type w,  ::efl::eolian::in_traits<double>::type h,  ::efl::eolian::in_traits<double>::type start_angle,  ::efl::eolian::in_traits<double>::type sweep_length) const
{
     ::efl_gfx_path_append_arc(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(w),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(h),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(start_angle),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(sweep_length));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_close() const
{
     ::efl_gfx_path_append_close(_eo_ptr());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_circle( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type radius) const
{
     ::efl_gfx_path_append_circle(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(radius));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_rect( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type w,  ::efl::eolian::in_traits<double>::type h,  ::efl::eolian::in_traits<double>::type rx,  ::efl::eolian::in_traits<double>::type ry) const
{
     ::efl_gfx_path_append_rect(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(w),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(h),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(rx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ry));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_svg_path( ::efl::eolian::in_traits< ::efl::eina::string_view>::type svg_path_data) const
{
     ::efl_gfx_path_append_svg_path(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(svg_path_data));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Path::interpolate( ::efl::eolian::in_traits< ::efl::Object>::type from,  ::efl::eolian::in_traits< ::efl::Object>::type to,  ::efl::eolian::in_traits<double>::type pos_map) const
{
    Eina_Bool __return_value =  ::efl_gfx_path_interpolate(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object const*,  ::efl::eolian::in_traits< ::efl::Object>::type>(from),
         ::efl::eolian::convert_to_c< ::Efl_Object const*,  ::efl::eolian::in_traits< ::efl::Object>::type>(to),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(pos_map));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Path::equal_commands( ::efl::eolian::in_traits< ::efl::Object>::type with) const
{
    Eina_Bool __return_value =  ::efl_gfx_path_equal_commands(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object const*,  ::efl::eolian::in_traits< ::efl::Object>::type>(with));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::reserve( ::efl::eolian::in_traits< unsigned int>::type cmd_count,  ::efl::eolian::in_traits< unsigned int>::type pts_count) const
{
     ::efl_gfx_path_reserve(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(cmd_count),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(pts_count));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::commit() const
{
     ::efl_gfx_path_commit(_eo_ptr());
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::path_get( ::efl::eolian::out_traits<Efl_Gfx_Path_Command_Type const&>::type op,  ::efl::eolian::out_traits<double const&>::type points) const
{
    const Efl_Gfx_Path_Command_Type * __out_param_op = {};
    const double * __out_param_points = {};
     ::efl_gfx_path_get(_eo_ptr(),
        & __out_param_op,
        & __out_param_points);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Path_Command_Type const&>::type, const Efl_Gfx_Path_Command_Type *>(op, __out_param_op);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double const&>::type, const double *>(points, __out_param_points);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::path_set( ::efl::eolian::in_traits<Efl_Gfx_Path_Command_Type const&>::type op,  ::efl::eolian::in_traits<double const&>::type points) const
{
     ::efl_gfx_path_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Efl_Gfx_Path_Command_Type *,  ::efl::eolian::in_traits<Efl_Gfx_Path_Command_Type const&>::type>(op),
         ::efl::eolian::convert_to_c<const double *,  ::efl::eolian::in_traits<double const&>::type>(points));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::length_get( ::efl::eolian::out_traits< unsigned int>::type commands,  ::efl::eolian::out_traits< unsigned int>::type points) const
{
    unsigned int __out_param_commands = {};
    unsigned int __out_param_points = {};
     ::efl_gfx_path_length_get(_eo_ptr(),
        & __out_param_commands,
        & __out_param_points);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(commands, __out_param_commands);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(points, __out_param_points);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::current_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const
{
    double __out_param_x = {};
    double __out_param_y = {};
     ::efl_gfx_path_current_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(y, __out_param_y);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::current_ctrl_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const
{
    double __out_param_x = {};
    double __out_param_y = {};
     ::efl_gfx_path_current_ctrl_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(y, __out_param_y);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::copy_from( ::efl::eolian::in_traits< ::efl::Object>::type dup_from) const
{
     ::efl_gfx_path_copy_from(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object const*,  ::efl::eolian::in_traits< ::efl::Object>::type>(dup_from));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::bounds_get( ::efl::eolian::out_traits<Eina_Rect>::type r) const
{
    Eina_Rect __out_param_r = {};
     ::efl_gfx_path_bounds_get(_eo_ptr(),
        & __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Rect>::type, Eina_Rect>(r, __out_param_r);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::reset() const
{
     ::efl_gfx_path_reset(_eo_ptr());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_move_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_gfx_path_append_move_to(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_line_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_gfx_path_append_line_to(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_quadratic_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type ctrl_x,  ::efl::eolian::in_traits<double>::type ctrl_y) const
{
     ::efl_gfx_path_append_quadratic_to(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ctrl_x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ctrl_y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_squadratic_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_gfx_path_append_squadratic_to(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_cubic_to( ::efl::eolian::in_traits<double>::type ctrl_x0,  ::efl::eolian::in_traits<double>::type ctrl_y0,  ::efl::eolian::in_traits<double>::type ctrl_x1,  ::efl::eolian::in_traits<double>::type ctrl_y1,  ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_gfx_path_append_cubic_to(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ctrl_x0),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ctrl_y0),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ctrl_x1),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ctrl_y1),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_scubic_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type ctrl_x,  ::efl::eolian::in_traits<double>::type ctrl_y) const
{
     ::efl_gfx_path_append_scubic_to(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ctrl_x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ctrl_y));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_arc_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type rx,  ::efl::eolian::in_traits<double>::type ry,  ::efl::eolian::in_traits<double>::type angle,  ::efl::eolian::in_traits<bool>::type large_arc,  ::efl::eolian::in_traits<bool>::type sweep) const
{
     ::efl_gfx_path_append_arc_to(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(rx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ry),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(angle),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(large_arc),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(sweep));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_arc( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type w,  ::efl::eolian::in_traits<double>::type h,  ::efl::eolian::in_traits<double>::type start_angle,  ::efl::eolian::in_traits<double>::type sweep_length) const
{
     ::efl_gfx_path_append_arc(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(w),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(h),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(start_angle),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(sweep_length));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_close() const
{
     ::efl_gfx_path_append_close(_eo_ptr());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_circle( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type radius) const
{
     ::efl_gfx_path_append_circle(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(radius));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_rect( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type w,  ::efl::eolian::in_traits<double>::type h,  ::efl::eolian::in_traits<double>::type rx,  ::efl::eolian::in_traits<double>::type ry) const
{
     ::efl_gfx_path_append_rect(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(w),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(h),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(rx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ry));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::append_svg_path( ::efl::eolian::in_traits< ::efl::eina::string_view>::type svg_path_data) const
{
     ::efl_gfx_path_append_svg_path(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(svg_path_data));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Path::interpolate( ::efl::eolian::in_traits< ::efl::Object>::type from,  ::efl::eolian::in_traits< ::efl::Object>::type to,  ::efl::eolian::in_traits<double>::type pos_map) const
{
    Eina_Bool __return_value =  ::efl_gfx_path_interpolate(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object const*,  ::efl::eolian::in_traits< ::efl::Object>::type>(from),
         ::efl::eolian::convert_to_c< ::Efl_Object const*,  ::efl::eolian::in_traits< ::efl::Object>::type>(to),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(pos_map));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Path::equal_commands( ::efl::eolian::in_traits< ::efl::Object>::type with) const
{
    Eina_Bool __return_value =  ::efl_gfx_path_equal_commands(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object const*,  ::efl::eolian::in_traits< ::efl::Object>::type>(with));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::reserve( ::efl::eolian::in_traits< unsigned int>::type cmd_count,  ::efl::eolian::in_traits< unsigned int>::type pts_count) const
{
     ::efl_gfx_path_reserve(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(cmd_count),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(pts_count));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Path::commit() const
{
     ::efl_gfx_path_commit(_eo_ptr());
}
#endif
inline efl::gfx::Path::operator ::efl::gfx::Path() const { return *static_cast< ::efl::gfx::Path const*>(static_cast<void const*>(this)); }
inline efl::gfx::Path::operator ::efl::gfx::Path&() { return *static_cast< ::efl::gfx::Path*>(static_cast<void*>(this)); }
inline efl::gfx::Path::operator ::efl::gfx::Path const&() const { return *static_cast< ::efl::gfx::Path const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
