#ifndef EFL_UI_SCROLLBAR_EO_HH
#define EFL_UI_SCROLLBAR_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_scrollbar.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_UI_SCROLLBAR_FWD_GUARD
#define EFL_UI_SCROLLBAR_FWD_GUARD
namespace efl { namespace ui { 
struct Scrollbar;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollbar> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollbar&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollbar const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollbar const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Scrollbar {
    ::efl::eolian::return_traits<void>::type bar_mode_get( ::efl::eolian::out_traits<Efl_Ui_Scrollbar_Mode>::type hbar,  ::efl::eolian::out_traits<Efl_Ui_Scrollbar_Mode>::type vbar) const;
    ::efl::eolian::return_traits<void>::type bar_mode_set( ::efl::eolian::in_traits<Efl_Ui_Scrollbar_Mode>::type hbar,  ::efl::eolian::in_traits<Efl_Ui_Scrollbar_Mode>::type vbar) const;
    ::efl::eolian::return_traits<void>::type bar_size_get( ::efl::eolian::out_traits<double>::type width,  ::efl::eolian::out_traits<double>::type height) const;
    ::efl::eolian::return_traits<void>::type bar_position_get( ::efl::eolian::out_traits<double>::type posx,  ::efl::eolian::out_traits<double>::type posy) const;
    ::efl::eolian::return_traits<void>::type bar_position_set( ::efl::eolian::in_traits<double>::type posx,  ::efl::eolian::in_traits<double>::type posy) const;
    ::efl::eolian::return_traits<void>::type bar_visibility_get( ::efl::eolian::out_traits<bool>::type hbar,  ::efl::eolian::out_traits<bool>::type vbar) const;
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_SCROLLBAR_PROTECTED
    ::efl::eolian::return_traits<void>::type bar_visibility_update() const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SCROLLBAR_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Scrollbar *>(this))); }
    operator ::efl::ui::Scrollbar() const;
    operator ::efl::ui::Scrollbar&();
    operator ::efl::ui::Scrollbar const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Scrollbar> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Scrollbar const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Scrollbar : private ::efl::eo::concrete
{
    explicit Scrollbar( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Scrollbar(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Scrollbar() = default;
    Scrollbar(Scrollbar const&) = default;
    Scrollbar(Scrollbar&&) = default;
    Scrollbar& operator=(Scrollbar const&) = default;
    Scrollbar& operator=(Scrollbar&&) = default;
    template <typename Derived>
    Scrollbar(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Scrollbar, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<void>::type bar_mode_get( ::efl::eolian::out_traits<Efl_Ui_Scrollbar_Mode>::type hbar,  ::efl::eolian::out_traits<Efl_Ui_Scrollbar_Mode>::type vbar) const;
    ::efl::eolian::return_traits<void>::type bar_mode_set( ::efl::eolian::in_traits<Efl_Ui_Scrollbar_Mode>::type hbar,  ::efl::eolian::in_traits<Efl_Ui_Scrollbar_Mode>::type vbar) const;
    ::efl::eolian::return_traits<void>::type bar_size_get( ::efl::eolian::out_traits<double>::type width,  ::efl::eolian::out_traits<double>::type height) const;
    ::efl::eolian::return_traits<void>::type bar_position_get( ::efl::eolian::out_traits<double>::type posx,  ::efl::eolian::out_traits<double>::type posy) const;
    ::efl::eolian::return_traits<void>::type bar_position_set( ::efl::eolian::in_traits<double>::type posx,  ::efl::eolian::in_traits<double>::type posy) const;
    ::efl::eolian::return_traits<void>::type bar_visibility_get( ::efl::eolian::out_traits<bool>::type hbar,  ::efl::eolian::out_traits<bool>::type vbar) const;
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_SCROLLBAR_PROTECTED
    ::efl::eolian::return_traits<void>::type bar_visibility_update() const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SCROLLBAR_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Scrollbar *>(this))); }
    static struct bar_pressed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_SCROLLBAR_EVENT_BAR_PRESSED; }
        typedef Efl_Ui_Layout_Orientation parameter_type;
    } const bar_pressed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    bar_pressed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(bar_pressed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    bar_pressed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(bar_pressed_event, *this, std::bind(function));
    }
#endif
    static struct bar_unpressed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_SCROLLBAR_EVENT_BAR_UNPRESSED; }
        typedef Efl_Ui_Layout_Orientation parameter_type;
    } const bar_unpressed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    bar_unpressed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(bar_unpressed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    bar_unpressed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(bar_unpressed_event, *this, std::bind(function));
    }
#endif
    static struct bar_dragged_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_SCROLLBAR_EVENT_BAR_DRAGGED; }
        typedef Efl_Ui_Layout_Orientation parameter_type;
    } const bar_dragged_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    bar_dragged_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(bar_dragged_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    bar_dragged_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(bar_dragged_event, *this, std::bind(function));
    }
#endif
    static struct bar_size_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_SCROLLBAR_EVENT_BAR_SIZE_CHANGED; }
        typedef void parameter_type;
    } const bar_size_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    bar_size_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(bar_size_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    bar_size_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(bar_size_changed_event, *this, std::bind(function));
    }
#endif
    static struct bar_pos_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_SCROLLBAR_EVENT_BAR_POS_CHANGED; }
        typedef void parameter_type;
    } const bar_pos_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    bar_pos_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(bar_pos_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    bar_pos_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(bar_pos_changed_event, *this, std::bind(function));
    }
#endif
    static struct bar_show_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_SCROLLBAR_EVENT_BAR_SHOW; }
        typedef Efl_Ui_Layout_Orientation parameter_type;
    } const bar_show_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    bar_show_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(bar_show_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    bar_show_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(bar_show_event, *this, std::bind(function));
    }
#endif
    static struct bar_hide_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_SCROLLBAR_EVENT_BAR_HIDE; }
        typedef Efl_Ui_Layout_Orientation parameter_type;
    } const bar_hide_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    bar_hide_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(bar_hide_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    bar_hide_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(bar_hide_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Scrollbar> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Scrollbar const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Scrollbar> _get_wref() const { return ::efl::eo::wref<Scrollbar>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Scrollbar* operator->() const { return this; }
    Scrollbar* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Scrollbar const& lhs, Scrollbar const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Scrollbar const& lhs, Scrollbar const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Scrollbar) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Scrollbar>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
