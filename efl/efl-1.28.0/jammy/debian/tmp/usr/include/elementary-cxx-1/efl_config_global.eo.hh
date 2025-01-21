#ifndef EFL_CONFIG_GLOBAL_EO_HH
#define EFL_CONFIG_GLOBAL_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_config.eo.h"
#include "efl_config_global.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_config.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_CONFIG_GLOBAL_FWD_GUARD
#define EFL_CONFIG_GLOBAL_FWD_GUARD
namespace efl { 
struct Config_Global;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Config_Global> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Config_Global&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Config_Global const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Config_Global const&> : ::std::true_type {}; } }
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
#ifndef EFL_CONFIG_FWD_GUARD
#define EFL_CONFIG_FWD_GUARD
namespace efl { 
struct Config;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Config> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Config&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Config const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Config const&> : ::std::true_type {}; } }
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
struct Config_Global {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type profile_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type profile_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CONFIG_GLOBAL_PROTECTED
    ::efl::eolian::return_traits<bool>::type save( ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type profile) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type profile_iterate( ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type hidden) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type profile_exists( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::stringshare>::type profile_dir_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile,  ::efl::eolian::in_traits<bool>::type is_user) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CONFIG_GLOBAL_PROTECTED
    ::efl::eolian::return_traits<void>::type profile_derived_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type options) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CONFIG_GLOBAL_PROTECTED
    ::efl::eolian::return_traits<void>::type profile_derived_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CONFIG_GLOBAL_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Config_Global *>(this))); }
    operator ::efl::Config_Global() const;
    operator ::efl::Config_Global&();
    operator ::efl::Config_Global const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Config_Global,  ::efl::Config,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Config_Global const ,  ::efl::Config const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Config_Global : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Config)
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Config_Global( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Config_Global(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Config_Global() = default;
    Config_Global(Config_Global const&) = default;
    Config_Global(Config_Global&&) = default;
    Config_Global& operator=(Config_Global const&) = default;
    Config_Global& operator=(Config_Global&&) = default;
    template <typename Derived>
    Config_Global(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Config_Global, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Config_Global( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Config_Global( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Config_Global( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Config_Global >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Config_Global(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Config_Global >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type profile_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type profile_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CONFIG_GLOBAL_PROTECTED
    ::efl::eolian::return_traits<bool>::type save( ::efl::eolian::in_traits< ::efl::eina::optional< ::efl::eina::string_view>>::type profile) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::eina::string_view>>::type profile_iterate( ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type hidden) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type profile_exists( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::stringshare>::type profile_dir_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile,  ::efl::eolian::in_traits<bool>::type is_user) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CONFIG_GLOBAL_PROTECTED
    ::efl::eolian::return_traits<void>::type profile_derived_add( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type options) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_CONFIG_GLOBAL_PROTECTED
    ::efl::eolian::return_traits<void>::type profile_derived_del( ::efl::eolian::in_traits< ::efl::eina::string_view>::type profile) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CONFIG_GLOBAL_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Config_Global *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Config_Global,  ::efl::Config,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Config_Global const ,  ::efl::Config const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Config_Global> _get_wref() const { return ::efl::eo::wref<Config_Global>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Config_Global* operator->() const { return this; }
    Config_Global* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Config_Global const& lhs, Config_Global const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Config_Global const& lhs, Config_Global const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Config_Global) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Config_Global>::value, "");
} 

#pragma GCC diagnostic pop

#endif
