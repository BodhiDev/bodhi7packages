#ifndef EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EO_HH
#define EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_object.eo.h"
#include "efl_class.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_focus_manager.eo.h"
#include "efl_ui_focus_manager_calc.eo.h"
#include "efl_ui_focus_manager_root_focus.eo.h"
#include "efl_ui_focus_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_object.eo.hh"
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#include "efl_ui_focus_manager.eo.hh"
#include "efl_ui_focus_manager_calc.eo.hh"
#include "efl_ui_focus_object.eo.hh"
#ifndef EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_FWD_GUARD
#define EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_FWD_GUARD
namespace efl { namespace ui { namespace focus { 
struct Manager_Root_Focus;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Root_Focus> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Root_Focus&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Root_Focus const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Root_Focus const&> : ::std::true_type {}; } }
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
#ifndef EFL_CANVAS_OBJECT_FWD_GUARD
#define EFL_CANVAS_OBJECT_FWD_GUARD
namespace efl { namespace canvas { 
struct Object;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_FOCUS_MANAGER_CALC_FWD_GUARD
#define EFL_UI_FOCUS_MANAGER_CALC_FWD_GUARD
namespace efl { namespace ui { namespace focus { 
struct Manager_Calc;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Calc> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Calc&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Calc const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Calc const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { namespace focus { 
struct Manager_Root_Focus {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::canvas::Object>::type canvas_object_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type canvas_object_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type canvas_object) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Manager_Root_Focus *>(this))); }
    operator ::efl::ui::focus::Manager_Root_Focus() const;
    operator ::efl::ui::focus::Manager_Root_Focus&();
    operator ::efl::ui::focus::Manager_Root_Focus const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Manager_Root_Focus,  ::efl::Object,  ::efl::ui::focus::Manager,  ::efl::ui::focus::Manager_Calc> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Manager_Root_Focus const ,  ::efl::Object const ,  ::efl::ui::focus::Manager const ,  ::efl::ui::focus::Manager_Calc const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace focus { 
struct Manager_Root_Focus : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::ui::focus::Manager)
    , EO_CXX_INHERIT(::efl::ui::focus::Manager_Calc)
{
    explicit Manager_Root_Focus( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Manager_Root_Focus(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Manager_Root_Focus() = default;
    Manager_Root_Focus(Manager_Root_Focus const&) = default;
    Manager_Root_Focus(Manager_Root_Focus&&) = default;
    Manager_Root_Focus& operator=(Manager_Root_Focus const&) = default;
    Manager_Root_Focus& operator=(Manager_Root_Focus&&) = default;
    template <typename Derived>
    Manager_Root_Focus(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Manager_Root_Focus, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Manager_Root_Focus( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Manager_Root_Focus( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Manager_Root_Focus( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Manager_Root_Focus >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Manager_Root_Focus(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Manager_Root_Focus >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::canvas::Object>::type canvas_object_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type canvas_object_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type canvas_object) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Manager_Root_Focus *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Manager_Root_Focus,  ::efl::Object,  ::efl::ui::focus::Manager,  ::efl::ui::focus::Manager_Calc> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Manager_Root_Focus const ,  ::efl::Object const ,  ::efl::ui::focus::Manager const ,  ::efl::ui::focus::Manager_Calc const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Manager_Root_Focus> _get_wref() const { return ::efl::eo::wref<Manager_Root_Focus>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Manager_Root_Focus* operator->() const { return this; }
    Manager_Root_Focus* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Manager_Root_Focus const& lhs, Manager_Root_Focus const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Manager_Root_Focus const& lhs, Manager_Root_Focus const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Manager_Root_Focus) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Manager_Root_Focus>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
