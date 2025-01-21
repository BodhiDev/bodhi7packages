#ifndef EFL_UI_FOCUS_COMPOSITION_EO_HH
#define EFL_UI_FOCUS_COMPOSITION_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_entity.eo.h"
#include "efl_ui_focus_composition.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_gfx_entity.eo.hh"
#ifndef EFL_UI_FOCUS_COMPOSITION_FWD_GUARD
#define EFL_UI_FOCUS_COMPOSITION_FWD_GUARD
namespace efl { namespace ui { namespace focus { 
struct Composition;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Composition> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Composition&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Composition const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Composition const&> : ::std::true_type {}; } }
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
namespace efl { namespace ui { namespace focus { 
struct Composition {
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
    ::efl::eolian::return_traits<  ::efl::eina::list< ::efl::gfx::Entity>>::type composition_elements_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
    ::efl::eolian::return_traits<void>::type composition_elements_set( ::efl::eolian::in_traits<  ::efl::eina::list< ::efl::gfx::Entity>>::type logical_order) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
    ::efl::eolian::return_traits<bool>::type logical_mode_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
    ::efl::eolian::return_traits<void>::type logical_mode_set( ::efl::eolian::in_traits<bool>::type logical_mode) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
    ::efl::eolian::return_traits<void>::type dirty() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
    ::efl::eolian::return_traits<void>::type prepare() const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FOCUS_COMPOSITION_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Composition *>(this))); }
    operator ::efl::ui::focus::Composition() const;
    operator ::efl::ui::focus::Composition&();
    operator ::efl::ui::focus::Composition const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Composition> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Composition const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace focus { 
struct Composition : private ::efl::eo::concrete
{
    explicit Composition( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Composition(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Composition() = default;
    Composition(Composition const&) = default;
    Composition(Composition&&) = default;
    Composition& operator=(Composition const&) = default;
    Composition& operator=(Composition&&) = default;
    template <typename Derived>
    Composition(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Composition, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
    ::efl::eolian::return_traits<  ::efl::eina::list< ::efl::gfx::Entity>>::type composition_elements_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
    ::efl::eolian::return_traits<void>::type composition_elements_set( ::efl::eolian::in_traits<  ::efl::eina::list< ::efl::gfx::Entity>>::type logical_order) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
    ::efl::eolian::return_traits<bool>::type logical_mode_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
    ::efl::eolian::return_traits<void>::type logical_mode_set( ::efl::eolian::in_traits<bool>::type logical_mode) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
    ::efl::eolian::return_traits<void>::type dirty() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_COMPOSITION_PROTECTED
    ::efl::eolian::return_traits<void>::type prepare() const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FOCUS_COMPOSITION_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Composition *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Composition> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Composition const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Composition> _get_wref() const { return ::efl::eo::wref<Composition>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Composition* operator->() const { return this; }
    Composition* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Composition const& lhs, Composition const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Composition const& lhs, Composition const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Composition) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Composition>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
