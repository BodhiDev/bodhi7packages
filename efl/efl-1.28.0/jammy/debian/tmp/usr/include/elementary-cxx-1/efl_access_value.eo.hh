#ifndef EFL_ACCESS_VALUE_EO_HH
#define EFL_ACCESS_VALUE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_access_value.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_ACCESS_VALUE_FWD_GUARD
#define EFL_ACCESS_VALUE_FWD_GUARD
namespace efl { namespace access { 
struct Value;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Value> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Value&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Value const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Value const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace access { 
struct Value {
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
    ::efl::eolian::return_traits<void>::type value_and_text_get( ::efl::eolian::out_traits<double>::type value,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type text) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
    ::efl::eolian::return_traits<bool>::type value_and_text_set( ::efl::eolian::in_traits<double>::type value,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type text) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
    ::efl::eolian::return_traits<void>::type range_get( ::efl::eolian::out_traits<double>::type lower_limit,  ::efl::eolian::out_traits<double>::type upper_limit,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type description) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
    ::efl::eolian::return_traits<double>::type increment_get() const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_ACCESS_VALUE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Value *>(this))); }
    operator ::efl::access::Value() const;
    operator ::efl::access::Value&();
    operator ::efl::access::Value const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Value> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Value const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace access { 
struct Value : private ::efl::eo::concrete
{
    explicit Value( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Value(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Value() = default;
    Value(Value const&) = default;
    Value(Value&&) = default;
    Value& operator=(Value const&) = default;
    Value& operator=(Value&&) = default;
    template <typename Derived>
    Value(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Value, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
    ::efl::eolian::return_traits<void>::type value_and_text_get( ::efl::eolian::out_traits<double>::type value,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type text) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
    ::efl::eolian::return_traits<bool>::type value_and_text_set( ::efl::eolian::in_traits<double>::type value,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type text) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
    ::efl::eolian::return_traits<void>::type range_get( ::efl::eolian::out_traits<double>::type lower_limit,  ::efl::eolian::out_traits<double>::type upper_limit,  ::efl::eolian::out_traits< ::efl::eina::string_view>::type description) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_VALUE_PROTECTED
    ::efl::eolian::return_traits<double>::type increment_get() const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_ACCESS_VALUE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Value *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Value> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Value const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Value> _get_wref() const { return ::efl::eo::wref<Value>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Value* operator->() const { return this; }
    Value* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Value const& lhs, Value const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Value const& lhs, Value const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Value) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Value>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
