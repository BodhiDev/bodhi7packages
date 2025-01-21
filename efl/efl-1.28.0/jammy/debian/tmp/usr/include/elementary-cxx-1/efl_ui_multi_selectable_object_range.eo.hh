#ifndef EFL_UI_MULTI_SELECTABLE_OBJECT_RANGE_EO_HH
#define EFL_UI_MULTI_SELECTABLE_OBJECT_RANGE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_multi_selectable.eo.h"
#include "efl_ui_multi_selectable_object_range.eo.h"
#include "efl_ui_selectable.eo.h"
#include "efl_ui_single_selectable.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_ui_multi_selectable.eo.hh"
#include "efl_ui_selectable.eo.hh"
#include "efl_ui_single_selectable.eo.hh"
#ifndef EFL_UI_MULTI_SELECTABLE_OBJECT_RANGE_FWD_GUARD
#define EFL_UI_MULTI_SELECTABLE_OBJECT_RANGE_FWD_GUARD
namespace efl { namespace ui { 
struct Multi_Selectable_Object_Range;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable_Object_Range> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable_Object_Range&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable_Object_Range const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable_Object_Range const&> : ::std::true_type {}; } }
#endif
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
struct Multi_Selectable_Object_Range {
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::ui::Selectable>>::type selected_iterator_new() const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type range_select( ::efl::eolian::in_traits< ::efl::ui::Selectable>::type a,  ::efl::eolian::in_traits< ::efl::ui::Selectable>::type b) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type range_unselect( ::efl::eolian::in_traits< ::efl::ui::Selectable>::type a,  ::efl::eolian::in_traits< ::efl::ui::Selectable>::type b) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_MULTI_SELECTABLE_OBJECT_RANGE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Multi_Selectable_Object_Range *>(this))); }
    operator ::efl::ui::Multi_Selectable_Object_Range() const;
    operator ::efl::ui::Multi_Selectable_Object_Range&();
    operator ::efl::ui::Multi_Selectable_Object_Range const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Multi_Selectable_Object_Range,  ::efl::ui::Multi_Selectable,  ::efl::ui::Single_Selectable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Multi_Selectable_Object_Range const ,  ::efl::ui::Multi_Selectable const ,  ::efl::ui::Single_Selectable const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Multi_Selectable_Object_Range : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::ui::Multi_Selectable)
    , EO_CXX_INHERIT(::efl::ui::Single_Selectable)
{
    explicit Multi_Selectable_Object_Range( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Multi_Selectable_Object_Range(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Multi_Selectable_Object_Range() = default;
    Multi_Selectable_Object_Range(Multi_Selectable_Object_Range const&) = default;
    Multi_Selectable_Object_Range(Multi_Selectable_Object_Range&&) = default;
    Multi_Selectable_Object_Range& operator=(Multi_Selectable_Object_Range const&) = default;
    Multi_Selectable_Object_Range& operator=(Multi_Selectable_Object_Range&&) = default;
    template <typename Derived>
    Multi_Selectable_Object_Range(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Multi_Selectable_Object_Range, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::ui::Selectable>>::type selected_iterator_new() const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type range_select( ::efl::eolian::in_traits< ::efl::ui::Selectable>::type a,  ::efl::eolian::in_traits< ::efl::ui::Selectable>::type b) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type range_unselect( ::efl::eolian::in_traits< ::efl::ui::Selectable>::type a,  ::efl::eolian::in_traits< ::efl::ui::Selectable>::type b) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_MULTI_SELECTABLE_OBJECT_RANGE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Multi_Selectable_Object_Range *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Multi_Selectable_Object_Range,  ::efl::ui::Multi_Selectable,  ::efl::ui::Single_Selectable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Multi_Selectable_Object_Range const ,  ::efl::ui::Multi_Selectable const ,  ::efl::ui::Single_Selectable const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Multi_Selectable_Object_Range> _get_wref() const { return ::efl::eo::wref<Multi_Selectable_Object_Range>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Multi_Selectable_Object_Range* operator->() const { return this; }
    Multi_Selectable_Object_Range* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Multi_Selectable_Object_Range const& lhs, Multi_Selectable_Object_Range const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Multi_Selectable_Object_Range const& lhs, Multi_Selectable_Object_Range const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Multi_Selectable_Object_Range) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Multi_Selectable_Object_Range>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
