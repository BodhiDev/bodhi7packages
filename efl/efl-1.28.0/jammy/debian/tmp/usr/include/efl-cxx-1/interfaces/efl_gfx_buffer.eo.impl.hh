#ifndef EFL_GFX_BUFFER_IMPL_HH
#define EFL_GFX_BUFFER_IMPL_HH

#include "efl_gfx_buffer.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Size2D>::type Buffer::buffer_size_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_buffer_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffer::buffer_size_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const
{
     ::efl_gfx_buffer_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(sz));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Gfx_Colorspace>::type Buffer::colorspace_get() const
{
    Efl_Gfx_Colorspace __return_value =  ::efl_gfx_buffer_colorspace_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Colorspace>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Buffer::alpha_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_buffer_alpha_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffer::alpha_set( ::efl::eolian::in_traits<bool>::type alpha) const
{
     ::efl_gfx_buffer_alpha_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(alpha));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Buffer::stride_get() const
{
    int __return_value =  ::efl_gfx_buffer_stride_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffer::buffer_borders_get( ::efl::eolian::out_traits< unsigned int>::type l,  ::efl::eolian::out_traits< unsigned int>::type r,  ::efl::eolian::out_traits< unsigned int>::type t,  ::efl::eolian::out_traits< unsigned int>::type b) const
{
    unsigned int __out_param_l = {};
    unsigned int __out_param_r = {};
    unsigned int __out_param_t = {};
    unsigned int __out_param_b = {};
     ::efl_gfx_buffer_borders_get(_eo_ptr(),
        & __out_param_l,
        & __out_param_r,
        & __out_param_t,
        & __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(l, __out_param_l);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(t, __out_param_t);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(b, __out_param_b);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffer::buffer_update_add( ::efl::eolian::in_traits< ::efl::eina::optional<const Eina_Rect *>>::type region) const
{
     ::efl_gfx_buffer_update_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Rect *,  ::efl::eolian::in_traits< ::efl::eina::optional<const Eina_Rect *>>::type>(region));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Rw_Slice>::type Buffer::buffer_map( ::efl::eolian::in_traits<Efl_Gfx_Buffer_Access_Mode>::type mode,  ::efl::eolian::in_traits< ::efl::eina::optional<const Eina_Rect *>>::type region,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Colorspace>>::type cspace,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type plane,  ::efl::eolian::out_traits<int*>::type stride) const
{
    int __out_param_stride = {};
    Eina_Rw_Slice __return_value =  ::efl_gfx_buffer_map(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Buffer_Access_Mode,  ::efl::eolian::in_traits<Efl_Gfx_Buffer_Access_Mode>::type>(mode),
         ::efl::eolian::convert_to_c<const Eina_Rect *,  ::efl::eolian::in_traits< ::efl::eina::optional<const Eina_Rect *>>::type>(region),
         ::efl::eolian::convert_to_c<Efl_Gfx_Colorspace,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Colorspace>>::type>(cspace),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type>(plane),
        & __out_param_stride);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int*>::type, int>(stride, __out_param_stride);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rw_Slice>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Buffer::buffer_unmap( ::efl::eolian::in_traits<Eina_Rw_Slice>::type slice) const
{
    Eina_Bool __return_value =  ::efl_gfx_buffer_unmap(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rw_Slice,  ::efl::eolian::in_traits<Eina_Rw_Slice>::type>(slice));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Buffer::buffer_copy_set( ::efl::eolian::in_traits<const Eina_Slice *>::type slice,  ::efl::eolian::in_traits<Eina_Size2D>::type size,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type stride,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Colorspace>>::type cspace,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type plane) const
{
    Eina_Bool __return_value =  ::efl_gfx_buffer_copy_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Slice *,  ::efl::eolian::in_traits<const Eina_Slice *>::type>(slice),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(size),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type>(stride),
         ::efl::eolian::convert_to_c<Efl_Gfx_Colorspace,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Colorspace>>::type>(cspace),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type>(plane));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Buffer::buffer_managed_set( ::efl::eolian::in_traits<const Eina_Slice *>::type slice,  ::efl::eolian::in_traits<Eina_Size2D>::type size,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type stride,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Colorspace>>::type cspace,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type plane) const
{
    Eina_Bool __return_value =  ::efl_gfx_buffer_managed_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Slice *,  ::efl::eolian::in_traits<const Eina_Slice *>::type>(slice),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(size),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type>(stride),
         ::efl::eolian::convert_to_c<Efl_Gfx_Colorspace,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Colorspace>>::type>(cspace),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type>(plane));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Slice>::type Buffer::buffer_managed_get( ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type plane) const
{
    Eina_Slice __return_value =  ::efl_gfx_buffer_managed_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type>(plane));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Slice>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Size2D>::type Buffer::buffer_size_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_buffer_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffer::buffer_size_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const
{
     ::efl_gfx_buffer_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(sz));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Gfx_Colorspace>::type Buffer::colorspace_get() const
{
    Efl_Gfx_Colorspace __return_value =  ::efl_gfx_buffer_colorspace_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Gfx_Colorspace>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Buffer::alpha_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_buffer_alpha_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffer::alpha_set( ::efl::eolian::in_traits<bool>::type alpha) const
{
     ::efl_gfx_buffer_alpha_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(alpha));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Buffer::stride_get() const
{
    int __return_value =  ::efl_gfx_buffer_stride_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffer::buffer_borders_get( ::efl::eolian::out_traits< unsigned int>::type l,  ::efl::eolian::out_traits< unsigned int>::type r,  ::efl::eolian::out_traits< unsigned int>::type t,  ::efl::eolian::out_traits< unsigned int>::type b) const
{
    unsigned int __out_param_l = {};
    unsigned int __out_param_r = {};
    unsigned int __out_param_t = {};
    unsigned int __out_param_b = {};
     ::efl_gfx_buffer_borders_get(_eo_ptr(),
        & __out_param_l,
        & __out_param_r,
        & __out_param_t,
        & __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(l, __out_param_l);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(t, __out_param_t);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(b, __out_param_b);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Buffer::buffer_update_add( ::efl::eolian::in_traits< ::efl::eina::optional<const Eina_Rect *>>::type region) const
{
     ::efl_gfx_buffer_update_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Rect *,  ::efl::eolian::in_traits< ::efl::eina::optional<const Eina_Rect *>>::type>(region));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Rw_Slice>::type Buffer::buffer_map( ::efl::eolian::in_traits<Efl_Gfx_Buffer_Access_Mode>::type mode,  ::efl::eolian::in_traits< ::efl::eina::optional<const Eina_Rect *>>::type region,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Colorspace>>::type cspace,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type plane,  ::efl::eolian::out_traits<int*>::type stride) const
{
    int __out_param_stride = {};
    Eina_Rw_Slice __return_value =  ::efl_gfx_buffer_map(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Buffer_Access_Mode,  ::efl::eolian::in_traits<Efl_Gfx_Buffer_Access_Mode>::type>(mode),
         ::efl::eolian::convert_to_c<const Eina_Rect *,  ::efl::eolian::in_traits< ::efl::eina::optional<const Eina_Rect *>>::type>(region),
         ::efl::eolian::convert_to_c<Efl_Gfx_Colorspace,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Colorspace>>::type>(cspace),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type>(plane),
        & __out_param_stride);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int*>::type, int>(stride, __out_param_stride);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rw_Slice>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Buffer::buffer_unmap( ::efl::eolian::in_traits<Eina_Rw_Slice>::type slice) const
{
    Eina_Bool __return_value =  ::efl_gfx_buffer_unmap(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rw_Slice,  ::efl::eolian::in_traits<Eina_Rw_Slice>::type>(slice));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Buffer::buffer_copy_set( ::efl::eolian::in_traits<const Eina_Slice *>::type slice,  ::efl::eolian::in_traits<Eina_Size2D>::type size,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type stride,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Colorspace>>::type cspace,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type plane) const
{
    Eina_Bool __return_value =  ::efl_gfx_buffer_copy_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Slice *,  ::efl::eolian::in_traits<const Eina_Slice *>::type>(slice),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(size),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type>(stride),
         ::efl::eolian::convert_to_c<Efl_Gfx_Colorspace,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Colorspace>>::type>(cspace),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type>(plane));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Buffer::buffer_managed_set( ::efl::eolian::in_traits<const Eina_Slice *>::type slice,  ::efl::eolian::in_traits<Eina_Size2D>::type size,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type stride,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Colorspace>>::type cspace,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type plane) const
{
    Eina_Bool __return_value =  ::efl_gfx_buffer_managed_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Eina_Slice *,  ::efl::eolian::in_traits<const Eina_Slice *>::type>(slice),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(size),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type>(stride),
         ::efl::eolian::convert_to_c<Efl_Gfx_Colorspace,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Colorspace>>::type>(cspace),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type>(plane));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Slice>::type Buffer::buffer_managed_get( ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type plane) const
{
    Eina_Slice __return_value =  ::efl_gfx_buffer_managed_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type>(plane));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Slice>::type>(__return_value);
}
#endif
inline efl::gfx::Buffer::operator ::efl::gfx::Buffer() const { return *static_cast< ::efl::gfx::Buffer const*>(static_cast<void const*>(this)); }
inline efl::gfx::Buffer::operator ::efl::gfx::Buffer&() { return *static_cast< ::efl::gfx::Buffer*>(static_cast<void*>(this)); }
inline efl::gfx::Buffer::operator ::efl::gfx::Buffer const&() const { return *static_cast< ::efl::gfx::Buffer const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
