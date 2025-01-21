#ifndef EFL_INPUT_DEVICE_IMPL_HH
#define EFL_INPUT_DEVICE_IMPL_HH

#include "efl_input_device.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace input { 
inline ::efl::eolian::return_traits<Efl_Input_Device_Type>::type Device::device_type_get() const
{
    Efl_Input_Device_Type __return_value =  ::efl_input_device_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Device_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Device::device_type_set( ::efl::eolian::in_traits<Efl_Input_Device_Type>::type klass) const
{
     ::efl_input_device_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Device_Type,  ::efl::eolian::in_traits<Efl_Input_Device_Type>::type>(klass));
}
inline ::efl::eolian::return_traits< ::efl::input::Device>::type Device::source_get() const
{
     ::Efl_Input_Device* __return_value =  ::efl_input_device_source_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::input::Device>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Device::source_set( ::efl::eolian::in_traits< ::efl::input::Device>::type src) const
{
     ::efl_input_device_source_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(src));
}
inline ::efl::eolian::return_traits< ::efl::input::Device>::type Device::seat_get() const
{
     ::Efl_Input_Device* __return_value =  ::efl_input_device_seat_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::input::Device>::type>(__return_value);
}
inline ::efl::eolian::return_traits< unsigned int>::type Device::seat_id_get() const
{
    unsigned int __return_value =  ::efl_input_device_seat_id_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Device::seat_id_set( ::efl::eolian::in_traits< unsigned int>::type id) const
{
     ::efl_input_device_seat_id_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(id));
}
inline ::efl::eolian::return_traits<int>::type Device::pointer_device_count_get() const
{
    int __return_value =  ::efl_input_device_pointer_device_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Device::is_pointer_type_get() const
{
    Eina_Bool __return_value =  ::efl_input_device_is_pointer_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::input::Device>>::type Device::children_iterate() const
{
    Eina_Iterator * __return_value =  ::efl_input_device_children_iterate(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::input::Device>>::type>(__return_value);
}
} } 
namespace eo_cxx {
namespace efl { namespace input { 
inline ::efl::eolian::return_traits<Efl_Input_Device_Type>::type Device::device_type_get() const
{
    Efl_Input_Device_Type __return_value =  ::efl_input_device_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Input_Device_Type>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Device::device_type_set( ::efl::eolian::in_traits<Efl_Input_Device_Type>::type klass) const
{
     ::efl_input_device_type_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Input_Device_Type,  ::efl::eolian::in_traits<Efl_Input_Device_Type>::type>(klass));
}
inline ::efl::eolian::return_traits< ::efl::input::Device>::type Device::source_get() const
{
     ::Efl_Input_Device* __return_value =  ::efl_input_device_source_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::input::Device>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Device::source_set( ::efl::eolian::in_traits< ::efl::input::Device>::type src) const
{
     ::efl_input_device_source_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Input_Device*,  ::efl::eolian::in_traits< ::efl::input::Device>::type>(src));
}
inline ::efl::eolian::return_traits< ::efl::input::Device>::type Device::seat_get() const
{
     ::Efl_Input_Device* __return_value =  ::efl_input_device_seat_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::input::Device>::type>(__return_value);
}
inline ::efl::eolian::return_traits< unsigned int>::type Device::seat_id_get() const
{
    unsigned int __return_value =  ::efl_input_device_seat_id_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Device::seat_id_set( ::efl::eolian::in_traits< unsigned int>::type id) const
{
     ::efl_input_device_seat_id_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(id));
}
inline ::efl::eolian::return_traits<int>::type Device::pointer_device_count_get() const
{
    int __return_value =  ::efl_input_device_pointer_device_count_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<bool>::type Device::is_pointer_type_get() const
{
    Eina_Bool __return_value =  ::efl_input_device_is_pointer_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::input::Device>>::type Device::children_iterate() const
{
    Eina_Iterator * __return_value =  ::efl_input_device_children_iterate(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::input::Device>>::type>(__return_value);
}
inline efl::input::Device::operator ::efl::input::Device() const { return *static_cast< ::efl::input::Device const*>(static_cast<void const*>(this)); }
inline efl::input::Device::operator ::efl::input::Device&() { return *static_cast< ::efl::input::Device*>(static_cast<void*>(this)); }
inline efl::input::Device::operator ::efl::input::Device const&() const { return *static_cast< ::efl::input::Device const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
