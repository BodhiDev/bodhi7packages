#ifndef EFL_GFX_ENTITY_EO_HH
#define EFL_GFX_ENTITY_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_entity.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Entity {
    ::efl::eolian::return_traits<Eina_Position2D>::type position_get() const;
    ::efl::eolian::return_traits<void>::type position_set( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const;
    ::efl::eolian::return_traits<Eina_Size2D>::type size_get() const;
    ::efl::eolian::return_traits<void>::type size_set( ::efl::eolian::in_traits<Eina_Size2D>::type size) const;
    ::efl::eolian::return_traits<Eina_Rect>::type geometry_get() const;
    ::efl::eolian::return_traits<void>::type geometry_set( ::efl::eolian::in_traits<Eina_Rect>::type rect) const;
    ::efl::eolian::return_traits<bool>::type visible_get() const;
    ::efl::eolian::return_traits<void>::type visible_set( ::efl::eolian::in_traits<bool>::type v) const;
    ::efl::eolian::return_traits<double>::type scale_get() const;
    ::efl::eolian::return_traits<void>::type scale_set( ::efl::eolian::in_traits<double>::type scale) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_ENTITY_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Entity *>(this))); }
    operator ::efl::gfx::Entity() const;
    operator ::efl::gfx::Entity&();
    operator ::efl::gfx::Entity const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Entity> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Entity const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Entity : private ::efl::eo::concrete
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

    ::efl::eolian::return_traits<Eina_Position2D>::type position_get() const;
    ::efl::eolian::return_traits<void>::type position_set( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const;
    ::efl::eolian::return_traits<Eina_Size2D>::type size_get() const;
    ::efl::eolian::return_traits<void>::type size_set( ::efl::eolian::in_traits<Eina_Size2D>::type size) const;
    ::efl::eolian::return_traits<Eina_Rect>::type geometry_get() const;
    ::efl::eolian::return_traits<void>::type geometry_set( ::efl::eolian::in_traits<Eina_Rect>::type rect) const;
    ::efl::eolian::return_traits<bool>::type visible_get() const;
    ::efl::eolian::return_traits<void>::type visible_set( ::efl::eolian::in_traits<bool>::type v) const;
    ::efl::eolian::return_traits<double>::type scale_get() const;
    ::efl::eolian::return_traits<void>::type scale_set( ::efl::eolian::in_traits<double>::type scale) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_ENTITY_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Entity *>(this))); }
    static struct visibility_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_GFX_ENTITY_EVENT_VISIBILITY_CHANGED; }
        typedef bool parameter_type;
    } const visibility_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    visibility_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(visibility_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    visibility_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(visibility_changed_event, *this, std::bind(function));
    }
#endif
    static struct position_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_GFX_ENTITY_EVENT_POSITION_CHANGED; }
        typedef Eina_Position2D parameter_type;
    } const position_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    position_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(position_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    position_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(position_changed_event, *this, std::bind(function));
    }
#endif
    static struct size_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_GFX_ENTITY_EVENT_SIZE_CHANGED; }
        typedef Eina_Size2D parameter_type;
    } const size_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    size_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(size_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    size_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(size_changed_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Entity> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Entity const > operator&() const { return {this}; }
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
} } 

#pragma GCC diagnostic pop

#endif
