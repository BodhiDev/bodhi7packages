#ifndef EFL_ACCESS_SELECTION_EO_HH
#define EFL_ACCESS_SELECTION_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_access_selection.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_object.eo.hh"
#ifndef EFL_ACCESS_SELECTION_FWD_GUARD
#define EFL_ACCESS_SELECTION_FWD_GUARD
namespace efl { namespace access { 
struct Selection;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Selection> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Selection&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Selection const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Selection const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_OBJECT_FWD_GUARD
#define EFL_OBJECT_FWD_GUARD
namespace efl { 
struct Object;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace access { 
struct Selection {
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
    ::efl::eolian::return_traits<int>::type selected_children_count_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
    ::efl::eolian::return_traits< ::efl::Object>::type selected_child_get( ::efl::eolian::in_traits<int>::type selected_child_index) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
    ::efl::eolian::return_traits<bool>::type child_select( ::efl::eolian::in_traits<int>::type child_index) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
    ::efl::eolian::return_traits<bool>::type selected_child_deselect( ::efl::eolian::in_traits<int>::type child_index) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
    ::efl::eolian::return_traits<bool>::type is_child_selected( ::efl::eolian::in_traits<int>::type child_index) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
    ::efl::eolian::return_traits<bool>::type all_children_select() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
    ::efl::eolian::return_traits<bool>::type access_selection_clear() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
    ::efl::eolian::return_traits<bool>::type child_deselect( ::efl::eolian::in_traits<int>::type child_index) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_ACCESS_SELECTION_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Selection *>(this))); }
    operator ::efl::access::Selection() const;
    operator ::efl::access::Selection&();
    operator ::efl::access::Selection const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Selection> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Selection const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace access { 
struct Selection : private ::efl::eo::concrete
{
    explicit Selection( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Selection(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Selection() = default;
    Selection(Selection const&) = default;
    Selection(Selection&&) = default;
    Selection& operator=(Selection const&) = default;
    Selection& operator=(Selection&&) = default;
    template <typename Derived>
    Selection(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Selection, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
    ::efl::eolian::return_traits<int>::type selected_children_count_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
    ::efl::eolian::return_traits< ::efl::Object>::type selected_child_get( ::efl::eolian::in_traits<int>::type selected_child_index) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
    ::efl::eolian::return_traits<bool>::type child_select( ::efl::eolian::in_traits<int>::type child_index) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
    ::efl::eolian::return_traits<bool>::type selected_child_deselect( ::efl::eolian::in_traits<int>::type child_index) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
    ::efl::eolian::return_traits<bool>::type is_child_selected( ::efl::eolian::in_traits<int>::type child_index) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
    ::efl::eolian::return_traits<bool>::type all_children_select() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
    ::efl::eolian::return_traits<bool>::type access_selection_clear() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_SELECTION_PROTECTED
    ::efl::eolian::return_traits<bool>::type child_deselect( ::efl::eolian::in_traits<int>::type child_index) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_ACCESS_SELECTION_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Selection *>(this))); }
#ifdef EFL_ACCESS_SELECTION_BETA
    static struct access_selection_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_SELECTION_EVENT_ACCESS_SELECTION_CHANGED; }
        typedef void parameter_type;
    } const access_selection_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    access_selection_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(access_selection_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    access_selection_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(access_selection_changed_event, *this, std::bind(function));
    }
#endif
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Selection> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Selection const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Selection> _get_wref() const { return ::efl::eo::wref<Selection>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Selection* operator->() const { return this; }
    Selection* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Selection const& lhs, Selection const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Selection const& lhs, Selection const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Selection) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Selection>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
