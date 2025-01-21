#ifndef EFL_UI_SPOTLIGHT_SCROLL_MANAGER_EO_HH
#define EFL_UI_SPOTLIGHT_SCROLL_MANAGER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_spotlight_container.eo.h"
#include "efl_ui_spotlight_manager.eo.h"
#include "efl_ui_spotlight_scroll_manager.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_gfx_entity.eo.hh"
#include "efl_object.eo.hh"
#include "efl_ui_spotlight_container.eo.hh"
#include "efl_ui_spotlight_manager.eo.hh"
#ifndef EFL_UI_SPOTLIGHT_SCROLL_MANAGER_FWD_GUARD
#define EFL_UI_SPOTLIGHT_SCROLL_MANAGER_FWD_GUARD
namespace efl { namespace ui { namespace spotlight { 
struct Scroll_Manager;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Scroll_Manager> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Scroll_Manager&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Scroll_Manager const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Scroll_Manager const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_SPOTLIGHT_CONTAINER_FWD_GUARD
#define EFL_UI_SPOTLIGHT_CONTAINER_FWD_GUARD
namespace efl { namespace ui { namespace spotlight { 
struct Container;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Container> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Container&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Container const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Container const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_SPOTLIGHT_MANAGER_FWD_GUARD
#define EFL_UI_SPOTLIGHT_MANAGER_FWD_GUARD
namespace efl { namespace ui { namespace spotlight { 
struct Manager;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Manager> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Manager&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Manager const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Manager const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { namespace spotlight { 
struct Scroll_Manager {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type scroll_block_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type scroll_block_set( ::efl::eolian::in_traits<bool>::type scroll_block) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SPOTLIGHT_SCROLL_MANAGER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Scroll_Manager *>(this))); }
    operator ::efl::ui::spotlight::Scroll_Manager() const;
    operator ::efl::ui::spotlight::Scroll_Manager&();
    operator ::efl::ui::spotlight::Scroll_Manager const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Scroll_Manager,  ::efl::Object,  ::efl::ui::spotlight::Manager> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Scroll_Manager const ,  ::efl::Object const ,  ::efl::ui::spotlight::Manager const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace spotlight { 
struct Scroll_Manager : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::ui::spotlight::Manager)
{
    explicit Scroll_Manager( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Scroll_Manager(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Scroll_Manager() = default;
    Scroll_Manager(Scroll_Manager const&) = default;
    Scroll_Manager(Scroll_Manager&&) = default;
    Scroll_Manager& operator=(Scroll_Manager const&) = default;
    Scroll_Manager& operator=(Scroll_Manager&&) = default;
    template <typename Derived>
    Scroll_Manager(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Scroll_Manager, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Scroll_Manager( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Scroll_Manager( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Scroll_Manager( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Scroll_Manager >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Scroll_Manager(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Scroll_Manager >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type scroll_block_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type scroll_block_set( ::efl::eolian::in_traits<bool>::type scroll_block) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SPOTLIGHT_SCROLL_MANAGER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Scroll_Manager *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Scroll_Manager,  ::efl::Object,  ::efl::ui::spotlight::Manager> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Scroll_Manager const ,  ::efl::Object const ,  ::efl::ui::spotlight::Manager const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Scroll_Manager> _get_wref() const { return ::efl::eo::wref<Scroll_Manager>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Scroll_Manager* operator->() const { return this; }
    Scroll_Manager* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Scroll_Manager const& lhs, Scroll_Manager const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Scroll_Manager const& lhs, Scroll_Manager const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Scroll_Manager) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Scroll_Manager>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
