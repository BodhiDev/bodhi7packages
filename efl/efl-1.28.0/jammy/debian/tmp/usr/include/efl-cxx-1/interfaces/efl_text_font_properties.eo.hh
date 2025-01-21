#ifndef EFL_TEXT_FONT_PROPERTIES_EO_HH
#define EFL_TEXT_FONT_PROPERTIES_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_text_font_properties.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_TEXT_FONT_PROPERTIES_FWD_GUARD
#define EFL_TEXT_FONT_PROPERTIES_FWD_GUARD
namespace efl { 
struct Text_Font_Properties;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Font_Properties> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Font_Properties&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Font_Properties const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Font_Properties const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Text_Font_Properties {
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type font_family_get() const;
    ::efl::eolian::return_traits<void>::type font_family_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type font) const;
    ::efl::eolian::return_traits<Efl_Font_Size>::type font_size_get() const;
    ::efl::eolian::return_traits<void>::type font_size_set( ::efl::eolian::in_traits<Efl_Font_Size>::type size) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type font_source_get() const;
    ::efl::eolian::return_traits<void>::type font_source_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type font_source) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type font_fallbacks_get() const;
    ::efl::eolian::return_traits<void>::type font_fallbacks_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type font_fallbacks) const;
    ::efl::eolian::return_traits<Efl_Text_Font_Weight>::type font_weight_get() const;
    ::efl::eolian::return_traits<void>::type font_weight_set( ::efl::eolian::in_traits<Efl_Text_Font_Weight>::type font_weight) const;
    ::efl::eolian::return_traits<Efl_Text_Font_Slant>::type font_slant_get() const;
    ::efl::eolian::return_traits<void>::type font_slant_set( ::efl::eolian::in_traits<Efl_Text_Font_Slant>::type style) const;
    ::efl::eolian::return_traits<Efl_Text_Font_Width>::type font_width_get() const;
    ::efl::eolian::return_traits<void>::type font_width_set( ::efl::eolian::in_traits<Efl_Text_Font_Width>::type width) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type font_lang_get() const;
    ::efl::eolian::return_traits<void>::type font_lang_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type lang) const;
    ::efl::eolian::return_traits<Efl_Text_Font_Bitmap_Scalable>::type font_bitmap_scalable_get() const;
    ::efl::eolian::return_traits<void>::type font_bitmap_scalable_set( ::efl::eolian::in_traits<Efl_Text_Font_Bitmap_Scalable>::type scalable) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_TEXT_FONT_PROPERTIES_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text_Font_Properties *>(this))); }
    operator ::efl::Text_Font_Properties() const;
    operator ::efl::Text_Font_Properties&();
    operator ::efl::Text_Font_Properties const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text_Font_Properties> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text_Font_Properties const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Text_Font_Properties : private ::efl::eo::concrete
{
    explicit Text_Font_Properties( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Text_Font_Properties(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Text_Font_Properties() = default;
    Text_Font_Properties(Text_Font_Properties const&) = default;
    Text_Font_Properties(Text_Font_Properties&&) = default;
    Text_Font_Properties& operator=(Text_Font_Properties const&) = default;
    Text_Font_Properties& operator=(Text_Font_Properties&&) = default;
    template <typename Derived>
    Text_Font_Properties(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Text_Font_Properties, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits< ::efl::eina::string_view>::type font_family_get() const;
    ::efl::eolian::return_traits<void>::type font_family_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type font) const;
    ::efl::eolian::return_traits<Efl_Font_Size>::type font_size_get() const;
    ::efl::eolian::return_traits<void>::type font_size_set( ::efl::eolian::in_traits<Efl_Font_Size>::type size) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type font_source_get() const;
    ::efl::eolian::return_traits<void>::type font_source_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type font_source) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type font_fallbacks_get() const;
    ::efl::eolian::return_traits<void>::type font_fallbacks_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type font_fallbacks) const;
    ::efl::eolian::return_traits<Efl_Text_Font_Weight>::type font_weight_get() const;
    ::efl::eolian::return_traits<void>::type font_weight_set( ::efl::eolian::in_traits<Efl_Text_Font_Weight>::type font_weight) const;
    ::efl::eolian::return_traits<Efl_Text_Font_Slant>::type font_slant_get() const;
    ::efl::eolian::return_traits<void>::type font_slant_set( ::efl::eolian::in_traits<Efl_Text_Font_Slant>::type style) const;
    ::efl::eolian::return_traits<Efl_Text_Font_Width>::type font_width_get() const;
    ::efl::eolian::return_traits<void>::type font_width_set( ::efl::eolian::in_traits<Efl_Text_Font_Width>::type width) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type font_lang_get() const;
    ::efl::eolian::return_traits<void>::type font_lang_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type lang) const;
    ::efl::eolian::return_traits<Efl_Text_Font_Bitmap_Scalable>::type font_bitmap_scalable_get() const;
    ::efl::eolian::return_traits<void>::type font_bitmap_scalable_set( ::efl::eolian::in_traits<Efl_Text_Font_Bitmap_Scalable>::type scalable) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_TEXT_FONT_PROPERTIES_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text_Font_Properties *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text_Font_Properties> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text_Font_Properties const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Text_Font_Properties> _get_wref() const { return ::efl::eo::wref<Text_Font_Properties>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Text_Font_Properties* operator->() const { return this; }
    Text_Font_Properties* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Text_Font_Properties const& lhs, Text_Font_Properties const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Text_Font_Properties const& lhs, Text_Font_Properties const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Text_Font_Properties) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Text_Font_Properties>::value, "");
} 

#pragma GCC diagnostic pop

#endif
