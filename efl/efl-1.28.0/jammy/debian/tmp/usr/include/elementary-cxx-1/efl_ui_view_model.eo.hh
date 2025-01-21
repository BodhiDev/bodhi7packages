#ifndef EFL_UI_VIEW_MODEL_EO_HH
#define EFL_UI_VIEW_MODEL_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_composite_model.eo.h"
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_loop_model.eo.h"
#include "efl_model.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_view.eo.h"
#include "efl_ui_view_model.eo.h"
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
#ifndef EFL_UI_VIEW_MODEL_FWD_GUARD
#define EFL_UI_VIEW_MODEL_FWD_GUARD
namespace efl { namespace ui { 
struct View_Model;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::View_Model> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::View_Model&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::View_Model const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::View_Model const&> : ::std::true_type {}; } }
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

#ifndef EFLUIVIEWMODELPROPERTYGET_DEFINED
#define EFLUIVIEWMODELPROPERTYGET_DEFINED
namespace efl { namespace eolian {
template <typename F>
struct function_wrapper<EflUiViewModelPropertyGet, F, struct EflUiViewModelPropertyGet__function_tag> {
    function_wrapper(F cxx_func) : _cxx_func(cxx_func) {}
    void *data_to_c() { return static_cast<void *>(this); }
    EflUiViewModelPropertyGet func_to_c() const { return &caller; }
    Eina_Free_Cb free_to_c() const { return &deleter; }
private:
    F _cxx_func;
    static void deleter(void *data) {
        delete static_cast<function_wrapper<EflUiViewModelPropertyGet, F, ::efl::eolian::EflUiViewModelPropertyGet__function_tag>*>(data);
    }
    static Eina_Value * caller(void *cxx_call_data,  ::Efl_Ui_View_Model const* view_model, Eina_Stringshare * property) {
        auto fw = static_cast<function_wrapper<EflUiViewModelPropertyGet, F, ::efl::eolian::EflUiViewModelPropertyGet__function_tag>*>(cxx_call_data);
        auto __return_value =
        fw->_cxx_func( ::efl::eolian::out_traits< ::efl::ui::View_Model>::type(view_model),  ::efl::eolian::out_traits< ::efl::eina::stringshare>::type(property));
        return ::efl::eolian::convert_to_c< ::efl::eina::value_view>(__return_value);
    }
};
} }
#endif

#ifndef EFLUIVIEWMODELPROPERTYSET_DEFINED
#define EFLUIVIEWMODELPROPERTYSET_DEFINED
namespace efl { namespace eolian {
template <typename F>
struct function_wrapper<EflUiViewModelPropertySet, F, struct EflUiViewModelPropertySet__function_tag> {
    function_wrapper(F cxx_func) : _cxx_func(cxx_func) {}
    void *data_to_c() { return static_cast<void *>(this); }
    EflUiViewModelPropertySet func_to_c() const { return &caller; }
    Eina_Free_Cb free_to_c() const { return &deleter; }
private:
    F _cxx_func;
    static void deleter(void *data) {
        delete static_cast<function_wrapper<EflUiViewModelPropertySet, F, ::efl::eolian::EflUiViewModelPropertySet__function_tag>*>(data);
    }
    static Eina_Future * caller(void *cxx_call_data,  ::Efl_Ui_View_Model* view_model, Eina_Stringshare * property, Eina_Value * value) {
        auto fw = static_cast<function_wrapper<EflUiViewModelPropertySet, F, ::efl::eolian::EflUiViewModelPropertySet__function_tag>*>(cxx_call_data);
        auto __return_value =
        fw->_cxx_func( ::efl::eolian::out_traits< ::efl::ui::View_Model>::type(view_model),  ::efl::eolian::out_traits< ::efl::eina::stringshare>::type(property),  ::efl::eolian::out_traits< ::efl::eina::value>::type(value));
        return ::efl::eolian::convert_to_c< ::efl::eina::future< ::efl::eina::value_view>>(__return_value);
    }
};
} }
#endif


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct View_Model {
    ::efl::eolian::return_traits<bool>::type children_bind_get() const;
    ::efl::eolian::return_traits<void>::type children_bind_set( ::efl::eolian::in_traits<bool>::type enable) const;
    ::efl::eolian::return_traits<Eina_Error>::type property_string_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type definition,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type not_ready,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type on_error) const;
    ::efl::eolian::return_traits<Eina_Error>::type property_string_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const;
