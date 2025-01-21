#ifndef EFL_UI_FACTORY_EO_HH
#define EFL_UI_FACTORY_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_entity.eo.h"
#include "efl_model.eo.h"
#include "efl_ui_factory.eo.h"
#include "efl_ui_factory_bind.eo.h"
#include "efl_ui_property_bind.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_gfx_entity.eo.hh"
#include "efl_model.eo.hh"
#include "efl_ui_factory_bind.eo.hh"
#include "efl_ui_property_bind.eo.hh"
#ifndef EFL_UI_FACTORY_FWD_GUARD
#define EFL_UI_FACTORY_FWD_GUARD
namespace efl { namespace ui { 
struct Factory;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory const&> : ::std::true_type {}; } }
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
#ifndef EFL_GFX_ENTITY_FWD_GUARD
#define EFL_GFX_ENTITY_FWD_GUARD
namespace efl { namespace gfx { 
struct Entity;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_FACTORY_FWD_GUARD
#define EFL_UI_FACTORY_FWD_GUARD
namespace efl { namespace ui { 
struct Factory;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_FACTORY_BIND_FWD_GUARD
#define EFL_UI_FACTORY_BIND_FWD_GUARD
namespace efl { namespace ui { 
struct Factory_Bind;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory_Bind> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory_Bind&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory_Bind const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory_Bind const&> : ::std::true_type {}; } }
#endif
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
struct Factory {
    ::efl::eolian::return_traits<void>::type release( ::efl::eolian::in_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type ui_views) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FACTORY_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Factory *>(this))); }
    operator ::efl::ui::Factory() const;
    operator ::efl::ui::Factory&();
    operator ::efl::ui::Factory const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Factory,  ::efl::ui::Factory_Bind,  ::efl::ui::Property_Bind> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Factory const ,  ::efl::ui::Factory_Bind const ,  ::efl::ui::Property_Bind const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Factory : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::ui::Factory_Bind)
    , EO_CXX_INHERIT(::efl::ui::Property_Bind)
{
    explicit Factory( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Factory(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Factory() = default;
    Factory(Factory const&) = default;
    Factory(Factory&&) = default;
    Factory& operator=(Factory const&) = default;
    Factory& operator=(Factory&&) = default;
    template <typename Derived>
    Factory(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Factory, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<void>::type release( ::efl::eolian::in_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type ui_views) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FACTORY_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Factory *>(this))); }
    static struct item_constructing_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_FACTORY_EVENT_ITEM_CONSTRUCTING; }
        typedef  ::efl::gfx::Entity parameter_type;
    } const item_constructing_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_constructing_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_constructing_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_constructing_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_constructing_event, *this, std::bind(function));
    }
#endif
    static struct item_building_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_FACTORY_EVENT_ITEM_BUILDING; }
        typedef  ::efl::gfx::Entity parameter_type;
    } const item_building_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_building_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_building_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_building_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_building_event, *this, std::bind(function));
    }
#endif
    static struct item_created_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_FACTORY_EVENT_ITEM_CREATED; }
        typedef  ::efl::gfx::Entity parameter_type;
    } const item_created_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_created_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_created_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_created_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_created_event, *this, std::bind(function));
    }
#endif
    static struct item_releasing_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_FACTORY_EVENT_ITEM_RELEASING; }
        typedef  ::efl::gfx::Entity parameter_type;
    } const item_releasing_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_releasing_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_releasing_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    item_releasing_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(item_releasing_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Factory,  ::efl::ui::Factory_Bind,  ::efl::ui::Property_Bind> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Factory const ,  ::efl::ui::Factory_Bind const ,  ::efl::ui::Property_Bind const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Factory> _get_wref() const { return ::efl::eo::wref<Factory>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Factory* operator->() const { return this; }
    Factory* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Factory const& lhs, Factory const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Factory const& lhs, Factory const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Factory) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Factory>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
