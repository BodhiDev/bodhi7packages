#ifndef EFL_UI_POPUP_IMPL_HH
#define EFL_UI_POPUP_IMPL_HH

#include "efl_ui_popup.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<Efl_Ui_Popup_Align>::type Popup::align_get() const
{
    Efl_Ui_Popup_Align __return_value =  ::efl_ui_popup_align_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Popup_Align>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Popup::align_set( ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type type) const
{
     ::efl_ui_popup_align_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Popup_Align,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type>(type));
}
inline ::efl::eolian::return_traits<double>::type Popup::closing_timeout_get() const
{
    double __return_value =  ::efl_ui_popup_closing_timeout_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Popup::closing_timeout_set( ::efl::eolian::in_traits<double>::type time) const
{
     ::efl_ui_popup_closing_timeout_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(time));
}
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Popup::anchor_get() const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_ui_popup_anchor_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Popup::anchor_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type anchor) const
{
     ::efl_ui_popup_anchor_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(anchor));
}
inline ::efl::eolian::return_traits<void>::type Popup::align_priority_get( ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type first,  ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type second,  ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type third,  ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type fourth,  ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type fifth) const
{
    Efl_Ui_Popup_Align __out_param_first = {};
    Efl_Ui_Popup_Align __out_param_second = {};
    Efl_Ui_Popup_Align __out_param_third = {};
    Efl_Ui_Popup_Align __out_param_fourth = {};
    Efl_Ui_Popup_Align __out_param_fifth = {};
     ::efl_ui_popup_align_priority_get(_eo_ptr(),
        & __out_param_first,
        & __out_param_second,
        & __out_param_third,
        & __out_param_fourth,
        & __out_param_fifth);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type, Efl_Ui_Popup_Align>(first, __out_param_first);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type, Efl_Ui_Popup_Align>(second, __out_param_second);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type, Efl_Ui_Popup_Align>(third, __out_param_third);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type, Efl_Ui_Popup_Align>(fourth, __out_param_fourth);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type, Efl_Ui_Popup_Align>(fifth, __out_param_fifth);
}
inline ::efl::eolian::return_traits<void>::type Popup::align_priority_set( ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type first,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type second,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type third,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type fourth,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type fifth) const
{
     ::efl_ui_popup_align_priority_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Popup_Align,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type>(first),
         ::efl::eolian::convert_to_c<Efl_Ui_Popup_Align,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type>(second),
         ::efl::eolian::convert_to_c<Efl_Ui_Popup_Align,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type>(third),
         ::efl::eolian::convert_to_c<Efl_Ui_Popup_Align,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type>(fourth),
         ::efl::eolian::convert_to_c<Efl_Ui_Popup_Align,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type>(fifth));
}
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Popup_Part_Backwall>::type Popup::backwall() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "backwall");
    return ::efl::ui::Popup_Part_Backwall{__return_value};
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<Efl_Ui_Popup_Align>::type Popup::align_get() const
{
    Efl_Ui_Popup_Align __return_value =  ::efl_ui_popup_align_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Popup_Align>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Popup::align_set( ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type type) const
{
     ::efl_ui_popup_align_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Popup_Align,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type>(type));
}
inline ::efl::eolian::return_traits<double>::type Popup::closing_timeout_get() const
{
    double __return_value =  ::efl_ui_popup_closing_timeout_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<double>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Popup::closing_timeout_set( ::efl::eolian::in_traits<double>::type time) const
{
     ::efl_ui_popup_closing_timeout_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(time));
}
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Popup::anchor_get() const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_ui_popup_anchor_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Popup::anchor_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type anchor) const
{
     ::efl_ui_popup_anchor_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(anchor));
}
inline ::efl::eolian::return_traits<void>::type Popup::align_priority_get( ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type first,  ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type second,  ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type third,  ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type fourth,  ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type fifth) const
{
    Efl_Ui_Popup_Align __out_param_first = {};
    Efl_Ui_Popup_Align __out_param_second = {};
    Efl_Ui_Popup_Align __out_param_third = {};
    Efl_Ui_Popup_Align __out_param_fourth = {};
    Efl_Ui_Popup_Align __out_param_fifth = {};
     ::efl_ui_popup_align_priority_get(_eo_ptr(),
        & __out_param_first,
        & __out_param_second,
        & __out_param_third,
        & __out_param_fourth,
        & __out_param_fifth);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type, Efl_Ui_Popup_Align>(first, __out_param_first);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type, Efl_Ui_Popup_Align>(second, __out_param_second);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type, Efl_Ui_Popup_Align>(third, __out_param_third);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type, Efl_Ui_Popup_Align>(fourth, __out_param_fourth);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Efl_Ui_Popup_Align>::type, Efl_Ui_Popup_Align>(fifth, __out_param_fifth);
}
inline ::efl::eolian::return_traits<void>::type Popup::align_priority_set( ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type first,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type second,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type third,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type fourth,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type fifth) const
{
     ::efl_ui_popup_align_priority_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Popup_Align,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type>(first),
         ::efl::eolian::convert_to_c<Efl_Ui_Popup_Align,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type>(second),
         ::efl::eolian::convert_to_c<Efl_Ui_Popup_Align,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type>(third),
         ::efl::eolian::convert_to_c<Efl_Ui_Popup_Align,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type>(fourth),
         ::efl::eolian::convert_to_c<Efl_Ui_Popup_Align,  ::efl::eolian::in_traits<Efl_Ui_Popup_Align>::type>(fifth));
}
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Popup_Part_Backwall>::type Popup::backwall() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "backwall");
    return ::efl::ui::Popup_Part_Backwall{__return_value};
}
#endif
inline efl::ui::Popup::operator ::efl::ui::Popup() const { return *static_cast< ::efl::ui::Popup const*>(static_cast<void const*>(this)); }
inline efl::ui::Popup::operator ::efl::ui::Popup&() { return *static_cast< ::efl::ui::Popup*>(static_cast<void*>(this)); }
inline efl::ui::Popup::operator ::efl::ui::Popup const&() const { return *static_cast< ::efl::ui::Popup const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
