#ifndef EFL_UI_PROPERTY_BIND_EO_HH
#define EFL_UI_PROPERTY_BIND_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_property_bind.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_UI_PROPERTY_BIND_FWD_GUARD
#define EFL_UI_PROPERTY_BIND_FWD_GUARD
namespace efl { namespace ui { 
struct Property_Bind;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Property_Bind {
    ::efl::eolian::return_traits<Eina_Error>::type property_bind( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type property) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_PROPERTY_BIND_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Property_Bind *>(this))); }
    operator ::efl::ui::Property_Bind() const;
    operator ::efl::ui::Property_Bind&();
    operator ::efl::ui::Property_Bind const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Property_Bind> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Property_Bind const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Property_Bind : private ::efl::eo::concrete
{
    explicit Property_Bind( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Property_Bind(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Property_Bind() = default;
    Property_Bind(Property_Bind const&) = default;
    Property_Bind(Property_Bind&&) = default;
    Property_Bind& operator=(Property_Bind const&) = default;
    Property_Bind& operator=(Property_Bind&&) = default;
    template <typename Derived>
    Property_Bind(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Property_Bind, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<Eina_Error>::type property_bind( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type property) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_PROPERTY_BIND_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Property_Bind *>(this))); }
    static struct properties_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_PROPERTY_BIND_EVENT_PROPERTIES_CHANGED; }
        typedef Efl_Ui_Property_Event parameter_type;
    } const properties_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    properties_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(properties_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    properties_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(properties_changed_event, *this, std::bind(function));
    }
#endif
    static struct property_bound_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_PROPERTY_BIND_EVENT_PROPERTY_BOUND; }
        typedef  ::efl::eina::stringshare parameter_type;
    } const property_bound_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    property_bound_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(property_bound_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    property_bound_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(property_bound_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Property_Bind> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Property_Bind const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Property_Bind> _get_wref() const { return ::efl::eo::wref<Property_Bind>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Property_Bind* operator->() const { return this; }
    Property_Bind* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Property_Bind const& lhs, Property_Bind const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Property_Bind const& lhs, Property_Bind const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Property_Bind) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Property_Bind>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
