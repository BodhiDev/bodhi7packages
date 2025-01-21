#ifndef EFL_UI_WIDGET_SCROLLABLE_CONTENT_EO_HH
#define EFL_UI_WIDGET_SCROLLABLE_CONTENT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_object.eo.h"
#include "efl_ui_widget_scrollable_content.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_object.eo.hh"
#ifndef EFL_UI_WIDGET_SCROLLABLE_CONTENT_FWD_GUARD
#define EFL_UI_WIDGET_SCROLLABLE_CONTENT_FWD_GUARD
namespace efl { namespace ui { 
struct Widget_Scrollable_Content;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Scrollable_Content> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Scrollable_Content&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Scrollable_Content const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Scrollable_Content const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_OBJECT_FWD_GUARD
#define EFL_CANVAS_OBJECT_FWD_GUARD
namespace efl { namespace canvas { 
struct Object;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Widget_Scrollable_Content {
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_WIDGET_SCROLLABLE_CONTENT_PROTECTED
    ::efl::eolian::return_traits<bool>::type scrollable_content_did_group_calc_get() const;
#endif
#endif
    ::efl::eolian::return_traits< ::efl::canvas::Object>::type scrollable_content_get() const;
    ::efl::eolian::return_traits<bool>::type scrollable_content_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type content) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type scrollable_text_get() const;
    ::efl::eolian::return_traits<void>::type scrollable_text_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_WIDGET_SCROLLABLE_CONTENT_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Widget_Scrollable_Content *>(this))); }
    operator ::efl::ui::Widget_Scrollable_Content() const;
    operator ::efl::ui::Widget_Scrollable_Content&();
    operator ::efl::ui::Widget_Scrollable_Content const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Widget_Scrollable_Content> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Widget_Scrollable_Content const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Widget_Scrollable_Content : private ::efl::eo::concrete
{
    explicit Widget_Scrollable_Content( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Widget_Scrollable_Content(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Widget_Scrollable_Content() = default;
    Widget_Scrollable_Content(Widget_Scrollable_Content const&) = default;
    Widget_Scrollable_Content(Widget_Scrollable_Content&&) = default;
    Widget_Scrollable_Content& operator=(Widget_Scrollable_Content const&) = default;
    Widget_Scrollable_Content& operator=(Widget_Scrollable_Content&&) = default;
    template <typename Derived>
    Widget_Scrollable_Content(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Widget_Scrollable_Content, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_WIDGET_SCROLLABLE_CONTENT_PROTECTED
    ::efl::eolian::return_traits<bool>::type scrollable_content_did_group_calc_get() const;
#endif
#endif
    ::efl::eolian::return_traits< ::efl::canvas::Object>::type scrollable_content_get() const;
    ::efl::eolian::return_traits<bool>::type scrollable_content_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type content) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type scrollable_text_get() const;
    ::efl::eolian::return_traits<void>::type scrollable_text_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type text) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_WIDGET_SCROLLABLE_CONTENT_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Widget_Scrollable_Content *>(this))); }
    static struct optimal_size_calc_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_WIDGET_SCROLLABLE_CONTENT_EVENT_OPTIMAL_SIZE_CALC; }
        typedef Eina_Size2D parameter_type;
    } const optimal_size_calc_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    optimal_size_calc_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(optimal_size_calc_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    optimal_size_calc_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(optimal_size_calc_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Widget_Scrollable_Content> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Widget_Scrollable_Content const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Widget_Scrollable_Content> _get_wref() const { return ::efl::eo::wref<Widget_Scrollable_Content>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Widget_Scrollable_Content* operator->() const { return this; }
    Widget_Scrollable_Content* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Widget_Scrollable_Content const& lhs, Widget_Scrollable_Content const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Widget_Scrollable_Content const& lhs, Widget_Scrollable_Content const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Widget_Scrollable_Content) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Widget_Scrollable_Content>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
