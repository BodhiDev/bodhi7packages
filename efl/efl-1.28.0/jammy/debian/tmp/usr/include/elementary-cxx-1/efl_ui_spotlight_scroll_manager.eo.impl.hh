#ifndef EFL_UI_SPOTLIGHT_SCROLL_MANAGER_IMPL_HH
#define EFL_UI_SPOTLIGHT_SCROLL_MANAGER_IMPL_HH

#include "efl_ui_spotlight_scroll_manager.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { namespace spotlight { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Scroll_Manager::scroll_block_get() const
{
    Eina_Bool __return_value =  ::efl_ui_spotlight_manager_scroll_block_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Scroll_Manager::scroll_block_set( ::efl::eolian::in_traits<bool>::type scroll_block) const
{
     ::efl_ui_spotlight_manager_scroll_block_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(scroll_block));
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace ui { namespace spotlight { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<bool>::type Scroll_Manager::scroll_block_get() const
{
    Eina_Bool __return_value =  ::efl_ui_spotlight_manager_scroll_block_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Scroll_Manager::scroll_block_set( ::efl::eolian::in_traits<bool>::type scroll_block) const
{
     ::efl_ui_spotlight_manager_scroll_block_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Bool,  ::efl::eolian::in_traits<bool>::type>(scroll_block));
}
#endif
inline efl::ui::spotlight::Scroll_Manager::operator ::efl::ui::spotlight::Scroll_Manager() const { return *static_cast< ::efl::ui::spotlight::Scroll_Manager const*>(static_cast<void const*>(this)); }
inline efl::ui::spotlight::Scroll_Manager::operator ::efl::ui::spotlight::Scroll_Manager&() { return *static_cast< ::efl::ui::spotlight::Scroll_Manager*>(static_cast<void*>(this)); }
inline efl::ui::spotlight::Scroll_Manager::operator ::efl::ui::spotlight::Scroll_Manager const&() const { return *static_cast< ::efl::ui::spotlight::Scroll_Manager const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
