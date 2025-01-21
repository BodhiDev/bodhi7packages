#ifndef EFL_OBJECT_IMPL_HH
#define EFL_OBJECT_IMPL_HH

#include "efl_object.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits< ::efl::Object>::type Object::parent_get() const
{
     ::Efl_Object* __return_value =  ::efl_parent_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::parent_set( ::efl::eolian::in_traits< ::efl::Object>::type parent) const
{
     ::efl_parent_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(parent));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Object::name_get() const
{
    const char * __return_value =  ::efl_name_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
     ::efl_name_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Object::comment_get() const
{
    const char * __return_value =  ::efl_comment_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::comment_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type comment) const
{
     ::efl_comment_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(comment));
}
inline ::efl::eolian::return_traits<int>::type Object::event_global_freeze_count_get()
{
    int __return_value =  ::efl_event_global_freeze_count_get();
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<int>::type Object::event_freeze_count_get() const
{
    int __return_value =  ::efl_event_freeze_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::finalized_get() const
{
    Eina_Bool __return_value =  ::efl_finalized_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::invalidated_get() const
{
    Eina_Bool __return_value =  ::efl_invalidated_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::invalidating_get() const
{
    Eina_Bool __return_value =  ::efl_invalidating_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::allow_parent_unref_get() const
{
    Eina_Bool __return_value =  ::efl_allow_parent_unref_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::allow_parent_unref_set( ::efl::eolian::in_traits<bool>::type allow) const
{
     ::efl_allow_parent_unref_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(allow));
}
#endif
inline ::efl::eolian::return_traits<void>::type Object::debug_name_override( ::efl::eolian::in_traits< ::efl::eina::strbuf>::type sb) const
{
     ::efl_debug_name_override(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Strbuf *,  ::efl::eolian::in_traits< ::efl::eina::strbuf>::type>(sb));
}
inline ::efl::eolian::return_traits< ::efl::Object>::type Object::provider_find( ::efl::eolian::in_traits< ::efl::Class>::type klass) const
{
     ::Efl_Object* __return_value =  ::efl_provider_find(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Class const*,  ::efl::eolian::in_traits< ::efl::Class>::type>(klass));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::Object>::type Object::constructor() const
{
     ::Efl_Object* __return_value =  ::efl_constructor(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::destructor() const
{
     ::efl_destructor(_eo_ptr());
}
inline ::efl::eolian::return_traits< ::efl::Object>::type Object::finalize() const
{
     ::Efl_Object* __return_value =  ::efl_finalize(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::invalidate() const
{
     ::efl_invalidate(_eo_ptr());
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::Object>::type Object::name_find( ::efl::eolian::in_traits< ::efl::eina::string_view>::type search) const
{
     ::Efl_Object* __return_value =  ::efl_name_find(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(search));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits<void>::type Object::event_thaw() const
{
     ::efl_event_thaw(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Object::event_freeze() const
{
     ::efl_event_freeze(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Object::event_global_thaw()
{
     ::efl_event_global_thaw();
}
inline ::efl::eolian::return_traits<void>::type Object::event_global_freeze()
{
     ::efl_event_global_freeze();
}
inline ::efl::eolian::return_traits<void>::type Object::event_callback_stop() const
{
     ::efl_event_callback_stop(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Object::event_callback_forwarder_priority_add( ::efl::eolian::in_traits<const Efl_Event_Description *>::type desc,  ::efl::eolian::in_traits<Efl_Callback_Priority>::type priority,  ::efl::eolian::in_traits< ::efl::Object>::type source) const
{
     ::efl_event_callback_forwarder_priority_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Efl_Event_Description *,  ::efl::eolian::in_traits<const Efl_Event_Description *>::type>(desc),
         ::efl::eolian::convert_to_c<Efl_Callback_Priority,  ::efl::eolian::in_traits<Efl_Callback_Priority>::type>(priority),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(source));
}
inline ::efl::eolian::return_traits<void>::type Object::event_callback_forwarder_del( ::efl::eolian::in_traits<const Efl_Event_Description *>::type desc,  ::efl::eolian::in_traits< ::efl::Object>::type new_obj) const
{
     ::efl_event_callback_forwarder_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Efl_Event_Description *,  ::efl::eolian::in_traits<const Efl_Event_Description *>::type>(desc),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(new_obj));
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::Object>>::type Object::children_iterator_new() const
{
    Eina_Iterator * __return_value =  ::efl_children_iterator_new(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::Object>>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::composite_attach( ::efl::eolian::in_traits< ::efl::Object>::type comp_obj) const
{
    Eina_Bool __return_value =  ::efl_composite_attach(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(comp_obj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::composite_detach( ::efl::eolian::in_traits< ::efl::Object>::type comp_obj) const
{
    Eina_Bool __return_value =  ::efl_composite_detach(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(comp_obj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::composite_part_is() const
{
    Eina_Bool __return_value =  ::efl_composite_part_is(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits<bool>::type Object::provider_register( ::efl::eolian::in_traits< ::efl::Class>::type klass,  ::efl::eolian::in_traits< ::efl::Object>::type provider) const
{
    Eina_Bool __return_value =  ::efl_provider_register(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Class const*,  ::efl::eolian::in_traits< ::efl::Class>::type>(klass),
         ::efl::eolian::convert_to_c< ::Efl_Object const*,  ::efl::eolian::in_traits< ::efl::Object>::type>(provider));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::provider_unregister( ::efl::eolian::in_traits< ::efl::Class>::type klass,  ::efl::eolian::in_traits< ::efl::Object>::type provider) const
{
    Eina_Bool __return_value =  ::efl_provider_unregister(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Class const*,  ::efl::eolian::in_traits< ::efl::Class>::type>(klass),
         ::efl::eolian::convert_to_c< ::Efl_Object const*,  ::efl::eolian::in_traits< ::efl::Object>::type>(provider));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits< ::efl::Object>::type Object::parent_get() const
{
     ::Efl_Object* __return_value =  ::efl_parent_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::parent_set( ::efl::eolian::in_traits< ::efl::Object>::type parent) const
{
     ::efl_parent_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(parent));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Object::name_get() const
{
    const char * __return_value =  ::efl_name_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const
{
     ::efl_name_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(name));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Object::comment_get() const
{
    const char * __return_value =  ::efl_comment_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::comment_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type comment) const
{
     ::efl_comment_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(comment));
}
inline ::efl::eolian::return_traits<int>::type Object::event_global_freeze_count_get()
{
    int __return_value =  ::efl_event_global_freeze_count_get();
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<int>::type Object::event_freeze_count_get() const
{
    int __return_value =  ::efl_event_freeze_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::finalized_get() const
{
    Eina_Bool __return_value =  ::efl_finalized_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::invalidated_get() const
{
    Eina_Bool __return_value =  ::efl_invalidated_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::invalidating_get() const
{
    Eina_Bool __return_value =  ::efl_invalidating_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::allow_parent_unref_get() const
{
    Eina_Bool __return_value =  ::efl_allow_parent_unref_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::allow_parent_unref_set( ::efl::eolian::in_traits<bool>::type allow) const
{
     ::efl_allow_parent_unref_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(allow));
}
#endif
inline ::efl::eolian::return_traits<void>::type Object::debug_name_override( ::efl::eolian::in_traits< ::efl::eina::strbuf>::type sb) const
{
     ::efl_debug_name_override(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Strbuf *,  ::efl::eolian::in_traits< ::efl::eina::strbuf>::type>(sb));
}
inline ::efl::eolian::return_traits< ::efl::Object>::type Object::provider_find( ::efl::eolian::in_traits< ::efl::Class>::type klass) const
{
     ::Efl_Object* __return_value =  ::efl_provider_find(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Class const*,  ::efl::eolian::in_traits< ::efl::Class>::type>(klass));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::Object>::type Object::constructor() const
{
     ::Efl_Object* __return_value =  ::efl_constructor(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::destructor() const
{
     ::efl_destructor(_eo_ptr());
}
inline ::efl::eolian::return_traits< ::efl::Object>::type Object::finalize() const
{
     ::Efl_Object* __return_value =  ::efl_finalize(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Object::invalidate() const
{
     ::efl_invalidate(_eo_ptr());
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::Object>::type Object::name_find( ::efl::eolian::in_traits< ::efl::eina::string_view>::type search) const
{
     ::Efl_Object* __return_value =  ::efl_name_find(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(search));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits<void>::type Object::event_thaw() const
{
     ::efl_event_thaw(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Object::event_freeze() const
{
     ::efl_event_freeze(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Object::event_global_thaw()
{
     ::efl_event_global_thaw();
}
inline ::efl::eolian::return_traits<void>::type Object::event_global_freeze()
{
     ::efl_event_global_freeze();
}
inline ::efl::eolian::return_traits<void>::type Object::event_callback_stop() const
{
     ::efl_event_callback_stop(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Object::event_callback_forwarder_priority_add( ::efl::eolian::in_traits<const Efl_Event_Description *>::type desc,  ::efl::eolian::in_traits<Efl_Callback_Priority>::type priority,  ::efl::eolian::in_traits< ::efl::Object>::type source) const
{
     ::efl_event_callback_forwarder_priority_add(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Efl_Event_Description *,  ::efl::eolian::in_traits<const Efl_Event_Description *>::type>(desc),
         ::efl::eolian::convert_to_c<Efl_Callback_Priority,  ::efl::eolian::in_traits<Efl_Callback_Priority>::type>(priority),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(source));
}
inline ::efl::eolian::return_traits<void>::type Object::event_callback_forwarder_del( ::efl::eolian::in_traits<const Efl_Event_Description *>::type desc,  ::efl::eolian::in_traits< ::efl::Object>::type new_obj) const
{
     ::efl_event_callback_forwarder_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const Efl_Event_Description *,  ::efl::eolian::in_traits<const Efl_Event_Description *>::type>(desc),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(new_obj));
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::Object>>::type Object::children_iterator_new() const
{
    Eina_Iterator * __return_value =  ::efl_children_iterator_new(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::Object>>::type>(__return_value);
}
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::composite_attach( ::efl::eolian::in_traits< ::efl::Object>::type comp_obj) const
{
    Eina_Bool __return_value =  ::efl_composite_attach(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(comp_obj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::composite_detach( ::efl::eolian::in_traits< ::efl::Object>::type comp_obj) const
{
    Eina_Bool __return_value =  ::efl_composite_detach(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Object*,  ::efl::eolian::in_traits< ::efl::Object>::type>(comp_obj));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::composite_part_is() const
{
    Eina_Bool __return_value =  ::efl_composite_part_is(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline ::efl::eolian::return_traits<bool>::type Object::provider_register( ::efl::eolian::in_traits< ::efl::Class>::type klass,  ::efl::eolian::in_traits< ::efl::Object>::type provider) const
{
    Eina_Bool __return_value =  ::efl_provider_register(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Class const*,  ::efl::eolian::in_traits< ::efl::Class>::type>(klass),
         ::efl::eolian::convert_to_c< ::Efl_Object const*,  ::efl::eolian::in_traits< ::efl::Object>::type>(provider));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Object::provider_unregister( ::efl::eolian::in_traits< ::efl::Class>::type klass,  ::efl::eolian::in_traits< ::efl::Object>::type provider) const
{
    Eina_Bool __return_value =  ::efl_provider_unregister(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Class const*,  ::efl::eolian::in_traits< ::efl::Class>::type>(klass),
         ::efl::eolian::convert_to_c< ::Efl_Object const*,  ::efl::eolian::in_traits< ::efl::Object>::type>(provider));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline efl::Object::operator ::efl::Object() const { return *static_cast< ::efl::Object const*>(static_cast<void const*>(this)); }
inline efl::Object::operator ::efl::Object&() { return *static_cast< ::efl::Object*>(static_cast<void*>(this)); }
inline efl::Object::operator ::efl::Object const&() const { return *static_cast< ::efl::Object const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
