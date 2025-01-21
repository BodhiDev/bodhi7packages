#ifndef EFL_UI_ITEM_CLICKABLE_EO_HH
#define EFL_UI_ITEM_CLICKABLE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_item_clickable.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_UI_ITEM_CLICKABLE_FWD_GUARD
#define EFL_UI_ITEM_CLICKABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Item_Clickable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Item_Clickable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Item_Clickable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Item_Clickable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Item_Clickable const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Item_Clickable {
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_ITEM_CLICKABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Item_Clickable *>(this))); }
    operator ::efl::ui::Item_Clickable() const;
    operator ::efl::ui::Item_Clickable&();
    operator ::efl::ui::Item_Clickable const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Item_Clickable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Item_Clickable const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Item_Clickable : private ::efl::eo::concrete
{
    explicit Item_Clickable( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Item_Clickable(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Item_Clickable() = default;
    Item_Clickable(Item_Clickable const&) = default;
    Item_Clickable(Item_Clickable&&) = default;
    Item_Clickable& operator=(Item_Clickable const&) = default;
    Item_Clickable& operator=(Item_Clickable&&) = default;
    template <typename Derived>
    Item_Clickable(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Item_Clickable, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    static Efl_Class const* _eo_class()
    {
        return EFL_UI_ITEM_CLICKABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Item_Clickable *>(this))); }
#ifdef EFL_UI_ITEM_CLICKABLE_BETA
    static struct item_pressed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_ITEM_PRESSED; }
        typedef Efl_Ui_Item_Clickable_Pressed parameter_type;
    } const item_pressed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_pressed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_pressed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_pressed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_pressed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_UI_ITEM_CLICKABLE_BETA
    static struct item_unpressed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_ITEM_UNPRESSED; }
        typedef Efl_Ui_Item_Clickable_Pressed parameter_type;
    } const item_unpressed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_unpressed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_unpressed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_unpressed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_unpressed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_UI_ITEM_CLICKABLE_BETA
    static struct item_longpressed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_ITEM_LONGPRESSED; }
        typedef Efl_Ui_Item_Clickable_Pressed parameter_type;
    } const item_longpressed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_longpressed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_longpressed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_longpressed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_longpressed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_UI_ITEM_CLICKABLE_BETA
    static struct item_clicked_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_ITEM_CLICKED; }
        typedef Efl_Ui_Item_Clickable_Clicked parameter_type;
    } const item_clicked_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_clicked_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_clicked_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_clicked_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_clicked_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_UI_ITEM_CLICKABLE_BETA
    static struct item_clicked_any_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_ITEM_CLICKED_ANY; }
        typedef Efl_Ui_Item_Clickable_Clicked parameter_type;
    } const item_clicked_any_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_clicked_any_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_clicked_any_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_clicked_any_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_clicked_any_event, *this, std::bind(function));
    }
#endif
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Item_Clickable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Item_Clickable const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Item_Clickable> _get_wref() const { return ::efl::eo::wref<Item_Clickable>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Item_Clickable* operator->() const { return this; }
    Item_Clickable* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Item_Clickable const& lhs, Item_Clickable const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Item_Clickable const& lhs, Item_Clickable const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Item_Clickable) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Item_Clickable>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
