#ifndef EFL_MODEL_EO_HH
#define EFL_MODEL_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_model.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_object.eo.hh"
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
namespace efl { 
struct Model {
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type properties_get() const;
    ::efl::eolian::return_traits< ::efl::eina::value_view>::type property_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type property) const;
    ::efl::eolian::return_traits< unsigned int>::type children_count_get() const;
    ::efl::eolian::return_traits< ::efl::Object>::type child_add() const;
    ::efl::eolian::return_traits<void>::type child_del( ::efl::eolian::in_traits< ::efl::Object>::type child) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_MODEL_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Model *>(this))); }
    operator ::efl::Model() const;
    operator ::efl::Model&();
    operator ::efl::Model const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Model> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Model const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Model : private ::efl::eo::concrete
{
    explicit Model( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Model(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Model() = default;
    Model(Model const&) = default;
    Model(Model&&) = default;
    Model& operator=(Model const&) = default;
    Model& operator=(Model&&) = default;
    template <typename Derived>
    Model(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Model, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type properties_get() const;
    ::efl::eolian::return_traits< ::efl::eina::value_view>::type property_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type property) const;
    ::efl::eolian::return_traits< unsigned int>::type children_count_get() const;
    ::efl::eolian::return_traits< ::efl::Object>::type child_add() const;
    ::efl::eolian::return_traits<void>::type child_del( ::efl::eolian::in_traits< ::efl::Object>::type child) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_MODEL_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Model *>(this))); }
    static struct properties_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_MODEL_EVENT_PROPERTIES_CHANGED; }
        typedef Efl_Model_Property_Event parameter_type;
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
#ifdef EFL_MODEL_BETA
    static struct child_added_event
    {
        static Efl_Event_Description const* description()
        { return EFL_MODEL_EVENT_CHILD_ADDED; }
        typedef Efl_Model_Children_Event parameter_type;
    } const child_added_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    child_added_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(child_added_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    child_added_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(child_added_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_MODEL_BETA
    static struct child_removed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_MODEL_EVENT_CHILD_REMOVED; }
        typedef Efl_Model_Children_Event parameter_type;
    } const child_removed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    child_removed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(child_removed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    child_removed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(child_removed_event, *this, std::bind(function));
    }
#endif
#endif
    static struct children_count_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_MODEL_EVENT_CHILDREN_COUNT_CHANGED; }
        typedef void parameter_type;
    } const children_count_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    children_count_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(children_count_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    children_count_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(children_count_changed_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Model> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Model const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Model> _get_wref() const { return ::efl::eo::wref<Model>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Model* operator->() const { return this; }
    Model* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Model const& lhs, Model const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Model const& lhs, Model const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Model) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Model>::value, "");
} 

#pragma GCC diagnostic pop

#endif
