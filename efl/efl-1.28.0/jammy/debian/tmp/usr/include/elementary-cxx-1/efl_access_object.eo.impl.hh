#ifndef EFL_ACCESS_OBJECT_IMPL_HH
#define EFL_ACCESS_OBJECT_IMPL_HH

#include "efl_access_object.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace access { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Object::localized_role_name_get() const
{
    const char * __return_value =  ::efl_access_object_localized_role_name_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Object::i18n_name_get() const
{
    const char * __return_value =  ::efl_access_object_i18n_name_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::i18n_name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type i18n_name) const
{
     ::efl_access_object_i18n_name_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(i18n_name));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Access_Role>::type Object::role_get() const
{
    Efl_Access_Role __return_value =  ::efl_access_object_role_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Access_Role>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::role_set( ::efl::eolian::in_traits<Efl_Access_Role>::type role) const
{
     ::efl_access_object_role_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Access_Role,  ::efl::eolian::in_traits<Efl_Access_Role>::type>(role));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<  ::efl::eina::list< ::efl::access::Object>>::type Object::access_children_get() const
{
    Eina_List * __return_value =  ::efl_access_object_access_children_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<  ::efl::eina::list< ::efl::access::Object>>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Object::role_name_get() const
{
    const char * __return_value =  ::efl_access_object_role_name_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Attribute>>::type Object::attributes_get() const
{
    Eina_List * __return_value =  ::efl_access_object_attributes_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Attribute>>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<Efl_Access_Reading_Info_Type>::type Object::reading_info_type_get() const
{
    Efl_Access_Reading_Info_Type __return_value =  ::efl_access_object_reading_info_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Access_Reading_Info_Type>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Object::reading_info_type_set( ::efl::eolian::in_traits<Efl_Access_Reading_Info_Type>::type reading_info) const
{
     ::efl_access_object_reading_info_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Access_Reading_Info_Type,  ::efl::eolian::in_traits<Efl_Access_Reading_Info_Type>::type>(reading_info));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<int>::type Object::index_in_parent_get() const
{
    int __return_value =  ::efl_access_object_index_in_parent_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Object::description_get() const
{
    const char * __return_value =  ::efl_access_object_description_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::description_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type description) const
{
     ::efl_access_object_description_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(description));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<Efl_Access_State_Set>::type Object::state_set_get() const
{
    Efl_Access_State_Set __return_value =  ::efl_access_object_state_set_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Access_State_Set>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Object::translation_domain_get() const
{
    const char * __return_value =  ::efl_access_object_translation_domain_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::translation_domain_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type domain) const
{
     ::efl_access_object_translation_domain_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(domain));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Access_Type>::type Object::access_type_get() const
{
    Efl_Access_Type __return_value =  ::efl_access_object_access_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Access_Type>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::access_type_set( ::efl::eolian::in_traits<Efl_Access_Type>::type type) const
{
     ::efl_access_object_access_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Access_Type,  ::efl::eolian::in_traits<Efl_Access_Type>::type>(type));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::Object>::type Object::access_root_get()
{
     ::Efl_Object* __return_value =  ::efl_access_object_access_root_get();
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits< ::efl::eina::iterator<Efl_Access_Relation>>::type Object::relations_get() const
{
    Eina_Iterator * __return_value =  ::efl_access_object_relations_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator<Efl_Access_Relation>>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::attribute_append( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type value) const
{
     ::efl_access_object_attribute_append(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(value));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::attribute_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const
{
     ::efl_access_object_attribute_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::attributes_clear() const
{
     ::efl_access_object_attributes_clear(_eo_ptr());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<Efl_Access_Event_Handler *>::type Object::event_handler_add( ::efl::eolian::in_traits<Efl_Event_Cb>::type cb,  ::efl::eolian::in_traits<void*>::type data)
{
    Efl_Access_Event_Handler * __return_value =  ::efl_access_object_event_handler_add(
         ::efl::eolian::convert_to_c<Efl_Event_Cb,  ::efl::eolian::in_traits<Efl_Event_Cb>::type>(cb),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(data));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Access_Event_Handler *>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Object::event_handler_del( ::efl::eolian::in_traits<Efl_Access_Event_Handler *>::type handler)
{
     ::efl_access_object_event_handler_del(
         ::efl::eolian::convert_to_c<Efl_Access_Event_Handler *,  ::efl::eolian::in_traits<Efl_Access_Event_Handler *>::type>(handler));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Object::event_emit( ::efl::eolian::in_traits< ::efl::access::Object>::type accessible,  ::efl::eolian::in_traits<const Efl_Event_Description *>::type event,  ::efl::eolian::in_traits<void*>::type event_info)
{
     ::efl_access_object_event_emit(
         ::efl::eolian::convert_to_c< ::Efl_Access_Object*,  ::efl::eolian::in_traits< ::efl::access::Object>::type>(accessible),
         ::efl::eolian::convert_to_c<const Efl_Event_Description *,  ::efl::eolian::in_traits<const Efl_Event_Description *>::type>(event),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(event_info));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::relationship_append( ::efl::eolian::in_traits<Efl_Access_Relation_Type>::type type,  ::efl::eolian::in_traits< ::efl::access::Object>::type relation_object) const
{
    Eina_Bool __return_value =  ::efl_access_object_relationship_append(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Access_Relation_Type,  ::efl::eolian::in_traits<Efl_Access_Relation_Type>::type>(type),
         ::efl::eolian::convert_to_c< ::Efl_Access_Object const*,  ::efl::eolian::in_traits< ::efl::access::Object>::type>(relation_object));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::relationship_remove( ::efl::eolian::in_traits<Efl_Access_Relation_Type>::type type,  ::efl::eolian::in_traits< ::efl::access::Object>::type relation_object) const
{
     ::efl_access_object_relationship_remove(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Access_Relation_Type,  ::efl::eolian::in_traits<Efl_Access_Relation_Type>::type>(type),
         ::efl::eolian::convert_to_c< ::Efl_Access_Object const*,  ::efl::eolian::in_traits< ::efl::access::Object>::type>(relation_object));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::relationships_clear() const
{
     ::efl_access_object_relationships_clear(_eo_ptr());
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace access { 
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Object::localized_role_name_get() const
{
    const char * __return_value =  ::efl_access_object_localized_role_name_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Object::i18n_name_get() const
{
    const char * __return_value =  ::efl_access_object_i18n_name_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::i18n_name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type i18n_name) const
{
     ::efl_access_object_i18n_name_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(i18n_name));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Access_Role>::type Object::role_get() const
{
    Efl_Access_Role __return_value =  ::efl_access_object_role_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Access_Role>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::role_set( ::efl::eolian::in_traits<Efl_Access_Role>::type role) const
{
     ::efl_access_object_role_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Access_Role,  ::efl::eolian::in_traits<Efl_Access_Role>::type>(role));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<  ::efl::eina::list< ::efl::access::Object>>::type Object::access_children_get() const
{
    Eina_List * __return_value =  ::efl_access_object_access_children_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<  ::efl::eina::list< ::efl::access::Object>>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Object::role_name_get() const
{
    const char * __return_value =  ::efl_access_object_role_name_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Attribute>>::type Object::attributes_get() const
{
    Eina_List * __return_value =  ::efl_access_object_attributes_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Attribute>>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<Efl_Access_Reading_Info_Type>::type Object::reading_info_type_get() const
{
    Efl_Access_Reading_Info_Type __return_value =  ::efl_access_object_reading_info_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Access_Reading_Info_Type>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Object::reading_info_type_set( ::efl::eolian::in_traits<Efl_Access_Reading_Info_Type>::type reading_info) const
{
     ::efl_access_object_reading_info_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Access_Reading_Info_Type,  ::efl::eolian::in_traits<Efl_Access_Reading_Info_Type>::type>(reading_info));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<int>::type Object::index_in_parent_get() const
{
    int __return_value =  ::efl_access_object_index_in_parent_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Object::description_get() const
{
    const char * __return_value =  ::efl_access_object_description_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::description_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type description) const
{
     ::efl_access_object_description_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(description));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<Efl_Access_State_Set>::type Object::state_set_get() const
{
    Efl_Access_State_Set __return_value =  ::efl_access_object_state_set_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Access_State_Set>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Object::translation_domain_get() const
{
    const char * __return_value =  ::efl_access_object_translation_domain_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::translation_domain_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type domain) const
{
     ::efl_access_object_translation_domain_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(domain));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Access_Type>::type Object::access_type_get() const
{
    Efl_Access_Type __return_value =  ::efl_access_object_access_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Access_Type>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::access_type_set( ::efl::eolian::in_traits<Efl_Access_Type>::type type) const
{
     ::efl_access_object_access_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Access_Type,  ::efl::eolian::in_traits<Efl_Access_Type>::type>(type));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::Object>::type Object::access_root_get()
{
     ::Efl_Object* __return_value =  ::efl_access_object_access_root_get();
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Object>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits< ::efl::eina::iterator<Efl_Access_Relation>>::type Object::relations_get() const
{
    Eina_Iterator * __return_value =  ::efl_access_object_relations_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator<Efl_Access_Relation>>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::attribute_append( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type value) const
{
     ::efl_access_object_attribute_append(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(value));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::attribute_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const
{
     ::efl_access_object_attribute_del(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(key));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::attributes_clear() const
{
     ::efl_access_object_attributes_clear(_eo_ptr());
}
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<Efl_Access_Event_Handler *>::type Object::event_handler_add( ::efl::eolian::in_traits<Efl_Event_Cb>::type cb,  ::efl::eolian::in_traits<void*>::type data)
{
    Efl_Access_Event_Handler * __return_value =  ::efl_access_object_event_handler_add(
         ::efl::eolian::convert_to_c<Efl_Event_Cb,  ::efl::eolian::in_traits<Efl_Event_Cb>::type>(cb),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(data));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Access_Event_Handler *>::type>(__return_value);
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Object::event_handler_del( ::efl::eolian::in_traits<Efl_Access_Event_Handler *>::type handler)
{
     ::efl_access_object_event_handler_del(
         ::efl::eolian::convert_to_c<Efl_Access_Event_Handler *,  ::efl::eolian::in_traits<Efl_Access_Event_Handler *>::type>(handler));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
inline ::efl::eolian::return_traits<void>::type Object::event_emit( ::efl::eolian::in_traits< ::efl::access::Object>::type accessible,  ::efl::eolian::in_traits<const Efl_Event_Description *>::type event,  ::efl::eolian::in_traits<void*>::type event_info)
{
     ::efl_access_object_event_emit(
         ::efl::eolian::convert_to_c< ::Efl_Access_Object*,  ::efl::eolian::in_traits< ::efl::access::Object>::type>(accessible),
         ::efl::eolian::convert_to_c<const Efl_Event_Description *,  ::efl::eolian::in_traits<const Efl_Event_Description *>::type>(event),
         ::efl::eolian::convert_to_c<void *,  ::efl::eolian::in_traits<void*>::type>(event_info));
}
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Object::relationship_append( ::efl::eolian::in_traits<Efl_Access_Relation_Type>::type type,  ::efl::eolian::in_traits< ::efl::access::Object>::type relation_object) const
{
    Eina_Bool __return_value =  ::efl_access_object_relationship_append(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Access_Relation_Type,  ::efl::eolian::in_traits<Efl_Access_Relation_Type>::type>(type),
         ::efl::eolian::convert_to_c< ::Efl_Access_Object const*,  ::efl::eolian::in_traits< ::efl::access::Object>::type>(relation_object));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::relationship_remove( ::efl::eolian::in_traits<Efl_Access_Relation_Type>::type type,  ::efl::eolian::in_traits< ::efl::access::Object>::type relation_object) const
{
     ::efl_access_object_relationship_remove(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Access_Relation_Type,  ::efl::eolian::in_traits<Efl_Access_Relation_Type>::type>(type),
         ::efl::eolian::convert_to_c< ::Efl_Access_Object const*,  ::efl::eolian::in_traits< ::efl::access::Object>::type>(relation_object));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Object::relationships_clear() const
{
     ::efl_access_object_relationships_clear(_eo_ptr());
}
#endif
inline efl::access::Object::operator ::efl::access::Object() const { return *static_cast< ::efl::access::Object const*>(static_cast<void const*>(this)); }
inline efl::access::Object::operator ::efl::access::Object&() { return *static_cast< ::efl::access::Object*>(static_cast<void*>(this)); }
inline efl::access::Object::operator ::efl::access::Object const&() const { return *static_cast< ::efl::access::Object const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
