#ifndef EFL_GFX_FILL_IMPL_HH
#define EFL_GFX_FILL_IMPL_HH

#include "efl_gfx_fill.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Fill::fill_auto_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_fill_auto_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Fill::fill_auto_set( ::efl::eolian::in_traits<bool>::type filled) const
{
     ::efl_gfx_fill_auto_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(filled));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Rect>::type Fill::fill_get() const
{
    Eina_Rect __return_value =  ::efl_gfx_fill_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Fill::fill_set( ::efl::eolian::in_traits<Eina_Rect>::type fill) const
{
     ::efl_gfx_fill_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(fill));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Fill::fill_auto_get() const
{
    Eina_Bool __return_value =  ::efl_gfx_fill_auto_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Fill::fill_auto_set( ::efl::eolian::in_traits<bool>::type filled) const
{
     ::efl_gfx_fill_auto_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(filled));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Eina_Rect>::type Fill::fill_get() const
{
    Eina_Rect __return_value =  ::efl_gfx_fill_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Fill::fill_set( ::efl::eolian::in_traits<Eina_Rect>::type fill) const
{
     ::efl_gfx_fill_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(fill));
}
#endif
inline efl::gfx::Fill::operator ::efl::gfx::Fill() const { return *static_cast< ::efl::gfx::Fill const*>(static_cast<void const*>(this)); }
inline efl::gfx::Fill::operator ::efl::gfx::Fill&() { return *static_cast< ::efl::gfx::Fill*>(static_cast<void*>(this)); }
inline efl::gfx::Fill::operator ::efl::gfx::Fill const&() const { return *static_cast< ::efl::gfx::Fill const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
