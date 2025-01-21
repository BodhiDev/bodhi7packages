#ifndef EFL_UI_ACTION_CONNECTOR_EO_HH
#define EFL_UI_ACTION_CONNECTOR_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_layout.eo.h"
#include "efl_input_clickable.eo.h"
#include "efl_input_interface.eo.h"
#include "efl_ui_action_connector.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_layout.eo.hh"
#include "efl_input_clickable.eo.hh"
#include "efl_input_interface.eo.hh"
#ifndef EFL_UI_ACTION_CONNECTOR_FWD_GUARD
#define EFL_UI_ACTION_CONNECTOR_FWD_GUARD
namespace efl { namespace ui { 
struct Action_Connector;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Action_Connector> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Action_Connector&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Action_Connector const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Action_Connector const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_CLICKABLE_FWD_GUARD
#define EFL_INPUT_CLICKABLE_FWD_GUARD
namespace efl { namespace input { 
struct Clickable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Clickable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Clickable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Clickable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Clickable const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_INTERFACE_FWD_GUARD
#define EFL_INPUT_INTERFACE_FWD_GUARD
namespace efl { namespace input { 
struct Interface;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Interface> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Interface&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Interface const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Interface const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_LAYOUT_FWD_GUARD
#define EFL_CANVAS_LAYOUT_FWD_GUARD
namespace efl { namespace canvas { 
struct Layout;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Action_Connector {
#ifdef EFL_BETA_API_SUPPORT
    static ::efl::eolian::return_traits<void>::type bind_clickable_to_theme( ::efl::eolian::in_traits< ::efl::canvas::Layout>::type object,  ::efl::eolian::in_traits< ::efl::input::Clickable>::type clickable);
#endif
#ifdef EFL_BETA_API_SUPPORT
    static ::efl::eolian::return_traits<void>::type bind_clickable_to_object( ::efl::eolian::in_traits< ::efl::input::Interface>::type object,  ::efl::eolian::in_traits< ::efl::input::Clickable>::type clickable);
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_ACTION_CONNECTOR_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Action_Connector *>(this))); }
    operator ::efl::ui::Action_Connector() const;
    operator ::efl::ui::Action_Connector&();
    operator ::efl::ui::Action_Connector const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Action_Connector> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Action_Connector const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Action_Connector : private ::efl::eo::concrete
{
    explicit Action_Connector( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Action_Connector(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Action_Connector() = default;
    Action_Connector(Action_Connector const&) = default;
    Action_Connector(Action_Connector&&) = default;
    Action_Connector& operator=(Action_Connector const&) = default;
    Action_Connector& operator=(Action_Connector&&) = default;
    template <typename Derived>
    Action_Connector(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Action_Connector, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Action_Connector( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Action_Connector( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Action_Connector( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Action_Connector >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Action_Connector(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Action_Connector >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    static ::efl::eolian::return_traits<void>::type bind_clickable_to_theme( ::efl::eolian::in_traits< ::efl::canvas::Layout>::type object,  ::efl::eolian::in_traits< ::efl::input::Clickable>::type clickable);
#endif
#ifdef EFL_BETA_API_SUPPORT
    static ::efl::eolian::return_traits<void>::type bind_clickable_to_object( ::efl::eolian::in_traits< ::efl::input::Interface>::type object,  ::efl::eolian::in_traits< ::efl::input::Clickable>::type clickable);
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_ACTION_CONNECTOR_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Action_Connector *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Action_Connector> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Action_Connector const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Action_Connector> _get_wref() const { return ::efl::eo::wref<Action_Connector>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Action_Connector* operator->() const { return this; }
    Action_Connector* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Action_Connector const& lhs, Action_Connector const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Action_Connector const& lhs, Action_Connector const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Action_Connector) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Action_Connector>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
