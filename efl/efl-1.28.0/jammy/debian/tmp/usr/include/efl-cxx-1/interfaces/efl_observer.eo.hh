#ifndef EFL_OBSERVER_EO_HH
#define EFL_OBSERVER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_object.eo.h"
#include "efl_observer.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_object.eo.hh"
#ifndef EFL_OBSERVER_FWD_GUARD
#define EFL_OBSERVER_FWD_GUARD
namespace efl { 
struct Observer;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Observer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Observer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Observer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Observer const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_OBJECT_FWD_GUARD
#define EFL_OBJECT_FWD_GUARD
namespace efl { 
struct Object;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Observer {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type update( ::efl::eolian::in_traits< ::efl::Object>::type obs,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits<void*>::type data) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_OBSERVER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Observer *>(this))); }
    operator ::efl::Observer() const;
    operator ::efl::Observer&();
    operator ::efl::Observer const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Observer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Observer const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Observer : private ::efl::eo::concrete
{
    explicit Observer( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Observer(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Observer() = default;
    Observer(Observer const&) = default;
    Observer(Observer&&) = default;
    Observer& operator=(Observer const&) = default;
    Observer& operator=(Observer&&) = default;
    template <typename Derived>
    Observer(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Observer, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type update( ::efl::eolian::in_traits< ::efl::Object>::type obs,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits<void*>::type data) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_OBSERVER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Observer *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Observer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Observer const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Observer> _get_wref() const { return ::efl::eo::wref<Observer>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Observer* operator->() const { return this; }
    Observer* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Observer const& lhs, Observer const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Observer const& lhs, Observer const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Observer) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Observer>::value, "");
} 

#pragma GCC diagnostic pop

#endif
