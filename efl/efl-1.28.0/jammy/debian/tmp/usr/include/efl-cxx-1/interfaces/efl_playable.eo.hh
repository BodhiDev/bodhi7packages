#ifndef EFL_PLAYABLE_EO_HH
#define EFL_PLAYABLE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_playable.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_PLAYABLE_FWD_GUARD
#define EFL_PLAYABLE_FWD_GUARD
namespace efl { 
struct Playable;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Playable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Playable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Playable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Playable const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Playable {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type length_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type playable_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type seekable_get() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_PLAYABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Playable *>(this))); }
    operator ::efl::Playable() const;
    operator ::efl::Playable&();
    operator ::efl::Playable const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Playable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Playable const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Playable : private ::efl::eo::concrete
{
    explicit Playable( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Playable(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Playable() = default;
    Playable(Playable const&) = default;
    Playable(Playable&&) = default;
    Playable& operator=(Playable const&) = default;
    Playable& operator=(Playable&&) = default;
    template <typename Derived>
    Playable(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Playable, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type length_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type playable_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type seekable_get() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_PLAYABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Playable *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Playable> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Playable const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Playable> _get_wref() const { return ::efl::eo::wref<Playable>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Playable* operator->() const { return this; }
    Playable* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Playable const& lhs, Playable const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Playable const& lhs, Playable const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Playable) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Playable>::value, "");
} 

#pragma GCC diagnostic pop

#endif
