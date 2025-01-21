#ifndef EFL_DUPLICATE_EO_HH
#define EFL_DUPLICATE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_duplicate.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Duplicate {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::Duplicate>::type duplicate() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_DUPLICATE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Duplicate *>(this))); }
    operator ::efl::Duplicate() const;
    operator ::efl::Duplicate&();
    operator ::efl::Duplicate const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Duplicate> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Duplicate const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Duplicate : private ::efl::eo::concrete
{
    explicit Duplicate( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Duplicate(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Duplicate() = default;
    Duplicate(Duplicate const&) = default;
    Duplicate(Duplicate&&) = default;
    Duplicate& operator=(Duplicate const&) = default;
    Duplicate& operator=(Duplicate&&) = default;
    template <typename Derived>
    Duplicate(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Duplicate, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::Duplicate>::type duplicate() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_DUPLICATE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Duplicate *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Duplicate> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Duplicate const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Duplicate> _get_wref() const { return ::efl::eo::wref<Duplicate>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Duplicate* operator->() const { return this; }
    Duplicate* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Duplicate const& lhs, Duplicate const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Duplicate const& lhs, Duplicate const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Duplicate) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Duplicate>::value, "");
} 

#pragma GCC diagnostic pop

#endif
