#ifndef EFL_GFX_COLOR_EO_HH
#define EFL_GFX_COLOR_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_color.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_GFX_COLOR_FWD_GUARD
#define EFL_GFX_COLOR_FWD_GUARD
namespace efl { namespace gfx { 
struct Color;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Color {
    ::efl::eolian::return_traits<void>::type color_get( ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const;
    ::efl::eolian::return_traits<void>::type color_set( ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type color_code_get() const;
    ::efl::eolian::return_traits<void>::type color_code_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type colorcode) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_COLOR_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Color *>(this))); }
    operator ::efl::gfx::Color() const;
    operator ::efl::gfx::Color&();
    operator ::efl::gfx::Color const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Color> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Color const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Color : private ::efl::eo::concrete
{
    explicit Color( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Color(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Color() = default;
    Color(Color const&) = default;
    Color(Color&&) = default;
    Color& operator=(Color const&) = default;
    Color& operator=(Color&&) = default;
    template <typename Derived>
    Color(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Color, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<void>::type color_get( ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const;
    ::efl::eolian::return_traits<void>::type color_set( ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type color_code_get() const;
    ::efl::eolian::return_traits<void>::type color_code_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type colorcode) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_COLOR_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Color *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Color> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Color const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Color> _get_wref() const { return ::efl::eo::wref<Color>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Color* operator->() const { return this; }
    Color* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Color const& lhs, Color const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Color const& lhs, Color const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Color) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Color>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
