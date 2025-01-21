#ifndef EFL_GFX_PATH_EO_HH
#define EFL_GFX_PATH_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_path.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_object.eo.hh"
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Path {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type path_get( ::efl::eolian::out_traits<Efl_Gfx_Path_Command_Type const&>::type op,  ::efl::eolian::out_traits<double const&>::type points) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type path_set( ::efl::eolian::in_traits<Efl_Gfx_Path_Command_Type const&>::type op,  ::efl::eolian::in_traits<double const&>::type points) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type length_get( ::efl::eolian::out_traits< unsigned int>::type commands,  ::efl::eolian::out_traits< unsigned int>::type points) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type current_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type current_ctrl_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type copy_from( ::efl::eolian::in_traits< ::efl::Object>::type dup_from) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type bounds_get( ::efl::eolian::out_traits<Eina_Rect>::type r) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type reset() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_move_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_line_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_quadratic_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type ctrl_x,  ::efl::eolian::in_traits<double>::type ctrl_y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_squadratic_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_cubic_to( ::efl::eolian::in_traits<double>::type ctrl_x0,  ::efl::eolian::in_traits<double>::type ctrl_y0,  ::efl::eolian::in_traits<double>::type ctrl_x1,  ::efl::eolian::in_traits<double>::type ctrl_y1,  ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_scubic_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type ctrl_x,  ::efl::eolian::in_traits<double>::type ctrl_y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_arc_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type rx,  ::efl::eolian::in_traits<double>::type ry,  ::efl::eolian::in_traits<double>::type angle,  ::efl::eolian::in_traits<bool>::type large_arc,  ::efl::eolian::in_traits<bool>::type sweep) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_arc( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type w,  ::efl::eolian::in_traits<double>::type h,  ::efl::eolian::in_traits<double>::type start_angle,  ::efl::eolian::in_traits<double>::type sweep_length) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_close() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_circle( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type radius) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_rect( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type w,  ::efl::eolian::in_traits<double>::type h,  ::efl::eolian::in_traits<double>::type rx,  ::efl::eolian::in_traits<double>::type ry) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_svg_path( ::efl::eolian::in_traits< ::efl::eina::string_view>::type svg_path_data) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type interpolate( ::efl::eolian::in_traits< ::efl::Object>::type from,  ::efl::eolian::in_traits< ::efl::Object>::type to,  ::efl::eolian::in_traits<double>::type pos_map) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type equal_commands( ::efl::eolian::in_traits< ::efl::Object>::type with) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type reserve( ::efl::eolian::in_traits< unsigned int>::type cmd_count,  ::efl::eolian::in_traits< unsigned int>::type pts_count) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type commit() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_PATH_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Path *>(this))); }
    operator ::efl::gfx::Path() const;
    operator ::efl::gfx::Path&();
    operator ::efl::gfx::Path const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Path> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Path const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Path : private ::efl::eo::concrete
{
    explicit Path( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Path(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Path() = default;
    Path(Path const&) = default;
    Path(Path&&) = default;
    Path& operator=(Path const&) = default;
    Path& operator=(Path&&) = default;
    template <typename Derived>
    Path(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Path, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type path_get( ::efl::eolian::out_traits<Efl_Gfx_Path_Command_Type const&>::type op,  ::efl::eolian::out_traits<double const&>::type points) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type path_set( ::efl::eolian::in_traits<Efl_Gfx_Path_Command_Type const&>::type op,  ::efl::eolian::in_traits<double const&>::type points) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type length_get( ::efl::eolian::out_traits< unsigned int>::type commands,  ::efl::eolian::out_traits< unsigned int>::type points) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type current_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type current_ctrl_get( ::efl::eolian::out_traits<double>::type x,  ::efl::eolian::out_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type copy_from( ::efl::eolian::in_traits< ::efl::Object>::type dup_from) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type bounds_get( ::efl::eolian::out_traits<Eina_Rect>::type r) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type reset() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_move_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_line_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_quadratic_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type ctrl_x,  ::efl::eolian::in_traits<double>::type ctrl_y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_squadratic_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_cubic_to( ::efl::eolian::in_traits<double>::type ctrl_x0,  ::efl::eolian::in_traits<double>::type ctrl_y0,  ::efl::eolian::in_traits<double>::type ctrl_x1,  ::efl::eolian::in_traits<double>::type ctrl_y1,  ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_scubic_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type ctrl_x,  ::efl::eolian::in_traits<double>::type ctrl_y) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_arc_to( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type rx,  ::efl::eolian::in_traits<double>::type ry,  ::efl::eolian::in_traits<double>::type angle,  ::efl::eolian::in_traits<bool>::type large_arc,  ::efl::eolian::in_traits<bool>::type sweep) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_arc( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type w,  ::efl::eolian::in_traits<double>::type h,  ::efl::eolian::in_traits<double>::type start_angle,  ::efl::eolian::in_traits<double>::type sweep_length) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_close() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_circle( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type radius) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_rect( ::efl::eolian::in_traits<double>::type x,  ::efl::eolian::in_traits<double>::type y,  ::efl::eolian::in_traits<double>::type w,  ::efl::eolian::in_traits<double>::type h,  ::efl::eolian::in_traits<double>::type rx,  ::efl::eolian::in_traits<double>::type ry) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type append_svg_path( ::efl::eolian::in_traits< ::efl::eina::string_view>::type svg_path_data) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type interpolate( ::efl::eolian::in_traits< ::efl::Object>::type from,  ::efl::eolian::in_traits< ::efl::Object>::type to,  ::efl::eolian::in_traits<double>::type pos_map) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type equal_commands( ::efl::eolian::in_traits< ::efl::Object>::type with) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type reserve( ::efl::eolian::in_traits< unsigned int>::type cmd_count,  ::efl::eolian::in_traits< unsigned int>::type pts_count) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type commit() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_PATH_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Path *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Path> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Path const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Path> _get_wref() const { return ::efl::eo::wref<Path>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Path* operator->() const { return this; }
    Path* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Path const& lhs, Path const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Path const& lhs, Path const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Path) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Path>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
