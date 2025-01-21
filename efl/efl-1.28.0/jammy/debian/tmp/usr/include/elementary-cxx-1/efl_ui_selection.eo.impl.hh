#ifndef EFL_UI_SELECTION_IMPL_HH
#define EFL_UI_SELECTION_IMPL_HH

#include "efl_ui_selection.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Selection::selection_set( ::efl::eolian::in_traits<Efl_Ui_Cnp_Buffer>::type buffer,  ::efl::eolian::in_traits<Eina_Content *>::type content,  ::efl::eolian::in_traits< unsigned int>::type seat) const
{
     ::efl_ui_selection_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Cnp_Buffer,  ::efl::eolian::in_traits<Efl_Ui_Cnp_Buffer>::type>(buffer),
         ::efl::eolian::convert_to_c<Eina_Content *,  ::efl::eolian::in_traits<Eina_Content *>::type>(content),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(seat));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Selection::selection_clear( ::efl::eolian::in_traits<Efl_Ui_Cnp_Buffer>::type buffer,  ::efl::eolian::in_traits< unsigned int>::type seat) const
{
     ::efl_ui_selection_clear(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Cnp_Buffer,  ::efl::eolian::in_traits<Efl_Ui_Cnp_Buffer>::type>(buffer),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(seat));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Selection::has_selection( ::efl::eolian::in_traits<Efl_Ui_Cnp_Buffer>::type buffer,  ::efl::eolian::in_traits< unsigned int>::type seat) const
{
    Eina_Bool __return_value =  ::efl_ui_selection_has_selection(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Cnp_Buffer,  ::efl::eolian::in_traits<Efl_Ui_Cnp_Buffer>::type>(buffer),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(seat));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Selection::selection_set( ::efl::eolian::in_traits<Efl_Ui_Cnp_Buffer>::type buffer,  ::efl::eolian::in_traits<Eina_Content *>::type content,  ::efl::eolian::in_traits< unsigned int>::type seat) const
{
     ::efl_ui_selection_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Cnp_Buffer,  ::efl::eolian::in_traits<Efl_Ui_Cnp_Buffer>::type>(buffer),
         ::efl::eolian::convert_to_c<Eina_Content *,  ::efl::eolian::in_traits<Eina_Content *>::type>(content),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(seat));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Selection::selection_clear( ::efl::eolian::in_traits<Efl_Ui_Cnp_Buffer>::type buffer,  ::efl::eolian::in_traits< unsigned int>::type seat) const
{
     ::efl_ui_selection_clear(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Cnp_Buffer,  ::efl::eolian::in_traits<Efl_Ui_Cnp_Buffer>::type>(buffer),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(seat));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Selection::has_selection( ::efl::eolian::in_traits<Efl_Ui_Cnp_Buffer>::type buffer,  ::efl::eolian::in_traits< unsigned int>::type seat) const
{
    Eina_Bool __return_value =  ::efl_ui_selection_has_selection(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Ui_Cnp_Buffer,  ::efl::eolian::in_traits<Efl_Ui_Cnp_Buffer>::type>(buffer),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(seat));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
inline efl::ui::Selection::operator ::efl::ui::Selection() const { return *static_cast< ::efl::ui::Selection const*>(static_cast<void const*>(this)); }
inline efl::ui::Selection::operator ::efl::ui::Selection&() { return *static_cast< ::efl::ui::Selection*>(static_cast<void*>(this)); }
inline efl::ui::Selection::operator ::efl::ui::Selection const&() const { return *static_cast< ::efl::ui::Selection const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
