#ifndef EFL_GFX_ARRANGEMENT_IMPL_HH
#define EFL_GFX_ARRANGEMENT_IMPL_HH

#include "efl_gfx_arrangement.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
inline ::efl::eolian::return_traits<void>::type Arrangement::content_align_get( ::efl::eolian::out_traits<Efl_Gfx_Align>::type align_horiz,  ::efl::eolian::out_traits<Efl_Gfx_Align>::type align_vert) const
{
    Efl_Gfx_Align __out_param_align_horiz = {};
    Efl_Gfx_Align __out_param_align_vert = {};
     ::efl_gfx_arrangement_content_align_get(_eo_ptr(),
        & __out_param_align_horiz,
        & __out_param_align_vert);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Align>::type, Efl_Gfx_Align>(align_horiz, __out_param_align_horiz);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Align>::type, Efl_Gfx_Align>(align_vert, __out_param_align_vert);
}
inline ::efl::eolian::return_traits<void>::type Arrangement::content_align_set( ::efl::eolian::in_traits<Efl_Gfx_Align>::type align_horiz,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type align_vert) const
{
     ::efl_gfx_arrangement_content_align_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Align,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type>(align_horiz),
         ::efl::eolian::convert_to_c<Efl_Gfx_Align,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type>(align_vert));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Arrangement::content_padding_get( ::efl::eolian::out_traits< unsigned int>::type pad_horiz,  ::efl::eolian::out_traits< unsigned int>::type pad_vert) const
{
    unsigned int __out_param_pad_horiz = {};
    unsigned int __out_param_pad_vert = {};
     ::efl_gfx_arrangement_content_padding_get(_eo_ptr(),
        & __out_param_pad_horiz,
        & __out_param_pad_vert);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(pad_horiz, __out_param_pad_horiz);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(pad_vert, __out_param_pad_vert);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Arrangement::content_padding_set( ::efl::eolian::in_traits< unsigned int>::type pad_horiz,  ::efl::eolian::in_traits< unsigned int>::type pad_vert) const
{
     ::efl_gfx_arrangement_content_padding_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(pad_horiz),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(pad_vert));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
inline ::efl::eolian::return_traits<void>::type Arrangement::content_align_get( ::efl::eolian::out_traits<Efl_Gfx_Align>::type align_horiz,  ::efl::eolian::out_traits<Efl_Gfx_Align>::type align_vert) const
{
    Efl_Gfx_Align __out_param_align_horiz = {};
    Efl_Gfx_Align __out_param_align_vert = {};
     ::efl_gfx_arrangement_content_align_get(_eo_ptr(),
        & __out_param_align_horiz,
        & __out_param_align_vert);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Align>::type, Efl_Gfx_Align>(align_horiz, __out_param_align_horiz);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Gfx_Align>::type, Efl_Gfx_Align>(align_vert, __out_param_align_vert);
}
inline ::efl::eolian::return_traits<void>::type Arrangement::content_align_set( ::efl::eolian::in_traits<Efl_Gfx_Align>::type align_horiz,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type align_vert) const
{
     ::efl_gfx_arrangement_content_align_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Gfx_Align,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type>(align_horiz),
         ::efl::eolian::convert_to_c<Efl_Gfx_Align,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type>(align_vert));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Arrangement::content_padding_get( ::efl::eolian::out_traits< unsigned int>::type pad_horiz,  ::efl::eolian::out_traits< unsigned int>::type pad_vert) const
{
    unsigned int __out_param_pad_horiz = {};
    unsigned int __out_param_pad_vert = {};
     ::efl_gfx_arrangement_content_padding_get(_eo_ptr(),
        & __out_param_pad_horiz,
        & __out_param_pad_vert);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(pad_horiz, __out_param_pad_horiz);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(pad_vert, __out_param_pad_vert);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Arrangement::content_padding_set( ::efl::eolian::in_traits< unsigned int>::type pad_horiz,  ::efl::eolian::in_traits< unsigned int>::type pad_vert) const
{
     ::efl_gfx_arrangement_content_padding_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(pad_horiz),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(pad_vert));
}
#endif
inline efl::gfx::Arrangement::operator ::efl::gfx::Arrangement() const { return *static_cast< ::efl::gfx::Arrangement const*>(static_cast<void const*>(this)); }
inline efl::gfx::Arrangement::operator ::efl::gfx::Arrangement&() { return *static_cast< ::efl::gfx::Arrangement*>(static_cast<void*>(this)); }
inline efl::gfx::Arrangement::operator ::efl::gfx::Arrangement const&() const { return *static_cast< ::efl::gfx::Arrangement const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
