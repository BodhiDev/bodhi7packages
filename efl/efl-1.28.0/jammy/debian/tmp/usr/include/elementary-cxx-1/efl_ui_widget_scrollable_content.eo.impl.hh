#ifndef EFL_UI_WIDGET_SCROLLABLE_CONTENT_IMPL_HH
#define EFL_UI_WIDGET_SCROLLABLE_CONTENT_IMPL_HH

#include "efl_ui_widget_scrollable_content.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_WIDGET_SCROLLABLE_CONTENT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Widget_Scrollable_Content::scrollable_content_did_group_calc_get() const
{
    Eina_Bool __return_value =  ::efl_ui_widget_scrollable_content_did_group_calc_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Widget_Scrollable_Content::scrollable_content_get() const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_ui_widget_scrollable_content_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Widget_Scrollable_Content::scrollable_content_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type content) const
{
    Eina_Bool __return_value =  ::efl_ui_widget_scrollable_content_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(content));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Widget_Scrollable_Content::scrollable_text_get() const
{
    const char * __return_value =  ::efl_ui_widget_scrollable_text_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Widget_Scrollable_Content::scrollable_text_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text) const
{
     ::efl_ui_widget_scrollable_text_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_WIDGET_SCROLLABLE_CONTENT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Widget_Scrollable_Content::scrollable_content_did_group_calc_get() const
{
    Eina_Bool __return_value =  ::efl_ui_widget_scrollable_content_did_group_calc_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#endif
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Widget_Scrollable_Content::scrollable_content_get() const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_ui_widget_scrollable_content_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Widget_Scrollable_Content::scrollable_content_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type content) const
{
    Eina_Bool __return_value =  ::efl_ui_widget_scrollable_content_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Object*,  ::efl::eolian::in_traits< ::efl::canvas::Object>::type>(content));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Widget_Scrollable_Content::scrollable_text_get() const
{
    const char * __return_value =  ::efl_ui_widget_scrollable_text_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Widget_Scrollable_Content::scrollable_text_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text) const
{
     ::efl_ui_widget_scrollable_text_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text));
}
inline efl::ui::Widget_Scrollable_Content::operator ::efl::ui::Widget_Scrollable_Content() const { return *static_cast< ::efl::ui::Widget_Scrollable_Content const*>(static_cast<void const*>(this)); }
inline efl::ui::Widget_Scrollable_Content::operator ::efl::ui::Widget_Scrollable_Content&() { return *static_cast< ::efl::ui::Widget_Scrollable_Content*>(static_cast<void*>(this)); }
inline efl::ui::Widget_Scrollable_Content::operator ::efl::ui::Widget_Scrollable_Content const&() const { return *static_cast< ::efl::ui::Widget_Scrollable_Content const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
