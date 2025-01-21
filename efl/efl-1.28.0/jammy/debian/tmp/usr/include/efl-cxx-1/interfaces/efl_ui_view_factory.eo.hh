#ifndef EFL_UI_VIEW_FACTORY_EO_HH
#define EFL_UI_VIEW_FACTORY_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_entity.eo.h"
#include "efl_model.eo.h"
#include "efl_ui_factory.eo.h"
#include "efl_ui_view_factory.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_gfx_entity.eo.hh"
#include "efl_model.eo.hh"
#include "efl_ui_factory.eo.hh"
#ifndef EFL_UI_VIEW_FACTORY_FWD_GUARD
#define EFL_UI_VIEW_FACTORY_FWD_GUARD
namespace efl { namespace ui { 
struct View_Factory;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::View_Factory> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::View_Factory&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::View_Factory const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::View_Factory const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_MODEL_FWD_GUARD
#define EFL_MODEL_FWD_GUARD
namespace efl { 
struct Model;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Model> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Model&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Model const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Model const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_FACTORY_FWD_GUARD
#define EFL_UI_FACTORY_FWD_GUARD
namespace efl { namespace ui { 
struct Factory;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct View_Factory {
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_VIEW_FACTORY_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<View_Factory *>(this))); }
    operator ::efl::ui::View_Factory() const;
    operator ::efl::ui::View_Factory&();
    operator ::efl::ui::View_Factory const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<View_Factory> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<View_Factory const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct View_Factory : private ::efl::eo::concrete
{
    explicit View_Factory( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    View_Factory(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit View_Factory() = default;
    View_Factory(View_Factory const&) = default;
    View_Factory(View_Factory&&) = default;
    View_Factory& operator=(View_Factory const&) = default;
    View_Factory& operator=(View_Factory&&) = default;
    template <typename Derived>
    View_Factory(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< View_Factory, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    View_Factory( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit View_Factory( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> View_Factory( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, View_Factory >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> View_Factory(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, View_Factory >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_UI_VIEW_FACTORY_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<View_Factory *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<View_Factory> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<View_Factory const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<View_Factory> _get_wref() const { return ::efl::eo::wref<View_Factory>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const View_Factory* operator->() const { return this; }
    View_Factory* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(View_Factory const& lhs, View_Factory const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(View_Factory const& lhs, View_Factory const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(View_Factory) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<View_Factory>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
