#ifndef EFL_UI_CONTAINER_SELECTABLE_EO_HH
#define EFL_UI_CONTAINER_SELECTABLE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_object.eo.h"
#include "efl_ui_container_selectable.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_object.eo.hh"
#ifndef EFL_UI_CONTAINER_SELECTABLE_FWD_GUARD
#define EFL_UI_CONTAINER_SELECTABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Container_Selectable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Container_Selectable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Container_Selectable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Container_Selectable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Container_Selectable const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_OBJECT_FWD_GUARD
#define EFL_OBJECT_FWD_GUARD
namespace efl { 
struct Object;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Container_Selectable {
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_CONTAINER_SELECTABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Container_Selectable *>(this))); }
    operator ::efl::ui::Container_Selectable() const;
    operator ::efl::ui::Container_Selectable&();
    operator ::efl::ui::Container_Selectable const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Container_Selectable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Container_Selectable const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Container_Selectable : private ::efl::eo::concrete
{
    explicit Container_Selectable( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Container_Selectable(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Container_Selectable() = default;
    Container_Selectable(Container_Selectable const&) = default;
    Container_Selectable(Container_Selectable&&) = default;
    Container_Selectable& operator=(Container_Selectable const&) = default;
    Container_Selectable& operator=(Container_Selectable&&) = default;
    template <typename Derived>
    Container_Selectable(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Container_Selectable, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    static Efl_Class const* _eo_class()
    {
        return EFL_UI_CONTAINER_SELECTABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Container_Selectable *>(this))); }
#ifdef EFL_UI_CONTAINER_SELECTABLE_BETA
    static struct item_selected_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_ITEM_SELECTED; }
        typedef  ::efl::Object parameter_type;
    } const item_selected_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_selected_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_selected_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_selected_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_selected_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_UI_CONTAINER_SELECTABLE_BETA
    static struct item_unselected_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_ITEM_UNSELECTED; }
        typedef  ::efl::Object parameter_type;
    } const item_unselected_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_unselected_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_unselected_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_unselected_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_unselected_event, *this, std::bind(function));
    }
#endif
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Container_Selectable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Container_Selectable const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Container_Selectable> _get_wref() const { return ::efl::eo::wref<Container_Selectable>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Container_Selectable* operator->() const { return this; }
    Container_Selectable* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Container_Selectable const& lhs, Container_Selectable const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Container_Selectable const& lhs, Container_Selectable const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Container_Selectable) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Container_Selectable>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
