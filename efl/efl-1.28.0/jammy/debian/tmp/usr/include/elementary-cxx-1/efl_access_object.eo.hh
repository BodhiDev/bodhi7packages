#ifndef EFL_ACCESS_OBJECT_EO_HH
#define EFL_ACCESS_OBJECT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_access_object.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_object.eo.hh"
#ifndef EFL_ACCESS_OBJECT_FWD_GUARD
#define EFL_ACCESS_OBJECT_FWD_GUARD
namespace efl { namespace access { 
struct Object;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Object const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_OBJECT_FWD_GUARD
#define EFL_OBJECT_FWD_GUARD
namespace efl { 
struct Object;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_ACCESS_OBJECT_FWD_GUARD
#define EFL_ACCESS_OBJECT_FWD_GUARD
namespace efl { namespace access { 
struct Object;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Object const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace access { 
struct Object {
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type localized_role_name_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type i18n_name_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type i18n_name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type i18n_name) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Access_Role>::type role_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type role_set( ::efl::eolian::in_traits<Efl_Access_Role>::type role) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<  ::efl::eina::list< ::efl::access::Object>>::type access_children_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type role_name_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Attribute>>::type attributes_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<Efl_Access_Reading_Info_Type>::type reading_info_type_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<void>::type reading_info_type_set( ::efl::eolian::in_traits<Efl_Access_Reading_Info_Type>::type reading_info) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<int>::type index_in_parent_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type description_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type description_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type description) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<Efl_Access_State_Set>::type state_set_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type translation_domain_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type translation_domain_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type domain) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Access_Type>::type access_type_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type access_type_set( ::efl::eolian::in_traits<Efl_Access_Type>::type type) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    static ::efl::eolian::return_traits< ::efl::Object>::type access_root_get();
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    ::efl::eolian::return_traits< ::efl::eina::iterator<Efl_Access_Relation>>::type relations_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type attribute_append( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type value) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type attribute_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type attributes_clear() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    static ::efl::eolian::return_traits<Efl_Access_Event_Handler *>::type event_handler_add( ::efl::eolian::in_traits<Efl_Event_Cb>::type cb,  ::efl::eolian::in_traits<void*>::type data);
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    static ::efl::eolian::return_traits<void>::type event_handler_del( ::efl::eolian::in_traits<Efl_Access_Event_Handler *>::type handler);
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    static ::efl::eolian::return_traits<void>::type event_emit( ::efl::eolian::in_traits< ::efl::access::Object>::type accessible,  ::efl::eolian::in_traits<const Efl_Event_Description *>::type event,  ::efl::eolian::in_traits<void*>::type event_info);
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type relationship_append( ::efl::eolian::in_traits<Efl_Access_Relation_Type>::type type,  ::efl::eolian::in_traits< ::efl::access::Object>::type relation_object) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type relationship_remove( ::efl::eolian::in_traits<Efl_Access_Relation_Type>::type type,  ::efl::eolian::in_traits< ::efl::access::Object>::type relation_object) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type relationships_clear() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_ACCESS_OBJECT_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Object *>(this))); }
    operator ::efl::access::Object() const;
    operator ::efl::access::Object&();
    operator ::efl::access::Object const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Object const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace access { 
struct Object : private ::efl::eo::concrete
{
    explicit Object( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Object(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Object() = default;
    Object(Object const&) = default;
    Object(Object&&) = default;
    Object& operator=(Object const&) = default;
    Object& operator=(Object&&) = default;
    template <typename Derived>
    Object(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Object, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type localized_role_name_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type i18n_name_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type i18n_name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type i18n_name) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Access_Role>::type role_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type role_set( ::efl::eolian::in_traits<Efl_Access_Role>::type role) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<  ::efl::eina::list< ::efl::access::Object>>::type access_children_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type role_name_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Attribute>>::type attributes_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<Efl_Access_Reading_Info_Type>::type reading_info_type_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<void>::type reading_info_type_set( ::efl::eolian::in_traits<Efl_Access_Reading_Info_Type>::type reading_info) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<int>::type index_in_parent_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type description_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type description_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type description) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<Efl_Access_State_Set>::type state_set_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type translation_domain_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type translation_domain_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type domain) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Access_Type>::type access_type_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type access_type_set( ::efl::eolian::in_traits<Efl_Access_Type>::type type) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    static ::efl::eolian::return_traits< ::efl::Object>::type access_root_get();
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    ::efl::eolian::return_traits< ::efl::eina::iterator<Efl_Access_Relation>>::type relations_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type attribute_append( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type value) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type attribute_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type attributes_clear() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    static ::efl::eolian::return_traits<Efl_Access_Event_Handler *>::type event_handler_add( ::efl::eolian::in_traits<Efl_Event_Cb>::type cb,  ::efl::eolian::in_traits<void*>::type data);
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    static ::efl::eolian::return_traits<void>::type event_handler_del( ::efl::eolian::in_traits<Efl_Access_Event_Handler *>::type handler);
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_OBJECT_PROTECTED
    static ::efl::eolian::return_traits<void>::type event_emit( ::efl::eolian::in_traits< ::efl::access::Object>::type accessible,  ::efl::eolian::in_traits<const Efl_Event_Description *>::type event,  ::efl::eolian::in_traits<void*>::type event_info);
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type relationship_append( ::efl::eolian::in_traits<Efl_Access_Relation_Type>::type type,  ::efl::eolian::in_traits< ::efl::access::Object>::type relation_object) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type relationship_remove( ::efl::eolian::in_traits<Efl_Access_Relation_Type>::type type,  ::efl::eolian::in_traits< ::efl::access::Object>::type relation_object) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type relationships_clear() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_ACCESS_OBJECT_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Object *>(this))); }
#ifdef EFL_ACCESS_OBJECT_BETA
    static struct property_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_OBJECT_EVENT_PROPERTY_CHANGED; }
        typedef  ::efl::eina::string_view parameter_type;
    } const property_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    property_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(property_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    property_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(property_changed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_ACCESS_OBJECT_BETA
    static struct children_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_OBJECT_EVENT_CHILDREN_CHANGED; }
        typedef Efl_Access_Event_Children_Changed_Data parameter_type;
    } const children_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    children_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(children_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    children_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(children_changed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_ACCESS_OBJECT_BETA
    static struct state_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_OBJECT_EVENT_STATE_CHANGED; }
        typedef Efl_Access_Event_State_Changed_Data parameter_type;
    } const state_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    state_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(state_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    state_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(state_changed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_ACCESS_OBJECT_BETA
    static struct bounds_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_OBJECT_EVENT_BOUNDS_CHANGED; }
        typedef Efl_Access_Event_Geometry_Changed_Data parameter_type;
    } const bounds_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    bounds_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(bounds_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    bounds_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(bounds_changed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_ACCESS_OBJECT_BETA
    static struct visible_data_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_OBJECT_EVENT_VISIBLE_DATA_CHANGED; }
        typedef void parameter_type;
    } const visible_data_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    visible_data_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(visible_data_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    visible_data_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(visible_data_changed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_ACCESS_OBJECT_BETA
    static struct active_descendant_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_OBJECT_EVENT_ACTIVE_DESCENDANT_CHANGED; }
        typedef  ::efl::Object parameter_type;
    } const active_descendant_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    active_descendant_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(active_descendant_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    active_descendant_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(active_descendant_changed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_ACCESS_OBJECT_BETA
    static struct added_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_OBJECT_EVENT_ADDED; }
        typedef void parameter_type;
    } const added_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    added_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(added_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    added_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(added_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_ACCESS_OBJECT_BETA
    static struct removed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_OBJECT_EVENT_REMOVED; }
        typedef void parameter_type;
    } const removed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    removed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(removed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    removed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(removed_event, *this, std::bind(function));
    }
#endif
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Object> _get_wref() const { return ::efl::eo::wref<Object>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Object* operator->() const { return this; }
    Object* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Object const& lhs, Object const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Object const& lhs, Object const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Object) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Object>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
