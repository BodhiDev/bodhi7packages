#ifndef EFL_UI_FOCUS_OBJECT_IMPL_HH
#define EFL_UI_FOCUS_OBJECT_IMPL_HH

#include "efl_ui_focus_object.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { namespace focus { 
inline ::efl::eolian::return_traits<Eina_Rect>::type Object::focus_geometry_get() const
{
    Eina_Rect __return_value =  ::efl_ui_focus_object_focus_geometry_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::focus_get() const
{
    Eina_Bool __return_value =  ::efl_ui_focus_object_focus_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Object::focus_set( ::efl::eolian::in_traits<bool>::type focus) const
{
     ::efl_ui_focus_object_focus_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(focus));
}
#endif
inline ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type Object::focus_manager_get() const
{
     ::Efl_Ui_Focus_Manager* __return_value =  ::efl_ui_focus_object_focus_manager_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type Object::focus_parent_get() const
{
     ::Efl_Ui_Focus_Object* __return_value =  ::efl_ui_focus_object_focus_parent_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type>(__return_value);
}
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Object::child_focus_get() const
{
    Eina_Bool __return_value =  ::efl_ui_focus_object_child_focus_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Object::child_focus_set( ::efl::eolian::in_traits<bool>::type child_focus) const
{
     ::efl_ui_focus_object_child_focus_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(child_focus));
}
#endif
inline ::efl::eolian::return_traits<void>::type Object::setup_order() const
{
     ::efl_ui_focus_object_setup_order(_eo_ptr());
}
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Object::setup_order_non_recursive() const
{
     ::efl_ui_focus_object_setup_order_non_recursive(_eo_ptr());
}
#endif
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Object::on_focus_update() const
{
    Eina_Bool __return_value =  ::efl_ui_focus_object_on_focus_update(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace ui { namespace focus { 
inline ::efl::eolian::return_traits<Eina_Rect>::type Object::focus_geometry_get() const
{
    Eina_Rect __return_value =  ::efl_ui_focus_object_focus_geometry_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::focus_get() const
{
    Eina_Bool __return_value =  ::efl_ui_focus_object_focus_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Object::focus_set( ::efl::eolian::in_traits<bool>::type focus) const
{
     ::efl_ui_focus_object_focus_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(focus));
}
#endif
inline ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type Object::focus_manager_get() const
{
     ::Efl_Ui_Focus_Manager* __return_value =  ::efl_ui_focus_object_focus_manager_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type Object::focus_parent_get() const
{
     ::Efl_Ui_Focus_Object* __return_value =  ::efl_ui_focus_object_focus_parent_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type>(__return_value);
}
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Object::child_focus_get() const
{
    Eina_Bool __return_value =  ::efl_ui_focus_object_child_focus_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Object::child_focus_set( ::efl::eolian::in_traits<bool>::type child_focus) const
{
     ::efl_ui_focus_object_child_focus_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(child_focus));
}
#endif
inline ::efl::eolian::return_traits<void>::type Object::setup_order() const
{
     ::efl_ui_focus_object_setup_order(_eo_ptr());
}
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Object::setup_order_non_recursive() const
{
     ::efl_ui_focus_object_setup_order_non_recursive(_eo_ptr());
}
#endif
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<bool>::type Object::on_focus_update() const
{
    Eina_Bool __return_value =  ::efl_ui_focus_object_on_focus_update(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline efl::ui::focus::Object::operator ::efl::ui::focus::Object() const { return *static_cast< ::efl::ui::focus::Object const*>(static_cast<void const*>(this)); }
inline efl::ui::focus::Object::operator ::efl::ui::focus::Object&() { return *static_cast< ::efl::ui::focus::Object*>(static_cast<void*>(this)); }
inline efl::ui::focus::Object::operator ::efl::ui::focus::Object const&() const { return *static_cast< ::efl::ui::focus::Object const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
