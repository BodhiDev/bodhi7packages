#ifndef EFL_GFX_HINT_IMPL_HH
#define EFL_GFX_HINT_IMPL_HH

#include "efl_gfx_hint.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
inline ::efl::eolian::return_traits<void>::type Hint::hint_aspect_get( ::efl::eolian::out_traits<Efl_Gfx_Hint_Aspect>::type mode,  ::efl::eolian::out_traits<Eina_Size2D>::type sz) const
{
    Efl_Gfx_Hint_Aspect __out_param_mode = {};
    Eina_Size2D __out_param_sz = {};
     ::efl_gfx_hint_aspect_get(_eo_ptr(),
        & __out_param_mode,
        & __out_param_sz);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Hint_Aspect>::type, Efl_Gfx_Hint_Aspect>(mode, __out_param_mode);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Size2D>::type, Eina_Size2D>(sz, __out_param_sz);
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_aspect_set( ::efl::eolian::in_traits<Efl_Gfx_Hint_Aspect>::type mode,  ::efl::eolian::in_traits<Eina_Size2D>::type sz) const
{
     ::efl_gfx_hint_aspect_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Hint_Aspect,  ::efl::eolian::in_traits<Efl_Gfx_Hint_Aspect>::type>(mode),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(sz));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Hint::hint_size_max_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_hint_size_max_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_size_max_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const
{
     ::efl_gfx_hint_size_max_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(sz));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Hint::hint_size_restricted_max_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_hint_size_restricted_max_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
#ifdef EFL_GFX_HINT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Hint::hint_size_restricted_max_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const
{
     ::efl_gfx_hint_size_restricted_max_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(sz));
}
#endif
inline ::efl::eolian::return_traits<Eina_Size2D>::type Hint::hint_size_combined_max_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_hint_size_combined_max_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Hint::hint_size_min_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_hint_size_min_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_size_min_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const
{
     ::efl_gfx_hint_size_min_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(sz));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Hint::hint_size_restricted_min_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_hint_size_restricted_min_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
