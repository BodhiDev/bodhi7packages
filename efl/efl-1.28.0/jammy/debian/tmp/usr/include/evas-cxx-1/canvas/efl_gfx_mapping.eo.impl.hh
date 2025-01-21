#ifndef EFL_GFX_MAPPING_IMPL_HH
#define EFL_GFX_MAPPING_IMPL_HH

#include "efl_gfx_mapping.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
inline ::efl::eolian::return_traits<int>::type Mapping::mapping_point_count_get() const
{
    int __return_value =  ::efl_gfx_mapping_point_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_point_count_set( ::efl::eolian::in_traits<int>::type count) const
{
     ::efl_gfx_mapping_point_count_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(count));
}
inline ::efl::eolian::return_traits<bool>::type Mapping::mapping_clockwise_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_mapping_clockwise_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Mapping::mapping_smooth_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_mapping_smooth_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_smooth_set( ::efl::eolian::in_traits<bool>::type smooth) const
{
     ::efl_gfx_mapping_smooth_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(smooth));
}
inline ::efl::eolian::return_traits<bool>::type Mapping::mapping_alpha_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_mapping_alpha_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_alpha_set( ::efl::eolian::in_traits<bool>::type alpha) const
{
     ::efl_gfx_mapping_alpha_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(alpha));
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_coord_absolute_get( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y,  ::efl::eolian::out_traits<double>::type z) const
{
    double __out_param_x = {};
    double __out_param_y = {};
    double __out_param_z = {};
     ::efl_gfx_mapping_coord_absolute_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(idx),
        & __out_param_x,
        & __out_param_y,
        & __out_param_z);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(y, __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(z, __out_param_z);
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_coord_absolute_set( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type z) const
{
     ::efl_gfx_mapping_coord_absolute_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(idx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(z));
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_uv_get( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::out_traits<double>::type u,  ::efl::eolian::out_traits<double>::type v) const
{
    double __out_param_u = {};
    double __out_param_v = {};
     ::efl_gfx_mapping_uv_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(idx),
        & __out_param_u,
        & __out_param_v);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(u, __out_param_u);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(v, __out_param_v);
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_uv_set( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::in_traits<double>::type u,  ::efl::eolian::in_traits<double>::type v) const
{
     ::efl_gfx_mapping_uv_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(idx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(u),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(v));
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_color_get( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const
{
    int __out_param_r = {};
    int __out_param_g = {};
    int __out_param_b = {};
    int __out_param_a = {};
     ::efl_gfx_mapping_color_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(idx),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_color_set( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const
{
     ::efl_gfx_mapping_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(idx),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(r),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(g),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(b),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(a));
}
inline ::efl::eolian::return_traits<bool>::type Mapping::mapping_has() const
{
    Eina_Bool __return_value =  ::efl_gfx_mapping_has(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_reset() const
{
     ::efl_gfx_mapping_reset(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Mapping::translate( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy,  ::efl::eolian::in_traits<double>::type dz) const
{
     ::efl_gfx_mapping_translate(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dz));
}
inline ::efl::eolian::return_traits<void>::type Mapping::rotate( ::efl::eolian::in_traits<double>::type degrees,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy) const
{
     ::efl_gfx_mapping_rotate(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(degrees),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity const*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(pivot),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cy));
}
inline ::efl::eolian::return_traits<void>::type Mapping::rotate_3d( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy,  ::efl::eolian::in_traits<double>::type dz,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy,  ::efl::eolian::in_traits<double>::type cz) const
{
     ::efl_gfx_mapping_rotate_3d(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dz),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity const*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(pivot),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cz));
}
inline ::efl::eolian::return_traits<void>::type Mapping::rotate_quat( ::efl::eolian::in_traits<double>::type qx,  ::efl::eolian::in_traits<double>::type qy,  ::efl::eolian::in_traits<double>::type qz,  ::efl::eolian::in_traits<double>::type qw,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy,  ::efl::eolian::in_traits<double>::type cz) const
{
     ::efl_gfx_mapping_rotate_quat(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(qx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(qy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(qz),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(qw),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity const*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(pivot),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cz));
}
inline ::efl::eolian::return_traits<void>::type Mapping::zoom( ::efl::eolian::in_traits<double>::type zoomx,  ::efl::eolian::in_traits<double>::type zoomy,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy) const
{
     ::efl_gfx_mapping_zoom(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(zoomx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(zoomy),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity const*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(pivot),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cy));
}
inline ::efl::eolian::return_traits<void>::type Mapping::lighting_3d( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type lx,  ::efl::eolian::in_traits<double>::type ly,  ::efl::eolian::in_traits<double>::type lz,  ::efl::eolian::in_traits<int>::type lr,  ::efl::eolian::in_traits<int>::type lg,  ::efl::eolian::in_traits<int>::type lb,  ::efl::eolian::in_traits<int>::type ar,  ::efl::eolian::in_traits<int>::type ag,  ::efl::eolian::in_traits<int>::type ab) const
{
     ::efl_gfx_mapping_lighting_3d(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity const*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(pivot),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(lx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ly),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(lz),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(lr),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(lg),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(lb),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(ar),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(ag),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(ab));
}
inline ::efl::eolian::return_traits<void>::type Mapping::perspective_3d( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type px,  ::efl::eolian::in_traits<double>::type py,  ::efl::eolian::in_traits<double>::type z0,  ::efl::eolian::in_traits<double>::type foc) const
{
     ::efl_gfx_mapping_perspective_3d(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity const*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(pivot),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(px),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(py),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(z0),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(foc));
}
inline ::efl::eolian::return_traits<void>::type Mapping::rotate_absolute( ::efl::eolian::in_traits<double>::type degrees,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy) const
{
     ::efl_gfx_mapping_rotate_absolute(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(degrees),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cy));
}
inline ::efl::eolian::return_traits<void>::type Mapping::rotate_3d_absolute( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy,  ::efl::eolian::in_traits<double>::type dz,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy,  ::efl::eolian::in_traits<double>::type cz) const
{
     ::efl_gfx_mapping_rotate_3d_absolute(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dz),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cz));
}
inline ::efl::eolian::return_traits<void>::type Mapping::rotate_quat_absolute( ::efl::eolian::in_traits<double>::type qx,  ::efl::eolian::in_traits<double>::type qy,  ::efl::eolian::in_traits<double>::type qz,  ::efl::eolian::in_traits<double>::type qw,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy,  ::efl::eolian::in_traits<double>::type cz) const
{
     ::efl_gfx_mapping_rotate_quat_absolute(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(qx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(qy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(qz),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(qw),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cz));
}
inline ::efl::eolian::return_traits<void>::type Mapping::zoom_absolute( ::efl::eolian::in_traits<double>::type zoomx,  ::efl::eolian::in_traits<double>::type zoomy,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy) const
{
     ::efl_gfx_mapping_zoom_absolute(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(zoomx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(zoomy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cy));
}
inline ::efl::eolian::return_traits<void>::type Mapping::lighting_3d_absolute( ::efl::eolian::in_traits<double>::type lx,  ::efl::eolian::in_traits<double>::type ly,  ::efl::eolian::in_traits<double>::type lz,  ::efl::eolian::in_traits<int>::type lr,  ::efl::eolian::in_traits<int>::type lg,  ::efl::eolian::in_traits<int>::type lb,  ::efl::eolian::in_traits<int>::type ar,  ::efl::eolian::in_traits<int>::type ag,  ::efl::eolian::in_traits<int>::type ab) const
{
     ::efl_gfx_mapping_lighting_3d_absolute(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(lx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ly),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(lz),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(lr),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(lg),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(lb),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(ar),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(ag),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(ab));
}
inline ::efl::eolian::return_traits<void>::type Mapping::perspective_3d_absolute( ::efl::eolian::in_traits<double>::type px,  ::efl::eolian::in_traits<double>::type py,  ::efl::eolian::in_traits<double>::type z0,  ::efl::eolian::in_traits<double>::type foc) const
{
     ::efl_gfx_mapping_perspective_3d_absolute(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(px),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(py),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(z0),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(foc));
}
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
inline ::efl::eolian::return_traits<int>::type Mapping::mapping_point_count_get() const
{
    int __return_value =  ::efl_gfx_mapping_point_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_point_count_set( ::efl::eolian::in_traits<int>::type count) const
{
     ::efl_gfx_mapping_point_count_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(count));
}
inline ::efl::eolian::return_traits<bool>::type Mapping::mapping_clockwise_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_mapping_clockwise_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Mapping::mapping_smooth_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_mapping_smooth_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_smooth_set( ::efl::eolian::in_traits<bool>::type smooth) const
{
     ::efl_gfx_mapping_smooth_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(smooth));
}
inline ::efl::eolian::return_traits<bool>::type Mapping::mapping_alpha_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_mapping_alpha_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_alpha_set( ::efl::eolian::in_traits<bool>::type alpha) const
{
     ::efl_gfx_mapping_alpha_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(alpha));
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_coord_absolute_get( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y,  ::efl::eolian::out_traits<double>::type z) const
{
    double __out_param_x = {};
    double __out_param_y = {};
    double __out_param_z = {};
     ::efl_gfx_mapping_coord_absolute_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(idx),
        & __out_param_x,
        & __out_param_y,
        & __out_param_z);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(y, __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(z, __out_param_z);
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_coord_absolute_set( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type z) const
{
     ::efl_gfx_mapping_coord_absolute_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(idx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(z));
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_uv_get( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::out_traits<double>::type u,  ::efl::eolian::out_traits<double>::type v) const
{
    double __out_param_u = {};
    double __out_param_v = {};
     ::efl_gfx_mapping_uv_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(idx),
        & __out_param_u,
        & __out_param_v);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(u, __out_param_u);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(v, __out_param_v);
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_uv_set( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::in_traits<double>::type u,  ::efl::eolian::in_traits<double>::type v) const
{
     ::efl_gfx_mapping_uv_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(idx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(u),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(v));
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_color_get( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const
{
    int __out_param_r = {};
    int __out_param_g = {};
    int __out_param_b = {};
    int __out_param_a = {};
     ::efl_gfx_mapping_color_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(idx),
        & __out_param_r,
        & __out_param_g,
        & __out_param_b,
        & __out_param_a);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(g, __out_param_g);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(b, __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(a, __out_param_a);
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_color_set( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const
{
     ::efl_gfx_mapping_color_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(idx),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(r),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(g),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(b),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(a));
}
inline ::efl::eolian::return_traits<bool>::type Mapping::mapping_has() const
{
    Eina_Bool __return_value =  ::efl_gfx_mapping_has(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Mapping::mapping_reset() const
{
     ::efl_gfx_mapping_reset(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Mapping::translate( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy,  ::efl::eolian::in_traits<double>::type dz) const
{
     ::efl_gfx_mapping_translate(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dz));
}
inline ::efl::eolian::return_traits<void>::type Mapping::rotate( ::efl::eolian::in_traits<double>::type degrees,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy) const
{
     ::efl_gfx_mapping_rotate(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(degrees),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity const*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(pivot),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cy));
}
inline ::efl::eolian::return_traits<void>::type Mapping::rotate_3d( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy,  ::efl::eolian::in_traits<double>::type dz,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy,  ::efl::eolian::in_traits<double>::type cz) const
{
     ::efl_gfx_mapping_rotate_3d(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dz),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity const*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(pivot),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cz));
}
inline ::efl::eolian::return_traits<void>::type Mapping::rotate_quat( ::efl::eolian::in_traits<double>::type qx,  ::efl::eolian::in_traits<double>::type qy,  ::efl::eolian::in_traits<double>::type qz,  ::efl::eolian::in_traits<double>::type qw,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy,  ::efl::eolian::in_traits<double>::type cz) const
{
     ::efl_gfx_mapping_rotate_quat(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(qx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(qy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(qz),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(qw),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity const*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(pivot),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cz));
}
inline ::efl::eolian::return_traits<void>::type Mapping::zoom( ::efl::eolian::in_traits<double>::type zoomx,  ::efl::eolian::in_traits<double>::type zoomy,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy) const
{
     ::efl_gfx_mapping_zoom(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(zoomx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(zoomy),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity const*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(pivot),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cy));
}
inline ::efl::eolian::return_traits<void>::type Mapping::lighting_3d( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type lx,  ::efl::eolian::in_traits<double>::type ly,  ::efl::eolian::in_traits<double>::type lz,  ::efl::eolian::in_traits<int>::type lr,  ::efl::eolian::in_traits<int>::type lg,  ::efl::eolian::in_traits<int>::type lb,  ::efl::eolian::in_traits<int>::type ar,  ::efl::eolian::in_traits<int>::type ag,  ::efl::eolian::in_traits<int>::type ab) const
{
     ::efl_gfx_mapping_lighting_3d(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity const*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(pivot),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(lx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ly),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(lz),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(lr),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(lg),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(lb),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(ar),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(ag),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(ab));
}
inline ::efl::eolian::return_traits<void>::type Mapping::perspective_3d( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type px,  ::efl::eolian::in_traits<double>::type py,  ::efl::eolian::in_traits<double>::type z0,  ::efl::eolian::in_traits<double>::type foc) const
{
     ::efl_gfx_mapping_perspective_3d(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity const*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(pivot),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(px),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(py),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(z0),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(foc));
}
inline ::efl::eolian::return_traits<void>::type Mapping::rotate_absolute( ::efl::eolian::in_traits<double>::type degrees,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy) const
{
     ::efl_gfx_mapping_rotate_absolute(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(degrees),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cy));
}
inline ::efl::eolian::return_traits<void>::type Mapping::rotate_3d_absolute( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy,  ::efl::eolian::in_traits<double>::type dz,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy,  ::efl::eolian::in_traits<double>::type cz) const
{
     ::efl_gfx_mapping_rotate_3d_absolute(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dz),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cz));
}
inline ::efl::eolian::return_traits<void>::type Mapping::rotate_quat_absolute( ::efl::eolian::in_traits<double>::type qx,  ::efl::eolian::in_traits<double>::type qy,  ::efl::eolian::in_traits<double>::type qz,  ::efl::eolian::in_traits<double>::type qw,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy,  ::efl::eolian::in_traits<double>::type cz) const
{
     ::efl_gfx_mapping_rotate_quat_absolute(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(qx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(qy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(qz),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(qw),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cz));
}
inline ::efl::eolian::return_traits<void>::type Mapping::zoom_absolute( ::efl::eolian::in_traits<double>::type zoomx,  ::efl::eolian::in_traits<double>::type zoomy,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy) const
{
     ::efl_gfx_mapping_zoom_absolute(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(zoomx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(zoomy),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(cy));
}
inline ::efl::eolian::return_traits<void>::type Mapping::lighting_3d_absolute( ::efl::eolian::in_traits<double>::type lx,  ::efl::eolian::in_traits<double>::type ly,  ::efl::eolian::in_traits<double>::type lz,  ::efl::eolian::in_traits<int>::type lr,  ::efl::eolian::in_traits<int>::type lg,  ::efl::eolian::in_traits<int>::type lb,  ::efl::eolian::in_traits<int>::type ar,  ::efl::eolian::in_traits<int>::type ag,  ::efl::eolian::in_traits<int>::type ab) const
{
     ::efl_gfx_mapping_lighting_3d_absolute(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(lx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(ly),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(lz),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(lr),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(lg),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(lb),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(ar),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(ag),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(ab));
}
inline ::efl::eolian::return_traits<void>::type Mapping::perspective_3d_absolute( ::efl::eolian::in_traits<double>::type px,  ::efl::eolian::in_traits<double>::type py,  ::efl::eolian::in_traits<double>::type z0,  ::efl::eolian::in_traits<double>::type foc) const
{
     ::efl_gfx_mapping_perspective_3d_absolute(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(px),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(py),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(z0),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(foc));
}
inline efl::gfx::Mapping::operator ::efl::gfx::Mapping() const { return *static_cast< ::efl::gfx::Mapping const*>(static_cast<void const*>(this)); }
inline efl::gfx::Mapping::operator ::efl::gfx::Mapping&() { return *static_cast< ::efl::gfx::Mapping*>(static_cast<void*>(this)); }
inline efl::gfx::Mapping::operator ::efl::gfx::Mapping const&() const { return *static_cast< ::efl::gfx::Mapping const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
