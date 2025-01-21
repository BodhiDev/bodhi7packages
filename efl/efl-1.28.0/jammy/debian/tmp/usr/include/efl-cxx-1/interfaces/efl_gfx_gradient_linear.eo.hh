#ifndef EFL_GFX_GRADIENT_LINEAR_EO_HH
#define EFL_GFX_GRADIENT_LINEAR_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_gradient.eo.h"
#include "efl_gfx_gradient_linear.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_gfx_gradient.eo.hh"
#ifndef EFL_GFX_GRADIENT_LINEAR_FWD_GUARD
#define EFL_GFX_GRADIENT_LINEAR_FWD_GUARD
namespace efl { namespace gfx { 
struct Gradient_Linear;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient_Linear> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient_Linear&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient_Linear const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient_Linear const&> : ::std::true_type {}; } }
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
struct Gradient_Linear {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type start_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type start_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type end_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type end_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_GRADIENT_LINEAR_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gradient_Linear *>(this))); }
    operator ::efl::gfx::Gradient_Linear() const;
    operator ::efl::gfx::Gradient_Linear&();
    operator ::efl::gfx::Gradient_Linear const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gradient_Linear,  ::efl::gfx::Gradient> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gradient_Linear const ,  ::efl::gfx::Gradient const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Gradient_Linear : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::gfx::Gradient)
{
    explicit Gradient_Linear( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Gradient_Linear(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Gradient_Linear() = default;
    Gradient_Linear(Gradient_Linear const&) = default;
    Gradient_Linear(Gradient_Linear&&) = default;
    Gradient_Linear& operator=(Gradient_Linear const&) = default;
    Gradient_Linear& operator=(Gradient_Linear&&) = default;
    template <typename Derived>
    Gradient_Linear(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Gradient_Linear, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type start_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type start_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type end_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type end_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_GRADIENT_LINEAR_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gradient_Linear *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gradient_Linear,  ::efl::gfx::Gradient> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gradient_Linear const ,  ::efl::gfx::Gradient const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Gradient_Linear> _get_wref() const { return ::efl::eo::wref<Gradient_Linear>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Gradient_Linear* operator->() const { return this; }
    Gradient_Linear* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Gradient_Linear const& lhs, Gradient_Linear const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Gradient_Linear const& lhs, Gradient_Linear const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Gradient_Linear) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Gradient_Linear>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
