#ifndef EFL_INPUT_DEVICE_EO_HH
#define EFL_INPUT_DEVICE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_input_device.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
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
namespace efl { namespace input { 
struct Device {
    ::efl::eolian::return_traits<Efl_Input_Device_Type>::type device_type_get() const;
    ::efl::eolian::return_traits<void>::type device_type_set( ::efl::eolian::in_traits<Efl_Input_Device_Type>::type klass) const;
    ::efl::eolian::return_traits< ::efl::input::Device>::type source_get() const;
    ::efl::eolian::return_traits<void>::type source_set( ::efl::eolian::in_traits< ::efl::input::Device>::type src) const;
    ::efl::eolian::return_traits< ::efl::input::Device>::type seat_get() const;
    ::efl::eolian::return_traits< unsigned int>::type seat_id_get() const;
    ::efl::eolian::return_traits<void>::type seat_id_set( ::efl::eolian::in_traits< unsigned int>::type id) const;
    ::efl::eolian::return_traits<int>::type pointer_device_count_get() const;
    ::efl::eolian::return_traits<bool>::type is_pointer_type_get() const;
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::input::Device>>::type children_iterate() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_INPUT_DEVICE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Device *>(this))); }
    operator ::efl::input::Device() const;
    operator ::efl::input::Device&();
    operator ::efl::input::Device const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Device,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Device const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace input { 
struct Device : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Device( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Device(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Device() = default;
    Device(Device const&) = default;
    Device(Device&&) = default;
    Device& operator=(Device const&) = default;
    Device& operator=(Device&&) = default;
    template <typename Derived>
    Device(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Device, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Device( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Device( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Device( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Device >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Device(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Device >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    ::efl::eolian::return_traits<Efl_Input_Device_Type>::type device_type_get() const;
    ::efl::eolian::return_traits<void>::type device_type_set( ::efl::eolian::in_traits<Efl_Input_Device_Type>::type klass) const;
    ::efl::eolian::return_traits< ::efl::input::Device>::type source_get() const;
    ::efl::eolian::return_traits<void>::type source_set( ::efl::eolian::in_traits< ::efl::input::Device>::type src) const;
    ::efl::eolian::return_traits< ::efl::input::Device>::type seat_get() const;
    ::efl::eolian::return_traits< unsigned int>::type seat_id_get() const;
    ::efl::eolian::return_traits<void>::type seat_id_set( ::efl::eolian::in_traits< unsigned int>::type id) const;
    ::efl::eolian::return_traits<int>::type pointer_device_count_get() const;
    ::efl::eolian::return_traits<bool>::type is_pointer_type_get() const;
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::input::Device>>::type children_iterate() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_INPUT_DEVICE_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Device *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Device,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Device const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Device> _get_wref() const { return ::efl::eo::wref<Device>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Device* operator->() const { return this; }
    Device* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Device const& lhs, Device const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Device const& lhs, Device const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Device) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Device>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
