#ifndef EFL_UI_SCROLLABLE_EO_HH
#define EFL_UI_SCROLLABLE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_scrollable.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_UI_SCROLLABLE_FWD_GUARD
#define EFL_UI_SCROLLABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Scrollable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollable const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Scrollable {
    ::efl::eolian::return_traits<Eina_Position2D>::type content_pos_get() const;
    ::efl::eolian::return_traits<void>::type content_pos_set( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const;
    ::efl::eolian::return_traits<Eina_Size2D>::type content_size_get() const;
    ::efl::eolian::return_traits<Eina_Rect>::type viewport_geometry_get() const;
    ::efl::eolian::return_traits<void>::type bounce_enabled_get( ::efl::eolian::out_traits<bool>::type horiz,  ::efl::eolian::out_traits<bool>::type vert) const;
    ::efl::eolian::return_traits<void>::type bounce_enabled_set( ::efl::eolian::in_traits<bool>::type horiz,  ::efl::eolian::in_traits<bool>::type vert) const;
    ::efl::eolian::return_traits<bool>::type scroll_freeze_get() const;
    ::efl::eolian::return_traits<void>::type scroll_freeze_set( ::efl::eolian::in_traits<bool>::type freeze) const;
    ::efl::eolian::return_traits<bool>::type scroll_hold_get() const;
    ::efl::eolian::return_traits<void>::type scroll_hold_set( ::efl::eolian::in_traits<bool>::type hold) const;
    ::efl::eolian::return_traits<void>::type looping_get( ::efl::eolian::out_traits<bool>::type loop_h,  ::efl::eolian::out_traits<bool>::type loop_v) const;
    ::efl::eolian::return_traits<void>::type looping_set( ::efl::eolian::in_traits<bool>::type loop_h,  ::efl::eolian::in_traits<bool>::type loop_v) const;
    ::efl::eolian::return_traits<Efl_Ui_Layout_Orientation>::type movement_block_get() const;
    ::efl::eolian::return_traits<void>::type movement_block_set( ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type block) const;
    ::efl::eolian::return_traits<void>::type gravity_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const;
    ::efl::eolian::return_traits<void>::type gravity_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
    ::efl::eolian::return_traits<void>::type match_content_set( ::efl::eolian::in_traits<bool>::type w,  ::efl::eolian::in_traits<bool>::type h) const;
    ::efl::eolian::return_traits<Eina_Position2D>::type step_size_get() const;
    ::efl::eolian::return_traits<void>::type step_size_set( ::efl::eolian::in_traits<Eina_Position2D>::type step) const;
    ::efl::eolian::return_traits<void>::type scroll( ::efl::eolian::in_traits<Eina_Rect>::type rect,  ::efl::eolian::in_traits<bool>::type animation) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SCROLLABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Scrollable *>(this))); }
    operator ::efl::ui::Scrollable() const;
    operator ::efl::ui::Scrollable&();
    operator ::efl::ui::Scrollable const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Scrollable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Scrollable const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Scrollable : private ::efl::eo::concrete
{
    explicit Scrollable( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Scrollable(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Scrollable() = default;
    Scrollable(Scrollable const&) = default;
    Scrollable(Scrollable&&) = default;
    Scrollable& operator=(Scrollable const&) = default;
    Scrollable& operator=(Scrollable&&) = default;
    template <typename Derived>
    Scrollable(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Scrollable, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<Eina_Position2D>::type content_pos_get() const;
    ::efl::eolian::return_traits<void>::type content_pos_set( ::efl::eolian::in_traits<Eina_Position2D>::type pos) const;
    ::efl::eolian::return_traits<Eina_Size2D>::type content_size_get() const;
    ::efl::eolian::return_traits<Eina_Rect>::type viewport_geometry_get() const;
    ::efl::eolian::return_traits<void>::type bounce_enabled_get( ::efl::eolian::out_traits<bool>::type horiz,  ::efl::eolian::out_traits<bool>::type vert) const;
    ::efl::eolian::return_traits<void>::type bounce_enabled_set( ::efl::eolian::in_traits<bool>::type horiz,  ::efl::eolian::in_traits<bool>::type vert) const;
    ::efl::eolian::return_traits<bool>::type scroll_freeze_get() const;
    ::efl::eolian::return_traits<void>::type scroll_freeze_set( ::efl::eolian::in_traits<bool>::type freeze) const;
    ::efl::eolian::return_traits<bool>::type scroll_hold_get() const;
    ::efl::eolian::return_traits<void>::type scroll_hold_set( ::efl::eolian::in_traits<bool>::type hold) const;
    ::efl::eolian::return_traits<void>::type looping_get( ::efl::eolian::out_traits<bool>::type loop_h,  ::efl::eolian::out_traits<bool>::type loop_v) const;
    ::efl::eolian::return_traits<void>::type looping_set( ::efl::eolian::in_traits<bool>::type loop_h,  ::efl::eolian::in_traits<bool>::type loop_v) const;
    ::efl::eolian::return_traits<Efl_Ui_Layout_Orientation>::type movement_block_get() const;
    ::efl::eolian::return_traits<void>::type movement_block_set( ::efl::eolian::in_traits<Efl_Ui_Layout_Orientation>::type block) const;
    ::efl::eolian::return_traits<void>::type gravity_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const;
    ::efl::eolian::return_traits<void>::type gravity_set( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
    ::efl::eolian::return_traits<void>::type match_content_set( ::efl::eolian::in_traits<bool>::type w,  ::efl::eolian::in_traits<bool>::type h) const;
    ::efl::eolian::return_traits<Eina_Position2D>::type step_size_get() const;
    ::efl::eolian::return_traits<void>::type step_size_set( ::efl::eolian::in_traits<Eina_Position2D>::type step) const;
    ::efl::eolian::return_traits<void>::type scroll( ::efl::eolian::in_traits<Eina_Rect>::type rect,  ::efl::eolian::in_traits<bool>::type animation) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SCROLLABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Scrollable *>(this))); }
    static struct scroll_started_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_SCROLL_STARTED; }
        typedef void parameter_type;
    } const scroll_started_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_started_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_started_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_started_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_started_event, *this, std::bind(function));
    }
