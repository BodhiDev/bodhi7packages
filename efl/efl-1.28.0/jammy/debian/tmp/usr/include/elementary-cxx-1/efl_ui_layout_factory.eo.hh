#ifndef EFL_UI_LAYOUT_FACTORY_EO_HH
#define EFL_UI_LAYOUT_FACTORY_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_model.eo.h"
#include "efl_object.eo.h"
#include "efl_part.eo.h"
#include "efl_ui_caching_factory.eo.h"
#include "efl_ui_factory.eo.h"
#include "efl_ui_factory_bind.eo.h"
#include "efl_ui_layout_factory.eo.h"
#include "efl_ui_property_bind.eo.h"
#include "efl_ui_widget_factory.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_gfx_entity.eo.hh"
#include "efl_loop.eo.hh"
#include "efl_loop_consumer.eo.hh"
#include "efl_model.eo.hh"
#include "efl_object.eo.hh"
#include "efl_part.eo.hh"
#include "efl_ui_caching_factory.eo.hh"
#include "efl_ui_factory.eo.hh"
#include "efl_ui_factory_bind.eo.hh"
#include "efl_ui_property_bind.eo.hh"
#include "efl_ui_widget_factory.eo.hh"
#ifndef EFL_UI_LAYOUT_FACTORY_FWD_GUARD
#define EFL_UI_LAYOUT_FACTORY_FWD_GUARD
namespace efl { namespace ui { 
struct Layout_Factory;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Factory> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Factory&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Factory const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Factory const&> : ::std::true_type {}; } }
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
#ifndef EFL_LOOP_FWD_GUARD
#define EFL_LOOP_FWD_GUARD
namespace efl { 
struct Loop;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_LOOP_CONSUMER_FWD_GUARD
#define EFL_LOOP_CONSUMER_FWD_GUARD
namespace efl { 
struct Loop_Consumer;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer const&> : ::std::true_type {}; } }
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
#ifndef EFL_PART_FWD_GUARD
#define EFL_PART_FWD_GUARD
namespace efl { 
struct Part;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Part> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Part&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Part const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Part const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_CACHING_FACTORY_FWD_GUARD
#define EFL_UI_CACHING_FACTORY_FWD_GUARD
namespace efl { namespace ui { 
struct Caching_Factory;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Caching_Factory> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Caching_Factory&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Caching_Factory const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Caching_Factory const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_FACTORY_BIND_FWD_GUARD
#define EFL_UI_FACTORY_BIND_FWD_GUARD
namespace efl { namespace ui { 
struct Factory_Bind;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory_Bind> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory_Bind&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory_Bind const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory_Bind const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_PROPERTY_BIND_FWD_GUARD
#define EFL_UI_PROPERTY_BIND_FWD_GUARD
namespace efl { namespace ui { 
struct Property_Bind;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_WIDGET_FACTORY_FWD_GUARD
#define EFL_UI_WIDGET_FACTORY_FWD_GUARD
namespace efl { namespace ui { 
struct Widget_Factory;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Factory> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Factory&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Factory const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Factory const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Layout_Factory {
    ::efl::eolian::return_traits<void>::type theme_config( ::efl::eolian::in_traits< ::efl::eina::string_view>::type klass,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type group,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type style) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_LAYOUT_FACTORY_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Layout_Factory *>(this))); }
    operator ::efl::ui::Layout_Factory() const;
    operator ::efl::ui::Layout_Factory&();
    operator ::efl::ui::Layout_Factory const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Layout_Factory,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::Part,  ::efl::ui::Caching_Factory,  ::efl::ui::Factory,  ::efl::ui::Factory_Bind,  ::efl::ui::Property_Bind,  ::efl::ui::Widget_Factory> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Layout_Factory const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::Part const ,  ::efl::ui::Caching_Factory const ,  ::efl::ui::Factory const ,  ::efl::ui::Factory_Bind const ,  ::efl::ui::Property_Bind const ,  ::efl::ui::Widget_Factory const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Layout_Factory : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::Part)
    , EO_CXX_INHERIT(::efl::ui::Caching_Factory)
    , EO_CXX_INHERIT(::efl::ui::Factory)
    , EO_CXX_INHERIT(::efl::ui::Factory_Bind)
    , EO_CXX_INHERIT(::efl::ui::Property_Bind)
    , EO_CXX_INHERIT(::efl::ui::Widget_Factory)
{
    explicit Layout_Factory( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Layout_Factory(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Layout_Factory() = default;
    Layout_Factory(Layout_Factory const&) = default;
    Layout_Factory(Layout_Factory&&) = default;
    Layout_Factory& operator=(Layout_Factory const&) = default;
    Layout_Factory& operator=(Layout_Factory&&) = default;
    template <typename Derived>
    Layout_Factory(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Layout_Factory, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Layout_Factory( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Layout_Factory( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Layout_Factory( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Layout_Factory >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Layout_Factory(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Layout_Factory >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    ::efl::eolian::return_traits<void>::type theme_config( ::efl::eolian::in_traits< ::efl::eina::string_view>::type klass,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type group,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type style) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_LAYOUT_FACTORY_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Layout_Factory *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Layout_Factory,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::Part,  ::efl::ui::Caching_Factory,  ::efl::ui::Factory,  ::efl::ui::Factory_Bind,  ::efl::ui::Property_Bind,  ::efl::ui::Widget_Factory> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Layout_Factory const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::Part const ,  ::efl::ui::Caching_Factory const ,  ::efl::ui::Factory const ,  ::efl::ui::Factory_Bind const ,  ::efl::ui::Property_Bind const ,  ::efl::ui::Widget_Factory const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Layout_Factory> _get_wref() const { return ::efl::eo::wref<Layout_Factory>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Layout_Factory* operator->() const { return this; }
    Layout_Factory* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Layout_Factory const& lhs, Layout_Factory const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Layout_Factory const& lhs, Layout_Factory const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Layout_Factory) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Layout_Factory>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
