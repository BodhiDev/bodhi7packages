#ifndef EFL_GFX_GRADIENT_EO_HH
#define EFL_GFX_GRADIENT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_gradient.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_GFX_GRADIENT_FWD_GUARD
#define EFL_GFX_GRADIENT_FWD_GUARD
namespace efl { namespace gfx { 
struct Gradient;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Gradient {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stop_get( ::efl::eolian::out_traits<const Efl_Gfx_Gradient_Stop *>::type colors,  ::efl::eolian::out_traits< unsigned int>::type length) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stop_set( ::efl::eolian::in_traits<const Efl_Gfx_Gradient_Stop *>::type colors,  ::efl::eolian::in_traits< unsigned int>::type length) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Gfx_Gradient_Spread>::type spread_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type spread_set( ::efl::eolian::in_traits<Efl_Gfx_Gradient_Spread>::type s) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_GRADIENT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gradient *>(this))); }
    operator ::efl::gfx::Gradient() const;
    operator ::efl::gfx::Gradient&();
    operator ::efl::gfx::Gradient const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gradient> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gradient const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Gradient : private ::efl::eo::concrete
{
    explicit Gradient( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Gradient(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Gradient() = default;
    Gradient(Gradient const&) = default;
    Gradient(Gradient&&) = default;
    Gradient& operator=(Gradient const&) = default;
    Gradient& operator=(Gradient&&) = default;
    template <typename Derived>
    Gradient(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Gradient, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stop_get( ::efl::eolian::out_traits<const Efl_Gfx_Gradient_Stop *>::type colors,  ::efl::eolian::out_traits< unsigned int>::type length) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stop_set( ::efl::eolian::in_traits<const Efl_Gfx_Gradient_Stop *>::type colors,  ::efl::eolian::in_traits< unsigned int>::type length) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Gfx_Gradient_Spread>::type spread_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type spread_set( ::efl::eolian::in_traits<Efl_Gfx_Gradient_Spread>::type s) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_GRADIENT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gradient *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gradient> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gradient const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Gradient> _get_wref() const { return ::efl::eo::wref<Gradient>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Gradient* operator->() const { return this; }
    Gradient* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Gradient const& lhs, Gradient const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Gradient const& lhs, Gradient const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Gradient) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Gradient>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
