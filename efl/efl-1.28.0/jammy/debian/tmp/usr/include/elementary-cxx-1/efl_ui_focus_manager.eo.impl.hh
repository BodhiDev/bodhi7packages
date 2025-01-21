#ifndef EFL_UI_FOCUS_MANAGER_IMPL_HH
#define EFL_UI_FOCUS_MANAGER_IMPL_HH

#include "efl_ui_focus_manager.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { namespace focus { 
inline ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type Manager::manager_focus_get() const
{
     ::Efl_Ui_Focus_Object* __return_value =  ::efl_ui_focus_manager_focus_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Manager::manager_focus_set( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type focus) const
{
     ::efl_ui_focus_manager_focus_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(focus));
}
inline ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type Manager::redirect_get() const
{
     ::Efl_Ui_Focus_Manager* __return_value =  ::efl_ui_focus_manager_redirect_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Manager::redirect_set( ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type redirect) const
{
     ::efl_ui_focus_manager_redirect_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Manager*,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type>(redirect));
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::ui::focus::Object>>::type Manager::border_elements_get() const
{
    Eina_Iterator * __return_value =  ::efl_ui_focus_manager_border_elements_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::ui::focus::Object>>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Manager::border_elements_changed_get() const
{
    Eina_Bool __return_value =  ::efl_ui_focus_manager_border_elements_changed_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::ui::focus::Object>>::type Manager::viewport_elements_get( ::efl::eolian::in_traits<Eina_Rect>::type viewport) const
{
    Eina_Iterator * __return_value =  ::efl_ui_focus_manager_viewport_elements_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(viewport));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::ui::focus::Object>>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type Manager::root_get() const
{
     ::Efl_Ui_Focus_Object* __return_value =  ::efl_ui_focus_manager_root_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Manager::root_set( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type root) const
{
    Eina_Bool __return_value =  ::efl_ui_focus_manager_root_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(root));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type Manager::move( ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type direction) const
{
     ::Efl_Ui_Focus_Object* __return_value =  ::efl_ui_focus_manager_move(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Focus_Direction,  ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type>(direction));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type Manager::request_move( ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type direction,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits<bool>::type logical) const
{
     ::Efl_Ui_Focus_Object* __return_value =  ::efl_ui_focus_manager_request_move(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Focus_Direction,  ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type>(direction),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(child),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(logical));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type Manager::request_subchild( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type root) const
{
     ::Efl_Ui_Focus_Object* __return_value =  ::efl_ui_focus_manager_request_subchild(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(root));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::std::unique_ptr<Efl_Ui_Focus_Relations, ::efl::eina::malloc_deleter>>::type Manager::fetch( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child) const
{
    Efl_Ui_Focus_Relations * __return_value =  ::efl_ui_focus_manager_fetch(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(child));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::std::unique_ptr<Efl_Ui_Focus_Relations, ::efl::eina::malloc_deleter>>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits<Efl_Ui_Focus_Manager_Logical_End_Detail>::type Manager::logical_end() const
{
    Efl_Ui_Focus_Manager_Logical_End_Detail __return_value =  ::efl_ui_focus_manager_logical_end(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Focus_Manager_Logical_End_Detail>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Manager::reset_history() const
{
     ::efl_ui_focus_manager_reset_history(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Manager::pop_history_stack() const
{
     ::efl_ui_focus_manager_pop_history_stack(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Manager::setup_on_first_touch( ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type direction,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type entry) const
{
     ::efl_ui_focus_manager_setup_on_first_touch(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Focus_Direction,  ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type>(direction),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(entry));
}
inline ::efl::eolian::return_traits<void>::type Manager::dirty_logic_freeze() const
{
     ::efl_ui_focus_manager_dirty_logic_freeze(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Manager::dirty_logic_unfreeze() const
{
     ::efl_ui_focus_manager_dirty_logic_unfreeze(_eo_ptr());
}
} } } 
namespace eo_cxx {
namespace efl { namespace ui { namespace focus { 
inline ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type Manager::manager_focus_get() const
{
     ::Efl_Ui_Focus_Object* __return_value =  ::efl_ui_focus_manager_focus_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Manager::manager_focus_set( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type focus) const
{
     ::efl_ui_focus_manager_focus_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(focus));
}
inline ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type Manager::redirect_get() const
{
     ::Efl_Ui_Focus_Manager* __return_value =  ::efl_ui_focus_manager_redirect_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Manager::redirect_set( ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type redirect) const
{
     ::efl_ui_focus_manager_redirect_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Manager*,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type>(redirect));
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::ui::focus::Object>>::type Manager::border_elements_get() const
{
    Eina_Iterator * __return_value =  ::efl_ui_focus_manager_border_elements_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::ui::focus::Object>>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Manager::border_elements_changed_get() const
{
    Eina_Bool __return_value =  ::efl_ui_focus_manager_border_elements_changed_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::ui::focus::Object>>::type Manager::viewport_elements_get( ::efl::eolian::in_traits<Eina_Rect>::type viewport) const
{
    Eina_Iterator * __return_value =  ::efl_ui_focus_manager_viewport_elements_get(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Rect,  ::efl::eolian::in_traits<Eina_Rect>::type>(viewport));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::ui::focus::Object>>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type Manager::root_get() const
{
     ::Efl_Ui_Focus_Object* __return_value =  ::efl_ui_focus_manager_root_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Manager::root_set( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type root) const
{
    Eina_Bool __return_value =  ::efl_ui_focus_manager_root_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(root));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type Manager::move( ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type direction) const
{
     ::Efl_Ui_Focus_Object* __return_value =  ::efl_ui_focus_manager_move(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Focus_Direction,  ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type>(direction));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type Manager::request_move( ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type direction,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits<bool>::type logical) const
{
     ::Efl_Ui_Focus_Object* __return_value =  ::efl_ui_focus_manager_request_move(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Focus_Direction,  ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type>(direction),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(child),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(logical));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type Manager::request_subchild( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type root) const
{
     ::Efl_Ui_Focus_Object* __return_value =  ::efl_ui_focus_manager_request_subchild(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(root));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::std::unique_ptr<Efl_Ui_Focus_Relations, ::efl::eina::malloc_deleter>>::type Manager::fetch( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child) const
{
    Efl_Ui_Focus_Relations * __return_value =  ::efl_ui_focus_manager_fetch(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(child));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::std::unique_ptr<Efl_Ui_Focus_Relations, ::efl::eina::malloc_deleter>>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits<Efl_Ui_Focus_Manager_Logical_End_Detail>::type Manager::logical_end() const
{
    Efl_Ui_Focus_Manager_Logical_End_Detail __return_value =  ::efl_ui_focus_manager_logical_end(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Ui_Focus_Manager_Logical_End_Detail>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Manager::reset_history() const
{
     ::efl_ui_focus_manager_reset_history(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Manager::pop_history_stack() const
{
     ::efl_ui_focus_manager_pop_history_stack(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Manager::setup_on_first_touch( ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type direction,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type entry) const
{
     ::efl_ui_focus_manager_setup_on_first_touch(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Focus_Direction,  ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type>(direction),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Focus_Object*,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type>(entry));
}
inline ::efl::eolian::return_traits<void>::type Manager::dirty_logic_freeze() const
{
     ::efl_ui_focus_manager_dirty_logic_freeze(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Manager::dirty_logic_unfreeze() const
{
     ::efl_ui_focus_manager_dirty_logic_unfreeze(_eo_ptr());
}
inline efl::ui::focus::Manager::operator ::efl::ui::focus::Manager() const { return *static_cast< ::efl::ui::focus::Manager const*>(static_cast<void const*>(this)); }
inline efl::ui::focus::Manager::operator ::efl::ui::focus::Manager&() { return *static_cast< ::efl::ui::focus::Manager*>(static_cast<void*>(this)); }
inline efl::ui::focus::Manager::operator ::efl::ui::focus::Manager const&() const { return *static_cast< ::efl::ui::focus::Manager const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
