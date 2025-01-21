#ifndef EFL_CANVAS_FILTER_INTERNAL_EO_HH
#define EFL_CANVAS_FILTER_INTERNAL_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_filter_internal.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_gfx_filter.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_gfx_entity.eo.hh"
#include "efl_gfx_filter.eo.hh"
#ifndef EFL_CANVAS_FILTER_INTERNAL_FWD_GUARD
#define EFL_CANVAS_FILTER_INTERNAL_FWD_GUARD
namespace efl { namespace canvas { namespace filter { 
struct Internal;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::filter::Internal> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::filter::Internal&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::filter::Internal const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::filter::Internal const&> : ::std::true_type {}; } }
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
#ifndef EFL_GFX_FILTER_FWD_GUARD
#define EFL_GFX_FILTER_FWD_GUARD
namespace efl { namespace gfx { 
struct Filter;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Filter> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Filter&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Filter const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Filter const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { namespace filter { 
struct Internal {
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
    ::efl::eolian::return_traits<void>::type filter_changed_set( ::efl::eolian::in_traits<bool>::type val) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
    ::efl::eolian::return_traits<void>::type filter_invalid_set( ::efl::eolian::in_traits<bool>::type val) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
    ::efl::eolian::return_traits<void*>::type filter_output_buffer_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
    ::efl::eolian::return_traits<bool>::type filter_input_alpha() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
    ::efl::eolian::return_traits<void>::type filter_state_prepare( ::efl::eolian::out_traits<Efl_Canvas_Filter_State>::type state,  ::efl::eolian::in_traits<void*>::type data) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
    ::efl::eolian::return_traits<bool>::type filter_input_render( ::efl::eolian::in_traits<void*>::type filter,  ::efl::eolian::in_traits<void*>::type engine,  ::efl::eolian::in_traits<void*>::type output,  ::efl::eolian::in_traits<void*>::type drawctx,  ::efl::eolian::in_traits<void*>::type data,  ::efl::eolian::in_traits<int>::type l,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type t,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y,  ::efl::eolian::in_traits<bool>::type do_async) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
    ::efl::eolian::return_traits<void>::type filter_dirty() const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_FILTER_INTERNAL_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Internal *>(this))); }
    operator ::efl::canvas::filter::Internal() const;
    operator ::efl::canvas::filter::Internal&();
    operator ::efl::canvas::filter::Internal const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Internal,  ::efl::gfx::Filter> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Internal const ,  ::efl::gfx::Filter const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace canvas { namespace filter { 
struct Internal : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::gfx::Filter)
{
    explicit Internal( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Internal(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Internal() = default;
    Internal(Internal const&) = default;
    Internal(Internal&&) = default;
    Internal& operator=(Internal const&) = default;
    Internal& operator=(Internal&&) = default;
    template <typename Derived>
    Internal(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Internal, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
    ::efl::eolian::return_traits<void>::type filter_changed_set( ::efl::eolian::in_traits<bool>::type val) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
    ::efl::eolian::return_traits<void>::type filter_invalid_set( ::efl::eolian::in_traits<bool>::type val) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
    ::efl::eolian::return_traits<void*>::type filter_output_buffer_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
    ::efl::eolian::return_traits<bool>::type filter_input_alpha() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
    ::efl::eolian::return_traits<void>::type filter_state_prepare( ::efl::eolian::out_traits<Efl_Canvas_Filter_State>::type state,  ::efl::eolian::in_traits<void*>::type data) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
    ::efl::eolian::return_traits<bool>::type filter_input_render( ::efl::eolian::in_traits<void*>::type filter,  ::efl::eolian::in_traits<void*>::type engine,  ::efl::eolian::in_traits<void*>::type output,  ::efl::eolian::in_traits<void*>::type drawctx,  ::efl::eolian::in_traits<void*>::type data,  ::efl::eolian::in_traits<int>::type l,  ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type t,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y,  ::efl::eolian::in_traits<bool>::type do_async) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CANVAS_FILTER_INTERNAL_PROTECTED
    ::efl::eolian::return_traits<void>::type filter_dirty() const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_FILTER_INTERNAL_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Internal *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Internal,  ::efl::gfx::Filter> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Internal const ,  ::efl::gfx::Filter const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Internal> _get_wref() const { return ::efl::eo::wref<Internal>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Internal* operator->() const { return this; }
    Internal* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Internal const& lhs, Internal const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Internal const& lhs, Internal const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Internal) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Internal>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
