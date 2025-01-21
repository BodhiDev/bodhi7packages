#ifndef EFL_AUDIO_CONTROL_EO_HH
#define EFL_AUDIO_CONTROL_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_audio_control.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_AUDIO_CONTROL_FWD_GUARD
#define EFL_AUDIO_CONTROL_FWD_GUARD
namespace efl { 
struct Audio_Control;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Audio_Control> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Audio_Control&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Audio_Control const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Audio_Control const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Audio_Control {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type volume_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type volume_set( ::efl::eolian::in_traits<double>::type volume) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type mute_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type mute_set( ::efl::eolian::in_traits<bool>::type mute) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_AUDIO_CONTROL_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Audio_Control *>(this))); }
    operator ::efl::Audio_Control() const;
    operator ::efl::Audio_Control&();
    operator ::efl::Audio_Control const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Audio_Control> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Audio_Control const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Audio_Control : private ::efl::eo::concrete
{
    explicit Audio_Control( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Audio_Control(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Audio_Control() = default;
    Audio_Control(Audio_Control const&) = default;
    Audio_Control(Audio_Control&&) = default;
    Audio_Control& operator=(Audio_Control const&) = default;
    Audio_Control& operator=(Audio_Control&&) = default;
    template <typename Derived>
    Audio_Control(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Audio_Control, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type volume_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type volume_set( ::efl::eolian::in_traits<double>::type volume) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type mute_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type mute_set( ::efl::eolian::in_traits<bool>::type mute) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_AUDIO_CONTROL_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Audio_Control *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Audio_Control> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Audio_Control const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Audio_Control> _get_wref() const { return ::efl::eo::wref<Audio_Control>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Audio_Control* operator->() const { return this; }
    Audio_Control* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Audio_Control const& lhs, Audio_Control const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Audio_Control const& lhs, Audio_Control const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Audio_Control) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Audio_Control>::value, "");
} 

#pragma GCC diagnostic pop

#endif
