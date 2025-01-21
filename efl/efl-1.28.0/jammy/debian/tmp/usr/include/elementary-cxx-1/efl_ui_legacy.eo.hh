#ifndef EFL_UI_LEGACY_EO_HH
#define EFL_UI_LEGACY_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_legacy.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_UI_LEGACY_FWD_GUARD
#define EFL_UI_LEGACY_FWD_GUARD
namespace efl { namespace ui { 
struct Legacy;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Legacy> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Legacy&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Legacy const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Legacy const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Legacy {
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_LEGACY_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Legacy *>(this))); }
    operator ::efl::ui::Legacy() const;
    operator ::efl::ui::Legacy&();
    operator ::efl::ui::Legacy const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Legacy> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Legacy const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Legacy : private ::efl::eo::concrete
{
    explicit Legacy( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Legacy(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Legacy() = default;
    Legacy(Legacy const&) = default;
    Legacy(Legacy&&) = default;
    Legacy& operator=(Legacy const&) = default;
    Legacy& operator=(Legacy&&) = default;
    template <typename Derived>
    Legacy(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Legacy, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    static Efl_Class const* _eo_class()
    {
        return EFL_UI_LEGACY_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Legacy *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Legacy> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Legacy const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Legacy> _get_wref() const { return ::efl::eo::wref<Legacy>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Legacy* operator->() const { return this; }
    Legacy* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Legacy const& lhs, Legacy const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Legacy const& lhs, Legacy const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Legacy) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Legacy>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
