#ifndef EFL_UI_NAVIGATION_BAR_PART_BACK_BUTTON_EO_HH
#define EFL_UI_NAVIGATION_BAR_PART_BACK_BUTTON_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_layout_part_type_provider.eo.h"
#include "efl_class.eo.h"
#include "efl_content.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_object.eo.h"
#include "efl_text.eo.h"
#include "efl_ui_layout_part.eo.h"
#include "efl_ui_navigation_bar_part_back_button.eo.h"
#include "efl_ui_property_bind.eo.h"
#include "efl_ui_widget_part.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_layout_part_type_provider.eo.hh"
#include "efl_class.eo.hh"
#include "efl_content.eo.hh"
#include "efl_gfx_entity.eo.hh"
#include "efl_object.eo.hh"
#include "efl_text.eo.hh"
#include "efl_ui_layout_part.eo.hh"
#include "efl_ui_property_bind.eo.hh"
#include "efl_ui_widget_part.eo.hh"
#ifndef EFL_UI_NAVIGATION_BAR_PART_BACK_BUTTON_FWD_GUARD
#define EFL_UI_NAVIGATION_BAR_PART_BACK_BUTTON_FWD_GUARD
namespace efl { namespace ui { 
struct Navigation_Bar_Part_Back_Button;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Navigation_Bar_Part_Back_Button> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Navigation_Bar_Part_Back_Button&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Navigation_Bar_Part_Back_Button const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Navigation_Bar_Part_Back_Button const&> : ::std::true_type {}; } }
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
struct Navigation_Bar_Part_Back_Button {
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_NAVIGATION_BAR_PART_BACK_BUTTON_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Navigation_Bar_Part_Back_Button *>(this))); }
    operator ::efl::ui::Navigation_Bar_Part_Back_Button() const;
    operator ::efl::ui::Navigation_Bar_Part_Back_Button&();
    operator ::efl::ui::Navigation_Bar_Part_Back_Button const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Navigation_Bar_Part_Back_Button,  ::efl::Content,  ::efl::Object,  ::efl::Text,  ::efl::canvas::Layout_Part_Type_Provider,  ::efl::gfx::Entity,  ::efl::ui::Layout_Part,  ::efl::ui::Property_Bind,  ::efl::ui::Widget_Part> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Navigation_Bar_Part_Back_Button const ,  ::efl::Content const ,  ::efl::Object const ,  ::efl::Text const ,  ::efl::canvas::Layout_Part_Type_Provider const ,  ::efl::gfx::Entity const ,  ::efl::ui::Layout_Part const ,  ::efl::ui::Property_Bind const ,  ::efl::ui::Widget_Part const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Navigation_Bar_Part_Back_Button : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Content)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::Text)
    , EO_CXX_INHERIT(::efl::canvas::Layout_Part_Type_Provider)
    , EO_CXX_INHERIT(::efl::gfx::Entity)
    , EO_CXX_INHERIT(::efl::ui::Layout_Part)
    , EO_CXX_INHERIT(::efl::ui::Property_Bind)
    , EO_CXX_INHERIT(::efl::ui::Widget_Part)
{
    explicit Navigation_Bar_Part_Back_Button( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Navigation_Bar_Part_Back_Button(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Navigation_Bar_Part_Back_Button() = default;
    Navigation_Bar_Part_Back_Button(Navigation_Bar_Part_Back_Button const&) = default;
    Navigation_Bar_Part_Back_Button(Navigation_Bar_Part_Back_Button&&) = default;
    Navigation_Bar_Part_Back_Button& operator=(Navigation_Bar_Part_Back_Button const&) = default;
    Navigation_Bar_Part_Back_Button& operator=(Navigation_Bar_Part_Back_Button&&) = default;
    template <typename Derived>
    Navigation_Bar_Part_Back_Button(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Navigation_Bar_Part_Back_Button, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Navigation_Bar_Part_Back_Button( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Navigation_Bar_Part_Back_Button( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Navigation_Bar_Part_Back_Button( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Navigation_Bar_Part_Back_Button >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Navigation_Bar_Part_Back_Button(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Navigation_Bar_Part_Back_Button >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_UI_NAVIGATION_BAR_PART_BACK_BUTTON_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Navigation_Bar_Part_Back_Button *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Navigation_Bar_Part_Back_Button,  ::efl::Content,  ::efl::Object,  ::efl::Text,  ::efl::canvas::Layout_Part_Type_Provider,  ::efl::gfx::Entity,  ::efl::ui::Layout_Part,  ::efl::ui::Property_Bind,  ::efl::ui::Widget_Part> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Navigation_Bar_Part_Back_Button const ,  ::efl::Content const ,  ::efl::Object const ,  ::efl::Text const ,  ::efl::canvas::Layout_Part_Type_Provider const ,  ::efl::gfx::Entity const ,  ::efl::ui::Layout_Part const ,  ::efl::ui::Property_Bind const ,  ::efl::ui::Widget_Part const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Navigation_Bar_Part_Back_Button> _get_wref() const { return ::efl::eo::wref<Navigation_Bar_Part_Back_Button>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Navigation_Bar_Part_Back_Button* operator->() const { return this; }
    Navigation_Bar_Part_Back_Button* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Navigation_Bar_Part_Back_Button const& lhs, Navigation_Bar_Part_Back_Button const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Navigation_Bar_Part_Back_Button const& lhs, Navigation_Bar_Part_Back_Button const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Navigation_Bar_Part_Back_Button) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Navigation_Bar_Part_Back_Button>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
