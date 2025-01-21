#ifndef EFL_ACCESS_COMPONENT_EO_HH
#define EFL_ACCESS_COMPONENT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_access_component.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_gfx_stack.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_gfx_entity.eo.hh"
#include "efl_gfx_stack.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_ACCESS_COMPONENT_FWD_GUARD
#define EFL_ACCESS_COMPONENT_FWD_GUARD
namespace efl { namespace access { 
struct Component;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Component> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Component&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Component const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Component const&> : ::std::true_type {}; } }
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
#ifndef EFL_GFX_STACK_FWD_GUARD
#define EFL_GFX_STACK_FWD_GUARD
namespace efl { namespace gfx { 
struct Stack;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace access { 
struct Component {
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
    ::efl::eolian::return_traits<int>::type z_order_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
    ::efl::eolian::return_traits<Eina_Rect>::type extents_get( ::efl::eolian::in_traits<bool>::type screen_coords) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
    ::efl::eolian::return_traits<bool>::type extents_set( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<Eina_Rect>::type rect) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
    ::efl::eolian::return_traits<void>::type screen_position_get( ::efl::eolian::out_traits<int>::type x,  ::efl::eolian::out_traits<int>::type y) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
    ::efl::eolian::return_traits<bool>::type screen_position_set( ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
    ::efl::eolian::return_traits<bool>::type contains( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
    ::efl::eolian::return_traits<bool>::type focus_grab() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
    ::efl::eolian::return_traits< ::efl::Object>::type accessible_at_point_get( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_ACCESS_COMPONENT_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Component *>(this))); }
    operator ::efl::access::Component() const;
    operator ::efl::access::Component&();
    operator ::efl::access::Component const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Component,  ::efl::gfx::Entity,  ::efl::gfx::Stack> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Component const ,  ::efl::gfx::Entity const ,  ::efl::gfx::Stack const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace access { 
struct Component : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::gfx::Entity)
    , EO_CXX_INHERIT(::efl::gfx::Stack)
{
    explicit Component( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Component(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Component() = default;
    Component(Component const&) = default;
    Component(Component&&) = default;
    Component& operator=(Component const&) = default;
    Component& operator=(Component&&) = default;
    template <typename Derived>
    Component(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Component, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
    ::efl::eolian::return_traits<int>::type z_order_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
    ::efl::eolian::return_traits<Eina_Rect>::type extents_get( ::efl::eolian::in_traits<bool>::type screen_coords) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
    ::efl::eolian::return_traits<bool>::type extents_set( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<Eina_Rect>::type rect) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
    ::efl::eolian::return_traits<void>::type screen_position_get( ::efl::eolian::out_traits<int>::type x,  ::efl::eolian::out_traits<int>::type y) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
    ::efl::eolian::return_traits<bool>::type screen_position_set( ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
    ::efl::eolian::return_traits<bool>::type contains( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
    ::efl::eolian::return_traits<bool>::type focus_grab() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_COMPONENT_PROTECTED
    ::efl::eolian::return_traits< ::efl::Object>::type accessible_at_point_get( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_ACCESS_COMPONENT_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Component *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Component,  ::efl::gfx::Entity,  ::efl::gfx::Stack> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Component const ,  ::efl::gfx::Entity const ,  ::efl::gfx::Stack const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Component> _get_wref() const { return ::efl::eo::wref<Component>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Component* operator->() const { return this; }
    Component* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Component const& lhs, Component const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Component const& lhs, Component const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Component) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Component>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
