#ifndef EFL_CANVAS_LAYOUT_PART_TEXT_IMPL_HH
#define EFL_CANVAS_LAYOUT_PART_TEXT_IMPL_HH

#include "efl_canvas_layout_part_text.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Canvas_Layout_Part_Text_Expand>::type Layout_Part_Text::text_expand_get() const
{
    Efl_Canvas_Layout_Part_Text_Expand __return_value =  ::efl_canvas_layout_part_text_expand_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Canvas_Layout_Part_Text_Expand>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Layout_Part_Text::text_expand_set( ::efl::eolian::in_traits<Efl_Canvas_Layout_Part_Text_Expand>::type type) const
{
     ::efl_canvas_layout_part_text_expand_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Canvas_Layout_Part_Text_Expand,  ::efl::eolian::in_traits<Efl_Canvas_Layout_Part_Text_Expand>::type>(type));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<Efl_Canvas_Layout_Part_Text_Expand>::type Layout_Part_Text::text_expand_get() const
{
    Efl_Canvas_Layout_Part_Text_Expand __return_value =  ::efl_canvas_layout_part_text_expand_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Canvas_Layout_Part_Text_Expand>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Layout_Part_Text::text_expand_set( ::efl::eolian::in_traits<Efl_Canvas_Layout_Part_Text_Expand>::type type) const
{
     ::efl_canvas_layout_part_text_expand_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Canvas_Layout_Part_Text_Expand,  ::efl::eolian::in_traits<Efl_Canvas_Layout_Part_Text_Expand>::type>(type));
}
#endif
inline efl::canvas::Layout_Part_Text::operator ::efl::canvas::Layout_Part_Text() const { return *static_cast< ::efl::canvas::Layout_Part_Text const*>(static_cast<void const*>(this)); }
inline efl::canvas::Layout_Part_Text::operator ::efl::canvas::Layout_Part_Text&() { return *static_cast< ::efl::canvas::Layout_Part_Text*>(static_cast<void*>(this)); }
inline efl::canvas::Layout_Part_Text::operator ::efl::canvas::Layout_Part_Text const&() const { return *static_cast< ::efl::canvas::Layout_Part_Text const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
