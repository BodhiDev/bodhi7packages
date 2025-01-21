#ifndef EFL_CANVAS_VG_GRADIENT_LINEAR_EO_HH
#define EFL_CANVAS_VG_GRADIENT_LINEAR_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_vg_gradient.eo.h"
#include "efl_canvas_vg_gradient_linear.eo.h"
#include "efl_canvas_vg_node.eo.h"
#include "efl_class.eo.h"
#include "efl_duplicate.eo.h"
#include "efl_gfx_color.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_gfx_gradient.eo.h"
#include "efl_gfx_gradient_linear.eo.h"
#include "efl_gfx_path.eo.h"
#include "efl_gfx_stack.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_vg_gradient.eo.hh"
#include "efl_canvas_vg_node.eo.hh"
#include "efl_class.eo.hh"
#include "efl_duplicate.eo.hh"
#include "efl_gfx_color.eo.hh"
#include "efl_gfx_entity.eo.hh"
#include "efl_gfx_gradient.eo.hh"
#include "efl_gfx_gradient_linear.eo.hh"
#include "efl_gfx_path.eo.hh"
#include "efl_gfx_stack.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_CANVAS_VG_GRADIENT_LINEAR_FWD_GUARD
#define EFL_CANVAS_VG_GRADIENT_LINEAR_FWD_GUARD
namespace efl { namespace canvas { namespace vg { 
struct Gradient_Linear;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Gradient_Linear> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Gradient_Linear&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Gradient_Linear const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Gradient_Linear const&> : ::std::true_type {}; } }
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
#ifndef EFL_CANVAS_VG_GRADIENT_FWD_GUARD
#define EFL_CANVAS_VG_GRADIENT_FWD_GUARD
namespace efl { namespace canvas { namespace vg { 
struct Gradient;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Gradient> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Gradient&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Gradient const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Gradient const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_GRADIENT_FWD_GUARD
#define EFL_GFX_GRADIENT_FWD_GUARD
namespace efl { namespace gfx { 
struct Gradient;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_GRADIENT_LINEAR_FWD_GUARD
#define EFL_GFX_GRADIENT_LINEAR_FWD_GUARD
namespace efl { namespace gfx { 
struct Gradient_Linear;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient_Linear> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient_Linear&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient_Linear const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Gradient_Linear const&> : ::std::true_type {}; } }
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
struct Gradient_Linear {
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_VG_GRADIENT_LINEAR_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gradient_Linear *>(this))); }
    operator ::efl::canvas::vg::Gradient_Linear() const;
    operator ::efl::canvas::vg::Gradient_Linear&();
    operator ::efl::canvas::vg::Gradient_Linear const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gradient_Linear,  ::efl::Duplicate,  ::efl::Object,  ::efl::canvas::vg::Gradient,  ::efl::canvas::vg::Node,  ::efl::gfx::Color,  ::efl::gfx::Entity,  ::efl::gfx::Gradient,  ::efl::gfx::Gradient_Linear,  ::efl::gfx::Path,  ::efl::gfx::Stack> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gradient_Linear const ,  ::efl::Duplicate const ,  ::efl::Object const ,  ::efl::canvas::vg::Gradient const ,  ::efl::canvas::vg::Node const ,  ::efl::gfx::Color const ,  ::efl::gfx::Entity const ,  ::efl::gfx::Gradient const ,  ::efl::gfx::Gradient_Linear const ,  ::efl::gfx::Path const ,  ::efl::gfx::Stack const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace canvas { namespace vg { 
struct Gradient_Linear : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Duplicate)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::canvas::vg::Gradient)
    , EO_CXX_INHERIT(::efl::canvas::vg::Node)
    , EO_CXX_INHERIT(::efl::gfx::Color)
    , EO_CXX_INHERIT(::efl::gfx::Entity)
    , EO_CXX_INHERIT(::efl::gfx::Gradient)
    , EO_CXX_INHERIT(::efl::gfx::Gradient_Linear)
    , EO_CXX_INHERIT(::efl::gfx::Path)
    , EO_CXX_INHERIT(::efl::gfx::Stack)
{
    explicit Gradient_Linear( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Gradient_Linear(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Gradient_Linear() = default;
    Gradient_Linear(Gradient_Linear const&) = default;
    Gradient_Linear(Gradient_Linear&&) = default;
    Gradient_Linear& operator=(Gradient_Linear const&) = default;
    Gradient_Linear& operator=(Gradient_Linear&&) = default;
    template <typename Derived>
    Gradient_Linear(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Gradient_Linear, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Gradient_Linear( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Gradient_Linear( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Gradient_Linear( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Gradient_Linear >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Gradient_Linear(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Gradient_Linear >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_VG_GRADIENT_LINEAR_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Gradient_Linear *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Gradient_Linear,  ::efl::Duplicate,  ::efl::Object,  ::efl::canvas::vg::Gradient,  ::efl::canvas::vg::Node,  ::efl::gfx::Color,  ::efl::gfx::Entity,  ::efl::gfx::Gradient,  ::efl::gfx::Gradient_Linear,  ::efl::gfx::Path,  ::efl::gfx::Stack> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Gradient_Linear const ,  ::efl::Duplicate const ,  ::efl::Object const ,  ::efl::canvas::vg::Gradient const ,  ::efl::canvas::vg::Node const ,  ::efl::gfx::Color const ,  ::efl::gfx::Entity const ,  ::efl::gfx::Gradient const ,  ::efl::gfx::Gradient_Linear const ,  ::efl::gfx::Path const ,  ::efl::gfx::Stack const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Gradient_Linear> _get_wref() const { return ::efl::eo::wref<Gradient_Linear>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Gradient_Linear* operator->() const { return this; }
    Gradient_Linear* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Gradient_Linear const& lhs, Gradient_Linear const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Gradient_Linear const& lhs, Gradient_Linear const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Gradient_Linear) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Gradient_Linear>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
