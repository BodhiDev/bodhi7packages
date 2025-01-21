#ifndef EFL_UI_MULTI_SELECTABLE_EO_HH
#define EFL_UI_MULTI_SELECTABLE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_multi_selectable.eo.h"
#include "efl_ui_selectable.eo.h"
#include "efl_ui_single_selectable.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_ui_selectable.eo.hh"
#include "efl_ui_single_selectable.eo.hh"
#ifndef EFL_UI_MULTI_SELECTABLE_FWD_GUARD
#define EFL_UI_MULTI_SELECTABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Multi_Selectable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_SELECTABLE_FWD_GUARD
#define EFL_UI_SELECTABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Selectable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Selectable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Selectable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Selectable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Selectable const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_SINGLE_SELECTABLE_FWD_GUARD
#define EFL_UI_SINGLE_SELECTABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Single_Selectable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Single_Selectable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Single_Selectable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Single_Selectable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Single_Selectable const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Multi_Selectable {
    ::efl::eolian::return_traits<Efl_Ui_Select_Mode>::type select_mode_get() const;
    ::efl::eolian::return_traits<void>::type select_mode_set( ::efl::eolian::in_traits<Efl_Ui_Select_Mode>::type mode) const;
    ::efl::eolian::return_traits<void>::type all_select() const;
    ::efl::eolian::return_traits<void>::type all_unselect() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_MULTI_SELECTABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Multi_Selectable *>(this))); }
    operator ::efl::ui::Multi_Selectable() const;
    operator ::efl::ui::Multi_Selectable&();
    operator ::efl::ui::Multi_Selectable const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Multi_Selectable,  ::efl::ui::Single_Selectable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Multi_Selectable const ,  ::efl::ui::Single_Selectable const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Multi_Selectable : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::ui::Single_Selectable)
{
    explicit Multi_Selectable( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Multi_Selectable(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Multi_Selectable() = default;
    Multi_Selectable(Multi_Selectable const&) = default;
    Multi_Selectable(Multi_Selectable&&) = default;
    Multi_Selectable& operator=(Multi_Selectable const&) = default;
    Multi_Selectable& operator=(Multi_Selectable&&) = default;
    template <typename Derived>
    Multi_Selectable(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Multi_Selectable, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<Efl_Ui_Select_Mode>::type select_mode_get() const;
    ::efl::eolian::return_traits<void>::type select_mode_set( ::efl::eolian::in_traits<Efl_Ui_Select_Mode>::type mode) const;
    ::efl::eolian::return_traits<void>::type all_select() const;
    ::efl::eolian::return_traits<void>::type all_unselect() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_MULTI_SELECTABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Multi_Selectable *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Multi_Selectable,  ::efl::ui::Single_Selectable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Multi_Selectable const ,  ::efl::ui::Single_Selectable const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Multi_Selectable> _get_wref() const { return ::efl::eo::wref<Multi_Selectable>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Multi_Selectable* operator->() const { return this; }
    Multi_Selectable* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Multi_Selectable const& lhs, Multi_Selectable const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Multi_Selectable const& lhs, Multi_Selectable const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Multi_Selectable) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Multi_Selectable>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
