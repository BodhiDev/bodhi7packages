#ifndef EFL_PACK_EO_HH
#define EFL_PACK_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_container.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_pack.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_container.eo.hh"
#include "efl_gfx_entity.eo.hh"
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Pack {
    ::efl::eolian::return_traits<bool>::type pack_clear() const;
    ::efl::eolian::return_traits<bool>::type unpack_all() const;
    ::efl::eolian::return_traits<bool>::type unpack( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const;
    ::efl::eolian::return_traits<bool>::type pack( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_PACK_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Pack *>(this))); }
    operator ::efl::Pack() const;
    operator ::efl::Pack&();
    operator ::efl::Pack const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Pack,  ::efl::Container> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Pack const ,  ::efl::Container const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Pack : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Container)
{
    explicit Pack( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Pack(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Pack() = default;
    Pack(Pack const&) = default;
    Pack(Pack&&) = default;
    Pack& operator=(Pack const&) = default;
    Pack& operator=(Pack&&) = default;
    template <typename Derived>
    Pack(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Pack, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<bool>::type pack_clear() const;
    ::efl::eolian::return_traits<bool>::type unpack_all() const;
    ::efl::eolian::return_traits<bool>::type unpack( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const;
    ::efl::eolian::return_traits<bool>::type pack( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_PACK_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Pack *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Pack,  ::efl::Container> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Pack const ,  ::efl::Container const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Pack> _get_wref() const { return ::efl::eo::wref<Pack>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Pack* operator->() const { return this; }
    Pack* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Pack const& lhs, Pack const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Pack const& lhs, Pack const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Pack) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Pack>::value, "");
} 

#pragma GCC diagnostic pop

#endif
