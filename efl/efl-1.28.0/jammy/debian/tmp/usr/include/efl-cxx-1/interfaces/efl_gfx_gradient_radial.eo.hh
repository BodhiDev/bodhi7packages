#ifndef EFL_GFX_GRADIENT_RADIAL_EO_HH
#define EFL_GFX_GRADIENT_RADIAL_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_gradient.eo.h"
#include "efl_gfx_gradient_radial.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_gfx_gradient.eo.hh"
#ifndef EFL_GFX_GRADIENT_RADIAL_FWD_GUARD
#define EFL_GFX_GRADIENT_RADIAL_FWD_GUARD
namespace efl { namespace gfx { 
struct Gradient_Radial;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient_Radial> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient_Radial&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient_Radial const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient_Radial const&> : ::std::true_type {}; } }
#endif
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
struct Gradient_Radial {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type center_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type center_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type radius_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type radius_set( ::efl::eolian::in_traits<double>::type r) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type focal_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type focal_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_GRADIENT_RADIAL_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gradient_Radial *>(this))); }
    operator ::efl::gfx::Gradient_Radial() const;
    operator ::efl::gfx::Gradient_Radial&();
    operator ::efl::gfx::Gradient_Radial const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gradient_Radial,  ::efl::gfx::Gradient> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gradient_Radial const ,  ::efl::gfx::Gradient const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Gradient_Radial : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::gfx::Gradient)
{
    explicit Gradient_Radial( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Gradient_Radial(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Gradient_Radial() = default;
    Gradient_Radial(Gradient_Radial const&) = default;
    Gradient_Radial(Gradient_Radial&&) = default;
    Gradient_Radial& operator=(Gradient_Radial const&) = default;
    Gradient_Radial& operator=(Gradient_Radial&&) = default;
    template <typename Derived>
    Gradient_Radial(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Gradient_Radial, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type center_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type center_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type radius_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type radius_set( ::efl::eolian::in_traits<double>::type r) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type focal_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type focal_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_GRADIENT_RADIAL_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gradient_Radial *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gradient_Radial,  ::efl::gfx::Gradient> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gradient_Radial const ,  ::efl::gfx::Gradient const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Gradient_Radial> _get_wref() const { return ::efl::eo::wref<Gradient_Radial>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Gradient_Radial* operator->() const { return this; }
    Gradient_Radial* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Gradient_Radial const& lhs, Gradient_Radial const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Gradient_Radial const& lhs, Gradient_Radial const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Gradient_Radial) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Gradient_Radial>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
