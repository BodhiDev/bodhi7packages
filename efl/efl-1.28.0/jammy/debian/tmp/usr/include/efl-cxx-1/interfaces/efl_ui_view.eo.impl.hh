#ifndef EFL_UI_VIEW_IMPL_HH
#define EFL_UI_VIEW_IMPL_HH

#include "efl_ui_view.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits< ::efl::Model>::type View::model_get() const
{
     ::Efl_Model* __return_value =  ::efl_ui_view_model_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Model>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type View::model_set( ::efl::eolian::in_traits< ::efl::Model>::type model) const
{
     ::efl_ui_view_model_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Model*,  ::efl::eolian::in_traits< ::efl::Model>::type>(model));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits< ::efl::Model>::type View::model_get() const
{
     ::Efl_Model* __return_value =  ::efl_ui_view_model_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Model>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type View::model_set( ::efl::eolian::in_traits< ::efl::Model>::type model) const
{
     ::efl_ui_view_model_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Model*,  ::efl::eolian::in_traits< ::efl::Model>::type>(model));
}
inline efl::ui::View::operator ::efl::ui::View() const { return *static_cast< ::efl::ui::View const*>(static_cast<void const*>(this)); }
inline efl::ui::View::operator ::efl::ui::View&() { return *static_cast< ::efl::ui::View*>(static_cast<void*>(this)); }
inline efl::ui::View::operator ::efl::ui::View const&() const { return *static_cast< ::efl::ui::View const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
