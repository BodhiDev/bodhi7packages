#ifndef EFL_UI_RADIO_GROUP_EO_HH
#define EFL_UI_RADIO_GROUP_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_radio.eo.h"
#include "efl_ui_radio_group.eo.h"
#include "efl_ui_selectable.eo.h"
#include "efl_ui_single_selectable.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_ui_radio.eo.hh"
#include "efl_ui_selectable.eo.hh"
#include "efl_ui_single_selectable.eo.hh"
#ifndef EFL_UI_RADIO_GROUP_FWD_GUARD
#define EFL_UI_RADIO_GROUP_FWD_GUARD
namespace efl { namespace ui { 
struct Radio_Group;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio_Group> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio_Group&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio_Group const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio_Group const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_RADIO_FWD_GUARD
#define EFL_UI_RADIO_FWD_GUARD
namespace efl { namespace ui { 
struct Radio;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio const&> : ::std::true_type {}; } }
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
struct Radio_Group {
    ::efl::eolian::return_traits<int>::type selected_value_get() const;
    ::efl::eolian::return_traits<void>::type selected_value_set( ::efl::eolian::in_traits<int>::type selected_value) const;
    ::efl::eolian::return_traits<void>::type cxx_register( ::efl::eolian::in_traits< ::efl::ui::Radio>::type radio) const;
    ::efl::eolian::return_traits<void>::type unregister( ::efl::eolian::in_traits< ::efl::ui::Radio>::type radio) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_RADIO_GROUP_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Radio_Group *>(this))); }
    operator ::efl::ui::Radio_Group() const;
    operator ::efl::ui::Radio_Group&();
    operator ::efl::ui::Radio_Group const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Radio_Group,  ::efl::ui::Single_Selectable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Radio_Group const ,  ::efl::ui::Single_Selectable const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Radio_Group : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::ui::Single_Selectable)
{
    explicit Radio_Group( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Radio_Group(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Radio_Group() = default;
    Radio_Group(Radio_Group const&) = default;
    Radio_Group(Radio_Group&&) = default;
    Radio_Group& operator=(Radio_Group const&) = default;
    Radio_Group& operator=(Radio_Group&&) = default;
    template <typename Derived>
    Radio_Group(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Radio_Group, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<int>::type selected_value_get() const;
    ::efl::eolian::return_traits<void>::type selected_value_set( ::efl::eolian::in_traits<int>::type selected_value) const;
    ::efl::eolian::return_traits<void>::type cxx_register( ::efl::eolian::in_traits< ::efl::ui::Radio>::type radio) const;
    ::efl::eolian::return_traits<void>::type unregister( ::efl::eolian::in_traits< ::efl::ui::Radio>::type radio) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_RADIO_GROUP_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Radio_Group *>(this))); }
    static struct value_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_RADIO_GROUP_EVENT_VALUE_CHANGED; }
        typedef int parameter_type;
    } const value_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    value_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(value_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    value_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(value_changed_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Radio_Group,  ::efl::ui::Single_Selectable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Radio_Group const ,  ::efl::ui::Single_Selectable const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Radio_Group> _get_wref() const { return ::efl::eo::wref<Radio_Group>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Radio_Group* operator->() const { return this; }
    Radio_Group* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Radio_Group const& lhs, Radio_Group const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Radio_Group const& lhs, Radio_Group const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Radio_Group) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Radio_Group>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
