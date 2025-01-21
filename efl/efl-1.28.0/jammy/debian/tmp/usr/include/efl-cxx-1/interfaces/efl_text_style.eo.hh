#ifndef EFL_TEXT_STYLE_EO_HH
#define EFL_TEXT_STYLE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_text_style.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_TEXT_STYLE_FWD_GUARD
#define EFL_TEXT_STYLE_FWD_GUARD
namespace efl { 
struct Text_Style;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Style> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Style&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Style const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Style const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Text_Style {
    ::efl::eolian::return_traits<void>::type text_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<Efl_Text_Style_Background_Type>::type text_background_type_get() const;
    ::efl::eolian::return_traits<void>::type text_background_type_set( ::efl::eolian::in_traits<Efl_Text_Style_Background_Type>::type type) const;
    ::efl::eolian::return_traits<void>::type text_background_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_background_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<Efl_Text_Style_Underline_Type>::type text_underline_type_get() const;
    ::efl::eolian::return_traits<void>::type text_underline_type_set( ::efl::eolian::in_traits<Efl_Text_Style_Underline_Type>::type type) const;
    ::efl::eolian::return_traits<void>::type text_underline_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_underline_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<double>::type text_underline_height_get() const;
    ::efl::eolian::return_traits<void>::type text_underline_height_set( ::efl::eolian::in_traits<double>::type height) const;
    ::efl::eolian::return_traits<void>::type text_underline_dashed_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_underline_dashed_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<int>::type text_underline_dashed_width_get() const;
    ::efl::eolian::return_traits<void>::type text_underline_dashed_width_set( ::efl::eolian::in_traits<int>::type width) const;
    ::efl::eolian::return_traits<int>::type text_underline_dashed_gap_get() const;
    ::efl::eolian::return_traits<void>::type text_underline_dashed_gap_set( ::efl::eolian::in_traits<int>::type gap) const;
    ::efl::eolian::return_traits<void>::type text_secondary_underline_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_secondary_underline_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<Efl_Text_Style_Strikethrough_Type>::type text_strikethrough_type_get() const;
    ::efl::eolian::return_traits<void>::type text_strikethrough_type_set( ::efl::eolian::in_traits<Efl_Text_Style_Strikethrough_Type>::type type) const;
    ::efl::eolian::return_traits<void>::type text_strikethrough_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_strikethrough_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<Efl_Text_Style_Effect_Type>::type text_effect_type_get() const;
    ::efl::eolian::return_traits<void>::type text_effect_type_set( ::efl::eolian::in_traits<Efl_Text_Style_Effect_Type>::type type) const;
    ::efl::eolian::return_traits<void>::type text_outline_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_outline_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<Efl_Text_Style_Shadow_Direction>::type text_shadow_direction_get() const;
    ::efl::eolian::return_traits<void>::type text_shadow_direction_set( ::efl::eolian::in_traits<Efl_Text_Style_Shadow_Direction>::type type) const;
    ::efl::eolian::return_traits<void>::type text_shadow_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_shadow_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_glow_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_glow_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_secondary_glow_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_secondary_glow_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type text_gfx_filter_get() const;
    ::efl::eolian::return_traits<void>::type text_gfx_filter_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type code) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_TEXT_STYLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text_Style *>(this))); }
    operator ::efl::Text_Style() const;
    operator ::efl::Text_Style&();
    operator ::efl::Text_Style const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text_Style> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text_Style const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Text_Style : private ::efl::eo::concrete
{
    explicit Text_Style( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Text_Style(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Text_Style() = default;
    Text_Style(Text_Style const&) = default;
    Text_Style(Text_Style&&) = default;
    Text_Style& operator=(Text_Style const&) = default;
    Text_Style& operator=(Text_Style&&) = default;
    template <typename Derived>
    Text_Style(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Text_Style, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<void>::type text_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<Efl_Text_Style_Background_Type>::type text_background_type_get() const;
    ::efl::eolian::return_traits<void>::type text_background_type_set( ::efl::eolian::in_traits<Efl_Text_Style_Background_Type>::type type) const;
    ::efl::eolian::return_traits<void>::type text_background_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_background_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<Efl_Text_Style_Underline_Type>::type text_underline_type_get() const;
    ::efl::eolian::return_traits<void>::type text_underline_type_set( ::efl::eolian::in_traits<Efl_Text_Style_Underline_Type>::type type) const;
    ::efl::eolian::return_traits<void>::type text_underline_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_underline_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<double>::type text_underline_height_get() const;
    ::efl::eolian::return_traits<void>::type text_underline_height_set( ::efl::eolian::in_traits<double>::type height) const;
    ::efl::eolian::return_traits<void>::type text_underline_dashed_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_underline_dashed_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<int>::type text_underline_dashed_width_get() const;
    ::efl::eolian::return_traits<void>::type text_underline_dashed_width_set( ::efl::eolian::in_traits<int>::type width) const;
    ::efl::eolian::return_traits<int>::type text_underline_dashed_gap_get() const;
    ::efl::eolian::return_traits<void>::type text_underline_dashed_gap_set( ::efl::eolian::in_traits<int>::type gap) const;
    ::efl::eolian::return_traits<void>::type text_secondary_underline_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_secondary_underline_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<Efl_Text_Style_Strikethrough_Type>::type text_strikethrough_type_get() const;
    ::efl::eolian::return_traits<void>::type text_strikethrough_type_set( ::efl::eolian::in_traits<Efl_Text_Style_Strikethrough_Type>::type type) const;
    ::efl::eolian::return_traits<void>::type text_strikethrough_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_strikethrough_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<Efl_Text_Style_Effect_Type>::type text_effect_type_get() const;
    ::efl::eolian::return_traits<void>::type text_effect_type_set( ::efl::eolian::in_traits<Efl_Text_Style_Effect_Type>::type type) const;
    ::efl::eolian::return_traits<void>::type text_outline_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_outline_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<Efl_Text_Style_Shadow_Direction>::type text_shadow_direction_get() const;
    ::efl::eolian::return_traits<void>::type text_shadow_direction_set( ::efl::eolian::in_traits<Efl_Text_Style_Shadow_Direction>::type type) const;
    ::efl::eolian::return_traits<void>::type text_shadow_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_shadow_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_glow_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_glow_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_secondary_glow_color_get( ::efl::eolian::out_traits< unsigned char>::type r,  ::efl::eolian::out_traits< unsigned char>::type g,  ::efl::eolian::out_traits< unsigned char>::type b,  ::efl::eolian::out_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits<void>::type text_secondary_glow_color_set( ::efl::eolian::in_traits< unsigned char>::type r,  ::efl::eolian::in_traits< unsigned char>::type g,  ::efl::eolian::in_traits< unsigned char>::type b,  ::efl::eolian::in_traits< unsigned char>::type a) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type text_gfx_filter_get() const;
    ::efl::eolian::return_traits<void>::type text_gfx_filter_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type code) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_TEXT_STYLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text_Style *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text_Style> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text_Style const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Text_Style> _get_wref() const { return ::efl::eo::wref<Text_Style>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Text_Style* operator->() const { return this; }
    Text_Style* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Text_Style const& lhs, Text_Style const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Text_Style const& lhs, Text_Style const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Text_Style) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Text_Style>::value, "");
} 

#pragma GCC diagnostic pop

#endif
