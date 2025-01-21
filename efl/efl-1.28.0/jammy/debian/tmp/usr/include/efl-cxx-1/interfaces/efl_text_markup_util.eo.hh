#ifndef EFL_TEXT_MARKUP_UTIL_EO_HH
#define EFL_TEXT_MARKUP_UTIL_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_text_markup_util.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_TEXT_MARKUP_UTIL_FWD_GUARD
#define EFL_TEXT_MARKUP_UTIL_FWD_GUARD
namespace efl { 
struct Text_Markup_Util;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Markup_Util> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Markup_Util&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Markup_Util const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Markup_Util const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Text_Markup_Util {
#ifdef EFL_BETA_API_SUPPORT
    static ::efl::eolian::return_traits< ::std::string>::type text_to_markup( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text);
#endif
#ifdef EFL_BETA_API_SUPPORT
    static ::efl::eolian::return_traits< ::std::string>::type markup_to_text( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text);
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_TEXT_MARKUP_UTIL_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text_Markup_Util *>(this))); }
    operator ::efl::Text_Markup_Util() const;
    operator ::efl::Text_Markup_Util&();
    operator ::efl::Text_Markup_Util const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text_Markup_Util> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text_Markup_Util const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Text_Markup_Util : private ::efl::eo::concrete
{
    explicit Text_Markup_Util( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Text_Markup_Util(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Text_Markup_Util() = default;
    Text_Markup_Util(Text_Markup_Util const&) = default;
    Text_Markup_Util(Text_Markup_Util&&) = default;
    Text_Markup_Util& operator=(Text_Markup_Util const&) = default;
    Text_Markup_Util& operator=(Text_Markup_Util&&) = default;
    template <typename Derived>
    Text_Markup_Util(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Text_Markup_Util, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Text_Markup_Util( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Text_Markup_Util( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Text_Markup_Util( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Text_Markup_Util >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Text_Markup_Util(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Text_Markup_Util >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    static ::efl::eolian::return_traits< ::std::string>::type text_to_markup( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text);
#endif
#ifdef EFL_BETA_API_SUPPORT
    static ::efl::eolian::return_traits< ::std::string>::type markup_to_text( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text);
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_TEXT_MARKUP_UTIL_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text_Markup_Util *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text_Markup_Util> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text_Markup_Util const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Text_Markup_Util> _get_wref() const { return ::efl::eo::wref<Text_Markup_Util>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Text_Markup_Util* operator->() const { return this; }
    Text_Markup_Util* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Text_Markup_Util const& lhs, Text_Markup_Util const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Text_Markup_Util const& lhs, Text_Markup_Util const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Text_Markup_Util) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Text_Markup_Util>::value, "");
} 

#pragma GCC diagnostic pop

#endif
