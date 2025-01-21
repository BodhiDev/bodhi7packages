#ifndef EFL_UI_SPOTLIGHT_ANIMATION_MANAGER_EO_HH
#define EFL_UI_SPOTLIGHT_ANIMATION_MANAGER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_animation.eo.h"
#include "efl_class.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_spotlight_animation_manager.eo.h"
#include "efl_ui_spotlight_container.eo.h"
#include "efl_ui_spotlight_manager.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_animation.eo.hh"
#include "efl_class.eo.hh"
#include "efl_gfx_entity.eo.hh"
#include "efl_object.eo.hh"
#include "efl_ui_spotlight_container.eo.hh"
#include "efl_ui_spotlight_manager.eo.hh"
#ifndef EFL_UI_SPOTLIGHT_ANIMATION_MANAGER_FWD_GUARD
#define EFL_UI_SPOTLIGHT_ANIMATION_MANAGER_FWD_GUARD
namespace efl { namespace ui { namespace spotlight { 
struct Animation_Manager;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Animation_Manager> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Animation_Manager&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Animation_Manager const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Animation_Manager const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_ANIMATION_FWD_GUARD
#define EFL_CANVAS_ANIMATION_FWD_GUARD
namespace efl { namespace canvas { 
struct Animation;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Animation> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Animation&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Animation const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Animation const&> : ::std::true_type {}; } }
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
struct Animation_Manager {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type push_setup_set( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type in,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type out) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type pop_setup_set( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type in,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type out) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type jump_setup_set( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type in,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type out) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SPOTLIGHT_ANIMATION_MANAGER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Animation_Manager *>(this))); }
    operator ::efl::ui::spotlight::Animation_Manager() const;
    operator ::efl::ui::spotlight::Animation_Manager&();
    operator ::efl::ui::spotlight::Animation_Manager const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Animation_Manager,  ::efl::Object,  ::efl::ui::spotlight::Manager> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Animation_Manager const ,  ::efl::Object const ,  ::efl::ui::spotlight::Manager const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace spotlight { 
struct Animation_Manager : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::ui::spotlight::Manager)
{
    explicit Animation_Manager( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Animation_Manager(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Animation_Manager() = default;
    Animation_Manager(Animation_Manager const&) = default;
    Animation_Manager(Animation_Manager&&) = default;
    Animation_Manager& operator=(Animation_Manager const&) = default;
    Animation_Manager& operator=(Animation_Manager&&) = default;
    template <typename Derived>
    Animation_Manager(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Animation_Manager, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Animation_Manager( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Animation_Manager( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Animation_Manager( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Animation_Manager >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Animation_Manager(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Animation_Manager >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type push_setup_set( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type in,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type out) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type pop_setup_set( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type in,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type out) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type jump_setup_set( ::efl::eolian::in_traits< ::efl::canvas::Animation>::type in,  ::efl::eolian::in_traits< ::efl::canvas::Animation>::type out) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SPOTLIGHT_ANIMATION_MANAGER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Animation_Manager *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Animation_Manager,  ::efl::Object,  ::efl::ui::spotlight::Manager> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Animation_Manager const ,  ::efl::Object const ,  ::efl::ui::spotlight::Manager const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Animation_Manager> _get_wref() const { return ::efl::eo::wref<Animation_Manager>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Animation_Manager* operator->() const { return this; }
    Animation_Manager* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Animation_Manager const& lhs, Animation_Manager const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Animation_Manager const& lhs, Animation_Manager const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Animation_Manager) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Animation_Manager>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
