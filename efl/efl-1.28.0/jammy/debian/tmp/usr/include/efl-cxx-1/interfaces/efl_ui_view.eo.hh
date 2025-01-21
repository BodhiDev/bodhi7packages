#ifndef EFL_UI_VIEW_EO_HH
#define EFL_UI_VIEW_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_model.eo.h"
#include "efl_ui_view.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_model.eo.hh"
#ifndef EFL_UI_VIEW_FWD_GUARD
#define EFL_UI_VIEW_FWD_GUARD
namespace efl { namespace ui { 
struct View;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::View> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::View&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::View const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::View const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_MODEL_FWD_GUARD
#define EFL_MODEL_FWD_GUARD
namespace efl { 
struct Model;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Model> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Model&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Model const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Model const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct View {
    ::efl::eolian::return_traits< ::efl::Model>::type model_get() const;
    ::efl::eolian::return_traits<void>::type model_set( ::efl::eolian::in_traits< ::efl::Model>::type model) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_VIEW_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<View *>(this))); }
    operator ::efl::ui::View() const;
    operator ::efl::ui::View&();
    operator ::efl::ui::View const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<View> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<View const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct View : private ::efl::eo::concrete
{
    explicit View( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    View(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit View() = default;
    View(View const&) = default;
    View(View&&) = default;
    View& operator=(View const&) = default;
    View& operator=(View&&) = default;
    template <typename Derived>
    View(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< View, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits< ::efl::Model>::type model_get() const;
    ::efl::eolian::return_traits<void>::type model_set( ::efl::eolian::in_traits< ::efl::Model>::type model) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_VIEW_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<View *>(this))); }
    static struct model_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_VIEW_EVENT_MODEL_CHANGED; }
        typedef Efl_Model_Changed_Event parameter_type;
    } const model_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    model_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(model_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    model_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(model_changed_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<View> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<View const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<View> _get_wref() const { return ::efl::eo::wref<View>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const View* operator->() const { return this; }
    View* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(View const& lhs, View const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(View const& lhs, View const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(View) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<View>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
