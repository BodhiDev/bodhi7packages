#ifndef EFL_GFX_ARRANGEMENT_EO_HH
#define EFL_GFX_ARRANGEMENT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_arrangement.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_GFX_ARRANGEMENT_FWD_GUARD
#define EFL_GFX_ARRANGEMENT_FWD_GUARD
namespace efl { namespace gfx { 
struct Arrangement;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Arrangement> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Arrangement&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Arrangement const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Arrangement const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Arrangement {
    ::efl::eolian::return_traits<void>::type content_align_get( ::efl::eolian::out_traits<Efl_Gfx_Align>::type align_horiz,  ::efl::eolian::out_traits<Efl_Gfx_Align>::type align_vert) const;
    ::efl::eolian::return_traits<void>::type content_align_set( ::efl::eolian::in_traits<Efl_Gfx_Align>::type align_horiz,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type align_vert) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type content_padding_get( ::efl::eolian::out_traits< unsigned int>::type pad_horiz,  ::efl::eolian::out_traits< unsigned int>::type pad_vert) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type content_padding_set( ::efl::eolian::in_traits< unsigned int>::type pad_horiz,  ::efl::eolian::in_traits< unsigned int>::type pad_vert) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_ARRANGEMENT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Arrangement *>(this))); }
    operator ::efl::gfx::Arrangement() const;
    operator ::efl::gfx::Arrangement&();
    operator ::efl::gfx::Arrangement const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Arrangement> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Arrangement const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Arrangement : private ::efl::eo::concrete
{
    explicit Arrangement( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Arrangement(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Arrangement() = default;
    Arrangement(Arrangement const&) = default;
    Arrangement(Arrangement&&) = default;
    Arrangement& operator=(Arrangement const&) = default;
    Arrangement& operator=(Arrangement&&) = default;
    template <typename Derived>
    Arrangement(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Arrangement, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<void>::type content_align_get( ::efl::eolian::out_traits<Efl_Gfx_Align>::type align_horiz,  ::efl::eolian::out_traits<Efl_Gfx_Align>::type align_vert) const;
    ::efl::eolian::return_traits<void>::type content_align_set( ::efl::eolian::in_traits<Efl_Gfx_Align>::type align_horiz,  ::efl::eolian::in_traits<Efl_Gfx_Align>::type align_vert) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type content_padding_get( ::efl::eolian::out_traits< unsigned int>::type pad_horiz,  ::efl::eolian::out_traits< unsigned int>::type pad_vert) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type content_padding_set( ::efl::eolian::in_traits< unsigned int>::type pad_horiz,  ::efl::eolian::in_traits< unsigned int>::type pad_vert) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_ARRANGEMENT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Arrangement *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Arrangement> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Arrangement const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Arrangement> _get_wref() const { return ::efl::eo::wref<Arrangement>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Arrangement* operator->() const { return this; }
    Arrangement* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Arrangement const& lhs, Arrangement const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Arrangement const& lhs, Arrangement const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Arrangement) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Arrangement>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
