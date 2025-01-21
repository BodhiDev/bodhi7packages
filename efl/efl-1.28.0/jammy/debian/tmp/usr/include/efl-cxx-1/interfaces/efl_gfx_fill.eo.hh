#ifndef EFL_GFX_FILL_EO_HH
#define EFL_GFX_FILL_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_fill.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_GFX_FILL_FWD_GUARD
#define EFL_GFX_FILL_FWD_GUARD
namespace efl { namespace gfx { 
struct Fill;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Fill> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Fill&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Fill const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Fill const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Fill {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type fill_auto_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type fill_auto_set( ::efl::eolian::in_traits<bool>::type filled) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Rect>::type fill_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type fill_set( ::efl::eolian::in_traits<Eina_Rect>::type fill) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_FILL_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Fill *>(this))); }
    operator ::efl::gfx::Fill() const;
    operator ::efl::gfx::Fill&();
    operator ::efl::gfx::Fill const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Fill> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Fill const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Fill : private ::efl::eo::concrete
{
    explicit Fill( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Fill(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Fill() = default;
    Fill(Fill const&) = default;
    Fill(Fill&&) = default;
    Fill& operator=(Fill const&) = default;
    Fill& operator=(Fill&&) = default;
    template <typename Derived>
    Fill(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Fill, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type fill_auto_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type fill_auto_set( ::efl::eolian::in_traits<bool>::type filled) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Rect>::type fill_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type fill_set( ::efl::eolian::in_traits<Eina_Rect>::type fill) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_FILL_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Fill *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Fill> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Fill const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Fill> _get_wref() const { return ::efl::eo::wref<Fill>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Fill* operator->() const { return this; }
    Fill* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Fill const& lhs, Fill const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Fill const& lhs, Fill const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Fill) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Fill>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
