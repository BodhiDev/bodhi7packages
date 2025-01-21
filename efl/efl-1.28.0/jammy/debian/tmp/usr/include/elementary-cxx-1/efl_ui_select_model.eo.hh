#ifndef EFL_UI_SELECT_MODEL_EO_HH
#define EFL_UI_SELECT_MODEL_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_boolean_model.eo.h"
#include "efl_class.eo.h"
#include "efl_composite_model.eo.h"
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_loop_model.eo.h"
#include "efl_model.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_multi_selectable.eo.h"
#include "efl_ui_multi_selectable_index_range.eo.h"
#include "efl_ui_select_model.eo.h"
#include "efl_ui_selectable.eo.h"
#include "efl_ui_single_selectable.eo.h"
#include "efl_ui_view.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_boolean_model.eo.hh"
#include "efl_class.eo.hh"
#include "efl_composite_model.eo.hh"
#include "efl_loop.eo.hh"
#include "efl_loop_consumer.eo.hh"
#include "efl_loop_model.eo.hh"
#include "efl_model.eo.hh"
#include "efl_object.eo.hh"
#include "efl_ui_multi_selectable.eo.hh"
#include "efl_ui_multi_selectable_index_range.eo.hh"
#include "efl_ui_selectable.eo.hh"
#include "efl_ui_single_selectable.eo.hh"
#include "efl_ui_view.eo.hh"
#ifndef EFL_UI_SELECT_MODEL_FWD_GUARD
#define EFL_UI_SELECT_MODEL_FWD_GUARD
namespace efl { namespace ui { 
struct Select_Model;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Select_Model> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Select_Model&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Select_Model const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Select_Model const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_BOOLEAN_MODEL_FWD_GUARD
#define EFL_BOOLEAN_MODEL_FWD_GUARD
namespace efl { 
struct Boolean_Model;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Boolean_Model> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Boolean_Model&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Boolean_Model const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Boolean_Model const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CLASS_FWD_GUARD
#define EFL_CLASS_FWD_GUARD
namespace efl { 
struct Class;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_COMPOSITE_MODEL_FWD_GUARD
#define EFL_COMPOSITE_MODEL_FWD_GUARD
namespace efl { 
struct Composite_Model;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Composite_Model> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Composite_Model&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Composite_Model const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Composite_Model const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_LOOP_FWD_GUARD
#define EFL_LOOP_FWD_GUARD
namespace efl { 
struct Loop;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_LOOP_CONSUMER_FWD_GUARD
#define EFL_LOOP_CONSUMER_FWD_GUARD
namespace efl { 
struct Loop_Consumer;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_LOOP_MODEL_FWD_GUARD
#define EFL_LOOP_MODEL_FWD_GUARD
namespace efl { 
struct Loop_Model;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Model> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Model&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Model const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Model const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_MULTI_SELECTABLE_FWD_GUARD
#define EFL_UI_MULTI_SELECTABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Multi_Selectable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_MULTI_SELECTABLE_INDEX_RANGE_FWD_GUARD
#define EFL_UI_MULTI_SELECTABLE_INDEX_RANGE_FWD_GUARD
namespace efl { namespace ui { 
struct Multi_Selectable_Index_Range;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable_Index_Range> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable_Index_Range&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable_Index_Range const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable_Index_Range const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Select_Model {
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SELECT_MODEL_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Select_Model *>(this))); }
    operator ::efl::ui::Select_Model() const;
    operator ::efl::ui::Select_Model&();
    operator ::efl::ui::Select_Model const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Select_Model,  ::efl::Boolean_Model,  ::efl::Composite_Model,  ::efl::Loop_Consumer,  ::efl::Loop_Model,  ::efl::Model,  ::efl::Object,  ::efl::ui::Multi_Selectable,  ::efl::ui::Multi_Selectable_Index_Range,  ::efl::ui::Selectable,  ::efl::ui::Single_Selectable,  ::efl::ui::View> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Select_Model const ,  ::efl::Boolean_Model const ,  ::efl::Composite_Model const ,  ::efl::Loop_Consumer const ,  ::efl::Loop_Model const ,  ::efl::Model const ,  ::efl::Object const ,  ::efl::ui::Multi_Selectable const ,  ::efl::ui::Multi_Selectable_Index_Range const ,  ::efl::ui::Selectable const ,  ::efl::ui::Single_Selectable const ,  ::efl::ui::View const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Select_Model : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Boolean_Model)
    , EO_CXX_INHERIT(::efl::Composite_Model)
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Loop_Model)
    , EO_CXX_INHERIT(::efl::Model)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::ui::Multi_Selectable)
    , EO_CXX_INHERIT(::efl::ui::Multi_Selectable_Index_Range)
    , EO_CXX_INHERIT(::efl::ui::Selectable)
    , EO_CXX_INHERIT(::efl::ui::Single_Selectable)
    , EO_CXX_INHERIT(::efl::ui::View)
{
    explicit Select_Model( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Select_Model(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Select_Model() = default;
    Select_Model(Select_Model const&) = default;
    Select_Model(Select_Model&&) = default;
    Select_Model& operator=(Select_Model const&) = default;
    Select_Model& operator=(Select_Model&&) = default;
    template <typename Derived>
    Select_Model(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Select_Model, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Select_Model( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Select_Model( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Select_Model( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Select_Model >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Select_Model(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Select_Model >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SELECT_MODEL_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Select_Model *>(this))); }
#ifdef EFL_UI_SELECT_MODEL_BETA
    static struct selected_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_SELECT_MODEL_EVENT_SELECTED; }
        typedef  ::efl::Object parameter_type;
    } const selected_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    selected_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(selected_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    selected_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(selected_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_UI_SELECT_MODEL_BETA
    static struct unselected_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_SELECT_MODEL_EVENT_UNSELECTED; }
        typedef  ::efl::Object parameter_type;
    } const unselected_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    unselected_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(unselected_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    unselected_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(unselected_event, *this, std::bind(function));
    }
#endif
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Select_Model,  ::efl::Boolean_Model,  ::efl::Composite_Model,  ::efl::Loop_Consumer,  ::efl::Loop_Model,  ::efl::Model,  ::efl::Object,  ::efl::ui::Multi_Selectable,  ::efl::ui::Multi_Selectable_Index_Range,  ::efl::ui::Selectable,  ::efl::ui::Single_Selectable,  ::efl::ui::View> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Select_Model const ,  ::efl::Boolean_Model const ,  ::efl::Composite_Model const ,  ::efl::Loop_Consumer const ,  ::efl::Loop_Model const ,  ::efl::Model const ,  ::efl::Object const ,  ::efl::ui::Multi_Selectable const ,  ::efl::ui::Multi_Selectable_Index_Range const ,  ::efl::ui::Selectable const ,  ::efl::ui::Single_Selectable const ,  ::efl::ui::View const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Select_Model> _get_wref() const { return ::efl::eo::wref<Select_Model>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Select_Model* operator->() const { return this; }
    Select_Model* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Select_Model const& lhs, Select_Model const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Select_Model const& lhs, Select_Model const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Select_Model) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Select_Model>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
