#ifndef EFL_UI_WIDGET_FACTORY_IMPL_HH
#define EFL_UI_WIDGET_FACTORY_IMPL_HH

#include "efl_ui_widget_factory.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits< ::efl::Class>::type Widget_Factory::item_class_get() const
{
     ::Efl_Class const* __return_value =  ::efl_ui_widget_factory_item_class_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Class>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Widget_Factory::item_class_set( ::efl::eolian::in_traits< ::efl::Class>::type klass) const
{
     ::efl_ui_widget_factory_item_class_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Class const*,  ::efl::eolian::in_traits< ::efl::Class>::type>(klass));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits< ::efl::Class>::type Widget_Factory::item_class_get() const
{
     ::Efl_Class const* __return_value =  ::efl_ui_widget_factory_item_class_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Class>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Widget_Factory::item_class_set( ::efl::eolian::in_traits< ::efl::Class>::type klass) const
{
     ::efl_ui_widget_factory_item_class_set(_eo_ptr(),
         ::efl::eolian::convert_to_c< ::Efl_Class const*,  ::efl::eolian::in_traits< ::efl::Class>::type>(klass));
}
inline efl::ui::Widget_Factory::operator ::efl::ui::Widget_Factory() const { return *static_cast< ::efl::ui::Widget_Factory const*>(static_cast<void const*>(this)); }
inline efl::ui::Widget_Factory::operator ::efl::ui::Widget_Factory&() { return *static_cast< ::efl::ui::Widget_Factory*>(static_cast<void*>(this)); }
inline efl::ui::Widget_Factory::operator ::efl::ui::Widget_Factory const&() const { return *static_cast< ::efl::ui::Widget_Factory const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
