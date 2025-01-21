#ifndef EFL_GFX_VIEW_IMPL_HH
#define EFL_GFX_VIEW_IMPL_HH

#include "efl_gfx_view.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Size2D>::type View::view_size_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_view_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type View::view_size_set( ::efl::eolian::in_traits<Eina_Size2D>::type size) const
{
     ::efl_gfx_view_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(size));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Size2D>::type View::view_size_get() const
{
    Eina_Size2D __return_value =  ::efl_gfx_view_size_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type View::view_size_set( ::efl::eolian::in_traits<Eina_Size2D>::type size) const
{
     ::efl_gfx_view_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(size));
}
#endif
inline efl::gfx::View::operator ::efl::gfx::View() const { return *static_cast< ::efl::gfx::View const*>(static_cast<void const*>(this)); }
inline efl::gfx::View::operator ::efl::gfx::View&() { return *static_cast< ::efl::gfx::View*>(static_cast<void*>(this)); }
inline efl::gfx::View::operator ::efl::gfx::View const&() const { return *static_cast< ::efl::gfx::View const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
