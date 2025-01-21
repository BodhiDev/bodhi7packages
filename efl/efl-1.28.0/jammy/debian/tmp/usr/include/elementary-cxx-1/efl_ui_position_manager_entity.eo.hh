#ifndef EFL_UI_POSITION_MANAGER_ENTITY_EO_HH
#define EFL_UI_POSITION_MANAGER_ENTITY_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_entity.eo.h"
#include "efl_ui_layout_orientable.eo.h"
#include "efl_ui_position_manager_entity.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_gfx_entity.eo.hh"
#include "efl_ui_layout_orientable.eo.hh"
#ifndef EFL_UI_POSITION_MANAGER_ENTITY_FWD_GUARD
#define EFL_UI_POSITION_MANAGER_ENTITY_FWD_GUARD
namespace efl { namespace ui { namespace position_manager { 
struct Entity;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Entity> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Entity&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Entity const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Entity const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_LAYOUT_ORIENTABLE_FWD_GUARD
#define EFL_UI_LAYOUT_ORIENTABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Layout_Orientable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { namespace position_manager { 
struct Entity {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type viewport_set( ::efl::eolian::in_traits<Eina_Rect>::type viewport) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type scroll_position_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type version( ::efl::eolian::in_traits<int>::type max) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Rect>::type position_single_item( ::efl::eolian::in_traits<int>::type idx) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type item_added( ::efl::eolian::in_traits<int>::type added_index,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type item_removed( ::efl::eolian::in_traits<int>::type removed_index,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type item_size_changed( ::efl::eolian::in_traits<int>::type start_id,  ::efl::eolian::in_traits<int>::type end_id) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type entities_ready( ::efl::eolian::in_traits< unsigned int>::type start_id,  ::efl::eolian::in_traits< unsigned int>::type end_id) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type relative_item( ::efl::eolian::in_traits< unsigned int>::type current_id,  ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type direction,  ::efl::eolian::out_traits< unsigned int>::type index) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_POSITION_MANAGER_ENTITY_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Entity *>(this))); }
    operator ::efl::ui::position_manager::Entity() const;
    operator ::efl::ui::position_manager::Entity&();
    operator ::efl::ui::position_manager::Entity const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Entity,  ::efl::ui::Layout_Orientable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Entity const ,  ::efl::ui::Layout_Orientable const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace position_manager { 
struct Entity : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::ui::Layout_Orientable)
{
    explicit Entity( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Entity(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Entity() = default;
    Entity(Entity const&) = default;
    Entity(Entity&&) = default;
    Entity& operator=(Entity const&) = default;
    Entity& operator=(Entity&&) = default;
    template <typename Derived>
    Entity(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Entity, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type viewport_set( ::efl::eolian::in_traits<Eina_Rect>::type viewport) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type scroll_position_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type version( ::efl::eolian::in_traits<int>::type max) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Rect>::type position_single_item( ::efl::eolian::in_traits<int>::type idx) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type item_added( ::efl::eolian::in_traits<int>::type added_index,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type item_removed( ::efl::eolian::in_traits<int>::type removed_index,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type item_size_changed( ::efl::eolian::in_traits<int>::type start_id,  ::efl::eolian::in_traits<int>::type end_id) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type entities_ready( ::efl::eolian::in_traits< unsigned int>::type start_id,  ::efl::eolian::in_traits< unsigned int>::type end_id) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type relative_item( ::efl::eolian::in_traits< unsigned int>::type current_id,  ::efl::eolian::in_traits<Efl_Ui_Focus_Direction>::type direction,  ::efl::eolian::out_traits< unsigned int>::type index) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_POSITION_MANAGER_ENTITY_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Entity *>(this))); }
#ifdef EFL_UI_POSITION_MANAGER_ENTITY_BETA
    static struct content_size_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_POSITION_MANAGER_ENTITY_EVENT_CONTENT_SIZE_CHANGED; }
        typedef Eina_Size2D parameter_type;
    } const content_size_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    content_size_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(content_size_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    content_size_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(content_size_changed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_UI_POSITION_MANAGER_ENTITY_BETA
    static struct content_min_size_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_POSITION_MANAGER_ENTITY_EVENT_CONTENT_MIN_SIZE_CHANGED; }
        typedef Eina_Size2D parameter_type;
    } const content_min_size_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    content_min_size_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(content_min_size_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    content_min_size_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(content_min_size_changed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_UI_POSITION_MANAGER_ENTITY_BETA
    static struct visible_range_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_POSITION_MANAGER_ENTITY_EVENT_VISIBLE_RANGE_CHANGED; }
        typedef Efl_Ui_Position_Manager_Range_Update parameter_type;
    } const visible_range_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    visible_range_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(visible_range_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    visible_range_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(visible_range_changed_event, *this, std::bind(function));
    }
#endif
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Entity,  ::efl::ui::Layout_Orientable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Entity const ,  ::efl::ui::Layout_Orientable const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Entity> _get_wref() const { return ::efl::eo::wref<Entity>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Entity* operator->() const { return this; }
    Entity* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Entity const& lhs, Entity const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Entity const& lhs, Entity const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Entity) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Entity>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
