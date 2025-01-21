#ifndef EFL_CLASS_EO_HH
#define EFL_CLASS_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_CLASS_FWD_GUARD
#define EFL_CLASS_FWD_GUARD
namespace efl { 
struct Class;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Class {
    static Efl_Class const* _eo_class()
    {
        return EFL_CLASS_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Class *>(this))); }
    operator ::efl::Class() const;
    operator ::efl::Class&();
    operator ::efl::Class const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Class> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Class const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Class : private ::efl::eo::concrete
{
    explicit Class( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Class(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Class() = default;
    Class(Class const&) = default;
    Class(Class&&) = default;
    Class& operator=(Class const&) = default;
    Class& operator=(Class&&) = default;
    template <typename Derived>
    Class(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Class, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    static Efl_Class const* _eo_class()
    {
        return EFL_CLASS_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Class *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Class> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Class const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Class> _get_wref() const { return ::efl::eo::wref<Class>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Class* operator->() const { return this; }
    Class* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Class const& lhs, Class const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Class const& lhs, Class const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Class) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Class>::value, "");
} 

#pragma GCC diagnostic pop

#endif
