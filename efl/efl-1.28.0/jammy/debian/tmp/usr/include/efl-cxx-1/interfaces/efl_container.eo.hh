#ifndef EFL_CONTAINER_EO_HH
#define EFL_CONTAINER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_container.eo.h"
#include "efl_gfx_entity.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_gfx_entity.eo.hh"
#ifndef EFL_CONTAINER_FWD_GUARD
#define EFL_CONTAINER_FWD_GUARD
namespace efl { 
struct Container;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Container {
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type content_iterate() const;
    ::efl::eolian::return_traits<int>::type content_count() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_CONTAINER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Container *>(this))); }
    operator ::efl::Container() const;
    operator ::efl::Container&();
    operator ::efl::Container const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Container> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Container const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Container : private ::efl::eo::concrete
{
    explicit Container( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Container(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Container() = default;
    Container(Container const&) = default;
    Container(Container&&) = default;
    Container& operator=(Container const&) = default;
    Container& operator=(Container&&) = default;
    template <typename Derived>
    Container(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Container, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type content_iterate() const;
    ::efl::eolian::return_traits<int>::type content_count() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_CONTAINER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Container *>(this))); }
    static struct content_added_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CONTAINER_EVENT_CONTENT_ADDED; }
        typedef  ::efl::gfx::Entity parameter_type;
    } const content_added_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    content_added_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(content_added_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    content_added_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(content_added_event, *this, std::bind(function));
    }
#endif
    static struct content_removed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CONTAINER_EVENT_CONTENT_REMOVED; }
        typedef  ::efl::gfx::Entity parameter_type;
    } const content_removed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    content_removed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(content_removed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    content_removed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(content_removed_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Container> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Container const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Container> _get_wref() const { return ::efl::eo::wref<Container>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Container* operator->() const { return this; }
    Container* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Container const& lhs, Container const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Container const& lhs, Container const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Container) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Container>::value, "");
} 

#pragma GCC diagnostic pop

#endif