#ifdef EFL_GFX_HINT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Hint::hint_size_restricted_min_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const
{
     ::efl_gfx_hint_size_restricted_min_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(sz));
}
#endif
inline ::efl::eolian::return_traits<Eina_Size2D>::type Hint::hint_size_combined_min_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_hint_size_combined_min_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_margin_get( ::efl::eolian::out_traits<int>::type l,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type t,  ::efl::eolian::out_traits<int>::type b) const
{
    int __out_param_l = {};
    int __out_param_r = {};
    int __out_param_t = {};
    int __out_param_b = {};
     ::efl_gfx_hint_margin_get(_eo_ptr(),
        & __out_param_l,
        & __out_param_r,
        & __out_param_t,
        & __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(l, __out_param_l);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(t, __out_param_t);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(b, __out_param_b);
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_margin_set( ::efl::eolian::in_traits<int>::type l,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type t,  ::efl::eolian::in_traits<int>::type b) const
{
     ::efl_gfx_hint_margin_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(l),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(r),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(t),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(b));
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_weight_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const
{
    double __out_param_x = {};
    double __out_param_y = {};
     ::efl_gfx_hint_weight_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(y, __out_param_y);
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_weight_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_gfx_hint_weight_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_align_get( ::efl::eolian::out_traits<Efl_Gfx_Align>::type x,  ::efl::eolian::out_traits<Efl_Gfx_Align>::type y) const
{
    Efl_Gfx_Align __out_param_x = {};
    Efl_Gfx_Align __out_param_y = {};
     ::efl_gfx_hint_align_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Align>::type, Efl_Gfx_Align>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Align>::type, Efl_Gfx_Align>(y, __out_param_y);
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_align_set( ::efl::eolian::in_traits<Efl_Gfx_Align>::type x,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type y) const
{
     ::efl_gfx_hint_align_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Align,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type>(x),
         ::efl::eolian::convert_to_c<Efl_Gfx_Align,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type>(y));
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_fill_get( ::efl::eolian::out_traits<bool>::type x,  ::efl::eolian::out_traits<bool>::type y) const
{
    Eina_Bool __out_param_x = {};
    Eina_Bool __out_param_y = {};
     ::efl_gfx_hint_fill_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(y, __out_param_y);
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_fill_set( ::efl::eolian::in_traits<bool>::type x,  ::efl::eolian::in_traits<bool>::type y) const
{
     ::efl_gfx_hint_fill_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(x),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(y));
}
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
inline ::efl::eolian::return_traits<void>::type Hint::hint_aspect_get( ::efl::eolian::out_traits<Efl_Gfx_Hint_Aspect>::type mode,  ::efl::eolian::out_traits<Eina_Size2D>::type sz) const
{
    Efl_Gfx_Hint_Aspect __out_param_mode = {};
    Eina_Size2D __out_param_sz = {};
     ::efl_gfx_hint_aspect_get(_eo_ptr(),
        & __out_param_mode,
        & __out_param_sz);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Hint_Aspect>::type, Efl_Gfx_Hint_Aspect>(mode, __out_param_mode);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Size2D>::type, Eina_Size2D>(sz, __out_param_sz);
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_aspect_set( ::efl::eolian::in_traits<Efl_Gfx_Hint_Aspect>::type mode,  ::efl::eolian::in_traits<Eina_Size2D>::type sz) const
{
     ::efl_gfx_hint_aspect_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Hint_Aspect,  ::efl::eolian::in_traits<Efl_Gfx_Hint_Aspect>::type>(mode),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(sz));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Hint::hint_size_max_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_hint_size_max_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_size_max_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const
{
     ::efl_gfx_hint_size_max_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(sz));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Hint::hint_size_restricted_max_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_hint_size_restricted_max_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
#ifdef EFL_GFX_HINT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Hint::hint_size_restricted_max_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const
{
     ::efl_gfx_hint_size_restricted_max_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(sz));
}
#endif
inline ::efl::eolian::return_traits<Eina_Size2D>::type Hint::hint_size_combined_max_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_hint_size_combined_max_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Hint::hint_size_min_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_hint_size_min_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_size_min_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const
{
     ::efl_gfx_hint_size_min_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(sz));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Hint::hint_size_restricted_min_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_hint_size_restricted_min_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
#ifdef EFL_GFX_HINT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Hint::hint_size_restricted_min_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const
{
     ::efl_gfx_hint_size_restricted_min_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(sz));
}
#endif
inline ::efl::eolian::return_traits<Eina_Size2D>::type Hint::hint_size_combined_min_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_hint_size_combined_min_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_margin_get( ::efl::eolian::out_traits<int>::type l,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type t,  ::efl::eolian::out_traits<int>::type b) const
{
    int __out_param_l = {};
    int __out_param_r = {};
    int __out_param_t = {};
    int __out_param_b = {};
     ::efl_gfx_hint_margin_get(_eo_ptr(),
        & __out_param_l,
        & __out_param_r,
        & __out_param_t,
        & __out_param_b);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(l, __out_param_l);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(r, __out_param_r);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(t, __out_param_t);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(b, __out_param_b);
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_margin_set( ::efl::eolian::in_traits<int>::type l,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type t,  ::efl::eolian::in_traits<int>::type b) const
{
     ::efl_gfx_hint_margin_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(l),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(r),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(t),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(b));
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_weight_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const
{
    double __out_param_x = {};
    double __out_param_y = {};
     ::efl_gfx_hint_weight_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(y, __out_param_y);
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_weight_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const
{
     ::efl_gfx_hint_weight_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(x),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(y));
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_align_get( ::efl::eolian::out_traits<Efl_Gfx_Align>::type x,  ::efl::eolian::out_traits<Efl_Gfx_Align>::type y) const
{
    Efl_Gfx_Align __out_param_x = {};
    Efl_Gfx_Align __out_param_y = {};
     ::efl_gfx_hint_align_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Align>::type, Efl_Gfx_Align>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Align>::type, Efl_Gfx_Align>(y, __out_param_y);
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_align_set( ::efl::eolian::in_traits<Efl_Gfx_Align>::type x,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type y) const
{
     ::efl_gfx_hint_align_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Align,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type>(x),
         ::efl::eolian::convert_to_c<Efl_Gfx_Align,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type>(y));
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_fill_get( ::efl::eolian::out_traits<bool>::type x,  ::efl::eolian::out_traits<bool>::type y) const
{
    Eina_Bool __out_param_x = {};
    Eina_Bool __out_param_y = {};
     ::efl_gfx_hint_fill_get(_eo_ptr(),
        & __out_param_x,
        & __out_param_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(x, __out_param_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<bool>::type, Eina_Bool>(y, __out_param_y);
}
inline ::efl::eolian::return_traits<void>::type Hint::hint_fill_set( ::efl::eolian::in_traits<bool>::type x,  ::efl::eolian::in_traits<bool>::type y) const
{
     ::efl_gfx_hint_fill_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(x),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(y));
}
inline efl::gfx::Hint::operator ::efl::gfx::Hint() const { return *static_cast< ::efl::gfx::Hint const*>(static_cast<void const*>(this)); }
inline efl::gfx::Hint::operator ::efl::gfx::Hint&() { return *static_cast< ::efl::gfx::Hint*>(static_cast<void*>(this)); }
inline efl::gfx::Hint::operator ::efl::gfx::Hint const&() const { return *static_cast< ::efl::gfx::Hint const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
