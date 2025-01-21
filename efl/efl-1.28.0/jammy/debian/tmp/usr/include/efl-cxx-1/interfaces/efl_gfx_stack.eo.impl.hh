#ifndef EFL_GFX_STACK_IMPL_HH
#define EFL_GFX_STACK_IMPL_HH

#include "efl_gfx_stack.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace gfx { 
inline ::efl::eolian::return_traits<short>::type Stack::layer_get() const
{
    short __return_value =  ::efl_gfx_stack_layer_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<short>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Stack::layer_set( ::efl::eolian::in_traits<short>::type l) const
{
     ::efl_gfx_stack_layer_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<short,  ::efl::eolian::in_traits<short>::type>(l));
}
inline ::efl::eolian::return_traits< ::efl::gfx::Stack>::type Stack::below_get() const
{
     ::Efl_Gfx_Stack* __return_value =  ::efl_gfx_stack_below_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Stack>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::gfx::Stack>::type Stack::above_get() const
{
     ::Efl_Gfx_Stack* __return_value =  ::efl_gfx_stack_above_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Stack>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Stack::stack_below( ::efl::eolian::in_traits< ::efl::gfx::Stack>::type below) const
{
     ::efl_gfx_stack_below(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Stack*,  ::efl::eolian::in_traits< ::efl::gfx::Stack>::type>(below));
}
inline ::efl::eolian::return_traits<void>::type Stack::raise_to_top() const
{
     ::efl_gfx_stack_raise_to_top(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Stack::stack_above( ::efl::eolian::in_traits< ::efl::gfx::Stack>::type above) const
{
     ::efl_gfx_stack_above(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Stack*,  ::efl::eolian::in_traits< ::efl::gfx::Stack>::type>(above));
}
inline ::efl::eolian::return_traits<void>::type Stack::lower_to_bottom() const
{
     ::efl_gfx_stack_lower_to_bottom(_eo_ptr());
}
} } 
namespace eo_cxx {
namespace efl { namespace gfx { 
inline ::efl::eolian::return_traits<short>::type Stack::layer_get() const
{
    short __return_value =  ::efl_gfx_stack_layer_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<short>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Stack::layer_set( ::efl::eolian::in_traits<short>::type l) const
{
     ::efl_gfx_stack_layer_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<short,  ::efl::eolian::in_traits<short>::type>(l));
}
inline ::efl::eolian::return_traits< ::efl::gfx::Stack>::type Stack::below_get() const
{
     ::Efl_Gfx_Stack* __return_value =  ::efl_gfx_stack_below_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Stack>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::efl::gfx::Stack>::type Stack::above_get() const
{
     ::Efl_Gfx_Stack* __return_value =  ::efl_gfx_stack_above_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::gfx::Stack>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Stack::stack_below( ::efl::eolian::in_traits< ::efl::gfx::Stack>::type below) const
{
     ::efl_gfx_stack_below(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Stack*,  ::efl::eolian::in_traits< ::efl::gfx::Stack>::type>(below));
}
inline ::efl::eolian::return_traits<void>::type Stack::raise_to_top() const
{
     ::efl_gfx_stack_raise_to_top(_eo_ptr());
}
inline ::efl::eolian::return_traits<void>::type Stack::stack_above( ::efl::eolian::in_traits< ::efl::gfx::Stack>::type above) const
{
     ::efl_gfx_stack_above(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Stack*,  ::efl::eolian::in_traits< ::efl::gfx::Stack>::type>(above));
}
inline ::efl::eolian::return_traits<void>::type Stack::lower_to_bottom() const
{
     ::efl_gfx_stack_lower_to_bottom(_eo_ptr());
}
inline efl::gfx::Stack::operator ::efl::gfx::Stack() const { return *static_cast< ::efl::gfx::Stack const*>(static_cast<void const*>(this)); }
inline efl::gfx::Stack::operator ::efl::gfx::Stack&() { return *static_cast< ::efl::gfx::Stack*>(static_cast<void*>(this)); }
inline efl::gfx::Stack::operator ::efl::gfx::Stack const&() const { return *static_cast< ::efl::gfx::Stack const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
