#ifndef EFL_SCREEN_IMPL_HH
#define EFL_SCREEN_IMPL_HH

#include "efl_screen.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<Eina_Size2D>::type Screen::screen_size_in_pixels_get() const
{
    Eina_Size2D __return_value =  ::efl_screen_size_in_pixels_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<float>::type Screen::screen_scale_factor_get() const
{
    float __return_value =  ::efl_screen_scale_factor_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<float>::type>(__return_value);
}
inline ::efl::eolian::return_traits<int>::type Screen::screen_rotation_get() const
{
    int __return_value =  ::efl_screen_rotation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Screen::screen_dpi_get( ::efl::eolian::out_traits<int>::type xdpi,  ::efl::eolian::out_traits<int>::type ydpi) const
{
    int __out_param_xdpi = {};
    int __out_param_ydpi = {};
     ::efl_screen_dpi_get(_eo_ptr(),
        & __out_param_xdpi,
        & __out_param_ydpi);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(xdpi, __out_param_xdpi);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(ydpi, __out_param_ydpi);
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<Eina_Size2D>::type Screen::screen_size_in_pixels_get() const
{
    Eina_Size2D __return_value =  ::efl_screen_size_in_pixels_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<float>::type Screen::screen_scale_factor_get() const
{
    float __return_value =  ::efl_screen_scale_factor_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<float>::type>(__return_value);
}
inline ::efl::eolian::return_traits<int>::type Screen::screen_rotation_get() const
{
    int __return_value =  ::efl_screen_rotation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Screen::screen_dpi_get( ::efl::eolian::out_traits<int>::type xdpi,  ::efl::eolian::out_traits<int>::type ydpi) const
{
    int __out_param_xdpi = {};
    int __out_param_ydpi = {};
     ::efl_screen_dpi_get(_eo_ptr(),
        & __out_param_xdpi,
        & __out_param_ydpi);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(xdpi, __out_param_xdpi);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(ydpi, __out_param_ydpi);
}
inline efl::Screen::operator ::efl::Screen() const { return *static_cast< ::efl::Screen const*>(static_cast<void const*>(this)); }
inline efl::Screen::operator ::efl::Screen&() { return *static_cast< ::efl::Screen*>(static_cast<void*>(this)); }
inline efl::Screen::operator ::efl::Screen const&() const { return *static_cast< ::efl::Screen const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
