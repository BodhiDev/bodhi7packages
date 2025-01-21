#ifndef EFL_CONFIG_EO_HH
#define EFL_CONFIG_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_config.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Config {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::value>::type config_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type config_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type value) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CONFIG_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Config *>(this))); }
    operator ::efl::Config() const;
    operator ::efl::Config&();
    operator ::efl::Config const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Config> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Config const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Config : private ::efl::eo::concrete
{
    explicit Config( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Config(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Config() = default;
    Config(Config const&) = default;
    Config(Config&&) = default;
    Config& operator=(Config const&) = default;
    Config& operator=(Config&&) = default;
    template <typename Derived>
    Config(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Config, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::value>::type config_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type config_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type value) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CONFIG_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Config *>(this))); }
#ifdef EFL_CONFIG_BETA
    static struct config_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CONFIG_EVENT_CONFIG_CHANGED; }
        typedef  ::efl::eina::string_view parameter_type;
    } const config_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    config_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(config_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    config_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(config_changed_event, *this, std::bind(function));
    }
#endif
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Config> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Config const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Config> _get_wref() const { return ::efl::eo::wref<Config>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Config* operator->() const { return this; }
    Config* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Config const& lhs, Config const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Config const& lhs, Config const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Config) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Config>::value, "");
} 

#pragma GCC diagnostic pop

#endif
