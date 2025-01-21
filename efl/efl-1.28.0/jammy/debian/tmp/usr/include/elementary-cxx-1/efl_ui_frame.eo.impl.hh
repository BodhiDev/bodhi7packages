#ifndef EFL_UI_FRAME_IMPL_HH
#define EFL_UI_FRAME_IMPL_HH

#include "efl_ui_frame.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Frame::collapse_get() const
{
    Eina_Bool __return_value =  ::efl_ui_frame_collapse_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Frame::collapse_set( ::efl::eolian::in_traits<bool>::type collapse) const
{
     ::efl_ui_frame_collapse_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(collapse));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Frame::autocollapse_get() const
{
    Eina_Bool __return_value =  ::efl_ui_frame_autocollapse_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Frame::autocollapse_set( ::efl::eolian::in_traits<bool>::type autocollapse) const
{
     ::efl_ui_frame_autocollapse_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(autocollapse));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Frame::collapse_go( ::efl::eolian::in_traits<bool>::type collapse) const
{
     ::efl_ui_frame_collapse_go(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(collapse));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Frame::collapse_get() const
{
    Eina_Bool __return_value =  ::efl_ui_frame_collapse_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Frame::collapse_set( ::efl::eolian::in_traits<bool>::type collapse) const
{
     ::efl_ui_frame_collapse_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(collapse));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Frame::autocollapse_get() const
{
    Eina_Bool __return_value =  ::efl_ui_frame_autocollapse_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Frame::autocollapse_set( ::efl::eolian::in_traits<bool>::type autocollapse) const
{
     ::efl_ui_frame_autocollapse_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(autocollapse));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Frame::collapse_go( ::efl::eolian::in_traits<bool>::type collapse) const
{
     ::efl_ui_frame_collapse_go(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(collapse));
}
#endif
inline efl::ui::Frame::operator ::efl::ui::Frame() const { return *static_cast< ::efl::ui::Frame const*>(static_cast<void const*>(this)); }
inline efl::ui::Frame::operator ::efl::ui::Frame&() { return *static_cast< ::efl::ui::Frame*>(static_cast<void*>(this)); }
inline efl::ui::Frame::operator ::efl::ui::Frame const&() const { return *static_cast< ::efl::ui::Frame const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
