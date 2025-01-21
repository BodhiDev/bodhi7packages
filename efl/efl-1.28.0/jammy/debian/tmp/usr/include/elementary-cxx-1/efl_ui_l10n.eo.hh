#ifndef EFL_UI_L10N_EO_HH
#define EFL_UI_L10N_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_l10n.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_UI_L10N_FWD_GUARD
#define EFL_UI_L10N_FWD_GUARD
namespace efl { namespace ui { 
struct L10n;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::L10n> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::L10n&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::L10n const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::L10n const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct L10n {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type l10n_text_get( ::efl::eolian::out_traits< ::efl::eina::string_view*>::type domain) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type l10n_text_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type label,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type domain) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_L10N_PROTECTED
    ::efl::eolian::return_traits<void>::type translation_update() const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_L10N_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<L10n *>(this))); }
    operator ::efl::ui::L10n() const;
    operator ::efl::ui::L10n&();
    operator ::efl::ui::L10n const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<L10n> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<L10n const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct L10n : private ::efl::eo::concrete
{
    explicit L10n( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    L10n(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit L10n() = default;
    L10n(L10n const&) = default;
    L10n(L10n&&) = default;
    L10n& operator=(L10n const&) = default;
    L10n& operator=(L10n&&) = default;
    template <typename Derived>
    L10n(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< L10n, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type l10n_text_get( ::efl::eolian::out_traits< ::efl::eina::string_view*>::type domain) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type l10n_text_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type label,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type domain) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_L10N_PROTECTED
    ::efl::eolian::return_traits<void>::type translation_update() const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_L10N_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<L10n *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<L10n> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<L10n const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<L10n> _get_wref() const { return ::efl::eo::wref<L10n>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const L10n* operator->() const { return this; }
    L10n* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(L10n const& lhs, L10n const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(L10n const& lhs, L10n const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(L10n) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<L10n>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
