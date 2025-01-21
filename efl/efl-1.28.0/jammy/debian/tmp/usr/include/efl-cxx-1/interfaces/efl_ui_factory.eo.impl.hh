#ifndef EFL_UI_FACTORY_IMPL_HH
#define EFL_UI_FACTORY_IMPL_HH

#include "efl_ui_factory.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<void>::type Factory::release( ::efl::eolian::in_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type ui_views) const
{
     ::efl_ui_factory_release(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Iterator *,  ::efl::eolian::in_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type, true>(ui_views));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits<void>::type Factory::release( ::efl::eolian::in_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type ui_views) const
{
     ::efl_ui_factory_release(_eo_ptr(),
         ::efl::eolian::convert_to_c<Eina_Iterator *,  ::efl::eolian::in_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type, true>(ui_views));
}
inline efl::ui::Factory::operator ::efl::ui::Factory() const { return *static_cast< ::efl::ui::Factory const*>(static_cast<void const*>(this)); }
inline efl::ui::Factory::operator ::efl::ui::Factory&() { return *static_cast< ::efl::ui::Factory*>(static_cast<void*>(this)); }
inline efl::ui::Factory::operator ::efl::ui::Factory const&() const { return *static_cast< ::efl::ui::Factory const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