#endif
    static struct scroll_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_SCROLL_CHANGED; }
        typedef void parameter_type;
    } const scroll_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_changed_event, *this, std::bind(function));
    }
#endif
    static struct scroll_finished_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_SCROLL_FINISHED; }
        typedef void parameter_type;
    } const scroll_finished_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_finished_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_finished_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_finished_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_finished_event, *this, std::bind(function));
    }
#endif
    static struct scroll_up_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_SCROLL_UP; }
        typedef void parameter_type;
    } const scroll_up_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_up_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_up_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_up_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_up_event, *this, std::bind(function));
    }
#endif
    static struct scroll_down_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_SCROLL_DOWN; }
        typedef void parameter_type;
    } const scroll_down_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_down_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_down_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_down_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_down_event, *this, std::bind(function));
    }
#endif
    static struct scroll_left_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_SCROLL_LEFT; }
        typedef void parameter_type;
    } const scroll_left_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_left_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_left_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_left_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_left_event, *this, std::bind(function));
    }
#endif
    static struct scroll_right_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_SCROLL_RIGHT; }
        typedef void parameter_type;
    } const scroll_right_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_right_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_right_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_right_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_right_event, *this, std::bind(function));
    }
#endif
    static struct edge_up_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_EDGE_UP; }
        typedef void parameter_type;
    } const edge_up_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    edge_up_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(edge_up_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    edge_up_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(edge_up_event, *this, std::bind(function));
    }
#endif
    static struct edge_down_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_EDGE_DOWN; }
        typedef void parameter_type;
    } const edge_down_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    edge_down_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(edge_down_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    edge_down_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(edge_down_event, *this, std::bind(function));
    }
#endif
    static struct edge_left_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_EDGE_LEFT; }
        typedef void parameter_type;
    } const edge_left_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    edge_left_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(edge_left_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    edge_left_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(edge_left_event, *this, std::bind(function));
    }
#endif
    static struct edge_right_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_EDGE_RIGHT; }
        typedef void parameter_type;
    } const edge_right_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    edge_right_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(edge_right_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    edge_right_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(edge_right_event, *this, std::bind(function));
    }
#endif
    static struct scroll_anim_started_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_SCROLL_ANIM_STARTED; }
        typedef void parameter_type;
    } const scroll_anim_started_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_anim_started_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_anim_started_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_anim_started_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_anim_started_event, *this, std::bind(function));
    }
#endif
    static struct scroll_anim_finished_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_SCROLL_ANIM_FINISHED; }
        typedef void parameter_type;
    } const scroll_anim_finished_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_anim_finished_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_anim_finished_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_anim_finished_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_anim_finished_event, *this, std::bind(function));
    }
#endif
    static struct scroll_drag_started_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_SCROLL_DRAG_STARTED; }
        typedef void parameter_type;
    } const scroll_drag_started_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_drag_started_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_drag_started_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_drag_started_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_drag_started_event, *this, std::bind(function));
    }
#endif
    static struct scroll_drag_finished_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_SCROLL_DRAG_FINISHED; }
        typedef void parameter_type;
    } const scroll_drag_finished_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_drag_finished_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_drag_finished_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    scroll_drag_finished_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(scroll_drag_finished_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Scrollable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Scrollable const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Scrollable> _get_wref() const { return ::efl::eo::wref<Scrollable>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Scrollable* operator->() const { return this; }
    Scrollable* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Scrollable const& lhs, Scrollable const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Scrollable const& lhs, Scrollable const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Scrollable) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Scrollable>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
