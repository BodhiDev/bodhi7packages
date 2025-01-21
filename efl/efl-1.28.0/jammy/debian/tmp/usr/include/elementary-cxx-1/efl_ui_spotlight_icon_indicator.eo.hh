#ifndef EFL_UI_SPOTLIGHT_ICON_INDICATOR_EO_HH
#define EFL_UI_SPOTLIGHT_ICON_INDICATOR_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_spotlight_container.eo.h"
#include "efl_ui_spotlight_icon_indicator.eo.h"
#include "efl_ui_spotlight_indicator.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_gfx_entity.eo.hh"
#include "efl_object.eo.hh"
#include "efl_ui_spotlight_container.eo.hh"
#include "efl_ui_spotlight_indicator.eo.hh"
#ifndef EFL_UI_SPOTLIGHT_ICON_INDICATOR_FWD_GUARD
#define EFL_UI_SPOTLIGHT_ICON_INDICATOR_FWD_GUARD
namespace efl { namespace ui { namespace spotlight { 
struct Icon_Indicator;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Icon_Indicator> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Icon_Indicator&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Icon_Indicator const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Icon_Indicator const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_SPOTLIGHT_INDICATOR_FWD_GUARD
#define EFL_UI_SPOTLIGHT_INDICATOR_FWD_GUARD
namespace efl { namespace ui { namespace spotlight { 
struct Indicator;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Indicator> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Indicator&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Indicator const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::spotlight::Indicator const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { namespace spotlight { 
struct Icon_Indicator {
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SPOTLIGHT_ICON_INDICATOR_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Icon_Indicator *>(this))); }
    operator ::efl::ui::spotlight::Icon_Indicator() const;
    operator ::efl::ui::spotlight::Icon_Indicator&();
    operator ::efl::ui::spotlight::Icon_Indicator const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Icon_Indicator,  ::efl::Object,  ::efl::ui::spotlight::Indicator> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Icon_Indicator const ,  ::efl::Object const ,  ::efl::ui::spotlight::Indicator const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace spotlight { 
struct Icon_Indicator : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::ui::spotlight::Indicator)
{
    explicit Icon_Indicator( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Icon_Indicator(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Icon_Indicator() = default;
    Icon_Indicator(Icon_Indicator const&) = default;
    Icon_Indicator(Icon_Indicator&&) = default;
    Icon_Indicator& operator=(Icon_Indicator const&) = default;
    Icon_Indicator& operator=(Icon_Indicator&&) = default;
    template <typename Derived>
    Icon_Indicator(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Icon_Indicator, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Icon_Indicator( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Icon_Indicator( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Icon_Indicator( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Icon_Indicator >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Icon_Indicator(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Icon_Indicator >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_UI_SPOTLIGHT_ICON_INDICATOR_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Icon_Indicator *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Icon_Indicator,  ::efl::Object,  ::efl::ui::spotlight::Indicator> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Icon_Indicator const ,  ::efl::Object const ,  ::efl::ui::spotlight::Indicator const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Icon_Indicator> _get_wref() const { return ::efl::eo::wref<Icon_Indicator>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Icon_Indicator* operator->() const { return this; }
    Icon_Indicator* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Icon_Indicator const& lhs, Icon_Indicator const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Icon_Indicator const& lhs, Icon_Indicator const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Icon_Indicator) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Icon_Indicator>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
