#ifndef EFL_UI_I18N_EO_HH
#define EFL_UI_I18N_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_i18n.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_UI_I18N_FWD_GUARD
#define EFL_UI_I18N_FWD_GUARD
namespace efl { namespace ui { 
struct I18n;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::I18n> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::I18n&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::I18n const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::I18n const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct I18n {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type mirrored_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type mirrored_set( ::efl::eolian::in_traits<bool>::type rtl) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type mirrored_automatic_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type mirrored_automatic_set( ::efl::eolian::in_traits<bool>::type automatic) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type language_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type language_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type language) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_I18N_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<I18n *>(this))); }
    operator ::efl::ui::I18n() const;
    operator ::efl::ui::I18n&();
    operator ::efl::ui::I18n const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<I18n> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<I18n const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct I18n : private ::efl::eo::concrete
{
    explicit I18n( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    I18n(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit I18n() = default;
    I18n(I18n const&) = default;
    I18n(I18n&&) = default;
    I18n& operator=(I18n const&) = default;
    I18n& operator=(I18n&&) = default;
    template <typename Derived>
    I18n(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< I18n, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type mirrored_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type mirrored_set( ::efl::eolian::in_traits<bool>::type rtl) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type mirrored_automatic_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type mirrored_automatic_set( ::efl::eolian::in_traits<bool>::type automatic) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type language_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type language_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type language) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_I18N_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<I18n *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<I18n> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<I18n const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<I18n> _get_wref() const { return ::efl::eo::wref<I18n>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const I18n* operator->() const { return this; }
    I18n* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(I18n const& lhs, I18n const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(I18n const& lhs, I18n const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(I18n) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<I18n>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
