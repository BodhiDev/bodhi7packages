#ifndef EFL_UI_CALENDAR_ITEM_EO_HH
#define EFL_UI_CALENDAR_ITEM_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_calendar_item.eo.h"
#include "efl_ui_focus_manager.eo.h"
#include "efl_ui_focus_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#include "efl_ui_focus_manager.eo.hh"
#include "efl_ui_focus_object.eo.hh"
#ifndef EFL_UI_CALENDAR_ITEM_FWD_GUARD
#define EFL_UI_CALENDAR_ITEM_FWD_GUARD
namespace efl { namespace ui { 
struct Calendar_Item;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Calendar_Item> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Calendar_Item&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Calendar_Item const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Calendar_Item const&> : ::std::true_type {}; } }
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
namespace efl { namespace ui { 
struct Calendar_Item {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type day_number_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type day_number_set( ::efl::eolian::in_traits<int>::type i) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_CALENDAR_ITEM_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Calendar_Item *>(this))); }
    operator ::efl::ui::Calendar_Item() const;
    operator ::efl::ui::Calendar_Item&();
    operator ::efl::ui::Calendar_Item const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Calendar_Item,  ::efl::Object,  ::efl::ui::focus::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Calendar_Item const ,  ::efl::Object const ,  ::efl::ui::focus::Object const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Calendar_Item : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::ui::focus::Object)
{
    explicit Calendar_Item( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Calendar_Item(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Calendar_Item() = default;
    Calendar_Item(Calendar_Item const&) = default;
    Calendar_Item(Calendar_Item&&) = default;
    Calendar_Item& operator=(Calendar_Item const&) = default;
    Calendar_Item& operator=(Calendar_Item&&) = default;
    template <typename Derived>
    Calendar_Item(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Calendar_Item, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Calendar_Item( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Calendar_Item( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Calendar_Item( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Calendar_Item >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Calendar_Item(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Calendar_Item >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type day_number_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type day_number_set( ::efl::eolian::in_traits<int>::type i) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_CALENDAR_ITEM_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Calendar_Item *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Calendar_Item,  ::efl::Object,  ::efl::ui::focus::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Calendar_Item const ,  ::efl::Object const ,  ::efl::ui::focus::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Calendar_Item> _get_wref() const { return ::efl::eo::wref<Calendar_Item>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Calendar_Item* operator->() const { return this; }
    Calendar_Item* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Calendar_Item const& lhs, Calendar_Item const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Calendar_Item const& lhs, Calendar_Item const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Calendar_Item) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Calendar_Item>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
