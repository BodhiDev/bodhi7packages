#ifndef EFL_UI_FOCUS_MANAGER_SUB_EO_HH
#define EFL_UI_FOCUS_MANAGER_SUB_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_focus_manager.eo.h"
#include "efl_ui_focus_manager_sub.eo.h"
#include "efl_ui_focus_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_ui_focus_manager.eo.hh"
#include "efl_ui_focus_object.eo.hh"
#ifndef EFL_UI_FOCUS_MANAGER_SUB_FWD_GUARD
#define EFL_UI_FOCUS_MANAGER_SUB_FWD_GUARD
namespace efl { namespace ui { namespace focus { 
struct Manager_Sub;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Sub> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Sub&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Sub const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Sub const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { namespace focus { 
struct Manager_Sub {
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FOCUS_MANAGER_SUB_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Manager_Sub *>(this))); }
    operator ::efl::ui::focus::Manager_Sub() const;
    operator ::efl::ui::focus::Manager_Sub&();
    operator ::efl::ui::focus::Manager_Sub const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Manager_Sub,  ::efl::ui::focus::Manager> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Manager_Sub const ,  ::efl::ui::focus::Manager const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace focus { 
struct Manager_Sub : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::ui::focus::Manager)
{
    explicit Manager_Sub( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Manager_Sub(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Manager_Sub() = default;
    Manager_Sub(Manager_Sub const&) = default;
    Manager_Sub(Manager_Sub&&) = default;
    Manager_Sub& operator=(Manager_Sub const&) = default;
    Manager_Sub& operator=(Manager_Sub&&) = default;
    template <typename Derived>
    Manager_Sub(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Manager_Sub, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FOCUS_MANAGER_SUB_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Manager_Sub *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Manager_Sub,  ::efl::ui::focus::Manager> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Manager_Sub const ,  ::efl::ui::focus::Manager const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Manager_Sub> _get_wref() const { return ::efl::eo::wref<Manager_Sub>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Manager_Sub* operator->() const { return this; }
    Manager_Sub* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Manager_Sub const& lhs, Manager_Sub const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Manager_Sub const& lhs, Manager_Sub const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Manager_Sub) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Manager_Sub>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
