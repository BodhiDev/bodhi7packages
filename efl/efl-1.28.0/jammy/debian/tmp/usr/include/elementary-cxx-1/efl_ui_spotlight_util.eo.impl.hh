#ifndef EFL_UI_SPOTLIGHT_UTIL_IMPL_HH
#define EFL_UI_SPOTLIGHT_UTIL_IMPL_HH

#include "efl_ui_spotlight_util.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { namespace spotlight { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::spotlight::Container>::type Util::stack_gen( ::efl::eolian::in_traits< ::efl::ui::Widget>::type parent)
{
     ::Efl_Ui_Spotlight_Container* __return_value =  ::efl_ui_spotlight_util_stack_gen(
         ::efl::eolian::convert_to_c< ::Efl_Ui_Widget*,  ::efl::eolian::in_traits< ::efl::ui::Widget>::type>(parent));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::spotlight::Container>::type>(__return_value);
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace ui { namespace spotlight { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits< ::efl::ui::spotlight::Container>::type Util::stack_gen( ::efl::eolian::in_traits< ::efl::ui::Widget>::type parent)
{
     ::Efl_Ui_Spotlight_Container* __return_value =  ::efl_ui_spotlight_util_stack_gen(
         ::efl::eolian::convert_to_c< ::Efl_Ui_Widget*,  ::efl::eolian::in_traits< ::efl::ui::Widget>::type>(parent));
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::ui::spotlight::Container>::type>(__return_value);
}
#endif
inline efl::ui::spotlight::Util::operator ::efl::ui::spotlight::Util() const { return *static_cast< ::efl::ui::spotlight::Util const*>(static_cast<void const*>(this)); }
inline efl::ui::spotlight::Util::operator ::efl::ui::spotlight::Util&() { return *static_cast< ::efl::ui::spotlight::Util*>(static_cast<void*>(this)); }
inline efl::ui::spotlight::Util::operator ::efl::ui::spotlight::Util const&() const { return *static_cast< ::efl::ui::spotlight::Util const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
