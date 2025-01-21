#ifndef EFL_UI_ALERT_POPUP_PART_TITLE_EO_HH
#define EFL_UI_ALERT_POPUP_PART_TITLE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_layout_part_type_provider.eo.h"
#include "efl_class.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_object.eo.h"
#include "efl_text.eo.h"
#include "efl_text_markup.eo.h"
#include "efl_ui_alert_popup_part_title.eo.h"
#include "efl_ui_l10n.eo.h"
#include "efl_ui_layout_part.eo.h"
#include "efl_ui_layout_part_text.eo.h"
#include "efl_ui_property_bind.eo.h"
#include "efl_ui_widget_part.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_layout_part_type_provider.eo.hh"
#include "efl_class.eo.hh"
#include "efl_gfx_entity.eo.hh"
#include "efl_object.eo.hh"
#include "efl_text.eo.hh"
#include "efl_text_markup.eo.hh"
#include "efl_ui_l10n.eo.hh"
#include "efl_ui_layout_part.eo.hh"
#include "efl_ui_layout_part_text.eo.hh"
#include "efl_ui_property_bind.eo.hh"
#include "efl_ui_widget_part.eo.hh"
#ifndef EFL_UI_ALERT_POPUP_PART_TITLE_FWD_GUARD
#define EFL_UI_ALERT_POPUP_PART_TITLE_FWD_GUARD
namespace efl { namespace ui { 
struct Alert_Popup_Part_Title;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Alert_Popup_Part_Title> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Alert_Popup_Part_Title&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Alert_Popup_Part_Title const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Alert_Popup_Part_Title const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_L10N_FWD_GUARD
#define EFL_UI_L10N_FWD_GUARD
namespace efl { namespace ui { 
struct L10n;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::L10n> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::L10n&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::L10n const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::L10n const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_LAYOUT_PART_TEXT_FWD_GUARD
#define EFL_UI_LAYOUT_PART_TEXT_FWD_GUARD
namespace efl { namespace ui { 
struct Layout_Part_Text;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Part_Text> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Part_Text&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Part_Text const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Part_Text const&> : ::std::true_type {}; } }
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
struct Alert_Popup_Part_Title {
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_ALERT_POPUP_PART_TITLE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Alert_Popup_Part_Title *>(this))); }
    operator ::efl::ui::Alert_Popup_Part_Title() const;
    operator ::efl::ui::Alert_Popup_Part_Title&();
    operator ::efl::ui::Alert_Popup_Part_Title const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Alert_Popup_Part_Title,  ::efl::Object,  ::efl::Text,  ::efl::Text_Markup,  ::efl::canvas::Layout_Part_Type_Provider,  ::efl::gfx::Entity,  ::efl::ui::L10n,  ::efl::ui::Layout_Part,  ::efl::ui::Layout_Part_Text,  ::efl::ui::Property_Bind,  ::efl::ui::Widget_Part> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Alert_Popup_Part_Title const ,  ::efl::Object const ,  ::efl::Text const ,  ::efl::Text_Markup const ,  ::efl::canvas::Layout_Part_Type_Provider const ,  ::efl::gfx::Entity const ,  ::efl::ui::L10n const ,  ::efl::ui::Layout_Part const ,  ::efl::ui::Layout_Part_Text const ,  ::efl::ui::Property_Bind const ,  ::efl::ui::Widget_Part const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Alert_Popup_Part_Title : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::Text)
    , EO_CXX_INHERIT(::efl::Text_Markup)
    , EO_CXX_INHERIT(::efl::canvas::Layout_Part_Type_Provider)
    , EO_CXX_INHERIT(::efl::gfx::Entity)
    , EO_CXX_INHERIT(::efl::ui::L10n)
    , EO_CXX_INHERIT(::efl::ui::Layout_Part)
    , EO_CXX_INHERIT(::efl::ui::Layout_Part_Text)
    , EO_CXX_INHERIT(::efl::ui::Property_Bind)
    , EO_CXX_INHERIT(::efl::ui::Widget_Part)
{
    explicit Alert_Popup_Part_Title( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Alert_Popup_Part_Title(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Alert_Popup_Part_Title() = default;
    Alert_Popup_Part_Title(Alert_Popup_Part_Title const&) = default;
    Alert_Popup_Part_Title(Alert_Popup_Part_Title&&) = default;
    Alert_Popup_Part_Title& operator=(Alert_Popup_Part_Title const&) = default;
    Alert_Popup_Part_Title& operator=(Alert_Popup_Part_Title&&) = default;
    template <typename Derived>
    Alert_Popup_Part_Title(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Alert_Popup_Part_Title, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Alert_Popup_Part_Title( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Alert_Popup_Part_Title( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Alert_Popup_Part_Title( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Alert_Popup_Part_Title >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Alert_Popup_Part_Title(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Alert_Popup_Part_Title >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_UI_ALERT_POPUP_PART_TITLE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Alert_Popup_Part_Title *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Alert_Popup_Part_Title,  ::efl::Object,  ::efl::Text,  ::efl::Text_Markup,  ::efl::canvas::Layout_Part_Type_Provider,  ::efl::gfx::Entity,  ::efl::ui::L10n,  ::efl::ui::Layout_Part,  ::efl::ui::Layout_Part_Text,  ::efl::ui::Property_Bind,  ::efl::ui::Widget_Part> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Alert_Popup_Part_Title const ,  ::efl::Object const ,  ::efl::Text const ,  ::efl::Text_Markup const ,  ::efl::canvas::Layout_Part_Type_Provider const ,  ::efl::gfx::Entity const ,  ::efl::ui::L10n const ,  ::efl::ui::Layout_Part const ,  ::efl::ui::Layout_Part_Text const ,  ::efl::ui::Property_Bind const ,  ::efl::ui::Widget_Part const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Alert_Popup_Part_Title> _get_wref() const { return ::efl::eo::wref<Alert_Popup_Part_Title>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Alert_Popup_Part_Title* operator->() const { return this; }
    Alert_Popup_Part_Title* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Alert_Popup_Part_Title const& lhs, Alert_Popup_Part_Title const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Alert_Popup_Part_Title const& lhs, Alert_Popup_Part_Title const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Alert_Popup_Part_Title) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Alert_Popup_Part_Title>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
