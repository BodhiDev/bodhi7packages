#ifndef EFL_UI_FOCUS_MANAGER_WINDOW_ROOT_EO_HH
#define EFL_UI_FOCUS_MANAGER_WINDOW_ROOT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_focus_manager_window_root.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_UI_FOCUS_MANAGER_WINDOW_ROOT_FWD_GUARD
#define EFL_UI_FOCUS_MANAGER_WINDOW_ROOT_FWD_GUARD
namespace efl { namespace ui { namespace focus { 
struct Manager_Window_Root;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Window_Root> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Window_Root&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Window_Root const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Window_Root const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { namespace focus { 
struct Manager_Window_Root {
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FOCUS_MANAGER_WINDOW_ROOT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Manager_Window_Root *>(this))); }
    operator ::efl::ui::focus::Manager_Window_Root() const;
    operator ::efl::ui::focus::Manager_Window_Root&();
    operator ::efl::ui::focus::Manager_Window_Root const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Manager_Window_Root> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Manager_Window_Root const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace focus { 
struct Manager_Window_Root : private ::efl::eo::concrete
{
    explicit Manager_Window_Root( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Manager_Window_Root(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Manager_Window_Root() = default;
    Manager_Window_Root(Manager_Window_Root const&) = default;
    Manager_Window_Root(Manager_Window_Root&&) = default;
    Manager_Window_Root& operator=(Manager_Window_Root const&) = default;
    Manager_Window_Root& operator=(Manager_Window_Root&&) = default;
    template <typename Derived>
    Manager_Window_Root(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Manager_Window_Root, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FOCUS_MANAGER_WINDOW_ROOT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Manager_Window_Root *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Manager_Window_Root> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Manager_Window_Root const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Manager_Window_Root> _get_wref() const { return ::efl::eo::wref<Manager_Window_Root>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Manager_Window_Root* operator->() const { return this; }
    Manager_Window_Root* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Manager_Window_Root const& lhs, Manager_Window_Root const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Manager_Window_Root const& lhs, Manager_Window_Root const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Manager_Window_Root) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Manager_Window_Root>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
