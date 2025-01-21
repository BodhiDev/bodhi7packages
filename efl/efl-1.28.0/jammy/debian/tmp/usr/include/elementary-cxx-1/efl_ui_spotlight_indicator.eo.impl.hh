#ifndef EFL_UI_SPOTLIGHT_INDICATOR_IMPL_HH
#define EFL_UI_SPOTLIGHT_INDICATOR_IMPL_HH

#include "efl_ui_spotlight_indicator.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { namespace spotlight { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Indicator::bind( ::efl::eolian::in_traits< ::efl::ui::spotlight::Container>::type spotlight) const
{
     ::efl_ui_spotlight_indicator_bind(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Spotlight_Container*,  ::efl::eolian::in_traits< ::efl::ui::spotlight::Container>::type>(spotlight));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Indicator::content_add( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type index) const
{
     ::efl_ui_spotlight_indicator_content_add(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(index));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Indicator::content_del( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type index) const
{
     ::efl_ui_spotlight_indicator_content_del(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(index));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Indicator::position_update( ::efl::eolian::in_traits<double>::type position) const
{
     ::efl_ui_spotlight_indicator_position_update(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(position));
}
#endif
} } } 
namespace eo_cxx {
namespace efl { namespace ui { namespace spotlight { 
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Indicator::bind( ::efl::eolian::in_traits< ::efl::ui::spotlight::Container>::type spotlight) const
{
     ::efl_ui_spotlight_indicator_bind(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Ui_Spotlight_Container*,  ::efl::eolian::in_traits< ::efl::ui::spotlight::Container>::type>(spotlight));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Indicator::content_add( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type index) const
{
     ::efl_ui_spotlight_indicator_content_add(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(index));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Indicator::content_del( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type index) const
{
     ::efl_ui_spotlight_indicator_content_del(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Gfx_Entity*,  ::efl::eolian::in_traits< ::efl::gfx::Entity>::type>(subobj),
         ::efl::eolian::convert_to_c<int,  ::efl::eolian::in_traits<int>::type>(index));
}
#endif
#ifdef EFL_BETA_API_SUPPORT
inline ::efl::eolian::return_traits<void>::type Indicator::position_update( ::efl::eolian::in_traits<double>::type position) const
{
     ::efl_ui_spotlight_indicator_position_update(_eo_ptr(),
         ::efl::eolian::convert_to_c<double,  ::efl::eolian::in_traits<double>::type>(position));
}
#endif
inline efl::ui::spotlight::Indicator::operator ::efl::ui::spotlight::Indicator() const { return *static_cast< ::efl::ui::spotlight::Indicator const*>(static_cast<void const*>(this)); }
inline efl::ui::spotlight::Indicator::operator ::efl::ui::spotlight::Indicator&() { return *static_cast< ::efl::ui::spotlight::Indicator*>(static_cast<void*>(this)); }
inline efl::ui::spotlight::Indicator::operator ::efl::ui::spotlight::Indicator const&() const { return *static_cast< ::efl::ui::spotlight::Indicator const*>(static_cast<void const*>(this)); }
} } } }

#pragma GCC diagnostic pop

#endif
