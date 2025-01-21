#ifndef EFL_UI_RADIO_LEGACY_PART_EO_HH
#define EFL_UI_RADIO_LEGACY_PART_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_layout_part_type_provider.eo.h"
#include "efl_class.eo.h"
#include "efl_content.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_layout_part.eo.h"
#include "efl_ui_layout_part_content.eo.h"
#include "efl_ui_property_bind.eo.h"
#include "efl_ui_radio_legacy_part.eo.h"
#include "efl_ui_widget_part.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_layout_part_type_provider.eo.hh"
#include "efl_class.eo.hh"
#include "efl_content.eo.hh"
#include "efl_gfx_entity.eo.hh"
#include "efl_object.eo.hh"
#include "efl_ui_layout_part.eo.hh"
#include "efl_ui_layout_part_content.eo.hh"
#include "efl_ui_property_bind.eo.hh"
#include "efl_ui_widget_part.eo.hh"
#ifndef EFL_UI_RADIO_LEGACY_PART_FWD_GUARD
#define EFL_UI_RADIO_LEGACY_PART_FWD_GUARD
namespace efl { namespace ui { 
struct Radio_Legacy_Part;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio_Legacy_Part> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio_Legacy_Part&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio_Legacy_Part const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Radio_Legacy_Part const&> : ::std::true_type {}; } }
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
#ifndef EFL_CONTENT_FWD_GUARD
#define EFL_CONTENT_FWD_GUARD
namespace efl { 
struct Content;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Content> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Content&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Content const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Content const&> : ::std::true_type {}; } }
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
#ifndef EFL_CANVAS_LAYOUT_PART_TYPE_PROVIDER_FWD_GUARD
#define EFL_CANVAS_LAYOUT_PART_TYPE_PROVIDER_FWD_GUARD
namespace efl { namespace canvas { 
struct Layout_Part_Type_Provider;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part_Type_Provider> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part_Type_Provider&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part_Type_Provider const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part_Type_Provider const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_LAYOUT_PART_FWD_GUARD
#define EFL_UI_LAYOUT_PART_FWD_GUARD
namespace efl { namespace ui { 
struct Layout_Part;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Part> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Part&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Part const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Part const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_LAYOUT_PART_CONTENT_FWD_GUARD
#define EFL_UI_LAYOUT_PART_CONTENT_FWD_GUARD
namespace efl { namespace ui { 
struct Layout_Part_Content;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Part_Content> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Part_Content&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Part_Content const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Part_Content const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_WIDGET_PART_FWD_GUARD
#define EFL_UI_WIDGET_PART_FWD_GUARD
namespace efl { namespace ui { 
struct Widget_Part;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Part> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Part&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Part const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Part const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Radio_Legacy_Part {
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_RADIO_LEGACY_PART_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Radio_Legacy_Part *>(this))); }
    operator ::efl::ui::Radio_Legacy_Part() const;
    operator ::efl::ui::Radio_Legacy_Part&();
    operator ::efl::ui::Radio_Legacy_Part const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Radio_Legacy_Part,  ::efl::Content,  ::efl::Object,  ::efl::canvas::Layout_Part_Type_Provider,  ::efl::gfx::Entity,  ::efl::ui::Layout_Part,  ::efl::ui::Layout_Part_Content,  ::efl::ui::Property_Bind,  ::efl::ui::Widget_Part> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Radio_Legacy_Part const ,  ::efl::Content const ,  ::efl::Object const ,  ::efl::canvas::Layout_Part_Type_Provider const ,  ::efl::gfx::Entity const ,  ::efl::ui::Layout_Part const ,  ::efl::ui::Layout_Part_Content const ,  ::efl::ui::Property_Bind const ,  ::efl::ui::Widget_Part const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Radio_Legacy_Part : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Content)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::canvas::Layout_Part_Type_Provider)
    , EO_CXX_INHERIT(::efl::gfx::Entity)
    , EO_CXX_INHERIT(::efl::ui::Layout_Part)
    , EO_CXX_INHERIT(::efl::ui::Layout_Part_Content)
    , EO_CXX_INHERIT(::efl::ui::Property_Bind)
    , EO_CXX_INHERIT(::efl::ui::Widget_Part)
{
    explicit Radio_Legacy_Part( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Radio_Legacy_Part(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Radio_Legacy_Part() = default;
    Radio_Legacy_Part(Radio_Legacy_Part const&) = default;
    Radio_Legacy_Part(Radio_Legacy_Part&&) = default;
    Radio_Legacy_Part& operator=(Radio_Legacy_Part const&) = default;
    Radio_Legacy_Part& operator=(Radio_Legacy_Part&&) = default;
    template <typename Derived>
    Radio_Legacy_Part(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Radio_Legacy_Part, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Radio_Legacy_Part( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Radio_Legacy_Part( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Radio_Legacy_Part( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Radio_Legacy_Part >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Radio_Legacy_Part(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Radio_Legacy_Part >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_UI_RADIO_LEGACY_PART_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Radio_Legacy_Part *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Radio_Legacy_Part,  ::efl::Content,  ::efl::Object,  ::efl::canvas::Layout_Part_Type_Provider,  ::efl::gfx::Entity,  ::efl::ui::Layout_Part,  ::efl::ui::Layout_Part_Content,  ::efl::ui::Property_Bind,  ::efl::ui::Widget_Part> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Radio_Legacy_Part const ,  ::efl::Content const ,  ::efl::Object const ,  ::efl::canvas::Layout_Part_Type_Provider const ,  ::efl::gfx::Entity const ,  ::efl::ui::Layout_Part const ,  ::efl::ui::Layout_Part_Content const ,  ::efl::ui::Property_Bind const ,  ::efl::ui::Widget_Part const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Radio_Legacy_Part> _get_wref() const { return ::efl::eo::wref<Radio_Legacy_Part>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Radio_Legacy_Part* operator->() const { return this; }
    Radio_Legacy_Part* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Radio_Legacy_Part const& lhs, Radio_Legacy_Part const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Radio_Legacy_Part const& lhs, Radio_Legacy_Part const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Radio_Legacy_Part) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Radio_Legacy_Part>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
