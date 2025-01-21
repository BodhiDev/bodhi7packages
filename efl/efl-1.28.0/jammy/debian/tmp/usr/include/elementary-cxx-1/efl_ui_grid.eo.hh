#ifndef EFL_UI_GRID_EO_HH
#define EFL_UI_GRID_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_access_component.eo.h"
#include "efl_access_object.eo.h"
#include "efl_canvas_animation.eo.h"
#include "efl_canvas_group.eo.h"
#include "efl_canvas_object.eo.h"
#include "efl_canvas_object_animation.eo.h"
#include "efl_canvas_pointer.eo.h"
#include "efl_class.eo.h"
#include "efl_container.eo.h"
#include "efl_content.eo.h"
#include "efl_gfx_color.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_gfx_filter.eo.h"
#include "efl_gfx_hint.eo.h"
#include "efl_gfx_mapping.eo.h"
#include "efl_gfx_stack.eo.h"
#include "efl_input_device.eo.h"
#include "efl_input_focus.eo.h"
#include "efl_input_hold.eo.h"
#include "efl_input_interface.eo.h"
#include "efl_input_key.eo.h"
#include "efl_input_pointer.eo.h"
#include "efl_layout_calc.eo.h"
#include "efl_layout_group.eo.h"
#include "efl_layout_signal.eo.h"
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_model.eo.h"
#include "efl_object.eo.h"
#include "efl_pack.eo.h"
#include "efl_pack_linear.eo.h"
#include "efl_part.eo.h"
#include "efl_ui_collection.eo.h"
#include "efl_ui_dnd.eo.h"
#include "efl_ui_factory.eo.h"
#include "efl_ui_factory_bind.eo.h"
#include "efl_ui_focus_manager.eo.h"
#include "efl_ui_focus_manager_sub.eo.h"
#include "efl_ui_focus_object.eo.h"
#include "efl_ui_grid.eo.h"
#include "efl_ui_i18n.eo.h"
#include "efl_ui_item.eo.h"
#include "efl_ui_item_clickable.eo.h"
#include "efl_ui_l10n.eo.h"
#include "efl_ui_layout_base.eo.h"
#include "efl_ui_layout_orientable.eo.h"
#include "efl_ui_multi_selectable.eo.h"
#include "efl_ui_multi_selectable_object_range.eo.h"
#include "efl_ui_position_manager_entity.eo.h"
#include "efl_ui_property_bind.eo.h"
#include "efl_ui_scrollable.eo.h"
#include "efl_ui_scrollbar.eo.h"
#include "efl_ui_selectable.eo.h"
#include "efl_ui_selection.eo.h"
#include "efl_ui_single_selectable.eo.h"
#include "efl_ui_view.eo.h"
#include "efl_ui_widget.eo.h"
#include "efl_ui_widget_focus_manager.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_access_component.eo.hh"
#include "efl_access_object.eo.hh"
#include "efl_canvas_animation.eo.hh"
#include "efl_canvas_group.eo.hh"
#include "efl_canvas_object.eo.hh"
#include "efl_canvas_object_animation.eo.hh"
#include "efl_canvas_pointer.eo.hh"
#include "efl_class.eo.hh"
#include "efl_container.eo.hh"
#include "efl_content.eo.hh"
#include "efl_gfx_color.eo.hh"
#include "efl_gfx_entity.eo.hh"
#include "efl_gfx_filter.eo.hh"
#include "efl_gfx_hint.eo.hh"
#include "efl_gfx_mapping.eo.hh"
#include "efl_gfx_stack.eo.hh"
#include "efl_input_device.eo.hh"
#include "efl_input_focus.eo.hh"
#include "efl_input_hold.eo.hh"
#include "efl_input_interface.eo.hh"
#include "efl_input_key.eo.hh"
#include "efl_input_pointer.eo.hh"
#include "efl_layout_calc.eo.hh"
#include "efl_layout_group.eo.hh"
#include "efl_layout_signal.eo.hh"
#include "efl_loop.eo.hh"
#include "efl_loop_consumer.eo.hh"
#include "efl_model.eo.hh"
#include "efl_object.eo.hh"
#include "efl_pack.eo.hh"
#include "efl_pack_linear.eo.hh"
#include "efl_part.eo.hh"
#include "efl_ui_collection.eo.hh"
#include "efl_ui_dnd.eo.hh"
#include "efl_ui_factory.eo.hh"
#include "efl_ui_factory_bind.eo.hh"
#include "efl_ui_focus_manager.eo.hh"
#include "efl_ui_focus_manager_sub.eo.hh"
#include "efl_ui_focus_object.eo.hh"
#include "efl_ui_i18n.eo.hh"
#include "efl_ui_item.eo.hh"
#include "efl_ui_item_clickable.eo.hh"
#include "efl_ui_l10n.eo.hh"
#include "efl_ui_layout_base.eo.hh"
#include "efl_ui_layout_orientable.eo.hh"
#include "efl_ui_multi_selectable.eo.hh"
#include "efl_ui_multi_selectable_object_range.eo.hh"
#include "efl_ui_position_manager_entity.eo.hh"
#include "efl_ui_property_bind.eo.hh"
#include "efl_ui_scrollable.eo.hh"
#include "efl_ui_scrollbar.eo.hh"
#include "efl_ui_selectable.eo.hh"
#include "efl_ui_selection.eo.hh"
#include "efl_ui_single_selectable.eo.hh"
#include "efl_ui_view.eo.hh"
#include "efl_ui_widget.eo.hh"
#include "efl_ui_widget_focus_manager.eo.hh"
#ifndef EFL_UI_GRID_FWD_GUARD
#define EFL_UI_GRID_FWD_GUARD
namespace efl { namespace ui { 
struct Grid;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Grid> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Grid&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Grid const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Grid const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_ANIMATION_FWD_GUARD
#define EFL_CANVAS_ANIMATION_FWD_GUARD
namespace efl { namespace canvas { 
struct Animation;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Animation> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Animation&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Animation const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Animation const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_LAYOUT_CALC_FWD_GUARD
#define EFL_LAYOUT_CALC_FWD_GUARD
namespace efl { namespace layout { 
struct Calc;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Calc> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Calc&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Calc const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Calc const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CLASS_FWD_GUARD
#define EFL_CLASS_FWD_GUARD
namespace efl { 
struct Class;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Class const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CONTAINER_FWD_GUARD
#define EFL_CONTAINER_FWD_GUARD
namespace efl { 
struct Container;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CONTENT_FWD_GUARD
#define EFL_CONTENT_FWD_GUARD
namespace efl { 
struct Content;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Content> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Content&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Content const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Content const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_ACCESS_COMPONENT_FWD_GUARD
#define EFL_ACCESS_COMPONENT_FWD_GUARD
namespace efl { namespace access { 
struct Component;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Component> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Component&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Component const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Component const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_COLOR_FWD_GUARD
#define EFL_GFX_COLOR_FWD_GUARD
namespace efl { namespace gfx { 
struct Color;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Color const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_DEVICE_FWD_GUARD
#define EFL_INPUT_DEVICE_FWD_GUARD
namespace efl { namespace input { 
struct Device;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_DND_FWD_GUARD
#define EFL_UI_DND_FWD_GUARD
namespace efl { namespace ui { 
struct Dnd;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Dnd> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Dnd&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Dnd const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Dnd const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_ENTITY_FWD_GUARD
#define EFL_GFX_ENTITY_FWD_GUARD
namespace efl { namespace gfx { 
struct Entity;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_POSITION_MANAGER_ENTITY_FWD_GUARD
#define EFL_UI_POSITION_MANAGER_ENTITY_FWD_GUARD
namespace efl { namespace ui { namespace position_manager { 
struct Entity;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Entity> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Entity&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Entity const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Entity const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_FACTORY_FWD_GUARD
#define EFL_UI_FACTORY_FWD_GUARD
namespace efl { namespace ui { 
struct Factory;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_FACTORY_BIND_FWD_GUARD
#define EFL_UI_FACTORY_BIND_FWD_GUARD
namespace efl { namespace ui { 
struct Factory_Bind;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory_Bind> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory_Bind&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory_Bind const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory_Bind const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_FILTER_FWD_GUARD
#define EFL_GFX_FILTER_FWD_GUARD
namespace efl { namespace gfx { 
struct Filter;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Filter> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Filter&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Filter const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Filter const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_HINT_FWD_GUARD
#define EFL_GFX_HINT_FWD_GUARD
namespace efl { namespace gfx { 
struct Hint;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Hint> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Hint&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Hint const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Hint const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_FOCUS_FWD_GUARD
#define EFL_INPUT_FOCUS_FWD_GUARD
namespace efl { namespace input { 
struct Focus;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Focus> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Focus&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Focus const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Focus const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_LAYOUT_GROUP_FWD_GUARD
#define EFL_LAYOUT_GROUP_FWD_GUARD
namespace efl { namespace layout { 
struct Group;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Group> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Group&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Group const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Group const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_HOLD_FWD_GUARD
#define EFL_INPUT_HOLD_FWD_GUARD
namespace efl { namespace input { 
struct Hold;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Hold> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Hold&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Hold const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Hold const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_I18N_FWD_GUARD
#define EFL_UI_I18N_FWD_GUARD
namespace efl { namespace ui { 
struct I18n;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::I18n> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::I18n&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::I18n const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::I18n const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_INTERFACE_FWD_GUARD
#define EFL_INPUT_INTERFACE_FWD_GUARD
namespace efl { namespace input { 
struct Interface;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Interface> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Interface&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Interface const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Interface const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_ITEM_FWD_GUARD
#define EFL_UI_ITEM_FWD_GUARD
namespace efl { namespace ui { 
struct Item;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Item> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Item&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Item const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Item const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_ITEM_CLICKABLE_FWD_GUARD
#define EFL_UI_ITEM_CLICKABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Item_Clickable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Item_Clickable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Item_Clickable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Item_Clickable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Item_Clickable const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_KEY_FWD_GUARD
#define EFL_INPUT_KEY_FWD_GUARD
namespace efl { namespace input { 
struct Key;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Key> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Key&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Key const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Key const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_L10N_FWD_GUARD
#define EFL_UI_L10N_FWD_GUARD
namespace efl { namespace ui { 
struct L10n;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::L10n> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::L10n&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::L10n const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::L10n const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_LAYOUT_ORIENTABLE_FWD_GUARD
#define EFL_UI_LAYOUT_ORIENTABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Layout_Orientable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Orientable const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_LOOP_FWD_GUARD
#define EFL_LOOP_FWD_GUARD
namespace efl { 
struct Loop;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_LOOP_CONSUMER_FWD_GUARD
#define EFL_LOOP_CONSUMER_FWD_GUARD
namespace efl { 
struct Loop_Consumer;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_MODEL_FWD_GUARD
#define EFL_MODEL_FWD_GUARD
namespace efl { 
struct Model;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Model> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Model&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Model const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Model const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_MULTI_SELECTABLE_FWD_GUARD
#define EFL_UI_MULTI_SELECTABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Multi_Selectable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_MULTI_SELECTABLE_OBJECT_RANGE_FWD_GUARD
#define EFL_UI_MULTI_SELECTABLE_OBJECT_RANGE_FWD_GUARD
namespace efl { namespace ui { 
struct Multi_Selectable_Object_Range;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable_Object_Range> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable_Object_Range&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable_Object_Range const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Multi_Selectable_Object_Range const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_FOCUS_MANAGER_FWD_GUARD
#define EFL_UI_FOCUS_MANAGER_FWD_GUARD
namespace efl { namespace ui { namespace focus { 
struct Manager;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_FOCUS_MANAGER_SUB_FWD_GUARD
#define EFL_UI_FOCUS_MANAGER_SUB_FWD_GUARD
namespace efl { namespace ui { namespace focus { 
struct Manager_Sub;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Sub> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Sub&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Sub const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Sub const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_MAPPING_FWD_GUARD
#define EFL_GFX_MAPPING_FWD_GUARD
namespace efl { namespace gfx { 
struct Mapping;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Mapping> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Mapping&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Mapping const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Mapping const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_OBJECT_FWD_GUARD
#define EFL_OBJECT_FWD_GUARD
namespace efl { 
struct Object;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Object const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_PACK_FWD_GUARD
#define EFL_PACK_FWD_GUARD
namespace efl { 
struct Pack;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_PACK_LINEAR_FWD_GUARD
#define EFL_PACK_LINEAR_FWD_GUARD
namespace efl { 
struct Pack_Linear;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack_Linear> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack_Linear&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack_Linear const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack_Linear const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_PART_FWD_GUARD
#define EFL_PART_FWD_GUARD
namespace efl { 
struct Part;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Part> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Part&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Part const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Part const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_ACCESS_OBJECT_FWD_GUARD
#define EFL_ACCESS_OBJECT_FWD_GUARD
namespace efl { namespace access { 
struct Object;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Object const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_GROUP_FWD_GUARD
#define EFL_CANVAS_GROUP_FWD_GUARD
namespace efl { namespace canvas { 
struct Group;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Group> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Group&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Group const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Group const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_OBJECT_FWD_GUARD
#define EFL_CANVAS_OBJECT_FWD_GUARD
namespace efl { namespace canvas { 
struct Object;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_OBJECT_ANIMATION_FWD_GUARD
#define EFL_CANVAS_OBJECT_ANIMATION_FWD_GUARD
namespace efl { namespace canvas { 
struct Object_Animation;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object_Animation> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object_Animation&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object_Animation const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Object_Animation const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CANVAS_POINTER_FWD_GUARD
#define EFL_CANVAS_POINTER_FWD_GUARD
namespace efl { namespace canvas { 
struct Pointer;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Pointer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Pointer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Pointer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Pointer const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_POINTER_FWD_GUARD
#define EFL_INPUT_POINTER_FWD_GUARD
namespace efl { namespace input { 
struct Pointer;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Pointer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Pointer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Pointer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Pointer const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_LAYOUT_SIGNAL_FWD_GUARD
#define EFL_LAYOUT_SIGNAL_FWD_GUARD
namespace efl { namespace layout { 
struct Signal;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Signal> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Signal&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Signal const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Signal const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_STACK_FWD_GUARD
#define EFL_GFX_STACK_FWD_GUARD
namespace efl { namespace gfx { 
struct Stack;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Stack const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_COLLECTION_FWD_GUARD
#define EFL_UI_COLLECTION_FWD_GUARD
namespace efl { namespace ui { 
struct Collection;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Collection> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Collection&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Collection const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Collection const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_LAYOUT_BASE_FWD_GUARD
#define EFL_UI_LAYOUT_BASE_FWD_GUARD
namespace efl { namespace ui { 
struct Layout_Base;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Base> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Base&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Base const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Layout_Base const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_FOCUS_OBJECT_FWD_GUARD
#define EFL_UI_FOCUS_OBJECT_FWD_GUARD
namespace efl { namespace ui { namespace focus { 
struct Object;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_PROPERTY_BIND_FWD_GUARD
#define EFL_UI_PROPERTY_BIND_FWD_GUARD
namespace efl { namespace ui { 
struct Property_Bind;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_SCROLLABLE_FWD_GUARD
#define EFL_UI_SCROLLABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Scrollable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollable const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_SCROLLBAR_FWD_GUARD
#define EFL_UI_SCROLLBAR_FWD_GUARD
namespace efl { namespace ui { 
struct Scrollbar;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollbar> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollbar&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollbar const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Scrollbar const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_SELECTABLE_FWD_GUARD
#define EFL_UI_SELECTABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Selectable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Selectable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Selectable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Selectable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Selectable const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_SELECTION_FWD_GUARD
#define EFL_UI_SELECTION_FWD_GUARD
namespace efl { namespace ui { 
struct Selection;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Selection> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Selection&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Selection const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Selection const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_SINGLE_SELECTABLE_FWD_GUARD
#define EFL_UI_SINGLE_SELECTABLE_FWD_GUARD
namespace efl { namespace ui { 
struct Single_Selectable;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Single_Selectable> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Single_Selectable&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Single_Selectable const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Single_Selectable const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_VIEW_FWD_GUARD
#define EFL_UI_VIEW_FWD_GUARD
namespace efl { namespace ui { 
struct View;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::View> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::View&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::View const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::View const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_WIDGET_FOCUS_MANAGER_FWD_GUARD
#define EFL_UI_WIDGET_FOCUS_MANAGER_FWD_GUARD
namespace efl { namespace ui { 
struct Widget_Focus_Manager;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Focus_Manager> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Focus_Manager&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Focus_Manager const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget_Focus_Manager const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_WIDGET_FWD_GUARD
#define EFL_UI_WIDGET_FWD_GUARD
namespace efl { namespace ui { 
struct Widget;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_WIDGET_FWD_GUARD
#define EFL_UI_WIDGET_FWD_GUARD
namespace efl { namespace ui { 
struct Widget;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_WIDGET_FWD_GUARD
#define EFL_UI_WIDGET_FWD_GUARD
namespace efl { namespace ui { 
struct Widget;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_FOCUS_OBJECT_FWD_GUARD
#define EFL_UI_FOCUS_OBJECT_FWD_GUARD
namespace efl { namespace ui { namespace focus { 
struct Object;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Object const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_WIDGET_FWD_GUARD
#define EFL_UI_WIDGET_FWD_GUARD
namespace efl { namespace ui { 
struct Widget;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Widget const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Grid {
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_GRID_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Grid *>(this))); }
    operator ::efl::ui::Grid() const;
    operator ::efl::ui::Grid&();
    operator ::efl::ui::Grid const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Grid,  ::efl::Container,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::Pack,  ::efl::Pack_Linear,  ::efl::Part,  ::efl::access::Component,  ::efl::access::Object,  ::efl::canvas::Group,  ::efl::canvas::Object,  ::efl::canvas::Object_Animation,  ::efl::canvas::Pointer,  ::efl::gfx::Color,  ::efl::gfx::Entity,  ::efl::gfx::Filter,  ::efl::gfx::Hint,  ::efl::gfx::Mapping,  ::efl::gfx::Stack,  ::efl::input::Interface,  ::efl::layout::Calc,  ::efl::layout::Group,  ::efl::layout::Signal,  ::efl::ui::Collection,  ::efl::ui::Dnd,  ::efl::ui::Factory_Bind,  ::efl::ui::I18n,  ::efl::ui::Item_Clickable,  ::efl::ui::L10n,  ::efl::ui::Layout_Base,  ::efl::ui::Layout_Orientable,  ::efl::ui::Multi_Selectable,  ::efl::ui::Multi_Selectable_Object_Range,  ::efl::ui::Property_Bind,  ::efl::ui::Scrollable,  ::efl::ui::Scrollbar,  ::efl::ui::Selection,  ::efl::ui::Single_Selectable,  ::efl::ui::View,  ::efl::ui::Widget,  ::efl::ui::Widget_Focus_Manager,  ::efl::ui::focus::Manager,  ::efl::ui::focus::Manager_Sub,  ::efl::ui::focus::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Grid const ,  ::efl::Container const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::Pack const ,  ::efl::Pack_Linear const ,  ::efl::Part const ,  ::efl::access::Component const ,  ::efl::access::Object const ,  ::efl::canvas::Group const ,  ::efl::canvas::Object const ,  ::efl::canvas::Object_Animation const ,  ::efl::canvas::Pointer const ,  ::efl::gfx::Color const ,  ::efl::gfx::Entity const ,  ::efl::gfx::Filter const ,  ::efl::gfx::Hint const ,  ::efl::gfx::Mapping const ,  ::efl::gfx::Stack const ,  ::efl::input::Interface const ,  ::efl::layout::Calc const ,  ::efl::layout::Group const ,  ::efl::layout::Signal const ,  ::efl::ui::Collection const ,  ::efl::ui::Dnd const ,  ::efl::ui::Factory_Bind const ,  ::efl::ui::I18n const ,  ::efl::ui::Item_Clickable const ,  ::efl::ui::L10n const ,  ::efl::ui::Layout_Base const ,  ::efl::ui::Layout_Orientable const ,  ::efl::ui::Multi_Selectable const ,  ::efl::ui::Multi_Selectable_Object_Range const ,  ::efl::ui::Property_Bind const ,  ::efl::ui::Scrollable const ,  ::efl::ui::Scrollbar const ,  ::efl::ui::Selection const ,  ::efl::ui::Single_Selectable const ,  ::efl::ui::View const ,  ::efl::ui::Widget const ,  ::efl::ui::Widget_Focus_Manager const ,  ::efl::ui::focus::Manager const ,  ::efl::ui::focus::Manager_Sub const ,  ::efl::ui::focus::Object const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Grid : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Container)
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::Pack)
    , EO_CXX_INHERIT(::efl::Pack_Linear)
    , EO_CXX_INHERIT(::efl::Part)
    , EO_CXX_INHERIT(::efl::access::Component)
    , EO_CXX_INHERIT(::efl::access::Object)
    , EO_CXX_INHERIT(::efl::canvas::Group)
    , EO_CXX_INHERIT(::efl::canvas::Object)
    , EO_CXX_INHERIT(::efl::canvas::Object_Animation)
    , EO_CXX_INHERIT(::efl::canvas::Pointer)
    , EO_CXX_INHERIT(::efl::gfx::Color)
    , EO_CXX_INHERIT(::efl::gfx::Entity)
    , EO_CXX_INHERIT(::efl::gfx::Filter)
    , EO_CXX_INHERIT(::efl::gfx::Hint)
    , EO_CXX_INHERIT(::efl::gfx::Mapping)
    , EO_CXX_INHERIT(::efl::gfx::Stack)
    , EO_CXX_INHERIT(::efl::input::Interface)
    , EO_CXX_INHERIT(::efl::layout::Calc)
    , EO_CXX_INHERIT(::efl::layout::Group)
    , EO_CXX_INHERIT(::efl::layout::Signal)
    , EO_CXX_INHERIT(::efl::ui::Collection)
    , EO_CXX_INHERIT(::efl::ui::Dnd)
    , EO_CXX_INHERIT(::efl::ui::Factory_Bind)
    , EO_CXX_INHERIT(::efl::ui::I18n)
    , EO_CXX_INHERIT(::efl::ui::Item_Clickable)
    , EO_CXX_INHERIT(::efl::ui::L10n)
    , EO_CXX_INHERIT(::efl::ui::Layout_Base)
    , EO_CXX_INHERIT(::efl::ui::Layout_Orientable)
    , EO_CXX_INHERIT(::efl::ui::Multi_Selectable)
    , EO_CXX_INHERIT(::efl::ui::Multi_Selectable_Object_Range)
    , EO_CXX_INHERIT(::efl::ui::Property_Bind)
    , EO_CXX_INHERIT(::efl::ui::Scrollable)
    , EO_CXX_INHERIT(::efl::ui::Scrollbar)
    , EO_CXX_INHERIT(::efl::ui::Selection)
    , EO_CXX_INHERIT(::efl::ui::Single_Selectable)
    , EO_CXX_INHERIT(::efl::ui::View)
    , EO_CXX_INHERIT(::efl::ui::Widget)
    , EO_CXX_INHERIT(::efl::ui::Widget_Focus_Manager)
    , EO_CXX_INHERIT(::efl::ui::focus::Manager)
    , EO_CXX_INHERIT(::efl::ui::focus::Manager_Sub)
    , EO_CXX_INHERIT(::efl::ui::focus::Object)
{
    explicit Grid( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Grid(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Grid() = default;
    Grid(Grid const&) = default;
    Grid(Grid&&) = default;
    Grid& operator=(Grid const&) = default;
    Grid& operator=(Grid&&) = default;
    template <typename Derived>
    Grid(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Grid, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Grid( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Grid( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Grid( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Grid >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Grid(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Grid >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_UI_GRID_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Grid *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Grid,  ::efl::Container,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::Pack,  ::efl::Pack_Linear,  ::efl::Part,  ::efl::access::Component,  ::efl::access::Object,  ::efl::canvas::Group,  ::efl::canvas::Object,  ::efl::canvas::Object_Animation,  ::efl::canvas::Pointer,  ::efl::gfx::Color,  ::efl::gfx::Entity,  ::efl::gfx::Filter,  ::efl::gfx::Hint,  ::efl::gfx::Mapping,  ::efl::gfx::Stack,  ::efl::input::Interface,  ::efl::layout::Calc,  ::efl::layout::Group,  ::efl::layout::Signal,  ::efl::ui::Collection,  ::efl::ui::Dnd,  ::efl::ui::Factory_Bind,  ::efl::ui::I18n,  ::efl::ui::Item_Clickable,  ::efl::ui::L10n,  ::efl::ui::Layout_Base,  ::efl::ui::Layout_Orientable,  ::efl::ui::Multi_Selectable,  ::efl::ui::Multi_Selectable_Object_Range,  ::efl::ui::Property_Bind,  ::efl::ui::Scrollable,  ::efl::ui::Scrollbar,  ::efl::ui::Selection,  ::efl::ui::Single_Selectable,  ::efl::ui::View,  ::efl::ui::Widget,  ::efl::ui::Widget_Focus_Manager,  ::efl::ui::focus::Manager,  ::efl::ui::focus::Manager_Sub,  ::efl::ui::focus::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Grid const ,  ::efl::Container const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::Pack const ,  ::efl::Pack_Linear const ,  ::efl::Part const ,  ::efl::access::Component const ,  ::efl::access::Object const ,  ::efl::canvas::Group const ,  ::efl::canvas::Object const ,  ::efl::canvas::Object_Animation const ,  ::efl::canvas::Pointer const ,  ::efl::gfx::Color const ,  ::efl::gfx::Entity const ,  ::efl::gfx::Filter const ,  ::efl::gfx::Hint const ,  ::efl::gfx::Mapping const ,  ::efl::gfx::Stack const ,  ::efl::input::Interface const ,  ::efl::layout::Calc const ,  ::efl::layout::Group const ,  ::efl::layout::Signal const ,  ::efl::ui::Collection const ,  ::efl::ui::Dnd const ,  ::efl::ui::Factory_Bind const ,  ::efl::ui::I18n const ,  ::efl::ui::Item_Clickable const ,  ::efl::ui::L10n const ,  ::efl::ui::Layout_Base const ,  ::efl::ui::Layout_Orientable const ,  ::efl::ui::Multi_Selectable const ,  ::efl::ui::Multi_Selectable_Object_Range const ,  ::efl::ui::Property_Bind const ,  ::efl::ui::Scrollable const ,  ::efl::ui::Scrollbar const ,  ::efl::ui::Selection const ,  ::efl::ui::Single_Selectable const ,  ::efl::ui::View const ,  ::efl::ui::Widget const ,  ::efl::ui::Widget_Focus_Manager const ,  ::efl::ui::focus::Manager const ,  ::efl::ui::focus::Manager_Sub const ,  ::efl::ui::focus::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Grid> _get_wref() const { return ::efl::eo::wref<Grid>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Grid* operator->() const { return this; }
    Grid* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Grid const& lhs, Grid const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Grid const& lhs, Grid const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Grid) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Grid>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
