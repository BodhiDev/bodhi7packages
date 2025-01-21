#ifndef EFL_CORE_PROC_ENV_EO_HH
#define EFL_CORE_PROC_ENV_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_core_env.eo.h"
#include "efl_core_proc_env.eo.h"
#include "efl_duplicate.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_core_env.eo.hh"
#include "efl_duplicate.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_CORE_PROC_ENV_FWD_GUARD
#define EFL_CORE_PROC_ENV_FWD_GUARD
namespace efl { namespace core { 
struct Proc_Env;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Proc_Env> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Proc_Env&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Proc_Env const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Proc_Env const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace core { 
struct Proc_Env {
#ifdef EFL_BETA_API_SUPPORT
    static ::efl::eolian::return_traits< ::efl::core::Env>::type self();
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CORE_PROC_ENV_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Proc_Env *>(this))); }
    operator ::efl::core::Proc_Env() const;
    operator ::efl::core::Proc_Env&();
    operator ::efl::core::Proc_Env const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Proc_Env,  ::efl::Duplicate,  ::efl::Object,  ::efl::core::Env> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Proc_Env const ,  ::efl::Duplicate const ,  ::efl::Object const ,  ::efl::core::Env const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace core { 
struct Proc_Env : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Duplicate)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::core::Env)
{
    explicit Proc_Env( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Proc_Env(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Proc_Env() = default;
    Proc_Env(Proc_Env const&) = default;
    Proc_Env(Proc_Env&&) = default;
    Proc_Env& operator=(Proc_Env const&) = default;
    Proc_Env& operator=(Proc_Env&&) = default;
    template <typename Derived>
    Proc_Env(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Proc_Env, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Proc_Env( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Proc_Env( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Proc_Env( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Proc_Env >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Proc_Env(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Proc_Env >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    static ::efl::eolian::return_traits< ::efl::core::Env>::type self();
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CORE_PROC_ENV_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Proc_Env *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Proc_Env,  ::efl::Duplicate,  ::efl::Object,  ::efl::core::Env> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Proc_Env const ,  ::efl::Duplicate const ,  ::efl::Object const ,  ::efl::core::Env const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Proc_Env> _get_wref() const { return ::efl::eo::wref<Proc_Env>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Proc_Env* operator->() const { return this; }
    Proc_Env* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Proc_Env const& lhs, Proc_Env const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Proc_Env const& lhs, Proc_Env const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Proc_Env) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Proc_Env>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
