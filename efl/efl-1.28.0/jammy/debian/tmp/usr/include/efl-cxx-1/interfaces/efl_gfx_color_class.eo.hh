#ifndef EFL_GFX_COLOR_CLASS_EO_HH
#define EFL_GFX_COLOR_CLASS_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_color_class.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_GFX_COLOR_CLASS_FWD_GUARD
#define EFL_GFX_COLOR_CLASS_FWD_GUARD
namespace efl { namespace gfx { 
struct Color_Class;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color_Class> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color_Class&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color_Class const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color_Class const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Color_Class {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type color_class_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type layer,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type color_class_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type layer,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type color_class_code_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type layer) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type color_class_code_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type layer,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type colorcode) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type color_class_description_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type color_class_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type color_class_clear() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_COLOR_CLASS_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Color_Class *>(this))); }
    operator ::efl::gfx::Color_Class() const;
    operator ::efl::gfx::Color_Class&();
    operator ::efl::gfx::Color_Class const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Color_Class> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Color_Class const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Color_Class : private ::efl::eo::concrete
{
    explicit Color_Class( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Color_Class(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Color_Class() = default;
    Color_Class(Color_Class const&) = default;
    Color_Class(Color_Class&&) = default;
    Color_Class& operator=(Color_Class const&) = default;
    Color_Class& operator=(Color_Class&&) = default;
    template <typename Derived>
    Color_Class(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Color_Class, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type color_class_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type layer,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type color_class_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type layer,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type color_class_code_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type layer) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type color_class_code_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Color_Class_Layer>>::type layer,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type colorcode) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type color_class_description_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type color_class_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type color_class) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type color_class_clear() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_COLOR_CLASS_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Color_Class *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Color_Class> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Color_Class const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Color_Class> _get_wref() const { return ::efl::eo::wref<Color_Class>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Color_Class* operator->() const { return this; }
    Color_Class* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Color_Class const& lhs, Color_Class const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Color_Class const& lhs, Color_Class const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Color_Class) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Color_Class>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
