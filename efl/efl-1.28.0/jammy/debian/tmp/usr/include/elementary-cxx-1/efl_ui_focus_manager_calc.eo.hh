#ifndef EFL_UI_FOCUS_MANAGER_CALC_EO_HH
#define EFL_UI_FOCUS_MANAGER_CALC_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_focus_manager.eo.h"
#include "efl_ui_focus_manager_calc.eo.h"
#include "efl_ui_focus_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#include "efl_ui_focus_manager.eo.hh"
#include "efl_ui_focus_object.eo.hh"
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
struct Manager_Calc {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type cxx_register( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type parent,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type redirect) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type register_logical( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type parent,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type redirect) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type update_redirect( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type redirect) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type update_parent( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type parent) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type unregister( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FOCUS_MANAGER_CALC_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Manager_Calc *>(this))); }
    operator ::efl::ui::focus::Manager_Calc() const;
    operator ::efl::ui::focus::Manager_Calc&();
    operator ::efl::ui::focus::Manager_Calc const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Manager_Calc,  ::efl::Object,  ::efl::ui::focus::Manager> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Manager_Calc const ,  ::efl::Object const ,  ::efl::ui::focus::Manager const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace focus { 
struct Manager_Calc : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::ui::focus::Manager)
{
    explicit Manager_Calc( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Manager_Calc(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Manager_Calc() = default;
    Manager_Calc(Manager_Calc const&) = default;
    Manager_Calc(Manager_Calc&&) = default;
    Manager_Calc& operator=(Manager_Calc const&) = default;
    Manager_Calc& operator=(Manager_Calc&&) = default;
    template <typename Derived>
    Manager_Calc(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Manager_Calc, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Manager_Calc( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Manager_Calc( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Manager_Calc( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Manager_Calc >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Manager_Calc(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Manager_Calc >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type cxx_register( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type parent,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type redirect) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type register_logical( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type parent,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type redirect) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type update_redirect( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits< ::efl::ui::focus::Manager>::type redirect) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type update_parent( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child,  ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type parent) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type unregister( ::efl::eolian::in_traits< ::efl::ui::focus::Object>::type child) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FOCUS_MANAGER_CALC_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Manager_Calc *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Manager_Calc,  ::efl::Object,  ::efl::ui::focus::Manager> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Manager_Calc const ,  ::efl::Object const ,  ::efl::ui::focus::Manager const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Manager_Calc> _get_wref() const { return ::efl::eo::wref<Manager_Calc>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Manager_Calc* operator->() const { return this; }
    Manager_Calc* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Manager_Calc const& lhs, Manager_Calc const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Manager_Calc const& lhs, Manager_Calc const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Manager_Calc) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Manager_Calc>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
