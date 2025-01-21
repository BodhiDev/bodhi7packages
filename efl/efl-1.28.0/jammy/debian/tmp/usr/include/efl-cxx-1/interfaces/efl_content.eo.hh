#ifndef EFL_CONTENT_EO_HH
#define EFL_CONTENT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_content.eo.h"
#include "efl_gfx_entity.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_gfx_entity.eo.hh"
#ifndef EFL_CONTENT_FWD_GUARD
#define EFL_CONTENT_FWD_GUARD
namespace efl { 
struct Content;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Content> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Content&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Content const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Content const&> : ::std::true_type {}; } }
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
struct Content {
    ::efl::eolian::return_traits< ::efl::gfx::Entity>::type content_get() const;
    ::efl::eolian::return_traits<bool>::type content_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type content) const;
    ::efl::eolian::return_traits< ::efl::gfx::Entity>::type content_unset() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_CONTENT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Content *>(this))); }
    operator ::efl::Content() const;
    operator ::efl::Content&();
    operator ::efl::Content const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Content> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Content const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Content : private ::efl::eo::concrete
{
    explicit Content( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Content(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Content() = default;
    Content(Content const&) = default;
    Content(Content&&) = default;
    Content& operator=(Content const&) = default;
    Content& operator=(Content&&) = default;
    template <typename Derived>
    Content(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Content, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits< ::efl::gfx::Entity>::type content_get() const;
    ::efl::eolian::return_traits<bool>::type content_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type content) const;
    ::efl::eolian::return_traits< ::efl::gfx::Entity>::type content_unset() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_CONTENT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Content *>(this))); }
    static struct content_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CONTENT_EVENT_CONTENT_CHANGED; }
        typedef  ::efl::gfx::Entity parameter_type;
    } const content_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    content_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(content_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    content_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(content_changed_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Content> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Content const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Content> _get_wref() const { return ::efl::eo::wref<Content>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Content* operator->() const { return this; }
    Content* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Content const& lhs, Content const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Content const& lhs, Content const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Content) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Content>::value, "");
} 

#pragma GCC diagnostic pop

#endif
