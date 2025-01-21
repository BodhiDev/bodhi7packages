#ifndef EFL_CANVAS_LAYOUT_PART_IMPL_HH
#define EFL_CANVAS_LAYOUT_PART_IMPL_HH

#include "efl_canvas_layout_part.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Layout_Part::state_get( ::efl::eolian::out_traits< ::efl::eina::string_view>::type state,  ::efl::eolian::out_traits<double>::type val) const
{
    const char * __out_param_state = {};
    double __out_param_val = {};
     ::efl_canvas_layout_part_state_get(_eo_ptr(),
        & __out_param_state,
        & __out_param_val);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(state, __out_param_state);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(val, __out_param_val);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace canvas { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Layout_Part::state_get( ::efl::eolian::out_traits< ::efl::eina::string_view>::type state,  ::efl::eolian::out_traits<double>::type val) const
{
    const char * __out_param_state = {};
    double __out_param_val = {};
     ::efl_canvas_layout_part_state_get(_eo_ptr(),
        & __out_param_state,
        & __out_param_val);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits< ::efl::eina::string_view>::type, const char *>(state, __out_param_state);
    ::efl::eolian::assign_out< ::efl::eolian::out_traits<double>::type, double>(val, __out_param_val);
}
#endif
inline efl::canvas::Layout_Part::operator ::efl::canvas::Layout_Part() const { return *static_cast< ::efl::canvas::Layout_Part const*>(static_cast<void const*>(this)); }
inline efl::canvas::Layout_Part::operator ::efl::canvas::Layout_Part&() { return *static_cast< ::efl::canvas::Layout_Part*>(static_cast<void*>(this)); }
inline efl::canvas::Layout_Part::operator ::efl::canvas::Layout_Part const&() const { return *static_cast< ::efl::canvas::Layout_Part const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
