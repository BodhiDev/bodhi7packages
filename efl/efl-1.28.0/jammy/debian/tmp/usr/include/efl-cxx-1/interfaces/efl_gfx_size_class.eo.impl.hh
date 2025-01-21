#ifndef EFL_GFX_SIZE_CLASS_IMPL_HH
#define EFL_GFX_SIZE_CLASS_IMPL_HH

#include "efl_gfx_size_class.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Size_Class::size_class_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type size_class,  ::efl::eolian::out_traits<int>::type minw,  ::efl::eolian::out_traits<int>::type minh,  ::efl::eolian::out_traits<int>::type maxw,  ::efl::eolian::out_traits<int>::type maxh) const
{
    int __out_param_minw = {};
    int __out_param_minh = {};
    int __out_param_maxw = {};
    int __out_param_maxh = {};
    Eina_Bool __return_value =  ::efl_gfx_size_class_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(size_class),
        & __out_param_minw,
        & __out_param_minh,
        & __out_param_maxw,
        & __out_param_maxh);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(minw, __out_param_minw);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(minh, __out_param_minh);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(maxw, __out_param_maxw);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(maxh, __out_param_maxh);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Size_Class::size_class_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type size_class,  ::efl::eolian::in_traits<int>::type minw,  ::efl::eolian::in_traits<int>::type minh,  ::efl::eolian::in_traits<int>::type maxw,  ::efl::eolian::in_traits<int>::type maxh) const
{
    Eina_Bool __return_value =  ::efl_gfx_size_class_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(size_class),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(minw),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(minh),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(maxw),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(maxh));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Size_Class::size_class_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type size_class) const
{
     ::efl_gfx_size_class_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(size_class));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Size_Class::size_class_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type size_class,  ::efl::eolian::out_traits<int>::type minw,  ::efl::eolian::out_traits<int>::type minh,  ::efl::eolian::out_traits<int>::type maxw,  ::efl::eolian::out_traits<int>::type maxh) const
{
    int __out_param_minw = {};
    int __out_param_minh = {};
    int __out_param_maxw = {};
    int __out_param_maxh = {};
    Eina_Bool __return_value =  ::efl_gfx_size_class_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(size_class),
        & __out_param_minw,
        & __out_param_minh,
        & __out_param_maxw,
        & __out_param_maxh);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(minw, __out_param_minw);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(minh, __out_param_minh);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(maxw, __out_param_maxw);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<int>::type, int>(maxh, __out_param_maxh);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Size_Class::size_class_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type size_class,  ::efl::eolian::in_traits<int>::type minw,  ::efl::eolian::in_traits<int>::type minh,  ::efl::eolian::in_traits<int>::type maxw,  ::efl::eolian::in_traits<int>::type maxh) const
{
    Eina_Bool __return_value =  ::efl_gfx_size_class_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(size_class),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(minw),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(minh),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(maxw),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(maxh));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Size_Class::size_class_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type size_class) const
{
     ::efl_gfx_size_class_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(size_class));
}
#endif
inline efl::gfx::Size_Class::operator ::efl::gfx::Size_Class() const { return *static_cast< ::efl::gfx::Size_Class const*>(static_cast<void const*>(this)); }
inline efl::gfx::Size_Class::operator ::efl::gfx::Size_Class&() { return *static_cast< ::efl::gfx::Size_Class*>(static_cast<void*>(this)); }
inline efl::gfx::Size_Class::operator ::efl::gfx::Size_Class const&() const { return *static_cast< ::efl::gfx::Size_Class const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
