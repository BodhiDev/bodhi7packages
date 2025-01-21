#ifndef EFL_TEXT_FORMAT_EO_HH
#define EFL_TEXT_FORMAT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_text_format.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_TEXT_FORMAT_FWD_GUARD
#define EFL_TEXT_FORMAT_FWD_GUARD
namespace efl { 
struct Text_Format;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Format> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Format&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Format const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Format const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Text_Format {
    ::efl::eolian::return_traits<double>::type ellipsis_get() const;
    ::efl::eolian::return_traits<void>::type ellipsis_set( ::efl::eolian::in_traits<double>::type value) const;
    ::efl::eolian::return_traits<Efl_Text_Format_Wrap>::type wrap_get() const;
    ::efl::eolian::return_traits<void>::type wrap_set( ::efl::eolian::in_traits<Efl_Text_Format_Wrap>::type wrap) const;
    ::efl::eolian::return_traits<bool>::type multiline_get() const;
    ::efl::eolian::return_traits<void>::type multiline_set( ::efl::eolian::in_traits<bool>::type enabled) const;
    ::efl::eolian::return_traits<Efl_Text_Format_Horizontal_Alignment_Auto_Type>::type text_horizontal_align_auto_type_get() const;
    ::efl::eolian::return_traits<void>::type text_horizontal_align_auto_type_set( ::efl::eolian::in_traits<Efl_Text_Format_Horizontal_Alignment_Auto_Type>::type value) const;
    ::efl::eolian::return_traits<double>::type text_horizontal_align_get() const;
    ::efl::eolian::return_traits<void>::type text_horizontal_align_set( ::efl::eolian::in_traits<double>::type value) const;
    ::efl::eolian::return_traits<double>::type text_vertical_align_get() const;
    ::efl::eolian::return_traits<void>::type text_vertical_align_set( ::efl::eolian::in_traits<double>::type value) const;
    ::efl::eolian::return_traits<double>::type line_gap_get() const;
    ::efl::eolian::return_traits<void>::type line_gap_set( ::efl::eolian::in_traits<double>::type value) const;
    ::efl::eolian::return_traits<double>::type line_rel_gap_get() const;
    ::efl::eolian::return_traits<void>::type line_rel_gap_set( ::efl::eolian::in_traits<double>::type value) const;
    ::efl::eolian::return_traits<int>::type tab_stops_get() const;
    ::efl::eolian::return_traits<void>::type tab_stops_set( ::efl::eolian::in_traits<int>::type value) const;
    ::efl::eolian::return_traits<bool>::type password_get() const;
    ::efl::eolian::return_traits<void>::type password_set( ::efl::eolian::in_traits<bool>::type enabled) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type replacement_char_get() const;
    ::efl::eolian::return_traits<void>::type replacement_char_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type repch) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_TEXT_FORMAT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text_Format *>(this))); }
    operator ::efl::Text_Format() const;
    operator ::efl::Text_Format&();
    operator ::efl::Text_Format const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text_Format> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text_Format const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Text_Format : private ::efl::eo::concrete
{
    explicit Text_Format( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Text_Format(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Text_Format() = default;
    Text_Format(Text_Format const&) = default;
    Text_Format(Text_Format&&) = default;
    Text_Format& operator=(Text_Format const&) = default;
    Text_Format& operator=(Text_Format&&) = default;
    template <typename Derived>
    Text_Format(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Text_Format, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<double>::type ellipsis_get() const;
    ::efl::eolian::return_traits<void>::type ellipsis_set( ::efl::eolian::in_traits<double>::type value) const;
    ::efl::eolian::return_traits<Efl_Text_Format_Wrap>::type wrap_get() const;
    ::efl::eolian::return_traits<void>::type wrap_set( ::efl::eolian::in_traits<Efl_Text_Format_Wrap>::type wrap) const;
    ::efl::eolian::return_traits<bool>::type multiline_get() const;
    ::efl::eolian::return_traits<void>::type multiline_set( ::efl::eolian::in_traits<bool>::type enabled) const;
    ::efl::eolian::return_traits<Efl_Text_Format_Horizontal_Alignment_Auto_Type>::type text_horizontal_align_auto_type_get() const;
    ::efl::eolian::return_traits<void>::type text_horizontal_align_auto_type_set( ::efl::eolian::in_traits<Efl_Text_Format_Horizontal_Alignment_Auto_Type>::type value) const;
    ::efl::eolian::return_traits<double>::type text_horizontal_align_get() const;
    ::efl::eolian::return_traits<void>::type text_horizontal_align_set( ::efl::eolian::in_traits<double>::type value) const;
    ::efl::eolian::return_traits<double>::type text_vertical_align_get() const;
    ::efl::eolian::return_traits<void>::type text_vertical_align_set( ::efl::eolian::in_traits<double>::type value) const;
    ::efl::eolian::return_traits<double>::type line_gap_get() const;
    ::efl::eolian::return_traits<void>::type line_gap_set( ::efl::eolian::in_traits<double>::type value) const;
    ::efl::eolian::return_traits<double>::type line_rel_gap_get() const;
    ::efl::eolian::return_traits<void>::type line_rel_gap_set( ::efl::eolian::in_traits<double>::type value) const;
    ::efl::eolian::return_traits<int>::type tab_stops_get() const;
    ::efl::eolian::return_traits<void>::type tab_stops_set( ::efl::eolian::in_traits<int>::type value) const;
    ::efl::eolian::return_traits<bool>::type password_get() const;
    ::efl::eolian::return_traits<void>::type password_set( ::efl::eolian::in_traits<bool>::type enabled) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type replacement_char_get() const;
    ::efl::eolian::return_traits<void>::type replacement_char_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type repch) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_TEXT_FORMAT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text_Format *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text_Format> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text_Format const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Text_Format> _get_wref() const { return ::efl::eo::wref<Text_Format>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Text_Format* operator->() const { return this; }
    Text_Format* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Text_Format const& lhs, Text_Format const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Text_Format const& lhs, Text_Format const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Text_Format) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Text_Format>::value, "");
} 

#pragma GCC diagnostic pop

#endif
