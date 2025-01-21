#ifndef EFL_UI_TEXTBOX_IMPL_HH
#define EFL_UI_TEXTBOX_IMPL_HH

#include "efl_ui_textbox.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<bool>::type Textbox::scrollable_get() const
{
    Eina_Bool __return_value =  ::efl_ui_textbox_scrollable_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Textbox::scrollable_set( ::efl::eolian::in_traits<bool>::type scroll) const
{
     ::efl_ui_textbox_scrollable_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(scroll));
}
inline ::efl::eolian::return_traits<bool>::type Textbox::context_menu_enabled_get() const
{
    Eina_Bool __return_value =  ::efl_ui_textbox_context_menu_enabled_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Textbox::context_menu_enabled_set( ::efl::eolian::in_traits<bool>::type enabled) const
{
     ::efl_ui_textbox_context_menu_enabled_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enabled));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Textbox_Cnp_Content>::type Textbox::cnp_dnd_mode_get() const
{
    Efl_Ui_Textbox_Cnp_Content __return_value =  ::efl_ui_textbox_cnp_dnd_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Textbox_Cnp_Content>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Textbox::cnp_dnd_mode_set( ::efl::eolian::in_traits<Efl_Ui_Textbox_Cnp_Content>::type allowed_formats) const
{
     ::efl_ui_textbox_cnp_dnd_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Textbox_Cnp_Content,  ::efl::eolian::in_traits<Efl_Ui_Textbox_Cnp_Content>::type>(allowed_formats));
}
#endif
inline ::efl::eolian::return_traits<bool>::type Textbox::selection_handles_enabled_get() const
{
    Eina_Bool __return_value =  ::efl_ui_textbox_selection_handles_enabled_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Textbox::selection_handles_enabled_set( ::efl::eolian::in_traits<bool>::type enabled) const
{
     ::efl_ui_textbox_selection_handles_enabled_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enabled));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::Textblock_Factory>::type Textbox::item_factory_get() const
{
     ::Efl_Canvas_Textblock_Factory* __return_value =  ::efl_ui_textbox_item_factory_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Textblock_Factory>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Textbox::item_factory_set( ::efl::eolian::in_traits< ::efl::canvas::Textblock_Factory>::type item_factory) const
{
     ::efl_ui_textbox_item_factory_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Textblock_Factory*,  ::efl::eolian::in_traits< ::efl::canvas::Textblock_Factory>::type>(item_factory));
}
#endif
inline ::efl::eolian::return_traits< ::efl::text_cursor::Object>::type Textbox::cursor_create() const
{
     ::Efl_Text_Cursor_Object* __return_value =  ::efl_ui_textbox_cursor_create(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::text_cursor::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Textbox::selection_copy() const
{
     ::efl_ui_textbox_selection_copy(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Textbox::selection_paste() const
{
     ::efl_ui_textbox_selection_paste(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Textbox::selection_cut() const
{
     ::efl_ui_textbox_selection_cut(_eo_ptr());
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<bool>::type Textbox::scrollable_get() const
{
    Eina_Bool __return_value =  ::efl_ui_textbox_scrollable_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Textbox::scrollable_set( ::efl::eolian::in_traits<bool>::type scroll) const
{
     ::efl_ui_textbox_scrollable_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(scroll));
}
inline ::efl::eolian::return_traits<bool>::type Textbox::context_menu_enabled_get() const
{
    Eina_Bool __return_value =  ::efl_ui_textbox_context_menu_enabled_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Textbox::context_menu_enabled_set( ::efl::eolian::in_traits<bool>::type enabled) const
{
     ::efl_ui_textbox_context_menu_enabled_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enabled));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Ui_Textbox_Cnp_Content>::type Textbox::cnp_dnd_mode_get() const
{
    Efl_Ui_Textbox_Cnp_Content __return_value =  ::efl_ui_textbox_cnp_dnd_mode_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Textbox_Cnp_Content>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Textbox::cnp_dnd_mode_set( ::efl::eolian::in_traits<Efl_Ui_Textbox_Cnp_Content>::type allowed_formats) const
{
     ::efl_ui_textbox_cnp_dnd_mode_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Textbox_Cnp_Content,  ::efl::eolian::in_traits<Efl_Ui_Textbox_Cnp_Content>::type>(allowed_formats));
}
#endif
inline ::efl::eolian::return_traits<bool>::type Textbox::selection_handles_enabled_get() const
{
    Eina_Bool __return_value =  ::efl_ui_textbox_selection_handles_enabled_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Textbox::selection_handles_enabled_set( ::efl::eolian::in_traits<bool>::type enabled) const
{
     ::efl_ui_textbox_selection_handles_enabled_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(enabled));
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::canvas::Textblock_Factory>::type Textbox::item_factory_get() const
{
     ::Efl_Canvas_Textblock_Factory* __return_value =  ::efl_ui_textbox_item_factory_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Textblock_Factory>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Textbox::item_factory_set( ::efl::eolian::in_traits< ::efl::canvas::Textblock_Factory>::type item_factory) const
{
     ::efl_ui_textbox_item_factory_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Canvas_Textblock_Factory*,  ::efl::eolian::in_traits< ::efl::canvas::Textblock_Factory>::type>(item_factory));
}
#endif
inline ::efl::eolian::return_traits< ::efl::text_cursor::Object>::type Textbox::cursor_create() const
{
     ::Efl_Text_Cursor_Object* __return_value =  ::efl_ui_textbox_cursor_create(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::text_cursor::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Textbox::selection_copy() const
{
     ::efl_ui_textbox_selection_copy(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Textbox::selection_paste() const
{
     ::efl_ui_textbox_selection_paste(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Textbox::selection_cut() const
{
     ::efl_ui_textbox_selection_cut(_eo_ptr());
}
inline efl::ui::Textbox::operator ::efl::ui::Textbox() const { return *static_cast< ::efl::ui::Textbox const*>(static_cast<void const*>(this)); }
inline efl::ui::Textbox::operator ::efl::ui::Textbox&() { return *static_cast< ::efl::ui::Textbox*>(static_cast<void*>(this)); }
inline efl::ui::Textbox::operator ::efl::ui::Textbox const&() const { return *static_cast< ::efl::ui::Textbox const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
