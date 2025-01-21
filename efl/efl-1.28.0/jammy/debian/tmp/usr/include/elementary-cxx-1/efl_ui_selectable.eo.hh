#ifndef EFL_UI_SELECTABLE_EO_HH
#define EFL_UI_SELECTABLE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_selectable.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
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
struct Selectable {
    ::efl::eolian::return_traits<bool>::type selected_get() const;
    ::efl::eolian::return_traits<void>::type selected_set( ::efl::eolian::in_traits<bool>::type selected) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SELECTABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Selectable *>(this))); }
    operator ::efl::ui::Selectable() const;
    operator ::efl::ui::Selectable&();
    operator ::efl::ui::Selectable const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Selectable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Selectable const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Selectable : private ::efl::eo::concrete
{
    explicit Selectable( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Selectable(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Selectable() = default;
    Selectable(Selectable const&) = default;
    Selectable(Selectable&&) = default;
    Selectable& operator=(Selectable const&) = default;
    Selectable& operator=(Selectable&&) = default;
    template <typename Derived>
    Selectable(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Selectable, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<bool>::type selected_get() const;
    ::efl::eolian::return_traits<void>::type selected_set( ::efl::eolian::in_traits<bool>::type selected) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SELECTABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Selectable *>(this))); }
    static struct selected_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_EVENT_SELECTED_CHANGED; }
        typedef bool parameter_type;
    } const selected_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    selected_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(selected_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    selected_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(selected_changed_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Selectable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Selectable const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Selectable> _get_wref() const { return ::efl::eo::wref<Selectable>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Selectable* operator->() const { return this; }
    Selectable* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Selectable const& lhs, Selectable const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Selectable const& lhs, Selectable const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Selectable) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Selectable>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
