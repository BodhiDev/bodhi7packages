#ifndef EFL_GFX_MAPPING_EO_HH
#define EFL_GFX_MAPPING_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_entity.eo.h"
#include "efl_gfx_mapping.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_gfx_entity.eo.hh"
#ifndef EFL_GFX_MAPPING_FWD_GUARD
#define EFL_GFX_MAPPING_FWD_GUARD
namespace efl { namespace gfx { 
struct Mapping;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Mapping> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Mapping&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Mapping const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Mapping const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Mapping {
    ::efl::eolian::return_traits<int>::type mapping_point_count_get() const;
    ::efl::eolian::return_traits<void>::type mapping_point_count_set( ::efl::eolian::in_traits<int>::type count) const;
    ::efl::eolian::return_traits<bool>::type mapping_clockwise_get() const;
    ::efl::eolian::return_traits<bool>::type mapping_smooth_get() const;
    ::efl::eolian::return_traits<void>::type mapping_smooth_set( ::efl::eolian::in_traits<bool>::type smooth) const;
    ::efl::eolian::return_traits<bool>::type mapping_alpha_get() const;
    ::efl::eolian::return_traits<void>::type mapping_alpha_set( ::efl::eolian::in_traits<bool>::type alpha) const;
    ::efl::eolian::return_traits<void>::type mapping_coord_absolute_get( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y,  ::efl::eolian::out_traits<double>::type z) const;
    ::efl::eolian::return_traits<void>::type mapping_coord_absolute_set( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type z) const;
    ::efl::eolian::return_traits<void>::type mapping_uv_get( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::out_traits<double>::type u,  ::efl::eolian::out_traits<double>::type v) const;
    ::efl::eolian::return_traits<void>::type mapping_uv_set( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::in_traits<double>::type u,  ::efl::eolian::in_traits<double>::type v) const;
    ::efl::eolian::return_traits<void>::type mapping_color_get( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const;
    ::efl::eolian::return_traits<void>::type mapping_color_set( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const;
    ::efl::eolian::return_traits<bool>::type mapping_has() const;
    ::efl::eolian::return_traits<void>::type mapping_reset() const;
    ::efl::eolian::return_traits<void>::type translate( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy,  ::efl::eolian::in_traits<double>::type dz) const;
    ::efl::eolian::return_traits<void>::type rotate( ::efl::eolian::in_traits<double>::type degrees,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy) const;
    ::efl::eolian::return_traits<void>::type rotate_3d( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy,  ::efl::eolian::in_traits<double>::type dz,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy,  ::efl::eolian::in_traits<double>::type cz) const;
    ::efl::eolian::return_traits<void>::type rotate_quat( ::efl::eolian::in_traits<double>::type qx,  ::efl::eolian::in_traits<double>::type qy,  ::efl::eolian::in_traits<double>::type qz,  ::efl::eolian::in_traits<double>::type qw,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy,  ::efl::eolian::in_traits<double>::type cz) const;
    ::efl::eolian::return_traits<void>::type zoom( ::efl::eolian::in_traits<double>::type zoomx,  ::efl::eolian::in_traits<double>::type zoomy,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy) const;
    ::efl::eolian::return_traits<void>::type lighting_3d( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type lx,  ::efl::eolian::in_traits<double>::type ly,  ::efl::eolian::in_traits<double>::type lz,  ::efl::eolian::in_traits<int>::type lr,  ::efl::eolian::in_traits<int>::type lg,  ::efl::eolian::in_traits<int>::type lb,  ::efl::eolian::in_traits<int>::type ar,  ::efl::eolian::in_traits<int>::type ag,  ::efl::eolian::in_traits<int>::type ab) const;
    ::efl::eolian::return_traits<void>::type perspective_3d( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type px,  ::efl::eolian::in_traits<double>::type py,  ::efl::eolian::in_traits<double>::type z0,  ::efl::eolian::in_traits<double>::type foc) const;
    ::efl::eolian::return_traits<void>::type rotate_absolute( ::efl::eolian::in_traits<double>::type degrees,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy) const;
    ::efl::eolian::return_traits<void>::type rotate_3d_absolute( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy,  ::efl::eolian::in_traits<double>::type dz,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy,  ::efl::eolian::in_traits<double>::type cz) const;
    ::efl::eolian::return_traits<void>::type rotate_quat_absolute( ::efl::eolian::in_traits<double>::type qx,  ::efl::eolian::in_traits<double>::type qy,  ::efl::eolian::in_traits<double>::type qz,  ::efl::eolian::in_traits<double>::type qw,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy,  ::efl::eolian::in_traits<double>::type cz) const;
    ::efl::eolian::return_traits<void>::type zoom_absolute( ::efl::eolian::in_traits<double>::type zoomx,  ::efl::eolian::in_traits<double>::type zoomy,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy) const;
    ::efl::eolian::return_traits<void>::type lighting_3d_absolute( ::efl::eolian::in_traits<double>::type lx,  ::efl::eolian::in_traits<double>::type ly,  ::efl::eolian::in_traits<double>::type lz,  ::efl::eolian::in_traits<int>::type lr,  ::efl::eolian::in_traits<int>::type lg,  ::efl::eolian::in_traits<int>::type lb,  ::efl::eolian::in_traits<int>::type ar,  ::efl::eolian::in_traits<int>::type ag,  ::efl::eolian::in_traits<int>::type ab) const;
    ::efl::eolian::return_traits<void>::type perspective_3d_absolute( ::efl::eolian::in_traits<double>::type px,  ::efl::eolian::in_traits<double>::type py,  ::efl::eolian::in_traits<double>::type z0,  ::efl::eolian::in_traits<double>::type foc) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_MAPPING_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Mapping *>(this))); }
    operator ::efl::gfx::Mapping() const;
    operator ::efl::gfx::Mapping&();
    operator ::efl::gfx::Mapping const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Mapping> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Mapping const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Mapping : private ::efl::eo::concrete
{
    explicit Mapping( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Mapping(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Mapping() = default;
    Mapping(Mapping const&) = default;
    Mapping(Mapping&&) = default;
    Mapping& operator=(Mapping const&) = default;
    Mapping& operator=(Mapping&&) = default;
    template <typename Derived>
    Mapping(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Mapping, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<int>::type mapping_point_count_get() const;
    ::efl::eolian::return_traits<void>::type mapping_point_count_set( ::efl::eolian::in_traits<int>::type count) const;
    ::efl::eolian::return_traits<bool>::type mapping_clockwise_get() const;
    ::efl::eolian::return_traits<bool>::type mapping_smooth_get() const;
    ::efl::eolian::return_traits<void>::type mapping_smooth_set( ::efl::eolian::in_traits<bool>::type smooth) const;
    ::efl::eolian::return_traits<bool>::type mapping_alpha_get() const;
    ::efl::eolian::return_traits<void>::type mapping_alpha_set( ::efl::eolian::in_traits<bool>::type alpha) const;
    ::efl::eolian::return_traits<void>::type mapping_coord_absolute_get( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y,  ::efl::eolian::out_traits<double>::type z) const;
    ::efl::eolian::return_traits<void>::type mapping_coord_absolute_set( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type z) const;
    ::efl::eolian::return_traits<void>::type mapping_uv_get( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::out_traits<double>::type u,  ::efl::eolian::out_traits<double>::type v) const;
    ::efl::eolian::return_traits<void>::type mapping_uv_set( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::in_traits<double>::type u,  ::efl::eolian::in_traits<double>::type v) const;
    ::efl::eolian::return_traits<void>::type mapping_color_get( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const;
    ::efl::eolian::return_traits<void>::type mapping_color_set( ::efl::eolian::in_traits<int>::type idx,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const;
    ::efl::eolian::return_traits<bool>::type mapping_has() const;
    ::efl::eolian::return_traits<void>::type mapping_reset() const;
    ::efl::eolian::return_traits<void>::type translate( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy,  ::efl::eolian::in_traits<double>::type dz) const;
    ::efl::eolian::return_traits<void>::type rotate( ::efl::eolian::in_traits<double>::type degrees,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy) const;
    ::efl::eolian::return_traits<void>::type rotate_3d( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy,  ::efl::eolian::in_traits<double>::type dz,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy,  ::efl::eolian::in_traits<double>::type cz) const;
    ::efl::eolian::return_traits<void>::type rotate_quat( ::efl::eolian::in_traits<double>::type qx,  ::efl::eolian::in_traits<double>::type qy,  ::efl::eolian::in_traits<double>::type qz,  ::efl::eolian::in_traits<double>::type qw,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy,  ::efl::eolian::in_traits<double>::type cz) const;
    ::efl::eolian::return_traits<void>::type zoom( ::efl::eolian::in_traits<double>::type zoomx,  ::efl::eolian::in_traits<double>::type zoomy,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy) const;
    ::efl::eolian::return_traits<void>::type lighting_3d( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type lx,  ::efl::eolian::in_traits<double>::type ly,  ::efl::eolian::in_traits<double>::type lz,  ::efl::eolian::in_traits<int>::type lr,  ::efl::eolian::in_traits<int>::type lg,  ::efl::eolian::in_traits<int>::type lb,  ::efl::eolian::in_traits<int>::type ar,  ::efl::eolian::in_traits<int>::type ag,  ::efl::eolian::in_traits<int>::type ab) const;
    ::efl::eolian::return_traits<void>::type perspective_3d( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type pivot,  ::efl::eolian::in_traits<double>::type px,  ::efl::eolian::in_traits<double>::type py,  ::efl::eolian::in_traits<double>::type z0,  ::efl::eolian::in_traits<double>::type foc) const;
    ::efl::eolian::return_traits<void>::type rotate_absolute( ::efl::eolian::in_traits<double>::type degrees,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy) const;
    ::efl::eolian::return_traits<void>::type rotate_3d_absolute( ::efl::eolian::in_traits<double>::type dx,  ::efl::eolian::in_traits<double>::type dy,  ::efl::eolian::in_traits<double>::type dz,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy,  ::efl::eolian::in_traits<double>::type cz) const;
    ::efl::eolian::return_traits<void>::type rotate_quat_absolute( ::efl::eolian::in_traits<double>::type qx,  ::efl::eolian::in_traits<double>::type qy,  ::efl::eolian::in_traits<double>::type qz,  ::efl::eolian::in_traits<double>::type qw,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy,  ::efl::eolian::in_traits<double>::type cz) const;
    ::efl::eolian::return_traits<void>::type zoom_absolute( ::efl::eolian::in_traits<double>::type zoomx,  ::efl::eolian::in_traits<double>::type zoomy,  ::efl::eolian::in_traits<double>::type cx,  ::efl::eolian::in_traits<double>::type cy) const;
    ::efl::eolian::return_traits<void>::type lighting_3d_absolute( ::efl::eolian::in_traits<double>::type lx,  ::efl::eolian::in_traits<double>::type ly,  ::efl::eolian::in_traits<double>::type lz,  ::efl::eolian::in_traits<int>::type lr,  ::efl::eolian::in_traits<int>::type lg,  ::efl::eolian::in_traits<int>::type lb,  ::efl::eolian::in_traits<int>::type ar,  ::efl::eolian::in_traits<int>::type ag,  ::efl::eolian::in_traits<int>::type ab) const;
    ::efl::eolian::return_traits<void>::type perspective_3d_absolute( ::efl::eolian::in_traits<double>::type px,  ::efl::eolian::in_traits<double>::type py,  ::efl::eolian::in_traits<double>::type z0,  ::efl::eolian::in_traits<double>::type foc) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_MAPPING_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Mapping *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Mapping> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Mapping const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Mapping> _get_wref() const { return ::efl::eo::wref<Mapping>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Mapping* operator->() const { return this; }
    Mapping* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Mapping const& lhs, Mapping const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Mapping const& lhs, Mapping const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Mapping) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Mapping>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
