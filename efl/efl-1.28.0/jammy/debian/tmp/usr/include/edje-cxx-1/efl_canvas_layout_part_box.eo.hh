#ifndef EFL_CANVAS_LAYOUT_PART_BOX_EO_HH
#define EFL_CANVAS_LAYOUT_PART_BOX_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_layout_part.eo.h"
#include "efl_canvas_layout_part_box.eo.h"
#include "efl_canvas_layout_part_type_provider.eo.h"
#include "efl_class.eo.h"
#include "efl_container.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_object.eo.h"
#include "efl_pack.eo.h"
#include "efl_pack_linear.eo.h"
#include "efl_ui_drag.eo.h"
#include "efl_ui_layout_orientable.eo.h"
#include "efl_ui_layout_orientable_readonly.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_layout_part.eo.hh"
#include "efl_canvas_layout_part_type_provider.eo.hh"
#include "efl_class.eo.hh"
#include "efl_container.eo.hh"
#include "efl_gfx_entity.eo.hh"
#include "efl_object.eo.hh"
#include "efl_pack.eo.hh"
#include "efl_pack_linear.eo.hh"
#include "efl_ui_drag.eo.hh"
#include "efl_ui_layout_orientable.eo.hh"
#include "efl_ui_layout_orientable_readonly.eo.hh"
#ifndef EFL_CANVAS_LAYOUT_PART_BOX_FWD_GUARD
#define EFL_CANVAS_LAYOUT_PART_BOX_FWD_GUARD
namespace efl { namespace canvas { 
struct Layout_Part_Box;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part_Box> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part_Box&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part_Box const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part_Box const&> : ::std::true_type {}; } }
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
#ifndef EFL_CONTAINER_FWD_GUARD
#define EFL_CONTAINER_FWD_GUARD
namespace efl { 
struct Container;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_LAYOUT_ORIENTABLE_FWD_GUARD
#define EFL_UI_LAYOUT_ORIENTABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Layout_Orientable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_LAYOUT_ORIENTABLE_READONLY_FWD_GUARD
#define EFL_UI_LAYOUT_ORIENTABLE_READONLY_FWD_GUARD
namespace efl { namespace ui { 
struct Layout_Orientable_Readonly;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable_Readonly> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable_Readonly&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable_Readonly const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable_Readonly const&> : ::std::true_type {}; } }
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
#ifndef EFL_PACK_FWD_GUARD
#define EFL_PACK_FWD_GUARD
namespace efl { 
struct Pack;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_PACK_LINEAR_FWD_GUARD
#define EFL_PACK_LINEAR_FWD_GUARD
namespace efl { 
struct Pack_Linear;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack_Linear> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack_Linear&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack_Linear const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack_Linear const&> : ::std::true_type {}; } }
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
struct Layout_Part_Box {
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_LAYOUT_PART_BOX_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Layout_Part_Box *>(this))); }
    operator ::efl::canvas::Layout_Part_Box() const;
    operator ::efl::canvas::Layout_Part_Box&();
    operator ::efl::canvas::Layout_Part_Box const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Layout_Part_Box,  ::efl::Container,  ::efl::Object,  ::efl::Pack,  ::efl::Pack_Linear,  ::efl::canvas::Layout_Part,  ::efl::canvas::Layout_Part_Type_Provider,  ::efl::gfx::Entity,  ::efl::ui::Drag,  ::efl::ui::Layout_Orientable,  ::efl::ui::Layout_Orientable_Readonly> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Layout_Part_Box const ,  ::efl::Container const ,  ::efl::Object const ,  ::efl::Pack const ,  ::efl::Pack_Linear const ,  ::efl::canvas::Layout_Part const ,  ::efl::canvas::Layout_Part_Type_Provider const ,  ::efl::gfx::Entity const ,  ::efl::ui::Drag const ,  ::efl::ui::Layout_Orientable const ,  ::efl::ui::Layout_Orientable_Readonly const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Layout_Part_Box : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Container)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::Pack)
    , EO_CXX_INHERIT(::efl::Pack_Linear)
    , EO_CXX_INHERIT(::efl::canvas::Layout_Part)
    , EO_CXX_INHERIT(::efl::canvas::Layout_Part_Type_Provider)
    , EO_CXX_INHERIT(::efl::gfx::Entity)
    , EO_CXX_INHERIT(::efl::ui::Drag)
    , EO_CXX_INHERIT(::efl::ui::Layout_Orientable)
    , EO_CXX_INHERIT(::efl::ui::Layout_Orientable_Readonly)
{
    explicit Layout_Part_Box( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Layout_Part_Box(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Layout_Part_Box() = default;
    Layout_Part_Box(Layout_Part_Box const&) = default;
    Layout_Part_Box(Layout_Part_Box&&) = default;
    Layout_Part_Box& operator=(Layout_Part_Box const&) = default;
    Layout_Part_Box& operator=(Layout_Part_Box&&) = default;
    template <typename Derived>
    Layout_Part_Box(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Layout_Part_Box, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Layout_Part_Box( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Layout_Part_Box( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Layout_Part_Box( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Layout_Part_Box >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Layout_Part_Box(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Layout_Part_Box >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_LAYOUT_PART_BOX_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Layout_Part_Box *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Layout_Part_Box,  ::efl::Container,  ::efl::Object,  ::efl::Pack,  ::efl::Pack_Linear,  ::efl::canvas::Layout_Part,  ::efl::canvas::Layout_Part_Type_Provider,  ::efl::gfx::Entity,  ::efl::ui::Drag,  ::efl::ui::Layout_Orientable,  ::efl::ui::Layout_Orientable_Readonly> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Layout_Part_Box const ,  ::efl::Container const ,  ::efl::Object const ,  ::efl::Pack const ,  ::efl::Pack_Linear const ,  ::efl::canvas::Layout_Part const ,  ::efl::canvas::Layout_Part_Type_Provider const ,  ::efl::gfx::Entity const ,  ::efl::ui::Drag const ,  ::efl::ui::Layout_Orientable const ,  ::efl::ui::Layout_Orientable_Readonly const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Layout_Part_Box> _get_wref() const { return ::efl::eo::wref<Layout_Part_Box>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Layout_Part_Box* operator->() const { return this; }
    Layout_Part_Box* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Layout_Part_Box const& lhs, Layout_Part_Box const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Layout_Part_Box const& lhs, Layout_Part_Box const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Layout_Part_Box) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Layout_Part_Box>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
