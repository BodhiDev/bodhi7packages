#ifndef EFL_UI_SCROLL_MANAGER_EO_HH
#define EFL_UI_SCROLL_MANAGER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_i18n.eo.h"
#include "efl_ui_pan.eo.h"
#include "efl_ui_scroll_manager.eo.h"
#include "efl_ui_scrollable.eo.h"
#include "efl_ui_scrollbar.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#include "efl_ui_i18n.eo.hh"
#include "efl_ui_pan.eo.hh"
#include "efl_ui_scrollable.eo.hh"
#include "efl_ui_scrollbar.eo.hh"
#ifndef EFL_UI_SCROLL_MANAGER_FWD_GUARD
#define EFL_UI_SCROLL_MANAGER_FWD_GUARD
namespace efl { namespace ui { namespace scroll { 
struct Manager;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::scroll::Manager> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::scroll::Manager&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::scroll::Manager const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::scroll::Manager const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_I18N_FWD_GUARD
#define EFL_UI_I18N_FWD_GUARD
namespace efl { namespace ui { 
struct I18n;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::I18n> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::I18n&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::I18n const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::I18n const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_PAN_FWD_GUARD
#define EFL_UI_PAN_FWD_GUARD
namespace efl { namespace ui { 
struct Pan;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Pan> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Pan&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Pan const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Pan const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_SCROLLABLE_FWD_GUARD
#define EFL_UI_SCROLLABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Scrollable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollable const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_SCROLLBAR_FWD_GUARD
#define EFL_UI_SCROLLBAR_FWD_GUARD
namespace efl { namespace ui { 
struct Scrollbar;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollbar> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollbar&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollbar const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollbar const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { namespace scroll { 
struct Manager {
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_SCROLL_MANAGER_PROTECTED
    ::efl::eolian::return_traits<void>::type pan_set( ::efl::eolian::in_traits< ::efl::ui::Pan>::type pan) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SCROLL_MANAGER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Manager *>(this))); }
    operator ::efl::ui::scroll::Manager() const;
    operator ::efl::ui::scroll::Manager&();
    operator ::efl::ui::scroll::Manager const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Manager,  ::efl::Object,  ::efl::ui::I18n,  ::efl::ui::Scrollable,  ::efl::ui::Scrollbar> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Manager const ,  ::efl::Object const ,  ::efl::ui::I18n const ,  ::efl::ui::Scrollable const ,  ::efl::ui::Scrollbar const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace scroll { 
struct Manager : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::ui::I18n)
    , EO_CXX_INHERIT(::efl::ui::Scrollable)
    , EO_CXX_INHERIT(::efl::ui::Scrollbar)
{
    explicit Manager( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Manager(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Manager() = default;
    Manager(Manager const&) = default;
    Manager(Manager&&) = default;
    Manager& operator=(Manager const&) = default;
    Manager& operator=(Manager&&) = default;
    template <typename Derived>
    Manager(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Manager, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Manager( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Manager( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Manager( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Manager >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Manager(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Manager >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_UI_SCROLL_MANAGER_PROTECTED
    ::efl::eolian::return_traits<void>::type pan_set( ::efl::eolian::in_traits< ::efl::ui::Pan>::type pan) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SCROLL_MANAGER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Manager *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Manager,  ::efl::Object,  ::efl::ui::I18n,  ::efl::ui::Scrollable,  ::efl::ui::Scrollbar> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Manager const ,  ::efl::Object const ,  ::efl::ui::I18n const ,  ::efl::ui::Scrollable const ,  ::efl::ui::Scrollbar const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Manager> _get_wref() const { return ::efl::eo::wref<Manager>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Manager* operator->() const { return this; }
    Manager* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Manager const& lhs, Manager const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Manager const& lhs, Manager const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Manager) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Manager>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
