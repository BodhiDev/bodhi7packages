#ifndef EFL_UI_SINGLE_SELECTABLE_EO_HH
#define EFL_UI_SINGLE_SELECTABLE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_selectable.eo.h"
#include "efl_ui_single_selectable.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_ui_selectable.eo.hh"
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Single_Selectable {
    ::efl::eolian::return_traits< ::efl::ui::Selectable>::type last_selected_get() const;
    ::efl::eolian::return_traits< ::efl::ui::Selectable>::type fallback_selection_get() const;
    ::efl::eolian::return_traits<void>::type fallback_selection_set( ::efl::eolian::in_traits< ::efl::ui::Selectable>::type fallback) const;
    ::efl::eolian::return_traits<bool>::type allow_manual_deselection_get() const;
    ::efl::eolian::return_traits<void>::type allow_manual_deselection_set( ::efl::eolian::in_traits<bool>::type allow_manual_deselection) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SINGLE_SELECTABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Single_Selectable *>(this))); }
    operator ::efl::ui::Single_Selectable() const;
    operator ::efl::ui::Single_Selectable&();
    operator ::efl::ui::Single_Selectable const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Single_Selectable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Single_Selectable const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Single_Selectable : private ::efl::eo::concrete
{
    explicit Single_Selectable( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Single_Selectable(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Single_Selectable() = default;
    Single_Selectable(Single_Selectable const&) = default;
    Single_Selectable(Single_Selectable&&) = default;
    Single_Selectable& operator=(Single_Selectable const&) = default;
    Single_Selectable& operator=(Single_Selectable&&) = default;
    template <typename Derived>
    Single_Selectable(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Single_Selectable, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits< ::efl::ui::Selectable>::type last_selected_get() const;
    ::efl::eolian::return_traits< ::efl::ui::Selectable>::type fallback_selection_get() const;
    ::efl::eolian::return_traits<void>::type fallback_selection_set( ::efl::eolian::in_traits< ::efl::ui::Selectable>::type fallback) const;
    ::efl::eolian::return_traits<bool>::type allow_manual_deselection_get() const;
    ::efl::eolian::return_traits<void>::type allow_manual_deselection_set( ::efl::eolian::in_traits<bool>::type allow_manual_deselection) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SINGLE_SELECTABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Single_Selectable *>(this))); }
    static struct selection_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_SELECTABLE_EVENT_SELECTION_CHANGED; }
        typedef void parameter_type;
    } const selection_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    selection_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(selection_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    selection_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(selection_changed_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Single_Selectable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Single_Selectable const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Single_Selectable> _get_wref() const { return ::efl::eo::wref<Single_Selectable>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Single_Selectable* operator->() const { return this; }
    Single_Selectable* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Single_Selectable const& lhs, Single_Selectable const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Single_Selectable const& lhs, Single_Selectable const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Single_Selectable) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Single_Selectable>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
