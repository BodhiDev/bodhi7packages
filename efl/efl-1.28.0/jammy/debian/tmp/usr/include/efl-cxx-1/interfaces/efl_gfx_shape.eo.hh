#ifndef EFL_GFX_SHAPE_EO_HH
#define EFL_GFX_SHAPE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_path.eo.h"
#include "efl_gfx_shape.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_gfx_path.eo.hh"
#include "efl_object.eo.hh"
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Shape {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type stroke_scale_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_scale_set( ::efl::eolian::in_traits<double>::type s) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_color_get( ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_color_set( ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type stroke_width_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_width_set( ::efl::eolian::in_traits<double>::type w) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type stroke_location_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_location_set( ::efl::eolian::in_traits<double>::type centered) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_dash_get( ::efl::eolian::out_traits<const Efl_Gfx_Dash *>::type dash,  ::efl::eolian::out_traits< unsigned int>::type length) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_dash_set( ::efl::eolian::in_traits<const Efl_Gfx_Dash *>::type dash,  ::efl::eolian::in_traits< unsigned int>::type length) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Gfx_Cap>::type stroke_cap_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_cap_set( ::efl::eolian::in_traits<Efl_Gfx_Cap>::type c) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Gfx_Join>::type stroke_join_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_join_set( ::efl::eolian::in_traits<Efl_Gfx_Join>::type j) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type stroke_miterlimit_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_miterlimit_set( ::efl::eolian::in_traits<double>::type miterlimit) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Gfx_Fill_Rule>::type fill_rule_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type fill_rule_set( ::efl::eolian::in_traits<Efl_Gfx_Fill_Rule>::type fill_rule) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_SHAPE_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Shape *>(this))); }
    operator ::efl::gfx::Shape() const;
    operator ::efl::gfx::Shape&();
    operator ::efl::gfx::Shape const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Shape,  ::efl::gfx::Path> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Shape const ,  ::efl::gfx::Path const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Shape : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::gfx::Path)
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

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type stroke_scale_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_scale_set( ::efl::eolian::in_traits<double>::type s) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_color_get( ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_color_set( ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type stroke_width_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_width_set( ::efl::eolian::in_traits<double>::type w) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type stroke_location_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_location_set( ::efl::eolian::in_traits<double>::type centered) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_dash_get( ::efl::eolian::out_traits<const Efl_Gfx_Dash *>::type dash,  ::efl::eolian::out_traits< unsigned int>::type length) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_dash_set( ::efl::eolian::in_traits<const Efl_Gfx_Dash *>::type dash,  ::efl::eolian::in_traits< unsigned int>::type length) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Gfx_Cap>::type stroke_cap_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_cap_set( ::efl::eolian::in_traits<Efl_Gfx_Cap>::type c) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Gfx_Join>::type stroke_join_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_join_set( ::efl::eolian::in_traits<Efl_Gfx_Join>::type j) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type stroke_miterlimit_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_miterlimit_set( ::efl::eolian::in_traits<double>::type miterlimit) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Gfx_Fill_Rule>::type fill_rule_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type fill_rule_set( ::efl::eolian::in_traits<Efl_Gfx_Fill_Rule>::type fill_rule) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_SHAPE_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Shape *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Shape,  ::efl::gfx::Path> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Shape const ,  ::efl::gfx::Path const > operator&() const { return {this}; }
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
} } 

#pragma GCC diagnostic pop

#endif
