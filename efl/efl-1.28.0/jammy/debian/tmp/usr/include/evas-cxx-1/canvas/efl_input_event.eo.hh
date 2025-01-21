#ifndef EFL_INPUT_EVENT_EO_HH
#define EFL_INPUT_EVENT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_duplicate.eo.h"
#include "efl_input_device.eo.h"
#include "efl_input_event.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_duplicate.eo.hh"
#include "efl_input_device.eo.hh"
#ifndef EFL_INPUT_EVENT_FWD_GUARD
#define EFL_INPUT_EVENT_FWD_GUARD
namespace efl { namespace input { 
struct Event;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Event> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Event&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Event const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Event const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_DEVICE_FWD_GUARD
#define EFL_INPUT_DEVICE_FWD_GUARD
namespace efl { namespace input { 
struct Device;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace input { 
struct Event {
    ::efl::eolian::return_traits<double>::type timestamp_get() const;
    ::efl::eolian::return_traits<void>::type timestamp_set( ::efl::eolian::in_traits<double>::type ms) const;
    ::efl::eolian::return_traits< ::efl::input::Device>::type device_get() const;
    ::efl::eolian::return_traits<void>::type device_set( ::efl::eolian::in_traits< ::efl::input::Device>::type dev) const;
    ::efl::eolian::return_traits<Efl_Input_Flags>::type event_flags_get() const;
    ::efl::eolian::return_traits<void>::type event_flags_set( ::efl::eolian::in_traits<Efl_Input_Flags>::type flags) const;
    ::efl::eolian::return_traits<bool>::type processed_get() const;
    ::efl::eolian::return_traits<void>::type processed_set( ::efl::eolian::in_traits<bool>::type val) const;
    ::efl::eolian::return_traits<bool>::type scrolling_get() const;
    ::efl::eolian::return_traits<void>::type scrolling_set( ::efl::eolian::in_traits<bool>::type val) const;
    ::efl::eolian::return_traits<bool>::type fake_get() const;
    ::efl::eolian::return_traits<void>::type reset() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_INPUT_EVENT_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Event *>(this))); }
    operator ::efl::input::Event() const;
    operator ::efl::input::Event&();
    operator ::efl::input::Event const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Event,  ::efl::Duplicate> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Event const ,  ::efl::Duplicate const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace input { 
struct Event : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Duplicate)
{
    explicit Event( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Event(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Event() = default;
    Event(Event const&) = default;
    Event(Event&&) = default;
    Event& operator=(Event const&) = default;
    Event& operator=(Event&&) = default;
    template <typename Derived>
    Event(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Event, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<double>::type timestamp_get() const;
    ::efl::eolian::return_traits<void>::type timestamp_set( ::efl::eolian::in_traits<double>::type ms) const;
    ::efl::eolian::return_traits< ::efl::input::Device>::type device_get() const;
    ::efl::eolian::return_traits<void>::type device_set( ::efl::eolian::in_traits< ::efl::input::Device>::type dev) const;
    ::efl::eolian::return_traits<Efl_Input_Flags>::type event_flags_get() const;
    ::efl::eolian::return_traits<void>::type event_flags_set( ::efl::eolian::in_traits<Efl_Input_Flags>::type flags) const;
    ::efl::eolian::return_traits<bool>::type processed_get() const;
    ::efl::eolian::return_traits<void>::type processed_set( ::efl::eolian::in_traits<bool>::type val) const;
    ::efl::eolian::return_traits<bool>::type scrolling_get() const;
    ::efl::eolian::return_traits<void>::type scrolling_set( ::efl::eolian::in_traits<bool>::type val) const;
    ::efl::eolian::return_traits<bool>::type fake_get() const;
    ::efl::eolian::return_traits<void>::type reset() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_INPUT_EVENT_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Event *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Event,  ::efl::Duplicate> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Event const ,  ::efl::Duplicate const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Event> _get_wref() const { return ::efl::eo::wref<Event>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Event* operator->() const { return this; }
    Event* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Event const& lhs, Event const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Event const& lhs, Event const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Event) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Event>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
