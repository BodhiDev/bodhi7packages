#ifndef EFL_GFX_FILTER_EO_HH
#define EFL_GFX_FILTER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_entity.eo.h"
#include "efl_gfx_filter.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_gfx_entity.eo.hh"
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
struct Filter {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type filter_program_get( ::efl::eolian::out_traits< ::efl::eina::string_view>::type code,  ::efl::eolian::out_traits< ::efl::eina::string_view*>::type name) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type filter_program_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type code,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type name) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type filter_state_get( ::efl::eolian::out_traits< ::efl::eina::string_view>::type cur_state,  ::efl::eolian::out_traits<double>::type cur_val,  ::efl::eolian::out_traits< ::efl::eina::string_view*>::type next_state,  ::efl::eolian::out_traits<double*>::type next_val,  ::efl::eolian::out_traits<double*>::type pos) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type filter_state_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type cur_state,  ::efl::eolian::in_traits<double>::type cur_val,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type next_state,  ::efl::eolian::in_traits< ::efl::eina::optional<double>>::type next_val,  ::efl::eolian::in_traits< ::efl::eina::optional<double>>::type pos) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type filter_padding_get( ::efl::eolian::out_traits<int>::type l,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type t,  ::efl::eolian::out_traits<int>::type b) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::gfx::Entity>::type filter_source_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type filter_source_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type source) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type filter_data_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type value,  ::efl::eolian::out_traits<bool>::type execute) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type filter_data_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type value,  ::efl::eolian::in_traits<bool>::type execute) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_FILTER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Filter *>(this))); }
    operator ::efl::gfx::Filter() const;
    operator ::efl::gfx::Filter&();
    operator ::efl::gfx::Filter const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Filter> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Filter const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Filter : private ::efl::eo::concrete
{
    explicit Filter( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Filter(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Filter() = default;
    Filter(Filter const&) = default;
    Filter(Filter&&) = default;
    Filter& operator=(Filter const&) = default;
    Filter& operator=(Filter&&) = default;
    template <typename Derived>
    Filter(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Filter, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type filter_program_get( ::efl::eolian::out_traits< ::efl::eina::string_view>::type code,  ::efl::eolian::out_traits< ::efl::eina::string_view*>::type name) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type filter_program_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type code,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type name) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type filter_state_get( ::efl::eolian::out_traits< ::efl::eina::string_view>::type cur_state,  ::efl::eolian::out_traits<double>::type cur_val,  ::efl::eolian::out_traits< ::efl::eina::string_view*>::type next_state,  ::efl::eolian::out_traits<double*>::type next_val,  ::efl::eolian::out_traits<double*>::type pos) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type filter_state_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type cur_state,  ::efl::eolian::in_traits<double>::type cur_val,  ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type next_state,  ::efl::eolian::in_traits< ::efl::eina::optional<double>>::type next_val,  ::efl::eolian::in_traits< ::efl::eina::optional<double>>::type pos) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type filter_padding_get( ::efl::eolian::out_traits<int>::type l,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type t,  ::efl::eolian::out_traits<int>::type b) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::gfx::Entity>::type filter_source_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type filter_source_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type source) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type filter_data_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type value,  ::efl::eolian::out_traits<bool>::type execute) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type filter_data_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type value,  ::efl::eolian::in_traits<bool>::type execute) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_FILTER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Filter *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Filter> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Filter const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Filter> _get_wref() const { return ::efl::eo::wref<Filter>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Filter* operator->() const { return this; }
    Filter* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Filter const& lhs, Filter const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Filter const& lhs, Filter const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Filter) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Filter>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
