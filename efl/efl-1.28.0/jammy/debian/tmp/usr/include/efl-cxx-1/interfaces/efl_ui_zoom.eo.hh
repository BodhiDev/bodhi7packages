#ifndef EFL_UI_ZOOM_EO_HH
#define EFL_UI_ZOOM_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_zoom.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_UI_ZOOM_FWD_GUARD
#define EFL_UI_ZOOM_FWD_GUARD
namespace efl { namespace ui { 
struct Zoom;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Zoom> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Zoom&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Zoom const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Zoom const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Zoom {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type zoom_animation_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type zoom_animation_set( ::efl::eolian::in_traits<bool>::type paused) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type zoom_level_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type zoom_level_set( ::efl::eolian::in_traits<double>::type zoom) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Ui_Zoom_Mode>::type zoom_mode_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type zoom_mode_set( ::efl::eolian::in_traits<Efl_Ui_Zoom_Mode>::type mode) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_ZOOM_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Zoom *>(this))); }
    operator ::efl::ui::Zoom() const;
    operator ::efl::ui::Zoom&();
    operator ::efl::ui::Zoom const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Zoom> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Zoom const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Zoom : private ::efl::eo::concrete
{
    explicit Zoom( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Zoom(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Zoom() = default;
    Zoom(Zoom const&) = default;
    Zoom(Zoom&&) = default;
    Zoom& operator=(Zoom const&) = default;
    Zoom& operator=(Zoom&&) = default;
    template <typename Derived>
    Zoom(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Zoom, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type zoom_animation_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type zoom_animation_set( ::efl::eolian::in_traits<bool>::type paused) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type zoom_level_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type zoom_level_set( ::efl::eolian::in_traits<double>::type zoom) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Ui_Zoom_Mode>::type zoom_mode_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type zoom_mode_set( ::efl::eolian::in_traits<Efl_Ui_Zoom_Mode>::type mode) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_ZOOM_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Zoom *>(this))); }
#ifdef EFL_UI_ZOOM_BETA
    static struct zoom_start_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_ZOOM_START; }
        typedef void parameter_type;
    } const zoom_start_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    zoom_start_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(zoom_start_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    zoom_start_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(zoom_start_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_UI_ZOOM_BETA
    static struct zoom_stop_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_ZOOM_STOP; }
        typedef void parameter_type;
    } const zoom_stop_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    zoom_stop_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(zoom_stop_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    zoom_stop_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(zoom_stop_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_UI_ZOOM_BETA
    static struct zoom_change_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_ZOOM_CHANGE; }
        typedef void parameter_type;
    } const zoom_change_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    zoom_change_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(zoom_change_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    zoom_change_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(zoom_change_event, *this, std::bind(function));
    }
#endif
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Zoom> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Zoom const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Zoom> _get_wref() const { return ::efl::eo::wref<Zoom>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Zoom* operator->() const { return this; }
    Zoom* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Zoom const& lhs, Zoom const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Zoom const& lhs, Zoom const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Zoom) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Zoom>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
