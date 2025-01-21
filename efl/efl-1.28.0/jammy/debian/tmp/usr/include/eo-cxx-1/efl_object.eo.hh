#ifndef EFL_OBJECT_EO_HH
#define EFL_OBJECT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
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
#ifndef EFL_CLASS_FWD_GUARD
#define EFL_CLASS_FWD_GUARD
namespace efl { 
struct Class;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Object {
    ::efl::eolian::return_traits< ::efl::Object>::type parent_get() const;
    ::efl::eolian::return_traits<void>::type parent_set( ::efl::eolian::in_traits< ::efl::Object>::type parent) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type name_get() const;
    ::efl::eolian::return_traits<void>::type name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type comment_get() const;
    ::efl::eolian::return_traits<void>::type comment_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type comment) const;
    static ::efl::eolian::return_traits<int>::type event_global_freeze_count_get();
    ::efl::eolian::return_traits<int>::type event_freeze_count_get() const;
    ::efl::eolian::return_traits<bool>::type finalized_get() const;
    ::efl::eolian::return_traits<bool>::type invalidated_get() const;
    ::efl::eolian::return_traits<bool>::type invalidating_get() const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type allow_parent_unref_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type allow_parent_unref_set( ::efl::eolian::in_traits<bool>::type allow) const;
#endif
    ::efl::eolian::return_traits<void>::type debug_name_override( ::efl::eolian::in_traits< ::efl::eina::strbuf>::type sb) const;
    ::efl::eolian::return_traits< ::efl::Object>::type provider_find( ::efl::eolian::in_traits< ::efl::Class>::type klass) const;
    ::efl::eolian::return_traits< ::efl::Object>::type constructor() const;
    ::efl::eolian::return_traits<void>::type destructor() const;
    ::efl::eolian::return_traits< ::efl::Object>::type finalize() const;
    ::efl::eolian::return_traits<void>::type invalidate() const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::Object>::type name_find( ::efl::eolian::in_traits< ::efl::eina::string_view>::type search) const;
#endif
    ::efl::eolian::return_traits<void>::type event_thaw() const;
    ::efl::eolian::return_traits<void>::type event_freeze() const;
    static ::efl::eolian::return_traits<void>::type event_global_thaw();
    static ::efl::eolian::return_traits<void>::type event_global_freeze();
    ::efl::eolian::return_traits<void>::type event_callback_stop() const;
    ::efl::eolian::return_traits<void>::type event_callback_forwarder_priority_add( ::efl::eolian::in_traits<const Efl_Event_Description *>::type desc,  ::efl::eolian::in_traits<Efl_Callback_Priority>::type priority,  ::efl::eolian::in_traits< ::efl::Object>::type source) const;
    ::efl::eolian::return_traits<void>::type event_callback_forwarder_del( ::efl::eolian::in_traits<const Efl_Event_Description *>::type desc,  ::efl::eolian::in_traits< ::efl::Object>::type new_obj) const;
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::Object>>::type children_iterator_new() const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type composite_attach( ::efl::eolian::in_traits< ::efl::Object>::type comp_obj) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type composite_detach( ::efl::eolian::in_traits< ::efl::Object>::type comp_obj) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type composite_part_is() const;
#endif
    ::efl::eolian::return_traits<bool>::type provider_register( ::efl::eolian::in_traits< ::efl::Class>::type klass,  ::efl::eolian::in_traits< ::efl::Object>::type provider) const;
    ::efl::eolian::return_traits<bool>::type provider_unregister( ::efl::eolian::in_traits< ::efl::Class>::type klass,  ::efl::eolian::in_traits< ::efl::Object>::type provider) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_OBJECT_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Object *>(this))); }
    operator ::efl::Object() const;
    operator ::efl::Object&();
    operator ::efl::Object const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Object const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
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

    ::efl::eolian::return_traits< ::efl::Object>::type parent_get() const;
    ::efl::eolian::return_traits<void>::type parent_set( ::efl::eolian::in_traits< ::efl::Object>::type parent) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type name_get() const;
    ::efl::eolian::return_traits<void>::type name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type comment_get() const;
    ::efl::eolian::return_traits<void>::type comment_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type comment) const;
    static ::efl::eolian::return_traits<int>::type event_global_freeze_count_get();
    ::efl::eolian::return_traits<int>::type event_freeze_count_get() const;
    ::efl::eolian::return_traits<bool>::type finalized_get() const;
    ::efl::eolian::return_traits<bool>::type invalidated_get() const;
    ::efl::eolian::return_traits<bool>::type invalidating_get() const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type allow_parent_unref_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type allow_parent_unref_set( ::efl::eolian::in_traits<bool>::type allow) const;
