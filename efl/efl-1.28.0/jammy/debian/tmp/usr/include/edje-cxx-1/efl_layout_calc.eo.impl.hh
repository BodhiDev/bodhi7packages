#ifndef EFL_LAYOUT_CALC_IMPL_HH
#define EFL_LAYOUT_CALC_IMPL_HH

#include "efl_layout_calc.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace layout { 
inline ::efl::eolian::return_traits<bool>::type Calc::calc_auto_update_hints_get() const
{
    Eina_Bool __return_value =  ::efl_layout_calc_auto_update_hints_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Calc::calc_auto_update_hints_set( ::efl::eolian::in_traits<bool>::type update) const
{
     ::efl_layout_calc_auto_update_hints_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(update));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Calc::calc_size_min( ::efl::eolian::in_traits< ::efl::eina::optional<Eina_Size2D>>::type restricted) const
{
    Eina_Size2D __return_value =  ::efl_layout_calc_size_min(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits< ::efl::eina::optional<Eina_Size2D>>::type>(restricted));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Rect>::type Calc::calc_parts_extends() const
{
    Eina_Rect __return_value =  ::efl_layout_calc_parts_extends(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
inline ::efl::eolian::return_traits<int>::type Calc::calc_freeze() const
{
    int __return_value =  ::efl_layout_calc_freeze(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<int>::type Calc::calc_thaw() const
{
    int __return_value =  ::efl_layout_calc_thaw(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#ifdef EFL_LAYOUT_CALC_PROTECTED
inline ::efl::eolian::return_traits<void>::type Calc::calc_force() const
{
     ::efl_layout_calc_force(_eo_ptr());
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace layout { 
inline ::efl::eolian::return_traits<bool>::type Calc::calc_auto_update_hints_get() const
{
    Eina_Bool __return_value =  ::efl_layout_calc_auto_update_hints_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Calc::calc_auto_update_hints_set( ::efl::eolian::in_traits<bool>::type update) const
{
     ::efl_layout_calc_auto_update_hints_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(update));
}
inline ::efl::eolian::return_traits<Eina_Size2D>::type Calc::calc_size_min( ::efl::eolian::in_traits< ::efl::eina::optional<Eina_Size2D>>::type restricted) const
{
    Eina_Size2D __return_value =  ::efl_layout_calc_size_min(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits< ::efl::eina::optional<Eina_Size2D>>::type>(restricted));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Size2D>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Eina_Rect>::type Calc::calc_parts_extends() const
{
    Eina_Rect __return_value =  ::efl_layout_calc_parts_extends(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Eina_Rect>::type>(__return_value);
}
inline ::efl::eolian::return_traits<int>::type Calc::calc_freeze() const
{
    int __return_value =  ::efl_layout_calc_freeze(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<int>::type Calc::calc_thaw() const
{
    int __return_value =  ::efl_layout_calc_thaw(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
#ifdef EFL_LAYOUT_CALC_PROTECTED
inline ::efl::eolian::return_traits<void>::type Calc::calc_force() const
{
     ::efl_layout_calc_force(_eo_ptr());
}
#endif
inline efl::layout::Calc::operator ::efl::layout::Calc() const { return *static_cast< ::efl::layout::Calc const*>(static_cast<void const*>(this)); }
inline efl::layout::Calc::operator ::efl::layout::Calc&() { return *static_cast< ::efl::layout::Calc*>(static_cast<void*>(this)); }
inline efl::layout::Calc::operator ::efl::layout::Calc const&() const { return *static_cast< ::efl::layout::Calc const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
