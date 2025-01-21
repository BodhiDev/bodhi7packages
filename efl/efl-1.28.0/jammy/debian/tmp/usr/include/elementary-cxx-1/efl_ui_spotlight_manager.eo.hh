#ifndef EFL_UI_SPOTLIGHT_MANAGER_EO_HH
#define EFL_UI_SPOTLIGHT_MANAGER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_spotlight_container.eo.h"
#include "efl_ui_spotlight_manager.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_gfx_entity.eo.hh"
#include "efl_object.eo.hh"
#include "efl_ui_spotlight_container.eo.hh"
#ifndef EFL_UI_SPOTLIGHT_MANAGER_FWD_GUARD
#define EFL_UI_SPOTLIGHT_MANAGER_FWD_GUARD
namespace efl { namespace ui { namespace spotlight { 
struct Manager;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Manager> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Manager&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Manager const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Manager const&> : ::std::true_type {}; } }
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
#ifndef EFL_GFX_ENTITY_FWD_GUARD
#define EFL_GFX_ENTITY_FWD_GUARD
namespace efl { namespace gfx { 
struct Entity;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_SPOTLIGHT_CONTAINER_FWD_GUARD
#define EFL_UI_SPOTLIGHT_CONTAINER_FWD_GUARD
namespace efl { namespace ui { namespace spotlight { 
struct Container;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Container> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Container&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Container const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Container const&> : ::std::true_type {}; } }
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
namespace efl { namespace ui { namespace spotlight { 
struct Manager {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type size_set( ::efl::eolian::in_traits<Eina_Size2D>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type animated_transition_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type animated_transition_set( ::efl::eolian::in_traits<bool>::type enable) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type bind( ::efl::eolian::in_traits< ::efl::ui::spotlight::Container>::type spotlight) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type content_add( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type index) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type content_del( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type index) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type switch_to( ::efl::eolian::in_traits<int>::type from,  ::efl::eolian::in_traits<int>::type to,  ::efl::eolian::in_traits<Efl_Ui_Spotlight_Manager_Switch_Reason>::type reason) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SPOTLIGHT_MANAGER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Manager *>(this))); }
    operator ::efl::ui::spotlight::Manager() const;
    operator ::efl::ui::spotlight::Manager&();
    operator ::efl::ui::spotlight::Manager const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Manager,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Manager const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace spotlight { 
struct Manager : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
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

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type size_set( ::efl::eolian::in_traits<Eina_Size2D>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type animated_transition_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type animated_transition_set( ::efl::eolian::in_traits<bool>::type enable) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type bind( ::efl::eolian::in_traits< ::efl::ui::spotlight::Container>::type spotlight) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type content_add( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type index) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type content_del( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type index) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type switch_to( ::efl::eolian::in_traits<int>::type from,  ::efl::eolian::in_traits<int>::type to,  ::efl::eolian::in_traits<Efl_Ui_Spotlight_Manager_Switch_Reason>::type reason) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SPOTLIGHT_MANAGER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Manager *>(this))); }
#ifdef EFL_UI_SPOTLIGHT_MANAGER_BETA
    static struct pos_update_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_SPOTLIGHT_MANAGER_EVENT_POS_UPDATE; }
        typedef double parameter_type;
    } const pos_update_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pos_update_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pos_update_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pos_update_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pos_update_event, *this, std::bind(function));
    }
#endif
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Manager,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Manager const ,  ::efl::Object const > operator&() const { return {this}; }
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
