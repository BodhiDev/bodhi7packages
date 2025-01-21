#ifndef EFL_CONTAINER_MODEL_EO_HH
#define EFL_CONTAINER_MODEL_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_composite_model.eo.h"
#include "efl_container_model.eo.h"
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_loop_model.eo.h"
#include "efl_model.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_view.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_composite_model.eo.hh"
#include "efl_loop.eo.hh"
#include "efl_loop_consumer.eo.hh"
#include "efl_loop_model.eo.hh"
#include "efl_model.eo.hh"
#include "efl_object.eo.hh"
#include "efl_ui_view.eo.hh"
#ifndef EFL_CONTAINER_MODEL_FWD_GUARD
#define EFL_CONTAINER_MODEL_FWD_GUARD
namespace efl { 
struct Container_Model;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container_Model> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container_Model&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container_Model const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container_Model const&> : ::std::true_type {}; } }
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
namespace efl { 
struct Container_Model {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<const Eina_Value_Type *>::type child_property_value_type_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type child_property_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<const Eina_Value_Type *>::type type,  ::efl::eolian::in_traits< ::efl::eina::iterator<void const*>>::type values) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CONTAINER_MODEL_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Container_Model *>(this))); }
    operator ::efl::Container_Model() const;
    operator ::efl::Container_Model&();
    operator ::efl::Container_Model const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Container_Model,  ::efl::Composite_Model,  ::efl::Loop_Consumer,  ::efl::Loop_Model,  ::efl::Model,  ::efl::Object,  ::efl::ui::View> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Container_Model const ,  ::efl::Composite_Model const ,  ::efl::Loop_Consumer const ,  ::efl::Loop_Model const ,  ::efl::Model const ,  ::efl::Object const ,  ::efl::ui::View const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Container_Model : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Composite_Model)
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Loop_Model)
    , EO_CXX_INHERIT(::efl::Model)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::ui::View)
{
    explicit Container_Model( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Container_Model(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Container_Model() = default;
    Container_Model(Container_Model const&) = default;
    Container_Model(Container_Model&&) = default;
    Container_Model& operator=(Container_Model const&) = default;
    Container_Model& operator=(Container_Model&&) = default;
    template <typename Derived>
    Container_Model(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Container_Model, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Container_Model( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Container_Model( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Container_Model( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Container_Model >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Container_Model(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Container_Model >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<const Eina_Value_Type *>::type child_property_value_type_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type child_property_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<const Eina_Value_Type *>::type type,  ::efl::eolian::in_traits< ::efl::eina::iterator<void const*>>::type values) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CONTAINER_MODEL_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Container_Model *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Container_Model,  ::efl::Composite_Model,  ::efl::Loop_Consumer,  ::efl::Loop_Model,  ::efl::Model,  ::efl::Object,  ::efl::ui::View> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Container_Model const ,  ::efl::Composite_Model const ,  ::efl::Loop_Consumer const ,  ::efl::Loop_Model const ,  ::efl::Model const ,  ::efl::Object const ,  ::efl::ui::View const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Container_Model> _get_wref() const { return ::efl::eo::wref<Container_Model>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Container_Model* operator->() const { return this; }
    Container_Model* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Container_Model const& lhs, Container_Model const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Container_Model const& lhs, Container_Model const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Container_Model) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Container_Model>::value, "");
} 

#pragma GCC diagnostic pop

#endif
