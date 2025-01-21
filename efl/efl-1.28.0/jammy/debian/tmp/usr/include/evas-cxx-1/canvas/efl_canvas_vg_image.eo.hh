#ifndef EFL_CANVAS_VG_IMAGE_EO_HH
#define EFL_CANVAS_VG_IMAGE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_vg_image.eo.h"
#include "efl_canvas_vg_node.eo.h"
#include "efl_class.eo.h"
#include "efl_duplicate.eo.h"
#include "efl_gfx_color.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_gfx_image.eo.h"
#include "efl_gfx_path.eo.h"
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
#include "efl_gfx_image.eo.hh"
#include "efl_gfx_path.eo.hh"
#include "efl_gfx_stack.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_CANVAS_VG_IMAGE_FWD_GUARD
#define EFL_CANVAS_VG_IMAGE_FWD_GUARD
namespace efl { namespace canvas { namespace vg { 
struct Image;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Image> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Image&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Image const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::vg::Image const&> : ::std::true_type {}; } }
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
#ifndef EFL_GFX_IMAGE_FWD_GUARD
#define EFL_GFX_IMAGE_FWD_GUARD
namespace efl { namespace gfx { 
struct Image;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Image> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Image&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Image const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Image const&> : ::std::true_type {}; } }
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
struct Image {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type data_set( ::efl::eolian::in_traits<void*>::type pixels,  ::efl::eolian::in_traits<Eina_Size2D>::type size) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_VG_IMAGE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Image *>(this))); }
    operator ::efl::canvas::vg::Image() const;
    operator ::efl::canvas::vg::Image&();
    operator ::efl::canvas::vg::Image const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Image,  ::efl::Duplicate,  ::efl::Object,  ::efl::canvas::vg::Node,  ::efl::gfx::Color,  ::efl::gfx::Entity,  ::efl::gfx::Image,  ::efl::gfx::Path,  ::efl::gfx::Stack> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Image const ,  ::efl::Duplicate const ,  ::efl::Object const ,  ::efl::canvas::vg::Node const ,  ::efl::gfx::Color const ,  ::efl::gfx::Entity const ,  ::efl::gfx::Image const ,  ::efl::gfx::Path const ,  ::efl::gfx::Stack const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace canvas { namespace vg { 
struct Image : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Duplicate)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::canvas::vg::Node)
    , EO_CXX_INHERIT(::efl::gfx::Color)
    , EO_CXX_INHERIT(::efl::gfx::Entity)
    , EO_CXX_INHERIT(::efl::gfx::Image)
    , EO_CXX_INHERIT(::efl::gfx::Path)
    , EO_CXX_INHERIT(::efl::gfx::Stack)
{
    explicit Image( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Image(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Image() = default;
    Image(Image const&) = default;
    Image(Image&&) = default;
    Image& operator=(Image const&) = default;
    Image& operator=(Image&&) = default;
    template <typename Derived>
    Image(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Image, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Image( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Image( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Image( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Image >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Image(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Image >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type data_set( ::efl::eolian::in_traits<void*>::type pixels,  ::efl::eolian::in_traits<Eina_Size2D>::type size) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_VG_IMAGE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Image *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Image,  ::efl::Duplicate,  ::efl::Object,  ::efl::canvas::vg::Node,  ::efl::gfx::Color,  ::efl::gfx::Entity,  ::efl::gfx::Image,  ::efl::gfx::Path,  ::efl::gfx::Stack> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Image const ,  ::efl::Duplicate const ,  ::efl::Object const ,  ::efl::canvas::vg::Node const ,  ::efl::gfx::Color const ,  ::efl::gfx::Entity const ,  ::efl::gfx::Image const ,  ::efl::gfx::Path const ,  ::efl::gfx::Stack const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Image> _get_wref() const { return ::efl::eo::wref<Image>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Image* operator->() const { return this; }
    Image* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Image const& lhs, Image const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Image const& lhs, Image const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Image) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Image>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
