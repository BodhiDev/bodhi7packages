#ifndef EFL_UI_FOCUS_LAYER_EO_HH
#define EFL_UI_FOCUS_LAYER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_focus_layer.eo.h"
#include "efl_ui_focus_manager.eo.h"
#include "efl_ui_focus_object.eo.h"
#include "efl_ui_widget_focus_manager.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_ui_focus_manager.eo.hh"
#include "efl_ui_focus_object.eo.hh"
#include "efl_ui_widget_focus_manager.eo.hh"
#ifndef EFL_UI_FOCUS_LAYER_FWD_GUARD
#define EFL_UI_FOCUS_LAYER_FWD_GUARD
namespace efl { namespace ui { namespace focus { 
struct Layer;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Layer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Layer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Layer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Layer const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_FOCUS_MANAGER_FWD_GUARD
#define EFL_UI_FOCUS_MANAGER_FWD_GUARD
namespace efl { namespace ui { namespace focus { 
struct Manager;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_FOCUS_OBJECT_FWD_GUARD
#define EFL_UI_FOCUS_OBJECT_FWD_GUARD
namespace efl { namespace ui { namespace focus { 
struct Object;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_WIDGET_FOCUS_MANAGER_FWD_GUARD
#define EFL_UI_WIDGET_FOCUS_MANAGER_FWD_GUARD
namespace efl { namespace ui { 
struct Widget_Focus_Manager;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Focus_Manager> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Focus_Manager&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Focus_Manager const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Focus_Manager const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { namespace focus { 
struct Layer {
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
    ::efl::eolian::return_traits<bool>::type enable_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
    ::efl::eolian::return_traits<void>::type enable_set( ::efl::eolian::in_traits<bool>::type v) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
    ::efl::eolian::return_traits<void>::type behaviour_get( ::efl::eolian::out_traits<bool>::type enable_on_visible,  ::efl::eolian::out_traits<bool>::type cycle) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
    ::efl::eolian::return_traits<void>::type behaviour_set( ::efl::eolian::in_traits<bool>::type enable_on_visible,  ::efl::eolian::in_traits<bool>::type cycle) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FOCUS_LAYER_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Layer *>(this))); }
    operator ::efl::ui::focus::Layer() const;
    operator ::efl::ui::focus::Layer&();
    operator ::efl::ui::focus::Layer const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Layer,  ::efl::ui::Widget_Focus_Manager,  ::efl::ui::focus::Manager> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Layer const ,  ::efl::ui::Widget_Focus_Manager const ,  ::efl::ui::focus::Manager const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace focus { 
struct Layer : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::ui::Widget_Focus_Manager)
    , EO_CXX_INHERIT(::efl::ui::focus::Manager)
{
    explicit Layer( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Layer(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Layer() = default;
    Layer(Layer const&) = default;
    Layer(Layer&&) = default;
    Layer& operator=(Layer const&) = default;
    Layer& operator=(Layer&&) = default;
    template <typename Derived>
    Layer(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Layer, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
    ::efl::eolian::return_traits<bool>::type enable_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
    ::efl::eolian::return_traits<void>::type enable_set( ::efl::eolian::in_traits<bool>::type v) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
    ::efl::eolian::return_traits<void>::type behaviour_get( ::efl::eolian::out_traits<bool>::type enable_on_visible,  ::efl::eolian::out_traits<bool>::type cycle) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_FOCUS_LAYER_PROTECTED
    ::efl::eolian::return_traits<void>::type behaviour_set( ::efl::eolian::in_traits<bool>::type enable_on_visible,  ::efl::eolian::in_traits<bool>::type cycle) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FOCUS_LAYER_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Layer *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Layer,  ::efl::ui::Widget_Focus_Manager,  ::efl::ui::focus::Manager> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Layer const ,  ::efl::ui::Widget_Focus_Manager const ,  ::efl::ui::focus::Manager const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Layer> _get_wref() const { return ::efl::eo::wref<Layer>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Layer* operator->() const { return this; }
    Layer* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Layer const& lhs, Layer const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Layer const& lhs, Layer const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Layer) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Layer>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
