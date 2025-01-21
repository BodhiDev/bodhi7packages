#ifndef EFL_TEXT_INTERACTIVE_IMPL_HH
#define EFL_TEXT_INTERACTIVE_IMPL_HH

#include "efl_text_interactive.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits< ::efl::text_cursor::Object>::type Text_Interactive::main_cursor_get() const
{
     ::Efl_Text_Cursor_Object* __return_value =  ::efl_text_interactive_main_cursor_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::text_cursor::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Text_Interactive::selection_allowed_get() const
{
    Eina_Bool __return_value =  ::efl_text_interactive_selection_allowed_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Interactive::selection_allowed_set( ::efl::eolian::in_traits<bool>::type allowed) const
{
     ::efl_text_interactive_selection_allowed_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(allowed));
}
inline ::efl::eolian::return_traits<void>::type Text_Interactive::selection_cursors_get( ::efl::eolian::out_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::out_traits< ::efl::text_cursor::Object>::type end) const
{
     ::Efl_Text_Cursor_Object* __out_param_start = {};
     ::Efl_Text_Cursor_Object* __out_param_end = {};
     ::efl_text_interactive_selection_cursors_get(_eo_ptr(),
        & __out_param_start,
        & __out_param_end);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::text_cursor::Object>::type,  ::Efl_Text_Cursor_Object*>(start, __out_param_start);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::text_cursor::Object>::type,  ::Efl_Text_Cursor_Object*>(end, __out_param_end);
}
inline ::efl::eolian::return_traits<void>::type Text_Interactive::selection_cursors_set( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type end) const
{
     ::efl_text_interactive_selection_cursors_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(start),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(end));
}
inline ::efl::eolian::return_traits<bool>::type Text_Interactive::editable_get() const
{
    Eina_Bool __return_value =  ::efl_text_interactive_editable_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Interactive::editable_set( ::efl::eolian::in_traits<bool>::type editable) const
{
     ::efl_text_interactive_editable_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(editable));
}
inline ::efl::eolian::return_traits<bool>::type Text_Interactive::have_selection_get() const
{
    Eina_Bool __return_value =  ::efl_text_interactive_have_selection_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Interactive::all_unselect() const
{
     ::efl_text_interactive_all_unselect(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Text_Interactive::all_select() const
{
     ::efl_text_interactive_all_select(_eo_ptr());
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits< ::efl::text_cursor::Object>::type Text_Interactive::main_cursor_get() const
{
     ::Efl_Text_Cursor_Object* __return_value =  ::efl_text_interactive_main_cursor_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::text_cursor::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Text_Interactive::selection_allowed_get() const
{
    Eina_Bool __return_value =  ::efl_text_interactive_selection_allowed_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Interactive::selection_allowed_set( ::efl::eolian::in_traits<bool>::type allowed) const
{
     ::efl_text_interactive_selection_allowed_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(allowed));
}
inline ::efl::eolian::return_traits<void>::type Text_Interactive::selection_cursors_get( ::efl::eolian::out_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::out_traits< ::efl::text_cursor::Object>::type end) const
{
     ::Efl_Text_Cursor_Object* __out_param_start = {};
     ::Efl_Text_Cursor_Object* __out_param_end = {};
     ::efl_text_interactive_selection_cursors_get(_eo_ptr(),
        & __out_param_start,
        & __out_param_end);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::text_cursor::Object>::type,  ::Efl_Text_Cursor_Object*>(start, __out_param_start);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::text_cursor::Object>::type,  ::Efl_Text_Cursor_Object*>(end, __out_param_end);
}
inline ::efl::eolian::return_traits<void>::type Text_Interactive::selection_cursors_set( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type end) const
{
     ::efl_text_interactive_selection_cursors_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(start),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(end));
}
inline ::efl::eolian::return_traits<bool>::type Text_Interactive::editable_get() const
{
    Eina_Bool __return_value =  ::efl_text_interactive_editable_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Interactive::editable_set( ::efl::eolian::in_traits<bool>::type editable) const
{
     ::efl_text_interactive_editable_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(editable));
}
inline ::efl::eolian::return_traits<bool>::type Text_Interactive::have_selection_get() const
{
    Eina_Bool __return_value =  ::efl_text_interactive_have_selection_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Text_Interactive::all_unselect() const
{
     ::efl_text_interactive_all_unselect(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Text_Interactive::all_select() const
{
     ::efl_text_interactive_all_select(_eo_ptr());
}
inline efl::Text_Interactive::operator ::efl::Text_Interactive() const { return *static_cast< ::efl::Text_Interactive const*>(static_cast<void const*>(this)); }
inline efl::Text_Interactive::operator ::efl::Text_Interactive&() { return *static_cast< ::efl::Text_Interactive*>(static_cast<void*>(this)); }
inline efl::Text_Interactive::operator ::efl::Text_Interactive const&() const { return *static_cast< ::efl::Text_Interactive const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
