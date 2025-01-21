#ifndef EFL_TEXT_MARKUP_EO_HH
#define EFL_TEXT_MARKUP_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_text_markup.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_TEXT_MARKUP_FWD_GUARD
#define EFL_TEXT_MARKUP_FWD_GUARD
namespace efl { 
struct Text_Markup;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Markup> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Markup&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Markup const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Markup const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Text_Markup {
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type markup_get() const;
    ::efl::eolian::return_traits<void>::type markup_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type markup) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_TEXT_MARKUP_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text_Markup *>(this))); }
    operator ::efl::Text_Markup() const;
    operator ::efl::Text_Markup&();
    operator ::efl::Text_Markup const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text_Markup> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text_Markup const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Text_Markup : private ::efl::eo::concrete
{
    explicit Text_Markup( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Text_Markup(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Text_Markup() = default;
    Text_Markup(Text_Markup const&) = default;
    Text_Markup(Text_Markup&&) = default;
    Text_Markup& operator=(Text_Markup const&) = default;
    Text_Markup& operator=(Text_Markup&&) = default;
    template <typename Derived>
    Text_Markup(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Text_Markup, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits< ::efl::eina::string_view>::type markup_get() const;
    ::efl::eolian::return_traits<void>::type markup_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type markup) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_TEXT_MARKUP_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text_Markup *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text_Markup> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text_Markup const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Text_Markup> _get_wref() const { return ::efl::eo::wref<Text_Markup>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Text_Markup* operator->() const { return this; }
    Text_Markup* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Text_Markup const& lhs, Text_Markup const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Text_Markup const& lhs, Text_Markup const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Text_Markup) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Text_Markup>::value, "");
} 

#pragma GCC diagnostic pop

#endif
