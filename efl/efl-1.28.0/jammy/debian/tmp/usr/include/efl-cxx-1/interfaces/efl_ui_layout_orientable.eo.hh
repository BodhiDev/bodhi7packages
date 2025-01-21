#ifndef EFL_UI_LAYOUT_ORIENTABLE_EO_HH
#define EFL_UI_LAYOUT_ORIENTABLE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_layout_orientable.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_UI_LAYOUT_ORIENTABLE_FWD_GUARD
#define EFL_UI_LAYOUT_ORIENTABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Layout_Orientable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Layout_Orientable {
    ::efl::eolian::return_traits<Efl_Ui_Layout_Orientation>::type orientation_get() const;
    ::efl::eolian::return_traits<void>::type orientation_set( ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type dir) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_LAYOUT_ORIENTABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Layout_Orientable *>(this))); }
    operator ::efl::ui::Layout_Orientable() const;
    operator ::efl::ui::Layout_Orientable&();
    operator ::efl::ui::Layout_Orientable const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Layout_Orientable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Layout_Orientable const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Layout_Orientable : private ::efl::eo::concrete
{
    explicit Layout_Orientable( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Layout_Orientable(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Layout_Orientable() = default;
    Layout_Orientable(Layout_Orientable const&) = default;
    Layout_Orientable(Layout_Orientable&&) = default;
    Layout_Orientable& operator=(Layout_Orientable const&) = default;
    Layout_Orientable& operator=(Layout_Orientable&&) = default;
    template <typename Derived>
    Layout_Orientable(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Layout_Orientable, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<Efl_Ui_Layout_Orientation>::type orientation_get() const;
    ::efl::eolian::return_traits<void>::type orientation_set( ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type dir) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_LAYOUT_ORIENTABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Layout_Orientable *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Layout_Orientable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Layout_Orientable const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Layout_Orientable> _get_wref() const { return ::efl::eo::wref<Layout_Orientable>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Layout_Orientable* operator->() const { return this; }
    Layout_Orientable* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Layout_Orientable const& lhs, Layout_Orientable const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Layout_Orientable const& lhs, Layout_Orientable const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Layout_Orientable) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Layout_Orientable>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
