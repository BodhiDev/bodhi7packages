#ifndef EFL_GFX_BLUR_EO_HH
#define EFL_GFX_BLUR_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_blur.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_GFX_BLUR_FWD_GUARD
#define EFL_GFX_BLUR_FWD_GUARD
namespace efl { namespace gfx { 
struct Blur;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Blur> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Blur&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Blur const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Blur const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Blur {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type radius_get( ::efl::eolian::out_traits<double>::type rx,  ::efl::eolian::out_traits<double>::type ry) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type radius_set( ::efl::eolian::in_traits<double>::type rx,  ::efl::eolian::in_traits<double>::type ry) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type offset_get( ::efl::eolian::out_traits<double>::type ox,  ::efl::eolian::out_traits<double>::type oy) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type offset_set( ::efl::eolian::in_traits<double>::type ox,  ::efl::eolian::in_traits<double>::type oy) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type grow_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type grow_set( ::efl::eolian::in_traits<double>::type radius) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_BLUR_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Blur *>(this))); }
    operator ::efl::gfx::Blur() const;
    operator ::efl::gfx::Blur&();
    operator ::efl::gfx::Blur const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Blur> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Blur const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Blur : private ::efl::eo::concrete
{
    explicit Blur( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Blur(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Blur() = default;
    Blur(Blur const&) = default;
    Blur(Blur&&) = default;
    Blur& operator=(Blur const&) = default;
    Blur& operator=(Blur&&) = default;
    template <typename Derived>
    Blur(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Blur, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type radius_get( ::efl::eolian::out_traits<double>::type rx,  ::efl::eolian::out_traits<double>::type ry) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type radius_set( ::efl::eolian::in_traits<double>::type rx,  ::efl::eolian::in_traits<double>::type ry) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type offset_get( ::efl::eolian::out_traits<double>::type ox,  ::efl::eolian::out_traits<double>::type oy) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type offset_set( ::efl::eolian::in_traits<double>::type ox,  ::efl::eolian::in_traits<double>::type oy) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type grow_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type grow_set( ::efl::eolian::in_traits<double>::type radius) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_BLUR_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Blur *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Blur> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Blur const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Blur> _get_wref() const { return ::efl::eo::wref<Blur>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Blur* operator->() const { return this; }
    Blur* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Blur const& lhs, Blur const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Blur const& lhs, Blur const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Blur) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Blur>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
