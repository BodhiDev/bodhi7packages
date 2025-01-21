#ifndef EFL_INTERPOLATOR_EO_HH
#define EFL_INTERPOLATOR_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_interpolator.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_INTERPOLATOR_FWD_GUARD
#define EFL_INTERPOLATOR_FWD_GUARD
namespace efl { 
struct Interpolator;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Interpolator> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Interpolator&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Interpolator const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Interpolator const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Interpolator {
    ::efl::eolian::return_traits<double>::type interpolate( ::efl::eolian::in_traits<double>::type progress) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_INTERPOLATOR_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Interpolator *>(this))); }
    operator ::efl::Interpolator() const;
    operator ::efl::Interpolator&();
    operator ::efl::Interpolator const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Interpolator> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Interpolator const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Interpolator : private ::efl::eo::concrete
{
    explicit Interpolator( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Interpolator(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Interpolator() = default;
    Interpolator(Interpolator const&) = default;
    Interpolator(Interpolator&&) = default;
    Interpolator& operator=(Interpolator const&) = default;
    Interpolator& operator=(Interpolator&&) = default;
    template <typename Derived>
    Interpolator(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Interpolator, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<double>::type interpolate( ::efl::eolian::in_traits<double>::type progress) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_INTERPOLATOR_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Interpolator *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Interpolator> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Interpolator const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Interpolator> _get_wref() const { return ::efl::eo::wref<Interpolator>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Interpolator* operator->() const { return this; }
    Interpolator* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Interpolator const& lhs, Interpolator const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Interpolator const& lhs, Interpolator const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Interpolator) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Interpolator>::value, "");
} 

#pragma GCC diagnostic pop

#endif
