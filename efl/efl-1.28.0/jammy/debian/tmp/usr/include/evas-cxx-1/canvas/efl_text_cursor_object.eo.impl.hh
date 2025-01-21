#ifndef EFL_TEXT_CURSOR_OBJECT_IMPL_HH
#define EFL_TEXT_CURSOR_OBJECT_IMPL_HH

#include "efl_text_cursor_object.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace text_cursor { 
inline ::efl::eolian::return_traits<int>::type Object::position_get() const
{
    int __return_value =  ::efl_text_cursor_object_position_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::position_set( ::efl::eolian::in_traits<int>::type position) const
{
     ::efl_text_cursor_object_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(position));
}
inline ::efl::eolian::return_traits<Eina_Unicode>::type Object::content_get() const
{
    Eina_Unicode __return_value =  ::efl_text_cursor_object_content_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Unicode>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Rect>::type Object::content_geometry_get() const
{
    Eina_Rect __return_value =  ::efl_text_cursor_object_content_geometry_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
inline ::efl::eolian::return_traits<int>::type Object::line_number_get() const
{
    int __return_value =  ::efl_text_cursor_object_line_number_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::line_number_set( ::efl::eolian::in_traits<int>::type line_number) const
{
     ::efl_text_cursor_object_line_number_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(line_number));
}
inline ::efl::eolian::return_traits<Eina_Rect>::type Object::cursor_geometry_get( ::efl::eolian::in_traits<Efl_Text_Cursor_Type>::type ctype) const
{
    Eina_Rect __return_value =  ::efl_text_cursor_object_cursor_geometry_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Cursor_Type,  ::efl::eolian::in_traits<Efl_Text_Cursor_Type>::type>(ctype));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::lower_cursor_geometry_get( ::efl::eolian::out_traits<Eina_Rect>::type geometry) const
{
    Eina_Rect __out_param_geometry = {};
    Eina_Bool __return_value =  ::efl_text_cursor_object_lower_cursor_geometry_get(_eo_ptr(),
        & __out_param_geometry);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Rect>::type, Eina_Rect>(geometry, __out_param_geometry);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Object::text_object_get() const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_text_cursor_object_text_object_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::equal( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type dst) const
{
    Eina_Bool __return_value =  ::efl_text_cursor_object_equal(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object const*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(dst));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<int>::type Object::compare( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type dst) const
{
    int __return_value =  ::efl_text_cursor_object_compare(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object const*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(dst));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::move( ::efl::eolian::in_traits<Efl_Text_Cursor_Move_Type>::type type) const
{
    Eina_Bool __return_value =  ::efl_text_cursor_object_move(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Cursor_Move_Type,  ::efl::eolian::in_traits<Efl_Text_Cursor_Move_Type>::type>(type));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::char_delete() const
{
     ::efl_text_cursor_object_char_delete(_eo_ptr());
}
inline ::efl::eolian::return_traits<bool>::type Object::line_jump_by( ::efl::eolian::in_traits<int>::type by) const
{
    Eina_Bool __return_value =  ::efl_text_cursor_object_line_jump_by(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(by));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::char_coord_set( ::efl::eolian::in_traits<Eina_Position2D>::type coord) const
{
     ::efl_text_cursor_object_char_coord_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(coord));
}
inline ::efl::eolian::return_traits<void>::type Object::cluster_coord_set( ::efl::eolian::in_traits<Eina_Position2D>::type coord) const
{
     ::efl_text_cursor_object_cluster_coord_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(coord));
}
inline ::efl::eolian::return_traits<void>::type Object::text_insert( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text) const
{
     ::efl_text_cursor_object_text_insert(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text));
}
inline ::efl::eolian::return_traits<void>::type Object::markup_insert( ::efl::eolian::in_traits< ::efl::eina::string_view>::type markup) const
{
     ::efl_text_cursor_object_markup_insert(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(markup));
}
inline ::efl::eolian::return_traits< ::std::string>::type Object::range_markup_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const
{
    char * __return_value =  ::efl_text_cursor_object_range_markup_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(cur2));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::std::string>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::std::string>::type Object::range_text_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const
{
    char * __return_value =  ::efl_text_cursor_object_range_text_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(cur2));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::std::string>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator<Eina_Rect>>::type Object::range_geometry_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const
{
    Eina_Iterator * __return_value =  ::efl_text_cursor_object_range_geometry_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(cur2));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator<Eina_Rect>>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator<Eina_Rect>>::type Object::range_precise_geometry_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const
{
    Eina_Iterator * __return_value =  ::efl_text_cursor_object_range_precise_geometry_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(cur2));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator<Eina_Rect>>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::range_delete( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const
{
     ::efl_text_cursor_object_range_delete(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(cur2));
}
} } 
namespace eo_cxx {
namespace efl { namespace text_cursor { 
inline ::efl::eolian::return_traits<int>::type Object::position_get() const
{
    int __return_value =  ::efl_text_cursor_object_position_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::position_set( ::efl::eolian::in_traits<int>::type position) const
{
     ::efl_text_cursor_object_position_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(position));
}
inline ::efl::eolian::return_traits<Eina_Unicode>::type Object::content_get() const
{
    Eina_Unicode __return_value =  ::efl_text_cursor_object_content_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Unicode>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Rect>::type Object::content_geometry_get() const
{
    Eina_Rect __return_value =  ::efl_text_cursor_object_content_geometry_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
inline ::efl::eolian::return_traits<int>::type Object::line_number_get() const
{
    int __return_value =  ::efl_text_cursor_object_line_number_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::line_number_set( ::efl::eolian::in_traits<int>::type line_number) const
{
     ::efl_text_cursor_object_line_number_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(line_number));
}
inline ::efl::eolian::return_traits<Eina_Rect>::type Object::cursor_geometry_get( ::efl::eolian::in_traits<Efl_Text_Cursor_Type>::type ctype) const
{
    Eina_Rect __return_value =  ::efl_text_cursor_object_cursor_geometry_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Cursor_Type,  ::efl::eolian::in_traits<Efl_Text_Cursor_Type>::type>(ctype));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::lower_cursor_geometry_get( ::efl::eolian::out_traits<Eina_Rect>::type geometry) const
{
    Eina_Rect __out_param_geometry = {};
    Eina_Bool __return_value =  ::efl_text_cursor_object_lower_cursor_geometry_get(_eo_ptr(),
        & __out_param_geometry);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<Eina_Rect>::type, Eina_Rect>(geometry, __out_param_geometry);
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::canvas::Object>::type Object::text_object_get() const
{
     ::Efl_Canvas_Object* __return_value =  ::efl_text_cursor_object_text_object_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::canvas::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::equal( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type dst) const
{
    Eina_Bool __return_value =  ::efl_text_cursor_object_equal(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object const*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(dst));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<int>::type Object::compare( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type dst) const
{
    int __return_value =  ::efl_text_cursor_object_compare(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object const*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(dst));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::move( ::efl::eolian::in_traits<Efl_Text_Cursor_Move_Type>::type type) const
{
    Eina_Bool __return_value =  ::efl_text_cursor_object_move(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Text_Cursor_Move_Type,  ::efl::eolian::in_traits<Efl_Text_Cursor_Move_Type>::type>(type));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::char_delete() const
{
     ::efl_text_cursor_object_char_delete(_eo_ptr());
}
inline ::efl::eolian::return_traits<bool>::type Object::line_jump_by( ::efl::eolian::in_traits<int>::type by) const
{
    Eina_Bool __return_value =  ::efl_text_cursor_object_line_jump_by(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(by));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::char_coord_set( ::efl::eolian::in_traits<Eina_Position2D>::type coord) const
{
     ::efl_text_cursor_object_char_coord_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(coord));
}
inline ::efl::eolian::return_traits<void>::type Object::cluster_coord_set( ::efl::eolian::in_traits<Eina_Position2D>::type coord) const
{
     ::efl_text_cursor_object_cluster_coord_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Position2D,  ::efl::eolian::in_traits<Eina_Position2D>::type>(coord));
}
inline ::efl::eolian::return_traits<void>::type Object::text_insert( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text) const
{
     ::efl_text_cursor_object_text_insert(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(text));
}
inline ::efl::eolian::return_traits<void>::type Object::markup_insert( ::efl::eolian::in_traits< ::efl::eina::string_view>::type markup) const
{
     ::efl_text_cursor_object_markup_insert(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(markup));
}
inline ::efl::eolian::return_traits< ::std::string>::type Object::range_markup_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const
{
    char * __return_value =  ::efl_text_cursor_object_range_markup_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(cur2));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::std::string>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::std::string>::type Object::range_text_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const
{
    char * __return_value =  ::efl_text_cursor_object_range_text_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(cur2));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::std::string>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator<Eina_Rect>>::type Object::range_geometry_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const
{
    Eina_Iterator * __return_value =  ::efl_text_cursor_object_range_geometry_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(cur2));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator<Eina_Rect>>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator<Eina_Rect>>::type Object::range_precise_geometry_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const
{
    Eina_Iterator * __return_value =  ::efl_text_cursor_object_range_precise_geometry_get(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(cur2));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator<Eina_Rect>>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::range_delete( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type cur2) const
{
     ::efl_text_cursor_object_range_delete(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Text_Cursor_Object*,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type>(cur2));
}
inline efl::text_cursor::Object::operator ::efl::text_cursor::Object() const { return *static_cast< ::efl::text_cursor::Object const*>(static_cast<void const*>(this)); }
inline efl::text_cursor::Object::operator ::efl::text_cursor::Object&() { return *static_cast< ::efl::text_cursor::Object*>(static_cast<void*>(this)); }
inline efl::text_cursor::Object::operator ::efl::text_cursor::Object const&() const { return *static_cast< ::efl::text_cursor::Object const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
