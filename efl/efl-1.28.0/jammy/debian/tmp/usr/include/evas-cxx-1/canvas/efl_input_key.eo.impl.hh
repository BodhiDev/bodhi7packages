#ifndef EFL_INPUT_KEY_IMPL_HH
#define EFL_INPUT_KEY_IMPL_HH

#include "efl_input_key.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace input { 
inline ::efl::eolian::return_traits<bool>::type Key::pressed_get() const
{
    Eina_Bool __return_value =  ::efl_input_key_pressed_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Key::pressed_set( ::efl::eolian::in_traits<bool>::type val) const
{
     ::efl_input_key_pressed_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(val));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Key::key_name_get() const
{
    const char * __return_value =  ::efl_input_key_name_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Key::key_name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type val) const
{
     ::efl_input_key_name_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(val));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Key::key_sym_get() const
{
    const char * __return_value =  ::efl_input_key_sym_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Key::key_sym_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type val) const
{
     ::efl_input_key_sym_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(val));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Key::string_get() const
{
    const char * __return_value =  ::efl_input_key_string_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Key::string_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type val) const
{
     ::efl_input_key_string_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(val));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Key::compose_string_get() const
{
    const char * __return_value =  ::efl_input_key_compose_string_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Key::compose_string_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type val) const
{
     ::efl_input_key_compose_string_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(val));
}
inline ::efl::eolian::return_traits<int>::type Key::key_code_get() const
{
    int __return_value =  ::efl_input_key_code_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Key::key_code_set( ::efl::eolian::in_traits<int>::type val) const
{
     ::efl_input_key_code_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(val));
}
} } 
namespace eo_cxx {
namespace efl { namespace input { 
inline ::efl::eolian::return_traits<bool>::type Key::pressed_get() const
{
    Eina_Bool __return_value =  ::efl_input_key_pressed_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Key::pressed_set( ::efl::eolian::in_traits<bool>::type val) const
{
     ::efl_input_key_pressed_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(val));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Key::key_name_get() const
{
    const char * __return_value =  ::efl_input_key_name_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Key::key_name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type val) const
{
     ::efl_input_key_name_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(val));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Key::key_sym_get() const
{
    const char * __return_value =  ::efl_input_key_sym_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Key::key_sym_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type val) const
{
     ::efl_input_key_sym_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(val));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Key::string_get() const
{
    const char * __return_value =  ::efl_input_key_string_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Key::string_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type val) const
{
     ::efl_input_key_string_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(val));
}
inline ::efl::eolian::return_traits< ::efl::eina::string_view>::type Key::compose_string_get() const
{
    const char * __return_value =  ::efl_input_key_compose_string_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::string_view>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Key::compose_string_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type val) const
{
     ::efl_input_key_compose_string_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(val));
}
inline ::efl::eolian::return_traits<int>::type Key::key_code_get() const
{
    int __return_value =  ::efl_input_key_code_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Key::key_code_set( ::efl::eolian::in_traits<int>::type val) const
{
     ::efl_input_key_code_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(val));
}
inline efl::input::Key::operator ::efl::input::Key() const { return *static_cast< ::efl::input::Key const*>(static_cast<void const*>(this)); }
inline efl::input::Key::operator ::efl::input::Key&() { return *static_cast< ::efl::input::Key*>(static_cast<void*>(this)); }
inline efl::input::Key::operator ::efl::input::Key const&() const { return *static_cast< ::efl::input::Key const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
