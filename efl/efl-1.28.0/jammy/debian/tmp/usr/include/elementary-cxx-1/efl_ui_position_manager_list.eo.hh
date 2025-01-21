#ifndef EFL_UI_POSITION_MANAGER_LIST_EO_HH
#define EFL_UI_POSITION_MANAGER_LIST_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_layout_orientable.eo.h"
#include "efl_ui_position_manager_data_access_v1.eo.h"
#include "efl_ui_position_manager_entity.eo.h"
#include "efl_ui_position_manager_list.eo.h"
#include "efl_ui_win.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_gfx_entity.eo.hh"
#include "efl_object.eo.hh"
#include "efl_ui_layout_orientable.eo.hh"
#include "efl_ui_position_manager_data_access_v1.eo.hh"
#include "efl_ui_position_manager_entity.eo.hh"
#include "efl_ui_win.eo.hh"
#ifndef EFL_UI_POSITION_MANAGER_LIST_FWD_GUARD
#define EFL_UI_POSITION_MANAGER_LIST_FWD_GUARD
namespace efl { namespace ui { namespace position_manager { 
struct List;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::List> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::List&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::List const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::List const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_POSITION_MANAGER_DATA_ACCESS_V1_FWD_GUARD
#define EFL_UI_POSITION_MANAGER_DATA_ACCESS_V1_FWD_GUARD
namespace efl { namespace ui { namespace position_manager { 
struct Data_Access_V1;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Data_Access_V1> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Data_Access_V1&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Data_Access_V1 const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Data_Access_V1 const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_ENTITY_FWD_GUARD
#define EFL_GFX_ENTITY_FWD_GUARD
namespace efl { namespace gfx { 
struct Entity;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_LAYOUT_ORIENTABLE_FWD_GUARD
#define EFL_UI_LAYOUT_ORIENTABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Layout_Orientable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_WIN_FWD_GUARD
#define EFL_UI_WIN_FWD_GUARD
namespace efl { namespace ui { 
struct Win;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Win> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Win&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Win const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Win const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_POSITION_MANAGER_ENTITY_FWD_GUARD
#define EFL_UI_POSITION_MANAGER_ENTITY_FWD_GUARD
namespace efl { namespace ui { namespace position_manager { 
struct Entity;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Entity> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Entity&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Entity const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Entity const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { namespace position_manager { 
struct List {
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_POSITION_MANAGER_LIST_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<List *>(this))); }
    operator ::efl::ui::position_manager::List() const;
    operator ::efl::ui::position_manager::List&();
    operator ::efl::ui::position_manager::List const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<List,  ::efl::Object,  ::efl::ui::Layout_Orientable,  ::efl::ui::position_manager::Data_Access_V1,  ::efl::ui::position_manager::Entity> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<List const ,  ::efl::Object const ,  ::efl::ui::Layout_Orientable const ,  ::efl::ui::position_manager::Data_Access_V1 const ,  ::efl::ui::position_manager::Entity const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace position_manager { 
struct List : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::ui::Layout_Orientable)
    , EO_CXX_INHERIT(::efl::ui::position_manager::Data_Access_V1)
    , EO_CXX_INHERIT(::efl::ui::position_manager::Entity)
{
    explicit List( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    List(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit List() = default;
    List(List const&) = default;
    List(List&&) = default;
    List& operator=(List const&) = default;
    List& operator=(List&&) = default;
    template <typename Derived>
    List(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< List, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    List( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit List( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> List( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, List >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> List(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, List >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_UI_POSITION_MANAGER_LIST_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<List *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<List,  ::efl::Object,  ::efl::ui::Layout_Orientable,  ::efl::ui::position_manager::Data_Access_V1,  ::efl::ui::position_manager::Entity> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<List const ,  ::efl::Object const ,  ::efl::ui::Layout_Orientable const ,  ::efl::ui::position_manager::Data_Access_V1 const ,  ::efl::ui::position_manager::Entity const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<List> _get_wref() const { return ::efl::eo::wref<List>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const List* operator->() const { return this; }
    List* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(List const& lhs, List const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(List const& lhs, List const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(List) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<List>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
