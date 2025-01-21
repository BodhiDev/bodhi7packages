#ifndef EFL_UI_POPUP_PART_BACKWALL_EO_HH
#define EFL_UI_POPUP_PART_BACKWALL_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_layout_part_type_provider.eo.h"
#include "efl_class.eo.h"
#include "efl_file.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_layout_part.eo.h"
#include "efl_ui_popup_part_backwall.eo.h"
#include "efl_ui_property_bind.eo.h"
#include "efl_ui_widget_part.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_layout_part_type_provider.eo.hh"
#include "efl_class.eo.hh"
#include "efl_file.eo.hh"
#include "efl_gfx_entity.eo.hh"
#include "efl_object.eo.hh"
#include "efl_ui_layout_part.eo.hh"
#include "efl_ui_property_bind.eo.hh"
#include "efl_ui_widget_part.eo.hh"
#ifndef EFL_UI_POPUP_PART_BACKWALL_FWD_GUARD
#define EFL_UI_POPUP_PART_BACKWALL_FWD_GUARD
namespace efl { namespace ui { 
struct Popup_Part_Backwall;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Popup_Part_Backwall> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Popup_Part_Backwall&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Popup_Part_Backwall const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Popup_Part_Backwall const&> : ::std::true_type {}; } }
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
#ifndef EFL_FILE_FWD_GUARD
#define EFL_FILE_FWD_GUARD
namespace efl { 
struct File;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::File> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::File&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::File const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::File const&> : ::std::true_type {}; } }
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
struct Popup_Part_Backwall {
    ::efl::eolian::return_traits<bool>::type repeat_events_get() const;
    ::efl::eolian::return_traits<void>::type repeat_events_set( ::efl::eolian::in_traits<bool>::type repeat) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_POPUP_PART_BACKWALL_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Popup_Part_Backwall *>(this))); }
    operator ::efl::ui::Popup_Part_Backwall() const;
    operator ::efl::ui::Popup_Part_Backwall&();
    operator ::efl::ui::Popup_Part_Backwall const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Popup_Part_Backwall,  ::efl::File,  ::efl::Object,  ::efl::canvas::Layout_Part_Type_Provider,  ::efl::gfx::Entity,  ::efl::ui::Layout_Part,  ::efl::ui::Property_Bind,  ::efl::ui::Widget_Part> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Popup_Part_Backwall const ,  ::efl::File const ,  ::efl::Object const ,  ::efl::canvas::Layout_Part_Type_Provider const ,  ::efl::gfx::Entity const ,  ::efl::ui::Layout_Part const ,  ::efl::ui::Property_Bind const ,  ::efl::ui::Widget_Part const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Popup_Part_Backwall : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::File)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::canvas::Layout_Part_Type_Provider)
    , EO_CXX_INHERIT(::efl::gfx::Entity)
    , EO_CXX_INHERIT(::efl::ui::Layout_Part)
    , EO_CXX_INHERIT(::efl::ui::Property_Bind)
    , EO_CXX_INHERIT(::efl::ui::Widget_Part)
{
    explicit Popup_Part_Backwall( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Popup_Part_Backwall(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Popup_Part_Backwall() = default;
    Popup_Part_Backwall(Popup_Part_Backwall const&) = default;
    Popup_Part_Backwall(Popup_Part_Backwall&&) = default;
    Popup_Part_Backwall& operator=(Popup_Part_Backwall const&) = default;
    Popup_Part_Backwall& operator=(Popup_Part_Backwall&&) = default;
    template <typename Derived>
    Popup_Part_Backwall(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Popup_Part_Backwall, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Popup_Part_Backwall( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Popup_Part_Backwall( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Popup_Part_Backwall( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Popup_Part_Backwall >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Popup_Part_Backwall(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Popup_Part_Backwall >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    ::efl::eolian::return_traits<bool>::type repeat_events_get() const;
    ::efl::eolian::return_traits<void>::type repeat_events_set( ::efl::eolian::in_traits<bool>::type repeat) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_POPUP_PART_BACKWALL_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Popup_Part_Backwall *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Popup_Part_Backwall,  ::efl::File,  ::efl::Object,  ::efl::canvas::Layout_Part_Type_Provider,  ::efl::gfx::Entity,  ::efl::ui::Layout_Part,  ::efl::ui::Property_Bind,  ::efl::ui::Widget_Part> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Popup_Part_Backwall const ,  ::efl::File const ,  ::efl::Object const ,  ::efl::canvas::Layout_Part_Type_Provider const ,  ::efl::gfx::Entity const ,  ::efl::ui::Layout_Part const ,  ::efl::ui::Property_Bind const ,  ::efl::ui::Widget_Part const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Popup_Part_Backwall> _get_wref() const { return ::efl::eo::wref<Popup_Part_Backwall>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Popup_Part_Backwall* operator->() const { return this; }
    Popup_Part_Backwall* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Popup_Part_Backwall const& lhs, Popup_Part_Backwall const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Popup_Part_Backwall const& lhs, Popup_Part_Backwall const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Popup_Part_Backwall) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Popup_Part_Backwall>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
