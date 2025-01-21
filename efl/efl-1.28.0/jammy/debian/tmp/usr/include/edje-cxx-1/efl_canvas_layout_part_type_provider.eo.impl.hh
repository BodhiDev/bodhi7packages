#ifndef EFL_CANVAS_LAYOUT_PART_TYPE_PROVIDER_IMPL_HH
#define EFL_CANVAS_LAYOUT_PART_TYPE_PROVIDER_IMPL_HH

#include "efl_canvas_layout_part_type_provider.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Canvas_Layout_Part_Type>::type Layout_Part_Type_Provider::part_type_get() const
{
    Efl_Canvas_Layout_Part_Type __return_value =  ::efl_canvas_layout_part_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Canvas_Layout_Part_Type>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Canvas_Layout_Part_Type>::type Layout_Part_Type_Provider::part_type_get() const
{
    Efl_Canvas_Layout_Part_Type __return_value =  ::efl_canvas_layout_part_type_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Canvas_Layout_Part_Type>::type>(__return_value);
}
#endif
inline efl::canvas::Layout_Part_Type_Provider::operator ::efl::canvas::Layout_Part_Type_Provider() const { return *static_cast< ::efl::canvas::Layout_Part_Type_Provider const*>(static_cast<void const*>(this)); }
inline efl::canvas::Layout_Part_Type_Provider::operator ::efl::canvas::Layout_Part_Type_Provider&() { return *static_cast< ::efl::canvas::Layout_Part_Type_Provider*>(static_cast<void*>(this)); }
inline efl::canvas::Layout_Part_Type_Provider::operator ::efl::canvas::Layout_Part_Type_Provider const&() const { return *static_cast< ::efl::canvas::Layout_Part_Type_Provider const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
