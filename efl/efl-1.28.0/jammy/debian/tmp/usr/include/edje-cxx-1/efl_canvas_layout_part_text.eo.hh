#ifndef EFL_CANVAS_LAYOUT_PART_TEXT_EO_HH
#define EFL_CANVAS_LAYOUT_PART_TEXT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_layout_part.eo.h"
#include "efl_canvas_layout_part_text.eo.h"
#include "efl_canvas_layout_part_type_provider.eo.h"
#include "efl_class.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_object.eo.h"
#include "efl_text.eo.h"
#include "efl_text_font_properties.eo.h"
#include "efl_text_format.eo.h"
#include "efl_text_markup.eo.h"
#include "efl_text_style.eo.h"
#include "efl_ui_drag.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_layout_part.eo.hh"
#include "efl_canvas_layout_part_type_provider.eo.hh"
#include "efl_class.eo.hh"
#include "efl_gfx_entity.eo.hh"
#include "efl_object.eo.hh"
#include "efl_text.eo.hh"
#include "efl_text_font_properties.eo.hh"
#include "efl_text_format.eo.hh"
#include "efl_text_markup.eo.hh"
#include "efl_text_style.eo.hh"
#include "efl_ui_drag.eo.hh"
#ifndef EFL_CANVAS_LAYOUT_PART_TEXT_FWD_GUARD
#define EFL_CANVAS_LAYOUT_PART_TEXT_FWD_GUARD
namespace efl { namespace canvas { 
struct Layout_Part_Text;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part_Text> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part_Text&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part_Text const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part_Text const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_DRAG_FWD_GUARD
#define EFL_UI_DRAG_FWD_GUARD
namespace efl { namespace ui { 
struct Drag;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Drag> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Drag&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Drag const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Drag const&> : ::std::true_type {}; } }
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
#ifndef EFL_TEXT_FWD_GUARD
#define EFL_TEXT_FWD_GUARD
namespace efl { 
struct Text;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_TEXT_FONT_PROPERTIES_FWD_GUARD
#define EFL_TEXT_FONT_PROPERTIES_FWD_GUARD
namespace efl { 
struct Text_Font_Properties;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Font_Properties> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Font_Properties&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Font_Properties const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Font_Properties const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_TEXT_FORMAT_FWD_GUARD
#define EFL_TEXT_FORMAT_FWD_GUARD
namespace efl { 
struct Text_Format;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Format> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Format&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Format const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Format const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_TEXT_MARKUP_FWD_GUARD
#define EFL_TEXT_MARKUP_FWD_GUARD
namespace efl { 
struct Text_Markup;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Markup> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Markup&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Markup const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Markup const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_TEXT_STYLE_FWD_GUARD
#define EFL_TEXT_STYLE_FWD_GUARD
namespace efl { 
struct Text_Style;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Style> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Style&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Style const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Style const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_LAYOUT_PART_FWD_GUARD
#define EFL_CANVAS_LAYOUT_PART_FWD_GUARD
namespace efl { namespace canvas { 
struct Layout_Part;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { 
struct Layout_Part_Text {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Canvas_Layout_Part_Text_Expand>::type text_expand_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type text_expand_set( ::efl::eolian::in_traits<Efl_Canvas_Layout_Part_Text_Expand>::type type) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_LAYOUT_PART_TEXT_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Layout_Part_Text *>(this))); }
    operator ::efl::canvas::Layout_Part_Text() const;
    operator ::efl::canvas::Layout_Part_Text&();
    operator ::efl::canvas::Layout_Part_Text const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Layout_Part_Text,  ::efl::Object,  ::efl::Text,  ::efl::Text_Font_Properties,  ::efl::Text_Format,  ::efl::Text_Markup,  ::efl::Text_Style,  ::efl::canvas::Layout_Part,  ::efl::canvas::Layout_Part_Type_Provider,  ::efl::gfx::Entity,  ::efl::ui::Drag> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Layout_Part_Text const ,  ::efl::Object const ,  ::efl::Text const ,  ::efl::Text_Font_Properties const ,  ::efl::Text_Format const ,  ::efl::Text_Markup const ,  ::efl::Text_Style const ,  ::efl::canvas::Layout_Part const ,  ::efl::canvas::Layout_Part_Type_Provider const ,  ::efl::gfx::Entity const ,  ::efl::ui::Drag const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Layout_Part_Text : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::Text)
    , EO_CXX_INHERIT(::efl::Text_Font_Properties)
    , EO_CXX_INHERIT(::efl::Text_Format)
    , EO_CXX_INHERIT(::efl::Text_Markup)
    , EO_CXX_INHERIT(::efl::Text_Style)
    , EO_CXX_INHERIT(::efl::canvas::Layout_Part)
    , EO_CXX_INHERIT(::efl::canvas::Layout_Part_Type_Provider)
    , EO_CXX_INHERIT(::efl::gfx::Entity)
    , EO_CXX_INHERIT(::efl::ui::Drag)
{
    explicit Layout_Part_Text( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Layout_Part_Text(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Layout_Part_Text() = default;
    Layout_Part_Text(Layout_Part_Text const&) = default;
    Layout_Part_Text(Layout_Part_Text&&) = default;
    Layout_Part_Text& operator=(Layout_Part_Text const&) = default;
    Layout_Part_Text& operator=(Layout_Part_Text&&) = default;
    template <typename Derived>
    Layout_Part_Text(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Layout_Part_Text, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Layout_Part_Text( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Layout_Part_Text( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Layout_Part_Text( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Layout_Part_Text >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Layout_Part_Text(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Layout_Part_Text >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Canvas_Layout_Part_Text_Expand>::type text_expand_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type text_expand_set( ::efl::eolian::in_traits<Efl_Canvas_Layout_Part_Text_Expand>::type type) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_LAYOUT_PART_TEXT_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Layout_Part_Text *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Layout_Part_Text,  ::efl::Object,  ::efl::Text,  ::efl::Text_Font_Properties,  ::efl::Text_Format,  ::efl::Text_Markup,  ::efl::Text_Style,  ::efl::canvas::Layout_Part,  ::efl::canvas::Layout_Part_Type_Provider,  ::efl::gfx::Entity,  ::efl::ui::Drag> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Layout_Part_Text const ,  ::efl::Object const ,  ::efl::Text const ,  ::efl::Text_Font_Properties const ,  ::efl::Text_Format const ,  ::efl::Text_Markup const ,  ::efl::Text_Style const ,  ::efl::canvas::Layout_Part const ,  ::efl::canvas::Layout_Part_Type_Provider const ,  ::efl::gfx::Entity const ,  ::efl::ui::Drag const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Layout_Part_Text> _get_wref() const { return ::efl::eo::wref<Layout_Part_Text>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Layout_Part_Text* operator->() const { return this; }
    Layout_Part_Text* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Layout_Part_Text const& lhs, Layout_Part_Text const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Layout_Part_Text const& lhs, Layout_Part_Text const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Layout_Part_Text) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Layout_Part_Text>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