#endif
    ::efl::eolian::return_traits<void>::type debug_name_override( ::efl::eolian::in_traits< ::efl::eina::strbuf>::type sb) const;
    ::efl::eolian::return_traits< ::efl::Object>::type provider_find( ::efl::eolian::in_traits< ::efl::Class>::type klass) const;
    ::efl::eolian::return_traits< ::efl::Object>::type constructor() const;
    ::efl::eolian::return_traits<void>::type destructor() const;
    ::efl::eolian::return_traits< ::efl::Object>::type finalize() const;
    ::efl::eolian::return_traits<void>::type invalidate() const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::Object>::type name_find( ::efl::eolian::in_traits< ::efl::eina::string_view>::type search) const;
#endif
    ::efl::eolian::return_traits<void>::type event_thaw() const;
    ::efl::eolian::return_traits<void>::type event_freeze() const;
    static ::efl::eolian::return_traits<void>::type event_global_thaw();
    static ::efl::eolian::return_traits<void>::type event_global_freeze();
    ::efl::eolian::return_traits<void>::type event_callback_stop() const;
    ::efl::eolian::return_traits<void>::type event_callback_forwarder_priority_add( ::efl::eolian::in_traits<const Efl_Event_Description *>::type desc,  ::efl::eolian::in_traits<Efl_Callback_Priority>::type priority,  ::efl::eolian::in_traits< ::efl::Object>::type source) const;
    ::efl::eolian::return_traits<void>::type event_callback_forwarder_del( ::efl::eolian::in_traits<const Efl_Event_Description *>::type desc,  ::efl::eolian::in_traits< ::efl::Object>::type new_obj) const;
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::Object>>::type children_iterator_new() const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type composite_attach( ::efl::eolian::in_traits< ::efl::Object>::type comp_obj) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type composite_detach( ::efl::eolian::in_traits< ::efl::Object>::type comp_obj) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type composite_part_is() const;
#endif
    ::efl::eolian::return_traits<bool>::type provider_register( ::efl::eolian::in_traits< ::efl::Class>::type klass,  ::efl::eolian::in_traits< ::efl::Object>::type provider) const;
    ::efl::eolian::return_traits<bool>::type provider_unregister( ::efl::eolian::in_traits< ::efl::Class>::type klass,  ::efl::eolian::in_traits< ::efl::Object>::type provider) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_OBJECT_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Object *>(this))); }
    static struct del_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_DEL; }
        typedef void parameter_type;
    } const del_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    del_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(del_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    del_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(del_event, *this, std::bind(function));
    }
#endif
    static struct invalidate_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_INVALIDATE; }
        typedef void parameter_type;
    } const invalidate_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    invalidate_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(invalidate_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    invalidate_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(invalidate_event, *this, std::bind(function));
    }
#endif
    static struct noref_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_NOREF; }
        typedef void parameter_type;
    } const noref_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    noref_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(noref_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    noref_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(noref_event, *this, std::bind(function));
    }
#endif
    static struct ownership_unique_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_OWNERSHIP_UNIQUE; }
        typedef void parameter_type;
    } const ownership_unique_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    ownership_unique_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(ownership_unique_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    ownership_unique_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(ownership_unique_event, *this, std::bind(function));
    }
#endif
    static struct ownership_shared_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_OWNERSHIP_SHARED; }
        typedef void parameter_type;
    } const ownership_shared_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    ownership_shared_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(ownership_shared_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    ownership_shared_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(ownership_shared_event, *this, std::bind(function));
    }
#endif
    static struct destruct_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_DESTRUCT; }
        typedef void parameter_type;
    } const destruct_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    destruct_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(destruct_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    destruct_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(destruct_event, *this, std::bind(function));
    }
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
} 

#pragma GCC diagnostic pop

#endif
