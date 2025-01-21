#ifndef EFL_INPUT_INTERFACE_EO_HH
#define EFL_INPUT_INTERFACE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_input_device.eo.h"
#include "efl_input_focus.eo.h"
#include "efl_input_hold.eo.h"
#include "efl_input_interface.eo.h"
#include "efl_input_key.eo.h"
#include "efl_input_pointer.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_input_device.eo.hh"
#include "efl_input_focus.eo.hh"
#include "efl_input_hold.eo.hh"
#include "efl_input_key.eo.hh"
#include "efl_input_pointer.eo.hh"
#ifndef EFL_INPUT_INTERFACE_FWD_GUARD
#define EFL_INPUT_INTERFACE_FWD_GUARD
namespace efl { namespace input { 
struct Interface;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Interface> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Interface&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Interface const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Interface const&> : ::std::true_type {}; } }
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
#ifndef EFL_INPUT_FOCUS_FWD_GUARD
#define EFL_INPUT_FOCUS_FWD_GUARD
namespace efl { namespace input { 
struct Focus;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Focus> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Focus&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Focus const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Focus const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_HOLD_FWD_GUARD
#define EFL_INPUT_HOLD_FWD_GUARD
namespace efl { namespace input { 
struct Hold;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Hold> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Hold&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Hold const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Hold const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_KEY_FWD_GUARD
#define EFL_INPUT_KEY_FWD_GUARD
namespace efl { namespace input { 
struct Key;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Key> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Key&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Key const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Key const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_POINTER_FWD_GUARD
#define EFL_INPUT_POINTER_FWD_GUARD
namespace efl { namespace input { 
struct Pointer;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Pointer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Pointer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Pointer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Pointer const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace input { 
struct Interface {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type seat_event_filter_get( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type seat_event_filter_set( ::efl::eolian::in_traits< ::efl::input::Device>::type seat,  ::efl::eolian::in_traits<bool>::type enable) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_INPUT_INTERFACE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Interface *>(this))); }
    operator ::efl::input::Interface() const;
    operator ::efl::input::Interface&();
    operator ::efl::input::Interface const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Interface> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Interface const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace input { 
struct Interface : private ::efl::eo::concrete
{
    explicit Interface( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Interface(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Interface() = default;
    Interface(Interface const&) = default;
    Interface(Interface&&) = default;
    Interface& operator=(Interface const&) = default;
    Interface& operator=(Interface&&) = default;
    template <typename Derived>
    Interface(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Interface, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type seat_event_filter_get( ::efl::eolian::in_traits< ::efl::input::Device>::type seat) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type seat_event_filter_set( ::efl::eolian::in_traits< ::efl::input::Device>::type seat,  ::efl::eolian::in_traits<bool>::type enable) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_INPUT_INTERFACE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Interface *>(this))); }
    static struct pointer_move_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_POINTER_MOVE; }
        typedef  ::efl::input::Pointer parameter_type;
    } const pointer_move_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pointer_move_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pointer_move_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pointer_move_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pointer_move_event, *this, std::bind(function));
    }
#endif
    static struct pointer_down_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_POINTER_DOWN; }
        typedef  ::efl::input::Pointer parameter_type;
    } const pointer_down_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pointer_down_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pointer_down_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pointer_down_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pointer_down_event, *this, std::bind(function));
    }
#endif
    static struct pointer_up_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_POINTER_UP; }
        typedef  ::efl::input::Pointer parameter_type;
    } const pointer_up_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pointer_up_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pointer_up_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pointer_up_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pointer_up_event, *this, std::bind(function));
    }
#endif
    static struct pointer_cancel_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_POINTER_CANCEL; }
        typedef  ::efl::input::Pointer parameter_type;
    } const pointer_cancel_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pointer_cancel_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pointer_cancel_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pointer_cancel_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pointer_cancel_event, *this, std::bind(function));
    }
#endif
    static struct pointer_in_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_POINTER_IN; }
        typedef  ::efl::input::Pointer parameter_type;
    } const pointer_in_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pointer_in_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pointer_in_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pointer_in_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pointer_in_event, *this, std::bind(function));
    }
#endif
    static struct pointer_out_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_POINTER_OUT; }
        typedef  ::efl::input::Pointer parameter_type;
    } const pointer_out_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pointer_out_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pointer_out_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pointer_out_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pointer_out_event, *this, std::bind(function));
    }
#endif
    static struct pointer_wheel_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_POINTER_WHEEL; }
        typedef  ::efl::input::Pointer parameter_type;
    } const pointer_wheel_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pointer_wheel_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pointer_wheel_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pointer_wheel_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pointer_wheel_event, *this, std::bind(function));
    }
#endif
    static struct pointer_axis_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_POINTER_AXIS; }
        typedef  ::efl::input::Pointer parameter_type;
    } const pointer_axis_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pointer_axis_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pointer_axis_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pointer_axis_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pointer_axis_event, *this, std::bind(function));
    }
#endif
    static struct finger_move_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_FINGER_MOVE; }
        typedef  ::efl::input::Pointer parameter_type;
    } const finger_move_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    finger_move_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(finger_move_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    finger_move_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(finger_move_event, *this, std::bind(function));
    }
#endif
    static struct finger_down_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_FINGER_DOWN; }
        typedef  ::efl::input::Pointer parameter_type;
    } const finger_down_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    finger_down_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(finger_down_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    finger_down_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(finger_down_event, *this, std::bind(function));
    }
#endif
    static struct finger_up_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_FINGER_UP; }
        typedef  ::efl::input::Pointer parameter_type;
    } const finger_up_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    finger_up_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(finger_up_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    finger_up_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(finger_up_event, *this, std::bind(function));
    }
#endif
    static struct key_down_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_KEY_DOWN; }
        typedef  ::efl::input::Key parameter_type;
    } const key_down_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    key_down_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(key_down_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    key_down_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(key_down_event, *this, std::bind(function));
    }
#endif
    static struct key_up_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_KEY_UP; }
        typedef  ::efl::input::Key parameter_type;
    } const key_up_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    key_up_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(key_up_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    key_up_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(key_up_event, *this, std::bind(function));
    }
#endif
    static struct hold_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_HOLD; }
        typedef  ::efl::input::Hold parameter_type;
    } const hold_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    hold_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(hold_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    hold_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(hold_event, *this, std::bind(function));
    }
#endif
    static struct focus_in_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_FOCUS_IN; }
        typedef  ::efl::input::Focus parameter_type;
    } const focus_in_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    focus_in_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(focus_in_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    focus_in_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(focus_in_event, *this, std::bind(function));
    }
#endif
    static struct focus_out_event
    {
        static Efl_Event_Description const* description()
        { return EFL_EVENT_FOCUS_OUT; }
        typedef  ::efl::input::Focus parameter_type;
    } const focus_out_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    focus_out_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(focus_out_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    focus_out_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(focus_out_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Interface> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Interface const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Interface> _get_wref() const { return ::efl::eo::wref<Interface>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Interface* operator->() const { return this; }
    Interface* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Interface const& lhs, Interface const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Interface const& lhs, Interface const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Interface) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Interface>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
