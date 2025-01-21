#ifndef EFL_UI_TEXTPATH_IMPL_HH
#define EFL_UI_TEXTPATH_IMPL_HH

#include "efl_ui_textpath.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Textpath::slice_number_get() const
{
    int __return_value =  ::efl_ui_textpath_slice_number_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Textpath::slice_number_set( ::efl::eolian::in_traits<int>::type slice_no) const
{
     ::efl_ui_textpath_slice_number_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(slice_no));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Textpath::ellipsis_get() const
{
    Eina_Bool __return_value =  ::efl_ui_textpath_ellipsis_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Textpath::ellipsis_set( ::efl::eolian::in_traits<bool>::type ellipsis) const
{
     ::efl_ui_textpath_ellipsis_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(ellipsis));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Textpath::circular_set( ::efl::eolian::in_traits<double>::type radius,  ::efl::eolian::in_traits<double>::type start_angle,  ::efl::eolian::in_traits<Efl_Ui_Textpath_Direction>::type direction) const
{
     ::efl_ui_textpath_circular_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(radius),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(start_angle),
         ::efl::eolian::convert_to_c<Efl_Ui_Textpath_Direction,  ::efl::eolian::in_traits<Efl_Ui_Textpath_Direction>::type>(direction));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<int>::type Textpath::slice_number_get() const
{
    int __return_value =  ::efl_ui_textpath_slice_number_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Textpath::slice_number_set( ::efl::eolian::in_traits<int>::type slice_no) const
{
     ::efl_ui_textpath_slice_number_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(slice_no));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Textpath::ellipsis_get() const
{
    Eina_Bool __return_value =  ::efl_ui_textpath_ellipsis_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Textpath::ellipsis_set( ::efl::eolian::in_traits<bool>::type ellipsis) const
{
     ::efl_ui_textpath_ellipsis_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(ellipsis));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Textpath::circular_set( ::efl::eolian::in_traits<double>::type radius,  ::efl::eolian::in_traits<double>::type start_angle,  ::efl::eolian::in_traits<Efl_Ui_Textpath_Direction>::type direction) const
{
     ::efl_ui_textpath_circular_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(radius),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(start_angle),
         ::efl::eolian::convert_to_c<Efl_Ui_Textpath_Direction,  ::efl::eolian::in_traits<Efl_Ui_Textpath_Direction>::type>(direction));
}
#endif
inline efl::ui::Textpath::operator ::efl::ui::Textpath() const { return *static_cast< ::efl::ui::Textpath const*>(static_cast<void const*>(this)); }
inline efl::ui::Textpath::operator ::efl::ui::Textpath&() { return *static_cast< ::efl::ui::Textpath*>(static_cast<void*>(this)); }
inline efl::ui::Textpath::operator ::efl::ui::Textpath const&() const { return *static_cast< ::efl::ui::Textpath const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
