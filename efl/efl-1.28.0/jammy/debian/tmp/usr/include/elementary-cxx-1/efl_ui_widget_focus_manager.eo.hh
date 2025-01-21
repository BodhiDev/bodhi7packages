#ifndef EFL_UI_WIDGET_FOCUS_MANAGER_EO_HH
#define EFL_UI_WIDGET_FOCUS_MANAGER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_focus_manager.eo.h"
#include "efl_ui_focus_object.eo.h"
#include "efl_ui_widget_focus_manager.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_ui_focus_manager.eo.hh"
#include "efl_ui_focus_object.eo.hh"
#ifndef EFL_UI_WIDGET_FOCUS_MANAGER_FWD_GUARD
#define EFL_UI_WIDGET_FOCUS_MANAGER_FWD_GUARD
namespace efl { namespace ui { 
struct Widget_Focus_Manager;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Focus_Manager> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Focus_Manager&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Focus_Manager const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Focus_Manager const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_FOCUS_MANAGER_FWD_GUARD
#define EFL_UI_FOCUS_MANAGER_FWD_GUARD
namespace efl { namespace ui { namespace focus { 
struct Manager;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_FOCUS_OBJECT_FWD_GUARD
#define EFL_UI_FOCUS_OBJECT_FWD_GUARD
namespace efl { namespace ui { namespace focus { 
struct Object;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Widget_Focus_Manager {
#ifdef EFL_UI_WIDGET_FOCUS_MANAGER_PROTECTED
    ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type focus_manager_create( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type root) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_WIDGET_FOCUS_MANAGER_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Widget_Focus_Manager *>(this))); }
    operator ::efl::ui::Widget_Focus_Manager() const;
    operator ::efl::ui::Widget_Focus_Manager&();
    operator ::efl::ui::Widget_Focus_Manager const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Widget_Focus_Manager,  ::efl::ui::focus::Manager> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Widget_Focus_Manager const ,  ::efl::ui::focus::Manager const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Widget_Focus_Manager : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::ui::focus::Manager)
{
    explicit Widget_Focus_Manager( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Widget_Focus_Manager(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Widget_Focus_Manager() = default;
    Widget_Focus_Manager(Widget_Focus_Manager const&) = default;
    Widget_Focus_Manager(Widget_Focus_Manager&&) = default;
    Widget_Focus_Manager& operator=(Widget_Focus_Manager const&) = default;
    Widget_Focus_Manager& operator=(Widget_Focus_Manager&&) = default;
    template <typename Derived>
    Widget_Focus_Manager(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Widget_Focus_Manager, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_UI_WIDGET_FOCUS_MANAGER_PROTECTED
    ::efl::eolian::return_traits< ::efl::ui::focus::Manager>::type focus_manager_create( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type root) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_WIDGET_FOCUS_MANAGER_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Widget_Focus_Manager *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Widget_Focus_Manager,  ::efl::ui::focus::Manager> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Widget_Focus_Manager const ,  ::efl::ui::focus::Manager const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Widget_Focus_Manager> _get_wref() const { return ::efl::eo::wref<Widget_Focus_Manager>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Widget_Focus_Manager* operator->() const { return this; }
    Widget_Focus_Manager* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Widget_Focus_Manager const& lhs, Widget_Focus_Manager const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Widget_Focus_Manager const& lhs, Widget_Focus_Manager const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Widget_Focus_Manager) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Widget_Focus_Manager>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
