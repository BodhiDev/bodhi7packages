#ifndef EFL_GFX_TEXT_CLASS_EO_HH
#define EFL_GFX_TEXT_CLASS_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_text_class.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_GFX_TEXT_CLASS_FWD_GUARD
#define EFL_GFX_TEXT_CLASS_FWD_GUARD
namespace efl { namespace gfx { 
struct Text_Class;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Text_Class> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Text_Class&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Text_Class const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Text_Class const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Text_Class {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type text_class_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text_class,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type font,  ::efl::eolian::out_traits<Efl_Font_Size>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type text_class_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text_class,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type font,  ::efl::eolian::in_traits<Efl_Font_Size>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type text_class_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text_class) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_TEXT_CLASS_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text_Class *>(this))); }
    operator ::efl::gfx::Text_Class() const;
    operator ::efl::gfx::Text_Class&();
    operator ::efl::gfx::Text_Class const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text_Class> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text_Class const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Text_Class : private ::efl::eo::concrete
{
    explicit Text_Class( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Text_Class(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Text_Class() = default;
    Text_Class(Text_Class const&) = default;
    Text_Class(Text_Class&&) = default;
    Text_Class& operator=(Text_Class const&) = default;
    Text_Class& operator=(Text_Class&&) = default;
    template <typename Derived>
    Text_Class(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Text_Class, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type text_class_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text_class,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type font,  ::efl::eolian::out_traits<Efl_Font_Size>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type text_class_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text_class,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type font,  ::efl::eolian::in_traits<Efl_Font_Size>::type size) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type text_class_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text_class) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_TEXT_CLASS_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text_Class *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text_Class> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text_Class const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Text_Class> _get_wref() const { return ::efl::eo::wref<Text_Class>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Text_Class* operator->() const { return this; }
    Text_Class* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Text_Class const& lhs, Text_Class const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Text_Class const& lhs, Text_Class const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Text_Class) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Text_Class>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