#ifdef EFL_BETA_API_SUPPORT
template <typename F, typename G>     ::efl::eolian::return_traits<Eina_Error>::type property_logic_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type property, F get, F set,  ::efl::eolian::in_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type bound) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Error>::type property_logic_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type property) const;
#endif
    ::efl::eolian::return_traits<void>::type property_bind( ::efl::eolian::in_traits< ::efl::eina::string_view>::type source,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type destination) const;
    ::efl::eolian::return_traits<void>::type property_unbind( ::efl::eolian::in_traits< ::efl::eina::string_view>::type source,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type destination) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_VIEW_MODEL_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<View_Model *>(this))); }
    operator ::efl::ui::View_Model() const;
    operator ::efl::ui::View_Model&();
    operator ::efl::ui::View_Model const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<View_Model,  ::efl::Composite_Model,  ::efl::Loop_Consumer,  ::efl::Loop_Model,  ::efl::Model,  ::efl::Object,  ::efl::ui::View> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<View_Model const ,  ::efl::Composite_Model const ,  ::efl::Loop_Consumer const ,  ::efl::Loop_Model const ,  ::efl::Model const ,  ::efl::Object const ,  ::efl::ui::View const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct View_Model : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Composite_Model)
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Loop_Model)
    , EO_CXX_INHERIT(::efl::Model)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::ui::View)
{
    explicit View_Model( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    View_Model(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit View_Model() = default;
    View_Model(View_Model const&) = default;
    View_Model(View_Model&&) = default;
    View_Model& operator=(View_Model const&) = default;
    View_Model& operator=(View_Model&&) = default;
    template <typename Derived>
    View_Model(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< View_Model, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    View_Model( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit View_Model( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> View_Model( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, View_Model >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> View_Model(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, View_Model >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    ::efl::eolian::return_traits<bool>::type children_bind_get() const;
    ::efl::eolian::return_traits<void>::type children_bind_set( ::efl::eolian::in_traits<bool>::type enable) const;
    ::efl::eolian::return_traits<Eina_Error>::type property_string_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type definition,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type not_ready,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type on_error) const;
    ::efl::eolian::return_traits<Eina_Error>::type property_string_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const;
#ifdef EFL_BETA_API_SUPPORT
template <typename F, typename G>     ::efl::eolian::return_traits<Eina_Error>::type property_logic_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type property, F get, F set,  ::efl::eolian::in_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type bound) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Error>::type property_logic_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type property) const;
#endif
    ::efl::eolian::return_traits<void>::type property_bind( ::efl::eolian::in_traits< ::efl::eina::string_view>::type source,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type destination) const;
    ::efl::eolian::return_traits<void>::type property_unbind( ::efl::eolian::in_traits< ::efl::eina::string_view>::type source,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type destination) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_VIEW_MODEL_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<View_Model *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<View_Model,  ::efl::Composite_Model,  ::efl::Loop_Consumer,  ::efl::Loop_Model,  ::efl::Model,  ::efl::Object,  ::efl::ui::View> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<View_Model const ,  ::efl::Composite_Model const ,  ::efl::Loop_Consumer const ,  ::efl::Loop_Model const ,  ::efl::Model const ,  ::efl::Object const ,  ::efl::ui::View const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<View_Model> _get_wref() const { return ::efl::eo::wref<View_Model>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const View_Model* operator->() const { return this; }
    View_Model* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(View_Model const& lhs, View_Model const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(View_Model const& lhs, View_Model const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(View_Model) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<View_Model>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
