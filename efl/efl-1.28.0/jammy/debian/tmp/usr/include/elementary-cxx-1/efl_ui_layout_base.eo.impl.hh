#ifndef EFL_UI_LAYOUT_BASE_IMPL_HH
#define EFL_UI_LAYOUT_BASE_IMPL_HH

#include "efl_ui_layout_base.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<void>::type Layout_Base::finger_size_multiplier_get( ::efl::eolian::out_traits< unsigned int>::type multiplier_x,  ::efl::eolian::out_traits< unsigned int>::type multiplier_y) const
{
    unsigned int __out_param_multiplier_x = {};
    unsigned int __out_param_multiplier_y = {};
     ::efl_ui_layout_finger_size_multiplier_get(_eo_ptr(),
        & __out_param_multiplier_x,
        & __out_param_multiplier_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(multiplier_x, __out_param_multiplier_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(multiplier_y, __out_param_multiplier_y);
}
inline ::efl::eolian::return_traits<void>::type Layout_Base::finger_size_multiplier_set( ::efl::eolian::in_traits< unsigned int>::type multiplier_x,  ::efl::eolian::in_traits< unsigned int>::type multiplier_y) const
{
     ::efl_ui_layout_finger_size_multiplier_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(multiplier_x),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(multiplier_y));
}
inline ::efl::eolian::return_traits<void>::type Layout_Base::theme_get( ::efl::eolian::out_traits< ::efl::eina::string_view>::type klass,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type group,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type style) const
{
    const char * __out_param_klass = {};
    const char * __out_param_group = {};
    const char * __out_param_style = {};
     ::efl_ui_layout_theme_get(_eo_ptr(),
        & __out_param_klass,
        & __out_param_group,
        & __out_param_style);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(klass, __out_param_klass);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(group, __out_param_group);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(style, __out_param_style);
}
inline ::efl::eolian::return_traits<Eina_Error>::type Layout_Base::theme_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type klass,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type group,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type style) const
{
    Eina_Error __return_value =  ::efl_ui_layout_theme_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(klass),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(group),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(style));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Layout_Base::automatic_theme_rotation_get() const
{
    Eina_Bool __return_value =  ::efl_ui_layout_automatic_theme_rotation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Layout_Base::automatic_theme_rotation_set( ::efl::eolian::in_traits<bool>::type automatic) const
{
     ::efl_ui_layout_automatic_theme_rotation_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(automatic));
}
#endif
inline ::efl::eolian::return_traits<int>::type Layout_Base::theme_version_get() const
{
    int __return_value =  ::efl_ui_layout_theme_version_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Layout_Base::theme_rotation_apply( ::efl::eolian::in_traits<int>::type orientation) const
{
     ::efl_ui_layout_theme_rotation_apply(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(orientation));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<void>::type Layout_Base::finger_size_multiplier_get( ::efl::eolian::out_traits< unsigned int>::type multiplier_x,  ::efl::eolian::out_traits< unsigned int>::type multiplier_y) const
{
    unsigned int __out_param_multiplier_x = {};
    unsigned int __out_param_multiplier_y = {};
     ::efl_ui_layout_finger_size_multiplier_get(_eo_ptr(),
        & __out_param_multiplier_x,
        & __out_param_multiplier_y);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(multiplier_x, __out_param_multiplier_x);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< unsigned int>::type, unsigned int>(multiplier_y, __out_param_multiplier_y);
}
inline ::efl::eolian::return_traits<void>::type Layout_Base::finger_size_multiplier_set( ::efl::eolian::in_traits< unsigned int>::type multiplier_x,  ::efl::eolian::in_traits< unsigned int>::type multiplier_y) const
{
     ::efl_ui_layout_finger_size_multiplier_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(multiplier_x),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(multiplier_y));
}
inline ::efl::eolian::return_traits<void>::type Layout_Base::theme_get( ::efl::eolian::out_traits< ::efl::eina::string_view>::type klass,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type group,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type style) const
{
    const char * __out_param_klass = {};
    const char * __out_param_group = {};
    const char * __out_param_style = {};
     ::efl_ui_layout_theme_get(_eo_ptr(),
        & __out_param_klass,
        & __out_param_group,
        & __out_param_style);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(klass, __out_param_klass);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(group, __out_param_group);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(style, __out_param_style);
}
inline ::efl::eolian::return_traits<Eina_Error>::type Layout_Base::theme_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type klass,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type group,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type style) const
{
    Eina_Error __return_value =  ::efl_ui_layout_theme_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(klass),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(group),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(style));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Error>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Layout_Base::automatic_theme_rotation_get() const
{
    Eina_Bool __return_value =  ::efl_ui_layout_automatic_theme_rotation_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Layout_Base::automatic_theme_rotation_set( ::efl::eolian::in_traits<bool>::type automatic) const
{
     ::efl_ui_layout_automatic_theme_rotation_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(automatic));
}
#endif
inline ::efl::eolian::return_traits<int>::type Layout_Base::theme_version_get() const
{
    int __return_value =  ::efl_ui_layout_theme_version_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Layout_Base::theme_rotation_apply( ::efl::eolian::in_traits<int>::type orientation) const
{
     ::efl_ui_layout_theme_rotation_apply(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(orientation));
}
#endif
inline efl::ui::Layout_Base::operator ::efl::ui::Layout_Base() const { return *static_cast< ::efl::ui::Layout_Base const*>(static_cast<void const*>(this)); }
inline efl::ui::Layout_Base::operator ::efl::ui::Layout_Base&() { return *static_cast< ::efl::ui::Layout_Base*>(static_cast<void*>(this)); }
inline efl::ui::Layout_Base::operator ::efl::ui::Layout_Base const&() const { return *static_cast< ::efl::ui::Layout_Base const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
