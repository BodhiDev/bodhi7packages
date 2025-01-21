#ifndef EFL_PACK_LINEAR_EO_HH
#define EFL_PACK_LINEAR_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_container.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_pack.eo.h"
#include "efl_pack_linear.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_container.eo.hh"
#include "efl_gfx_entity.eo.hh"
#include "efl_pack.eo.hh"
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Pack_Linear {
    ::efl::eolian::return_traits<bool>::type pack_begin( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const;
    ::efl::eolian::return_traits<bool>::type pack_end( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const;
    ::efl::eolian::return_traits<bool>::type pack_before( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type existing) const;
    ::efl::eolian::return_traits<bool>::type pack_after( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type existing) const;
    ::efl::eolian::return_traits<bool>::type pack_at( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type index) const;
    ::efl::eolian::return_traits< ::efl::gfx::Entity>::type pack_content_get( ::efl::eolian::in_traits<int>::type index) const;
    ::efl::eolian::return_traits<int>::type pack_index_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const;
    ::efl::eolian::return_traits< ::efl::gfx::Entity>::type pack_unpack_at( ::efl::eolian::in_traits<int>::type index) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_PACK_LINEAR_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Pack_Linear *>(this))); }
    operator ::efl::Pack_Linear() const;
    operator ::efl::Pack_Linear&();
    operator ::efl::Pack_Linear const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Pack_Linear,  ::efl::Container,  ::efl::Pack> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Pack_Linear const ,  ::efl::Container const ,  ::efl::Pack const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Pack_Linear : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Container)
    , EO_CXX_INHERIT(::efl::Pack)
{
    explicit Pack_Linear( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Pack_Linear(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Pack_Linear() = default;
    Pack_Linear(Pack_Linear const&) = default;
    Pack_Linear(Pack_Linear&&) = default;
    Pack_Linear& operator=(Pack_Linear const&) = default;
    Pack_Linear& operator=(Pack_Linear&&) = default;
    template <typename Derived>
    Pack_Linear(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Pack_Linear, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<bool>::type pack_begin( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const;
    ::efl::eolian::return_traits<bool>::type pack_end( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const;
    ::efl::eolian::return_traits<bool>::type pack_before( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type existing) const;
    ::efl::eolian::return_traits<bool>::type pack_after( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type existing) const;
    ::efl::eolian::return_traits<bool>::type pack_at( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type index) const;
    ::efl::eolian::return_traits< ::efl::gfx::Entity>::type pack_content_get( ::efl::eolian::in_traits<int>::type index) const;
    ::efl::eolian::return_traits<int>::type pack_index_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const;
    ::efl::eolian::return_traits< ::efl::gfx::Entity>::type pack_unpack_at( ::efl::eolian::in_traits<int>::type index) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_PACK_LINEAR_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Pack_Linear *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Pack_Linear,  ::efl::Container,  ::efl::Pack> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Pack_Linear const ,  ::efl::Container const ,  ::efl::Pack const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Pack_Linear> _get_wref() const { return ::efl::eo::wref<Pack_Linear>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Pack_Linear* operator->() const { return this; }
    Pack_Linear* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Pack_Linear const& lhs, Pack_Linear const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Pack_Linear const& lhs, Pack_Linear const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Pack_Linear) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Pack_Linear>::value, "");
} 

#pragma GCC diagnostic pop

#endif
