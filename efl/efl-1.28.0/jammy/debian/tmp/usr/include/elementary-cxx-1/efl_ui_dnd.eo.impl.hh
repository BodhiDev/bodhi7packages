#ifndef EFL_UI_DND_IMPL_HH
#define EFL_UI_DND_IMPL_HH

#include "efl_ui_dnd.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Dnd::drag_offset_set( ::efl::eolian::in_traits< unsigned int>::type seat,  ::efl::eolian::in_traits<Eina_Size2D>::type offset) const
{
     ::efl_ui_dnd_drag_offset_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(seat),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(offset));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::Content>::type Dnd::drag_start( ::efl::eolian::in_traits<Eina_Content *>::type content,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type action,  ::efl::eolian::in_traits< unsigned int>::type seat) const
{
     ::Efl_Content* __return_value =  ::efl_ui_dnd_drag_start(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Content *,  ::efl::eolian::in_traits<Eina_Content *>::type>(content),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(action),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(seat));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Content>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Dnd::drag_cancel( ::efl::eolian::in_traits< unsigned int>::type seat) const
{
     ::efl_ui_dnd_drag_cancel(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(seat));
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Dnd::drag_offset_set( ::efl::eolian::in_traits< unsigned int>::type seat,  ::efl::eolian::in_traits<Eina_Size2D>::type offset) const
{
     ::efl_ui_dnd_drag_offset_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(seat),
         ::efl::eolian::convert_to_c<Eina_Size2D,  ::efl::eolian::in_traits<Eina_Size2D>::type>(offset));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::Content>::type Dnd::drag_start( ::efl::eolian::in_traits<Eina_Content *>::type content,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type action,  ::efl::eolian::in_traits< unsigned int>::type seat) const
{
     ::Efl_Content* __return_value =  ::efl_ui_dnd_drag_start(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Content *,  ::efl::eolian::in_traits<Eina_Content *>::type>(content),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(action),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(seat));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Content>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Dnd::drag_cancel( ::efl::eolian::in_traits< unsigned int>::type seat) const
{
     ::efl_ui_dnd_drag_cancel(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(seat));
}
#endif
inline efl::ui::Dnd::operator ::efl::ui::Dnd() const { return *static_cast< ::efl::ui::Dnd const*>(static_cast<void const*>(this)); }
inline efl::ui::Dnd::operator ::efl::ui::Dnd&() { return *static_cast< ::efl::ui::Dnd*>(static_cast<void*>(this)); }
inline efl::ui::Dnd::operator ::efl::ui::Dnd const&() const { return *static_cast< ::efl::ui::Dnd const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
