#ifndef EFL_UI_LAYOUT_ORIENTABLE_READONLY_EO_HH
#define EFL_UI_LAYOUT_ORIENTABLE_READONLY_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_layout_orientable.eo.h"
#include "efl_ui_layout_orientable_readonly.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_ui_layout_orientable.eo.hh"
#ifndef EFL_UI_LAYOUT_ORIENTABLE_READONLY_FWD_GUARD
#define EFL_UI_LAYOUT_ORIENTABLE_READONLY_FWD_GUARD
namespace efl { namespace ui { 
struct Layout_Orientable_Readonly;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable_Readonly> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable_Readonly&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable_Readonly const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable_Readonly const&> : ::std::true_type {}; } }
#endif
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
struct Layout_Orientable_Readonly {
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_LAYOUT_ORIENTABLE_READONLY_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Layout_Orientable_Readonly *>(this))); }
    operator ::efl::ui::Layout_Orientable_Readonly() const;
    operator ::efl::ui::Layout_Orientable_Readonly&();
    operator ::efl::ui::Layout_Orientable_Readonly const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Layout_Orientable_Readonly,  ::efl::ui::Layout_Orientable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Layout_Orientable_Readonly const ,  ::efl::ui::Layout_Orientable const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Layout_Orientable_Readonly : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::ui::Layout_Orientable)
{
    explicit Layout_Orientable_Readonly( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Layout_Orientable_Readonly(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Layout_Orientable_Readonly() = default;
    Layout_Orientable_Readonly(Layout_Orientable_Readonly const&) = default;
    Layout_Orientable_Readonly(Layout_Orientable_Readonly&&) = default;
    Layout_Orientable_Readonly& operator=(Layout_Orientable_Readonly const&) = default;
    Layout_Orientable_Readonly& operator=(Layout_Orientable_Readonly&&) = default;
    template <typename Derived>
    Layout_Orientable_Readonly(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Layout_Orientable_Readonly, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    static Efl_Class const* _eo_class()
    {
        return EFL_UI_LAYOUT_ORIENTABLE_READONLY_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Layout_Orientable_Readonly *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Layout_Orientable_Readonly,  ::efl::ui::Layout_Orientable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Layout_Orientable_Readonly const ,  ::efl::ui::Layout_Orientable const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Layout_Orientable_Readonly> _get_wref() const { return ::efl::eo::wref<Layout_Orientable_Readonly>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Layout_Orientable_Readonly* operator->() const { return this; }
    Layout_Orientable_Readonly* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Layout_Orientable_Readonly const& lhs, Layout_Orientable_Readonly const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Layout_Orientable_Readonly const& lhs, Layout_Orientable_Readonly const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Layout_Orientable_Readonly) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Layout_Orientable_Readonly>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
