#ifndef EFL_OBJECT_OVERRIDE_EO_HH
#define EFL_OBJECT_OVERRIDE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_object_override.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_OBJECT_OVERRIDE_FWD_GUARD
#define EFL_OBJECT_OVERRIDE_FWD_GUARD
namespace efl { 
struct Object_Override;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object_Override> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object_Override&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object_Override const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object_Override const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Object_Override {
    static Efl_Class const* _eo_class()
    {
        return EFL_OBJECT_OVERRIDE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Object_Override *>(this))); }
    operator ::efl::Object_Override() const;
    operator ::efl::Object_Override&();
    operator ::efl::Object_Override const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Object_Override> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Object_Override const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Object_Override : private ::efl::eo::concrete
{
    explicit Object_Override( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Object_Override(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Object_Override() = default;
    Object_Override(Object_Override const&) = default;
    Object_Override(Object_Override&&) = default;
    Object_Override& operator=(Object_Override const&) = default;
    Object_Override& operator=(Object_Override&&) = default;
    template <typename Derived>
    Object_Override(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Object_Override, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    static Efl_Class const* _eo_class()
    {
        return EFL_OBJECT_OVERRIDE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Object_Override *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Object_Override> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Object_Override const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Object_Override> _get_wref() const { return ::efl::eo::wref<Object_Override>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Object_Override* operator->() const { return this; }
    Object_Override* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Object_Override const& lhs, Object_Override const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Object_Override const& lhs, Object_Override const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Object_Override) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Object_Override>::value, "");
} 

#pragma GCC diagnostic pop

#endif
