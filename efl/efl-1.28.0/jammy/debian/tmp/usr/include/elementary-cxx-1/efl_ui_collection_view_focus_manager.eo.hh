#ifndef EFL_UI_COLLECTION_VIEW_FOCUS_MANAGER_EO_HH
#define EFL_UI_COLLECTION_VIEW_FOCUS_MANAGER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_collection_view_focus_manager.eo.h"
#include "efl_ui_focus_manager.eo.h"
#include "efl_ui_focus_manager_calc.eo.h"
#include "efl_ui_focus_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#include "efl_ui_focus_manager.eo.hh"
#include "efl_ui_focus_manager_calc.eo.hh"
#include "efl_ui_focus_object.eo.hh"
#ifndef EFL_UI_COLLECTION_VIEW_FOCUS_MANAGER_FWD_GUARD
#define EFL_UI_COLLECTION_VIEW_FOCUS_MANAGER_FWD_GUARD
namespace efl { namespace ui { 
struct Collection_View_Focus_Manager;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Collection_View_Focus_Manager> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Collection_View_Focus_Manager&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Collection_View_Focus_Manager const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Collection_View_Focus_Manager const&> : ::std::true_type {}; } }
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
namespace efl { namespace ui { 
struct Collection_View_Focus_Manager {
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_COLLECTION_VIEW_FOCUS_MANAGER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Collection_View_Focus_Manager *>(this))); }
    operator ::efl::ui::Collection_View_Focus_Manager() const;
    operator ::efl::ui::Collection_View_Focus_Manager&();
    operator ::efl::ui::Collection_View_Focus_Manager const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Collection_View_Focus_Manager,  ::efl::Object,  ::efl::ui::focus::Manager,  ::efl::ui::focus::Manager_Calc> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Collection_View_Focus_Manager const ,  ::efl::Object const ,  ::efl::ui::focus::Manager const ,  ::efl::ui::focus::Manager_Calc const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Collection_View_Focus_Manager : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::ui::focus::Manager)
    , EO_CXX_INHERIT(::efl::ui::focus::Manager_Calc)
{
    explicit Collection_View_Focus_Manager( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Collection_View_Focus_Manager(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Collection_View_Focus_Manager() = default;
    Collection_View_Focus_Manager(Collection_View_Focus_Manager const&) = default;
    Collection_View_Focus_Manager(Collection_View_Focus_Manager&&) = default;
    Collection_View_Focus_Manager& operator=(Collection_View_Focus_Manager const&) = default;
    Collection_View_Focus_Manager& operator=(Collection_View_Focus_Manager&&) = default;
    template <typename Derived>
    Collection_View_Focus_Manager(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Collection_View_Focus_Manager, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Collection_View_Focus_Manager( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Collection_View_Focus_Manager( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Collection_View_Focus_Manager( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Collection_View_Focus_Manager >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Collection_View_Focus_Manager(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Collection_View_Focus_Manager >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_UI_COLLECTION_VIEW_FOCUS_MANAGER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Collection_View_Focus_Manager *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Collection_View_Focus_Manager,  ::efl::Object,  ::efl::ui::focus::Manager,  ::efl::ui::focus::Manager_Calc> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Collection_View_Focus_Manager const ,  ::efl::Object const ,  ::efl::ui::focus::Manager const ,  ::efl::ui::focus::Manager_Calc const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Collection_View_Focus_Manager> _get_wref() const { return ::efl::eo::wref<Collection_View_Focus_Manager>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Collection_View_Focus_Manager* operator->() const { return this; }
    Collection_View_Focus_Manager* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Collection_View_Focus_Manager const& lhs, Collection_View_Focus_Manager const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Collection_View_Focus_Manager const& lhs, Collection_View_Focus_Manager const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Collection_View_Focus_Manager) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Collection_View_Focus_Manager>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
