#ifndef EFL_CORE_ENV_EO_HH
#define EFL_CORE_ENV_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_core_env.eo.h"
#include "efl_duplicate.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_duplicate.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_CORE_ENV_FWD_GUARD
#define EFL_CORE_ENV_FWD_GUARD
namespace efl { namespace core { 
struct Env;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Env> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Env&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Env const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Env const&> : ::std::true_type {}; } }
#endif
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
namespace efl { namespace core { 
struct Env {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type env_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type var) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type env_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type var,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type value) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type content_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type unset( ::efl::eolian::in_traits< ::efl::eina::string_view>::type var) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type clear() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CORE_ENV_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Env *>(this))); }
    operator ::efl::core::Env() const;
    operator ::efl::core::Env&();
    operator ::efl::core::Env const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Env,  ::efl::Duplicate,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Env const ,  ::efl::Duplicate const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace core { 
struct Env : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Duplicate)
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Env( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Env(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Env() = default;
    Env(Env const&) = default;
    Env(Env&&) = default;
    Env& operator=(Env const&) = default;
    Env& operator=(Env&&) = default;
    template <typename Derived>
    Env(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Env, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Env( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Env( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Env( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Env >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Env(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Env >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type env_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type var) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type env_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type var,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type value) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type content_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type unset( ::efl::eolian::in_traits< ::efl::eina::string_view>::type var) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type clear() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CORE_ENV_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Env *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Env,  ::efl::Duplicate,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Env const ,  ::efl::Duplicate const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Env> _get_wref() const { return ::efl::eo::wref<Env>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Env* operator->() const { return this; }
    Env* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Env const& lhs, Env const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Env const& lhs, Env const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Env) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Env>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
