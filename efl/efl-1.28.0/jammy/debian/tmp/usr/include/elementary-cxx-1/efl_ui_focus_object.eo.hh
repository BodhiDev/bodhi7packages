#ifndef EFL_UI_FOCUS_OBJECT_EO_HH
#define EFL_UI_FOCUS_OBJECT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_focus_manager.eo.h"
#include "efl_ui_focus_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_ui_focus_manager.eo.hh"
#ifndef EFL_UI_FOCUS_OBJECT_FWD_GUARD
#define EFL_UI_FOCUS_OBJECT_FWD_GUARD
namespace efl { namespace ui { namespace focus { 
struct Object;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_FOCUS_MANAGER_FWD_GUARD
#define EFL_UI_FOCUS_MANAGER_FWD_GUARD
namespace efl { namespace ui { namespace focus { 
struct Manager;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_FOCUS_OBJECT_FWD_GUARD
#define EFL_UI_FOCUS_OBJECT_FWD_GUARD
namespace efl { namespace ui { namespace focus { 
struct Object;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { namespace focus { 
struct Object {
    ::efl::eolian::return_traits<Eina_Rect>::type focus_geometry_get() const;
    ::efl::eolian::return_traits<bool>::type focus_get() const;
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<void>::type focus_set( ::efl::eolian::in_traits<bool>::type focus) const;
#endif
    ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type focus_manager_get() const;
    ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type focus_parent_get() const;
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<bool>::type child_focus_get() const;
#endif
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<void>::type child_focus_set( ::efl::eolian::in_traits<bool>::type child_focus) const;
#endif
    ::efl::eolian::return_traits<void>::type setup_order() const;
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<void>::type setup_order_non_recursive() const;
#endif
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<bool>::type on_focus_update() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FOCUS_OBJECT_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Object *>(this))); }
    operator ::efl::ui::focus::Object() const;
    operator ::efl::ui::focus::Object&();
    operator ::efl::ui::focus::Object const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Object const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace focus { 
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

    ::efl::eolian::return_traits<Eina_Rect>::type focus_geometry_get() const;
    ::efl::eolian::return_traits<bool>::type focus_get() const;
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<void>::type focus_set( ::efl::eolian::in_traits<bool>::type focus) const;
#endif
    ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type focus_manager_get() const;
    ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type focus_parent_get() const;
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<bool>::type child_focus_get() const;
#endif
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<void>::type child_focus_set( ::efl::eolian::in_traits<bool>::type child_focus) const;
#endif
    ::efl::eolian::return_traits<void>::type setup_order() const;
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<void>::type setup_order_non_recursive() const;
#endif
#ifdef EFL_UI_FOCUS_OBJECT_PROTECTED
    ::efl::eolian::return_traits<bool>::type on_focus_update() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FOCUS_OBJECT_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Object *>(this))); }
    static struct focus_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_CHANGED; }
        typedef bool parameter_type;
    } const focus_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    focus_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(focus_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    focus_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(focus_changed_event, *this, std::bind(function));
    }
#endif
    static struct focus_manager_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_MANAGER_CHANGED; }
        typedef  ::efl::ui::focus::Manager parameter_type;
    } const focus_manager_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    focus_manager_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(focus_manager_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    focus_manager_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(focus_manager_changed_event, *this, std::bind(function));
    }
#endif
    static struct focus_parent_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_PARENT_CHANGED; }
        typedef  ::efl::ui::focus::Object parameter_type;
    } const focus_parent_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    focus_parent_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(focus_parent_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    focus_parent_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(focus_parent_changed_event, *this, std::bind(function));
    }
#endif
    static struct child_focus_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_FOCUS_OBJECT_EVENT_CHILD_FOCUS_CHANGED; }
        typedef bool parameter_type;
    } const child_focus_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    child_focus_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(child_focus_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    child_focus_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(child_focus_changed_event, *this, std::bind(function));
    }
#endif
    static struct focus_geometry_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_GEOMETRY_CHANGED; }
        typedef Eina_Rect parameter_type;
    } const focus_geometry_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    focus_geometry_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(focus_geometry_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    focus_geometry_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(focus_geometry_changed_event, *this, std::bind(function));
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
} } } 

#pragma GCC diagnostic pop

#endif
