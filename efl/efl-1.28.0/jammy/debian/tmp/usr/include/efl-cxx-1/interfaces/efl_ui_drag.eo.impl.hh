#ifndef EFL_UI_DRAG_IMPL_HH
#define EFL_UI_DRAG_IMPL_HH

#include "efl_ui_drag.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_value_get( ::efl::eolian::out_traits<double>::type dx,  ::efl::eolian::out_traits<double>::type dy) const
{
    double __out_param_dx = {};
    double __out_param_dy = {};
    Eina_Bool __return_value =  ::efl_ui_drag_value_get(_eo_ptr(),
        & __out_param_dx,
        & __out_param_dy);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(dx, __out_param_dx);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(dy, __out_param_dy);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_value_set( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const
{
    Eina_Bool __return_value =  ::efl_ui_drag_value_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dy));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_size_get( ::efl::eolian::out_traits<double>::type dw,  ::efl::eolian::out_traits<double>::type dh) const
{
    double __out_param_dw = {};
    double __out_param_dh = {};
    Eina_Bool __return_value =  ::efl_ui_drag_size_get(_eo_ptr(),
        & __out_param_dw,
        & __out_param_dh);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(dw, __out_param_dw);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(dh, __out_param_dh);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_size_set( ::efl::eolian::in_traits<double>::type dw,  ::efl::eolian::in_traits<double>::type dh) const
{
    Eina_Bool __return_value =  ::efl_ui_drag_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dw),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dh));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Drag_Dir>::type Drag::drag_dir_get() const
{
    Efl_Ui_Drag_Dir __return_value =  ::efl_ui_drag_dir_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Drag_Dir>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_step_get( ::efl::eolian::out_traits<double>::type dx,  ::efl::eolian::out_traits<double>::type dy) const
{
    double __out_param_dx = {};
    double __out_param_dy = {};
    Eina_Bool __return_value =  ::efl_ui_drag_step_get(_eo_ptr(),
        & __out_param_dx,
        & __out_param_dy);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(dx, __out_param_dx);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(dy, __out_param_dy);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_step_set( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const
{
    Eina_Bool __return_value =  ::efl_ui_drag_step_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dy));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_page_get( ::efl::eolian::out_traits<double>::type dx,  ::efl::eolian::out_traits<double>::type dy) const
{
    double __out_param_dx = {};
    double __out_param_dy = {};
    Eina_Bool __return_value =  ::efl_ui_drag_page_get(_eo_ptr(),
        & __out_param_dx,
        & __out_param_dy);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(dx, __out_param_dx);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(dy, __out_param_dy);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_page_set( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const
{
    Eina_Bool __return_value =  ::efl_ui_drag_page_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dy));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_step_move( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const
{
    Eina_Bool __return_value =  ::efl_ui_drag_step_move(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dy));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_page_move( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const
{
    Eina_Bool __return_value =  ::efl_ui_drag_page_move(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dy));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_value_get( ::efl::eolian::out_traits<double>::type dx,  ::efl::eolian::out_traits<double>::type dy) const
{
    double __out_param_dx = {};
    double __out_param_dy = {};
    Eina_Bool __return_value =  ::efl_ui_drag_value_get(_eo_ptr(),
        & __out_param_dx,
        & __out_param_dy);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(dx, __out_param_dx);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(dy, __out_param_dy);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_value_set( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const
{
    Eina_Bool __return_value =  ::efl_ui_drag_value_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dy));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_size_get( ::efl::eolian::out_traits<double>::type dw,  ::efl::eolian::out_traits<double>::type dh) const
{
    double __out_param_dw = {};
    double __out_param_dh = {};
    Eina_Bool __return_value =  ::efl_ui_drag_size_get(_eo_ptr(),
        & __out_param_dw,
        & __out_param_dh);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(dw, __out_param_dw);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(dh, __out_param_dh);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_size_set( ::efl::eolian::in_traits<double>::type dw,  ::efl::eolian::in_traits<double>::type dh) const
{
    Eina_Bool __return_value =  ::efl_ui_drag_size_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dw),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dh));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Drag_Dir>::type Drag::drag_dir_get() const
{
    Efl_Ui_Drag_Dir __return_value =  ::efl_ui_drag_dir_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Drag_Dir>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_step_get( ::efl::eolian::out_traits<double>::type dx,  ::efl::eolian::out_traits<double>::type dy) const
{
    double __out_param_dx = {};
    double __out_param_dy = {};
    Eina_Bool __return_value =  ::efl_ui_drag_step_get(_eo_ptr(),
        & __out_param_dx,
        & __out_param_dy);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(dx, __out_param_dx);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(dy, __out_param_dy);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_step_set( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const
{
    Eina_Bool __return_value =  ::efl_ui_drag_step_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dy));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_page_get( ::efl::eolian::out_traits<double>::type dx,  ::efl::eolian::out_traits<double>::type dy) const
{
    double __out_param_dx = {};
    double __out_param_dy = {};
    Eina_Bool __return_value =  ::efl_ui_drag_page_get(_eo_ptr(),
        & __out_param_dx,
        & __out_param_dy);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(dx, __out_param_dx);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(dy, __out_param_dy);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_page_set( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const
{
    Eina_Bool __return_value =  ::efl_ui_drag_page_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dy));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_step_move( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const
{
    Eina_Bool __return_value =  ::efl_ui_drag_step_move(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dy));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Drag::drag_page_move( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy) const
{
    Eina_Bool __return_value =  ::efl_ui_drag_page_move(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dx),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(dy));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline efl::ui::Drag::operator ::efl::ui::Drag() const { return *static_cast< ::efl::ui::Drag const*>(static_cast<void const*>(this)); }
inline efl::ui::Drag::operator ::efl::ui::Drag&() { return *static_cast< ::efl::ui::Drag*>(static_cast<void*>(this)); }
inline efl::ui::Drag::operator ::efl::ui::Drag const&() const { return *static_cast< ::efl::ui::Drag const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
