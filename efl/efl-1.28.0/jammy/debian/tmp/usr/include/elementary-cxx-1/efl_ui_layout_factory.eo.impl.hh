#ifndef EFL_UI_LAYOUT_FACTORY_IMPL_HH
#define EFL_UI_LAYOUT_FACTORY_IMPL_HH

#include "efl_ui_layout_factory.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<void>::type Layout_Factory::theme_config( ::efl::eolian::in_traits< ::efl::eina::string_view>::type klass,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type group,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type style) const
{
     ::efl_ui_layout_factory_theme_config(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(klass),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(group),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(style));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<void>::type Layout_Factory::theme_config( ::efl::eolian::in_traits< ::efl::eina::string_view>::type klass,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type group,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type style) const
{
     ::efl_ui_layout_factory_theme_config(_eo_ptr(),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(klass),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(group),
         ::efl::eolian::convert_to_c<const char *,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type>(style));
}
inline efl::ui::Layout_Factory::operator ::efl::ui::Layout_Factory() const { return *static_cast< ::efl::ui::Layout_Factory const*>(static_cast<void const*>(this)); }
inline efl::ui::Layout_Factory::operator ::efl::ui::Layout_Factory&() { return *static_cast< ::efl::ui::Layout_Factory*>(static_cast<void*>(this)); }
inline efl::ui::Layout_Factory::operator ::efl::ui::Layout_Factory const&() const { return *static_cast< ::efl::ui::Layout_Factory const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
