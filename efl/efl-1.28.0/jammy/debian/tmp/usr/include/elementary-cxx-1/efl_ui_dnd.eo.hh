#ifndef EFL_UI_DND_EO_HH
#define EFL_UI_DND_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_content.eo.h"
#include "efl_ui_dnd.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_content.eo.hh"
#ifndef EFL_UI_DND_FWD_GUARD
#define EFL_UI_DND_FWD_GUARD
namespace efl { namespace ui { 
struct Dnd;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Dnd> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Dnd&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Dnd const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Dnd const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CONTENT_FWD_GUARD
#define EFL_CONTENT_FWD_GUARD
namespace efl { 
struct Content;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Content> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Content&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Content const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Content const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Dnd {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type drag_offset_set( ::efl::eolian::in_traits< unsigned int>::type seat,  ::efl::eolian::in_traits<Eina_Size2D>::type offset) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::Content>::type drag_start( ::efl::eolian::in_traits<Eina_Content *>::type content,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type action,  ::efl::eolian::in_traits< unsigned int>::type seat) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type drag_cancel( ::efl::eolian::in_traits< unsigned int>::type seat) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_DND_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Dnd *>(this))); }
    operator ::efl::ui::Dnd() const;
    operator ::efl::ui::Dnd&();
    operator ::efl::ui::Dnd const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Dnd> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Dnd const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Dnd : private ::efl::eo::concrete
{
    explicit Dnd( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Dnd(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Dnd() = default;
    Dnd(Dnd const&) = default;
    Dnd(Dnd&&) = default;
    Dnd& operator=(Dnd const&) = default;
    Dnd& operator=(Dnd&&) = default;
    template <typename Derived>
    Dnd(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Dnd, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type drag_offset_set( ::efl::eolian::in_traits< unsigned int>::type seat,  ::efl::eolian::in_traits<Eina_Size2D>::type offset) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::Content>::type drag_start( ::efl::eolian::in_traits<Eina_Content *>::type content,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type action,  ::efl::eolian::in_traits< unsigned int>::type seat) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type drag_cancel( ::efl::eolian::in_traits< unsigned int>::type seat) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_DND_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Dnd *>(this))); }
#ifdef EFL_UI_DND_BETA
    static struct drop_entered_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_DND_EVENT_DROP_ENTERED; }
        typedef Efl_Ui_Drop_Event parameter_type;
    } const drop_entered_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    drop_entered_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(drop_entered_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    drop_entered_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(drop_entered_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_UI_DND_BETA
    static struct drop_left_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_DND_EVENT_DROP_LEFT; }
        typedef Efl_Ui_Drop_Event parameter_type;
    } const drop_left_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    drop_left_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(drop_left_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    drop_left_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(drop_left_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_UI_DND_BETA
    static struct drop_position_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_DND_EVENT_DROP_POSITION_CHANGED; }
        typedef Efl_Ui_Drop_Event parameter_type;
    } const drop_position_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    drop_position_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(drop_position_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    drop_position_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(drop_position_changed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_UI_DND_BETA
    static struct drop_dropped_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_DND_EVENT_DROP_DROPPED; }
        typedef Efl_Ui_Drop_Dropped_Event parameter_type;
    } const drop_dropped_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    drop_dropped_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(drop_dropped_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    drop_dropped_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(drop_dropped_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_UI_DND_BETA
    static struct drag_started_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_DND_EVENT_DRAG_STARTED; }
        typedef Efl_Ui_Drag_Started_Event parameter_type;
    } const drag_started_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    drag_started_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(drag_started_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    drag_started_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(drag_started_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_UI_DND_BETA
    static struct drag_finished_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_DND_EVENT_DRAG_FINISHED; }
        typedef Efl_Ui_Drag_Finished_Event parameter_type;
    } const drag_finished_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    drag_finished_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(drag_finished_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    drag_finished_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(drag_finished_event, *this, std::bind(function));
    }
#endif
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Dnd> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Dnd const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Dnd> _get_wref() const { return ::efl::eo::wref<Dnd>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Dnd* operator->() const { return this; }
    Dnd* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Dnd const& lhs, Dnd const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Dnd const& lhs, Dnd const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Dnd) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Dnd>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
