#ifndef EFL_CANVAS_VG_SHAPE_EO_HH
#define EFL_CANVAS_VG_SHAPE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_vg_node.eo.h"
#include "efl_canvas_vg_shape.eo.h"
#include "efl_class.eo.h"
#include "efl_duplicate.eo.h"
#include "efl_gfx_color.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_gfx_path.eo.h"
#include "efl_gfx_shape.eo.h"
#include "efl_gfx_stack.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_vg_node.eo.hh"
#include "efl_class.eo.hh"
#include "efl_duplicate.eo.hh"
#include "efl_gfx_color.eo.hh"
#include "efl_gfx_entity.eo.hh"
#include "efl_gfx_path.eo.hh"
#include "efl_gfx_shape.eo.hh"
#include "efl_gfx_stack.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_CANVAS_VG_SHAPE_FWD_GUARD
#define EFL_CANVAS_VG_SHAPE_FWD_GUARD
namespace efl { namespace canvas { namespace vg { 
struct Shape;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Shape> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Shape&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Shape const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Shape const&> : ::std::true_type {}; } }
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
#ifndef EFL_DUPLICATE_FWD_GUARD
#define EFL_DUPLICATE_FWD_GUARD
namespace efl { 
struct Duplicate;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Duplicate> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Duplicate&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Duplicate const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Duplicate const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_VG_NODE_FWD_GUARD
#define EFL_CANVAS_VG_NODE_FWD_GUARD
namespace efl { namespace canvas { namespace vg { 
struct Node;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Node> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Node&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Node const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Node const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_COLOR_FWD_GUARD
#define EFL_GFX_COLOR_FWD_GUARD
namespace efl { namespace gfx { 
struct Color;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color const&> : ::std::true_type {}; } }
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
#ifndef EFL_CANVAS_VG_NODE_FWD_GUARD
#define EFL_CANVAS_VG_NODE_FWD_GUARD
namespace efl { namespace canvas { namespace vg { 
struct Node;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Node> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Node&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Node const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Node const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_PATH_FWD_GUARD
#define EFL_GFX_PATH_FWD_GUARD
namespace efl { namespace gfx { 
struct Path;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Path> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Path&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Path const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Path const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_SHAPE_FWD_GUARD
#define EFL_GFX_SHAPE_FWD_GUARD
namespace efl { namespace gfx { 
struct Shape;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Shape> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Shape&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Shape const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Shape const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_STACK_FWD_GUARD
#define EFL_GFX_STACK_FWD_GUARD
namespace efl { namespace gfx { 
struct Stack;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { namespace vg { 
struct Shape {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type fill_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type fill_set( ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type f) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type stroke_fill_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_fill_set( ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type f) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type stroke_marker_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_marker_set( ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type m) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_VG_SHAPE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Shape *>(this))); }
    operator ::efl::canvas::vg::Shape() const;
    operator ::efl::canvas::vg::Shape&();
    operator ::efl::canvas::vg::Shape const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Shape,  ::efl::Duplicate,  ::efl::Object,  ::efl::canvas::vg::Node,  ::efl::gfx::Color,  ::efl::gfx::Entity,  ::efl::gfx::Path,  ::efl::gfx::Shape,  ::efl::gfx::Stack> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Shape const ,  ::efl::Duplicate const ,  ::efl::Object const ,  ::efl::canvas::vg::Node const ,  ::efl::gfx::Color const ,  ::efl::gfx::Entity const ,  ::efl::gfx::Path const ,  ::efl::gfx::Shape const ,  ::efl::gfx::Stack const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace canvas { namespace vg { 
struct Shape : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Duplicate)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::canvas::vg::Node)
    , EO_CXX_INHERIT(::efl::gfx::Color)
    , EO_CXX_INHERIT(::efl::gfx::Entity)
    , EO_CXX_INHERIT(::efl::gfx::Path)
    , EO_CXX_INHERIT(::efl::gfx::Shape)
    , EO_CXX_INHERIT(::efl::gfx::Stack)
{
    explicit Shape( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Shape(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Shape() = default;
    Shape(Shape const&) = default;
    Shape(Shape&&) = default;
    Shape& operator=(Shape const&) = default;
    Shape& operator=(Shape&&) = default;
    template <typename Derived>
    Shape(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Shape, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Shape( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Shape( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Shape( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Shape >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Shape(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Shape >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type fill_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type fill_set( ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type f) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type stroke_fill_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_fill_set( ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type f) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::canvas::vg::Node>::type stroke_marker_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_marker_set( ::efl::eolian::in_traits< ::efl::canvas::vg::Node>::type m) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_VG_SHAPE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Shape *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Shape,  ::efl::Duplicate,  ::efl::Object,  ::efl::canvas::vg::Node,  ::efl::gfx::Color,  ::efl::gfx::Entity,  ::efl::gfx::Path,  ::efl::gfx::Shape,  ::efl::gfx::Stack> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Shape const ,  ::efl::Duplicate const ,  ::efl::Object const ,  ::efl::canvas::vg::Node const ,  ::efl::gfx::Color const ,  ::efl::gfx::Entity const ,  ::efl::gfx::Path const ,  ::efl::gfx::Shape const ,  ::efl::gfx::Stack const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Shape> _get_wref() const { return ::efl::eo::wref<Shape>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Shape* operator->() const { return this; }
    Shape* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Shape const& lhs, Shape const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Shape const& lhs, Shape const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Shape) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Shape>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
