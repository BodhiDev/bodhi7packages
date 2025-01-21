#ifndef EFL_UI_FOCUS_MANAGER_EO_HH
#define EFL_UI_FOCUS_MANAGER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_focus_manager.eo.h"
#include "efl_ui_focus_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_ui_focus_object.eo.hh"
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
struct Manager {
    ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type manager_focus_get() const;
    ::efl::eolian::return_traits<void>::type manager_focus_set( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type focus) const;
    ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type redirect_get() const;
    ::efl::eolian::return_traits<void>::type redirect_set( ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type redirect) const;
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::ui::focus::Object>>::type border_elements_get() const;
    ::efl::eolian::return_traits<bool>::type border_elements_changed_get() const;
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::ui::focus::Object>>::type viewport_elements_get( ::efl::eolian::in_traits<Eina_Rect>::type viewport) const;
    ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type root_get() const;
    ::efl::eolian::return_traits<bool>::type root_set( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type root) const;
    ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type move( ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type direction) const;
    ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type request_move( ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type direction,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits<bool>::type logical) const;
    ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type request_subchild( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type root) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::std::unique_ptr<Efl_Ui_Focus_Relations, ::efl::eina::malloc_deleter>>::type fetch( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child) const;
#endif
    ::efl::eolian::return_traits<Efl_Ui_Focus_Manager_Logical_End_Detail>::type logical_end() const;
    ::efl::eolian::return_traits<void>::type reset_history() const;
    ::efl::eolian::return_traits<void>::type pop_history_stack() const;
    ::efl::eolian::return_traits<void>::type setup_on_first_touch( ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type direction,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type entry) const;
    ::efl::eolian::return_traits<void>::type dirty_logic_freeze() const;
    ::efl::eolian::return_traits<void>::type dirty_logic_unfreeze() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FOCUS_MANAGER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Manager *>(this))); }
    operator ::efl::ui::focus::Manager() const;
    operator ::efl::ui::focus::Manager&();
    operator ::efl::ui::focus::Manager const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Manager> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Manager const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace focus { 
struct Manager : private ::efl::eo::concrete
{
    explicit Manager( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Manager(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Manager() = default;
    Manager(Manager const&) = default;
    Manager(Manager&&) = default;
    Manager& operator=(Manager const&) = default;
    Manager& operator=(Manager&&) = default;
    template <typename Derived>
    Manager(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Manager, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type manager_focus_get() const;
    ::efl::eolian::return_traits<void>::type manager_focus_set( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type focus) const;
    ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type redirect_get() const;
    ::efl::eolian::return_traits<void>::type redirect_set( ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type redirect) const;
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::ui::focus::Object>>::type border_elements_get() const;
    ::efl::eolian::return_traits<bool>::type border_elements_changed_get() const;
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::ui::focus::Object>>::type viewport_elements_get( ::efl::eolian::in_traits<Eina_Rect>::type viewport) const;
    ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type root_get() const;
    ::efl::eolian::return_traits<bool>::type root_set( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type root) const;
    ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type move( ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type direction) const;
    ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type request_move( ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type direction,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits<bool>::type logical) const;
    ::efl::eolian::return_traits< ::efl::ui::focus::Object>::type request_subchild( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type root) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::std::unique_ptr<Efl_Ui_Focus_Relations, ::efl::eina::malloc_deleter>>::type fetch( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child) const;
#endif
    ::efl::eolian::return_traits<Efl_Ui_Focus_Manager_Logical_End_Detail>::type logical_end() const;
    ::efl::eolian::return_traits<void>::type reset_history() const;
    ::efl::eolian::return_traits<void>::type pop_history_stack() const;
    ::efl::eolian::return_traits<void>::type setup_on_first_touch( ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type direction,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type entry) const;
    ::efl::eolian::return_traits<void>::type dirty_logic_freeze() const;
    ::efl::eolian::return_traits<void>::type dirty_logic_unfreeze() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FOCUS_MANAGER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Manager *>(this))); }
    static struct redirect_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_FOCUS_MANAGER_EVENT_REDIRECT_CHANGED; }
        typedef  ::efl::ui::focus::Manager parameter_type;
    } const redirect_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    redirect_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(redirect_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    redirect_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(redirect_changed_event, *this, std::bind(function));
    }
#endif
    static struct flush_pre_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_FOCUS_MANAGER_EVENT_FLUSH_PRE; }
        typedef void parameter_type;
    } const flush_pre_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    flush_pre_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(flush_pre_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    flush_pre_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(flush_pre_event, *this, std::bind(function));
    }
#endif
    static struct coords_dirty_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_FOCUS_MANAGER_EVENT_COORDS_DIRTY; }
        typedef void parameter_type;
    } const coords_dirty_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    coords_dirty_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(coords_dirty_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    coords_dirty_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(coords_dirty_event, *this, std::bind(function));
    }
#endif
    static struct manager_focus_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_FOCUS_MANAGER_EVENT_MANAGER_FOCUS_CHANGED; }
        typedef  ::efl::ui::focus::Object parameter_type;
    } const manager_focus_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    manager_focus_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(manager_focus_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    manager_focus_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(manager_focus_changed_event, *this, std::bind(function));
    }
#endif
    static struct dirty_logic_freeze_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_FOCUS_MANAGER_EVENT_DIRTY_LOGIC_FREEZE_CHANGED; }
        typedef bool parameter_type;
    } const dirty_logic_freeze_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    dirty_logic_freeze_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(dirty_logic_freeze_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    dirty_logic_freeze_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(dirty_logic_freeze_changed_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Manager> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Manager const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Manager> _get_wref() const { return ::efl::eo::wref<Manager>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Manager* operator->() const { return this; }
    Manager* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Manager const& lhs, Manager const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Manager const& lhs, Manager const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Manager) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Manager>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
