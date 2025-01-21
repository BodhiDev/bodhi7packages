#ifndef EFL_UI_WIN_EO_HH
#define EFL_UI_WIN_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_access_action.eo.h"
#include "efl_access_component.eo.h"
#include "efl_access_object.eo.h"
#include "efl_access_widget_action.eo.h"
#include "efl_access_window.eo.h"
#include "efl_canvas_animation.eo.h"
#include "efl_canvas_group.eo.h"
#include "efl_canvas_object.eo.h"
#include "efl_canvas_object_animation.eo.h"
#include "efl_canvas_pointer.eo.h"
#include "efl_canvas_scene.eo.h"
#include "efl_class.eo.h"
#include "efl_config.eo.h"
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
#include "efl_input_state.eo.h"
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_model.eo.h"
#include "efl_object.eo.h"
#include "efl_part.eo.h"
#include "efl_screen.eo.h"
#include "efl_text.eo.h"
#include "efl_ui_dnd.eo.h"
#include "efl_ui_focus_manager.eo.h"
#include "efl_ui_focus_manager_window_root.eo.h"
#include "efl_ui_focus_object.eo.h"
#include "efl_ui_i18n.eo.h"
#include "efl_ui_l10n.eo.h"
#include "efl_ui_property_bind.eo.h"
#include "efl_ui_selection.eo.h"
#include "efl_ui_view.eo.h"
#include "efl_ui_widget.eo.h"
#include "efl_ui_widget_focus_manager.eo.h"
#include "efl_ui_win.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_access_action.eo.hh"
#include "efl_access_component.eo.hh"
#include "efl_access_object.eo.hh"
#include "efl_access_widget_action.eo.hh"
#include "efl_access_window.eo.hh"
#include "efl_canvas_animation.eo.hh"
#include "efl_canvas_group.eo.hh"
#include "efl_canvas_object.eo.hh"
#include "efl_canvas_object_animation.eo.hh"
#include "efl_canvas_pointer.eo.hh"
#include "efl_canvas_scene.eo.hh"
#include "efl_class.eo.hh"
#include "efl_config.eo.hh"
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
#include "efl_input_state.eo.hh"
#include "efl_loop.eo.hh"
#include "efl_loop_consumer.eo.hh"
#include "efl_model.eo.hh"
#include "efl_object.eo.hh"
#include "efl_part.eo.hh"
#include "efl_screen.eo.hh"
#include "efl_text.eo.hh"
#include "efl_ui_dnd.eo.hh"
#include "efl_ui_focus_manager.eo.hh"
#include "efl_ui_focus_manager_window_root.eo.hh"
#include "efl_ui_focus_object.eo.hh"
#include "efl_ui_i18n.eo.hh"
#include "efl_ui_l10n.eo.hh"
#include "efl_ui_property_bind.eo.hh"
#include "efl_ui_selection.eo.hh"
#include "efl_ui_view.eo.hh"
#include "efl_ui_widget.eo.hh"
#include "efl_ui_widget_focus_manager.eo.hh"
#ifndef EFL_UI_WIN_FWD_GUARD
#define EFL_UI_WIN_FWD_GUARD
namespace efl { namespace ui { 
struct Win;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Win> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Win&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Win const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Win const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_ACCESS_ACTION_FWD_GUARD
#define EFL_ACCESS_ACTION_FWD_GUARD
namespace efl { namespace access { 
struct Action;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Action> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Action&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Action const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Action const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_ACCESS_WIDGET_ACTION_FWD_GUARD
#define EFL_ACCESS_WIDGET_ACTION_FWD_GUARD
namespace efl { namespace access { namespace widget { 
struct Action;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::widget::Action> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::widget::Action&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::widget::Action const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::widget::Action const&> : ::std::true_type {}; } }
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
#ifndef EFL_CONFIG_FWD_GUARD
#define EFL_CONFIG_FWD_GUARD
namespace efl { 
struct Config;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Config> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Config&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Config const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Config const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_FOCUS_MANAGER_WINDOW_ROOT_FWD_GUARD
#define EFL_UI_FOCUS_MANAGER_WINDOW_ROOT_FWD_GUARD
namespace efl { namespace ui { namespace focus { 
struct Manager_Window_Root;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Window_Root> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Window_Root&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Window_Root const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::focus::Manager_Window_Root const&> : ::std::true_type {}; } }
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
#ifndef EFL_SCREEN_FWD_GUARD
#define EFL_SCREEN_FWD_GUARD
namespace efl { 
struct Screen;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Screen> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Screen&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Screen const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Screen const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_TEXT_FWD_GUARD
#define EFL_TEXT_FWD_GUARD
namespace efl { 
struct Text;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text const&> : ::std::true_type {}; } }
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
#ifndef EFL_ACCESS_WINDOW_FWD_GUARD
#define EFL_ACCESS_WINDOW_FWD_GUARD
namespace efl { namespace access { 
struct Window;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Window> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Window&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Window const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Window const&> : ::std::true_type {}; } }
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
#ifndef EFL_CANVAS_SCENE_FWD_GUARD
#define EFL_CANVAS_SCENE_FWD_GUARD
namespace efl { namespace canvas { 
struct Scene;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Scene> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Scene&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Scene const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Scene const&> : ::std::true_type {}; } }
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
#ifndef EFL_INPUT_STATE_FWD_GUARD
#define EFL_INPUT_STATE_FWD_GUARD
namespace efl { namespace input { 
struct State;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::State> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::State&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::State const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::State const&> : ::std::true_type {}; } }
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
struct Win {
    ::efl::eolian::return_traits<Efl_Ui_Win_Indicator_Mode>::type indicator_mode_get() const;
    ::efl::eolian::return_traits<void>::type indicator_mode_set( ::efl::eolian::in_traits<Efl_Ui_Win_Indicator_Mode>::type type) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Ui_Win_Keyboard_Mode>::type keyboard_mode_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type keyboard_mode_set( ::efl::eolian::in_traits<Efl_Ui_Win_Keyboard_Mode>::type mode) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type wm_available_rotations_get( ::efl::eolian::out_traits<bool>::type allow_0,  ::efl::eolian::out_traits<bool>::type allow_90,  ::efl::eolian::out_traits<bool>::type allow_180,  ::efl::eolian::out_traits<bool>::type allow_270) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type wm_available_rotations_set( ::efl::eolian::in_traits<bool>::type allow_0,  ::efl::eolian::in_traits<bool>::type allow_90,  ::efl::eolian::in_traits<bool>::type allow_180,  ::efl::eolian::in_traits<bool>::type allow_270) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type wm_available_profiles_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type wm_available_profiles_set( ::efl::eolian::in_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type profiles) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type screen_constrain_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type screen_constrain_set( ::efl::eolian::in_traits<bool>::type constrain) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type prop_focus_skip_set( ::efl::eolian::in_traits<bool>::type skip) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type autohide_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type autohide_set( ::efl::eolian::in_traits<bool>::type autohide) const;
#endif
    ::efl::eolian::return_traits< ::efl::eina::value_view const>::type exit_on_close_get() const;
    ::efl::eolian::return_traits<void>::type exit_on_close_set( ::efl::eolian::in_traits< ::efl::eina::value_view const>::type exit_code) const;
    ::efl::eolian::return_traits< ::efl::canvas::Object>::type icon_object_get() const;
    ::efl::eolian::return_traits<void>::type icon_object_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type icon) const;
    ::efl::eolian::return_traits<bool>::type minimized_get() const;
    ::efl::eolian::return_traits<void>::type minimized_set( ::efl::eolian::in_traits<bool>::type state) const;
    ::efl::eolian::return_traits<bool>::type maximized_get() const;
    ::efl::eolian::return_traits<void>::type maximized_set( ::efl::eolian::in_traits<bool>::type maximized) const;
    ::efl::eolian::return_traits<bool>::type fullscreen_get() const;
    ::efl::eolian::return_traits<void>::type fullscreen_set( ::efl::eolian::in_traits<bool>::type fullscreen) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type sticky_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type sticky_set( ::efl::eolian::in_traits<bool>::type sticky) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Ui_Win_Urgent_Mode>::type urgent_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type urgent_set( ::efl::eolian::in_traits<Efl_Ui_Win_Urgent_Mode>::type urgent) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Ui_Win_Modal_Mode>::type modal_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type modal_set( ::efl::eolian::in_traits<Efl_Ui_Win_Modal_Mode>::type modal) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type borderless_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type borderless_set( ::efl::eolian::in_traits<bool>::type borderless) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type win_role_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type win_role_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type role) const;
#endif
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type win_name_get() const;
    ::efl::eolian::return_traits<void>::type win_name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Ui_Win_Type>::type win_type_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type win_type_set( ::efl::eolian::in_traits<Efl_Ui_Win_Type>::type type) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type accel_preference_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type accel_preference_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type accel) const;
#endif
    ::efl::eolian::return_traits<bool>::type alpha_get() const;
    ::efl::eolian::return_traits<void>::type alpha_set( ::efl::eolian::in_traits<bool>::type alpha) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type stack_id_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type stack_master_id_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stack_master_id_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type id) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type stack_base_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stack_base_set( ::efl::eolian::in_traits<bool>::type base) const;
#endif
    static ::efl::eolian::return_traits< ::efl::eina::value_view const>::type exit_on_all_windows_closed_get();
    static ::efl::eolian::return_traits<void>::type exit_on_all_windows_closed_set( ::efl::eolian::in_traits< ::efl::eina::value_view const>::type exit_code);
    ::efl::eolian::return_traits<Eina_Size2D>::type hint_base_get() const;
    ::efl::eolian::return_traits<void>::type hint_base_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const;
    ::efl::eolian::return_traits<Eina_Size2D>::type hint_step_get() const;
    ::efl::eolian::return_traits<void>::type hint_step_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type win_rotation_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type win_rotation_set( ::efl::eolian::in_traits<int>::type rotation) const;
#endif
    ::efl::eolian::return_traits<bool>::type focus_highlight_enabled_get() const;
    ::efl::eolian::return_traits<void>::type focus_highlight_enabled_set( ::efl::eolian::in_traits<bool>::type enabled) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type focus_highlight_style_get() const;
    ::efl::eolian::return_traits<bool>::type focus_highlight_style_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type style) const;
    ::efl::eolian::return_traits<bool>::type focus_highlight_animate_get() const;
    ::efl::eolian::return_traits<void>::type focus_highlight_animate_set( ::efl::eolian::in_traits<bool>::type animate) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stack_pop_to() const;
#endif
    ::efl::eolian::return_traits<void>::type activate() const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type center( ::efl::eolian::in_traits<bool>::type h,  ::efl::eolian::in_traits<bool>::type v) const;
#endif
    ::efl::eolian::return_traits<bool>::type move_resize_start( ::efl::eolian::in_traits<Efl_Ui_Win_Move_Resize_Mode>::type mode) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::input::Pointer>>::type pointer_iterate( ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type hover) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_WIN_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Win *>(this))); }
    operator ::efl::ui::Win() const;
    operator ::efl::ui::Win&();
    operator ::efl::ui::Win const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Win,  ::efl::Config,  ::efl::Content,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::Part,  ::efl::Screen,  ::efl::Text,  ::efl::access::Action,  ::efl::access::Component,  ::efl::access::Object,  ::efl::access::Window,  ::efl::access::widget::Action,  ::efl::canvas::Group,  ::efl::canvas::Object,  ::efl::canvas::Object_Animation,  ::efl::canvas::Pointer,  ::efl::canvas::Scene,  ::efl::gfx::Color,  ::efl::gfx::Entity,  ::efl::gfx::Filter,  ::efl::gfx::Hint,  ::efl::gfx::Mapping,  ::efl::gfx::Stack,  ::efl::input::Interface,  ::efl::input::State,  ::efl::ui::Dnd,  ::efl::ui::I18n,  ::efl::ui::L10n,  ::efl::ui::Property_Bind,  ::efl::ui::Selection,  ::efl::ui::View,  ::efl::ui::Widget,  ::efl::ui::Widget_Focus_Manager,  ::efl::ui::focus::Manager,  ::efl::ui::focus::Manager_Window_Root,  ::efl::ui::focus::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Win const ,  ::efl::Config const ,  ::efl::Content const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::Part const ,  ::efl::Screen const ,  ::efl::Text const ,  ::efl::access::Action const ,  ::efl::access::Component const ,  ::efl::access::Object const ,  ::efl::access::Window const ,  ::efl::access::widget::Action const ,  ::efl::canvas::Group const ,  ::efl::canvas::Object const ,  ::efl::canvas::Object_Animation const ,  ::efl::canvas::Pointer const ,  ::efl::canvas::Scene const ,  ::efl::gfx::Color const ,  ::efl::gfx::Entity const ,  ::efl::gfx::Filter const ,  ::efl::gfx::Hint const ,  ::efl::gfx::Mapping const ,  ::efl::gfx::Stack const ,  ::efl::input::Interface const ,  ::efl::input::State const ,  ::efl::ui::Dnd const ,  ::efl::ui::I18n const ,  ::efl::ui::L10n const ,  ::efl::ui::Property_Bind const ,  ::efl::ui::Selection const ,  ::efl::ui::View const ,  ::efl::ui::Widget const ,  ::efl::ui::Widget_Focus_Manager const ,  ::efl::ui::focus::Manager const ,  ::efl::ui::focus::Manager_Window_Root const ,  ::efl::ui::focus::Object const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Win : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Config)
    , EO_CXX_INHERIT(::efl::Content)
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::Part)
    , EO_CXX_INHERIT(::efl::Screen)
    , EO_CXX_INHERIT(::efl::Text)
    , EO_CXX_INHERIT(::efl::access::Action)
    , EO_CXX_INHERIT(::efl::access::Component)
    , EO_CXX_INHERIT(::efl::access::Object)
    , EO_CXX_INHERIT(::efl::access::Window)
    , EO_CXX_INHERIT(::efl::access::widget::Action)
    , EO_CXX_INHERIT(::efl::canvas::Group)
    , EO_CXX_INHERIT(::efl::canvas::Object)
    , EO_CXX_INHERIT(::efl::canvas::Object_Animation)
    , EO_CXX_INHERIT(::efl::canvas::Pointer)
    , EO_CXX_INHERIT(::efl::canvas::Scene)
    , EO_CXX_INHERIT(::efl::gfx::Color)
    , EO_CXX_INHERIT(::efl::gfx::Entity)
    , EO_CXX_INHERIT(::efl::gfx::Filter)
    , EO_CXX_INHERIT(::efl::gfx::Hint)
    , EO_CXX_INHERIT(::efl::gfx::Mapping)
    , EO_CXX_INHERIT(::efl::gfx::Stack)
    , EO_CXX_INHERIT(::efl::input::Interface)
    , EO_CXX_INHERIT(::efl::input::State)
    , EO_CXX_INHERIT(::efl::ui::Dnd)
    , EO_CXX_INHERIT(::efl::ui::I18n)
    , EO_CXX_INHERIT(::efl::ui::L10n)
    , EO_CXX_INHERIT(::efl::ui::Property_Bind)
    , EO_CXX_INHERIT(::efl::ui::Selection)
    , EO_CXX_INHERIT(::efl::ui::View)
    , EO_CXX_INHERIT(::efl::ui::Widget)
    , EO_CXX_INHERIT(::efl::ui::Widget_Focus_Manager)
    , EO_CXX_INHERIT(::efl::ui::focus::Manager)
    , EO_CXX_INHERIT(::efl::ui::focus::Manager_Window_Root)
    , EO_CXX_INHERIT(::efl::ui::focus::Object)
{
    explicit Win( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Win(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Win() = default;
    Win(Win const&) = default;
    Win(Win&&) = default;
    Win& operator=(Win const&) = default;
    Win& operator=(Win&&) = default;
    template <typename Derived>
    Win(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Win, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Win( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Win( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Win( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Win >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Win(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Win >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    ::efl::eolian::return_traits<Efl_Ui_Win_Indicator_Mode>::type indicator_mode_get() const;
    ::efl::eolian::return_traits<void>::type indicator_mode_set( ::efl::eolian::in_traits<Efl_Ui_Win_Indicator_Mode>::type type) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Ui_Win_Keyboard_Mode>::type keyboard_mode_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type keyboard_mode_set( ::efl::eolian::in_traits<Efl_Ui_Win_Keyboard_Mode>::type mode) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type wm_available_rotations_get( ::efl::eolian::out_traits<bool>::type allow_0,  ::efl::eolian::out_traits<bool>::type allow_90,  ::efl::eolian::out_traits<bool>::type allow_180,  ::efl::eolian::out_traits<bool>::type allow_270) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type wm_available_rotations_set( ::efl::eolian::in_traits<bool>::type allow_0,  ::efl::eolian::in_traits<bool>::type allow_90,  ::efl::eolian::in_traits<bool>::type allow_180,  ::efl::eolian::in_traits<bool>::type allow_270) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type wm_available_profiles_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type wm_available_profiles_set( ::efl::eolian::in_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type profiles) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type screen_constrain_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type screen_constrain_set( ::efl::eolian::in_traits<bool>::type constrain) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type prop_focus_skip_set( ::efl::eolian::in_traits<bool>::type skip) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type autohide_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type autohide_set( ::efl::eolian::in_traits<bool>::type autohide) const;
#endif
    ::efl::eolian::return_traits< ::efl::eina::value_view const>::type exit_on_close_get() const;
    ::efl::eolian::return_traits<void>::type exit_on_close_set( ::efl::eolian::in_traits< ::efl::eina::value_view const>::type exit_code) const;
    ::efl::eolian::return_traits< ::efl::canvas::Object>::type icon_object_get() const;
    ::efl::eolian::return_traits<void>::type icon_object_set( ::efl::eolian::in_traits< ::efl::canvas::Object>::type icon) const;
    ::efl::eolian::return_traits<bool>::type minimized_get() const;
    ::efl::eolian::return_traits<void>::type minimized_set( ::efl::eolian::in_traits<bool>::type state) const;
    ::efl::eolian::return_traits<bool>::type maximized_get() const;
    ::efl::eolian::return_traits<void>::type maximized_set( ::efl::eolian::in_traits<bool>::type maximized) const;
    ::efl::eolian::return_traits<bool>::type fullscreen_get() const;
    ::efl::eolian::return_traits<void>::type fullscreen_set( ::efl::eolian::in_traits<bool>::type fullscreen) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type sticky_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type sticky_set( ::efl::eolian::in_traits<bool>::type sticky) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Ui_Win_Urgent_Mode>::type urgent_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type urgent_set( ::efl::eolian::in_traits<Efl_Ui_Win_Urgent_Mode>::type urgent) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Ui_Win_Modal_Mode>::type modal_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type modal_set( ::efl::eolian::in_traits<Efl_Ui_Win_Modal_Mode>::type modal) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type borderless_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type borderless_set( ::efl::eolian::in_traits<bool>::type borderless) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type win_role_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type win_role_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type role) const;
#endif
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type win_name_get() const;
    ::efl::eolian::return_traits<void>::type win_name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Ui_Win_Type>::type win_type_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type win_type_set( ::efl::eolian::in_traits<Efl_Ui_Win_Type>::type type) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type accel_preference_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type accel_preference_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type accel) const;
#endif
    ::efl::eolian::return_traits<bool>::type alpha_get() const;
    ::efl::eolian::return_traits<void>::type alpha_set( ::efl::eolian::in_traits<bool>::type alpha) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type stack_id_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type stack_master_id_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stack_master_id_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type id) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type stack_base_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stack_base_set( ::efl::eolian::in_traits<bool>::type base) const;
#endif
    static ::efl::eolian::return_traits< ::efl::eina::value_view const>::type exit_on_all_windows_closed_get();
    static ::efl::eolian::return_traits<void>::type exit_on_all_windows_closed_set( ::efl::eolian::in_traits< ::efl::eina::value_view const>::type exit_code);
    ::efl::eolian::return_traits<Eina_Size2D>::type hint_base_get() const;
    ::efl::eolian::return_traits<void>::type hint_base_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const;
    ::efl::eolian::return_traits<Eina_Size2D>::type hint_step_get() const;
    ::efl::eolian::return_traits<void>::type hint_step_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type win_rotation_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type win_rotation_set( ::efl::eolian::in_traits<int>::type rotation) const;
#endif
    ::efl::eolian::return_traits<bool>::type focus_highlight_enabled_get() const;
    ::efl::eolian::return_traits<void>::type focus_highlight_enabled_set( ::efl::eolian::in_traits<bool>::type enabled) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type focus_highlight_style_get() const;
    ::efl::eolian::return_traits<bool>::type focus_highlight_style_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type style) const;
    ::efl::eolian::return_traits<bool>::type focus_highlight_animate_get() const;
    ::efl::eolian::return_traits<void>::type focus_highlight_animate_set( ::efl::eolian::in_traits<bool>::type animate) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stack_pop_to() const;
#endif
    ::efl::eolian::return_traits<void>::type activate() const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type center( ::efl::eolian::in_traits<bool>::type h,  ::efl::eolian::in_traits<bool>::type v) const;
#endif
    ::efl::eolian::return_traits<bool>::type move_resize_start( ::efl::eolian::in_traits<Efl_Ui_Win_Move_Resize_Mode>::type mode) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::input::Pointer>>::type pointer_iterate( ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type hover) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_WIN_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Win *>(this))); }
    static struct delete_request_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_WIN_EVENT_DELETE_REQUEST; }
        typedef void parameter_type;
    } const delete_request_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    delete_request_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(delete_request_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    delete_request_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(delete_request_event, *this, std::bind(function));
    }
#endif
#ifdef EFL_UI_WIN_BETA
    static struct withdrawn_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_WIN_EVENT_WITHDRAWN; }
        typedef void parameter_type;
    } const withdrawn_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    withdrawn_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(withdrawn_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    withdrawn_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(withdrawn_event, *this, std::bind(function));
    }
#endif
#endif
    static struct minimized_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_WIN_EVENT_MINIMIZED; }
        typedef void parameter_type;
    } const minimized_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    minimized_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(minimized_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    minimized_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(minimized_event, *this, std::bind(function));
    }
#endif
    static struct normal_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_WIN_EVENT_NORMAL; }
        typedef void parameter_type;
    } const normal_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    normal_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(normal_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    normal_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(normal_event, *this, std::bind(function));
    }
#endif
#ifdef EFL_UI_WIN_BETA
    static struct stick_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_WIN_EVENT_STICK; }
        typedef void parameter_type;
    } const stick_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    stick_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(stick_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    stick_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(stick_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_UI_WIN_BETA
    static struct unstick_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_WIN_EVENT_UNSTICK; }
        typedef void parameter_type;
    } const unstick_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    unstick_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(unstick_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    unstick_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(unstick_event, *this, std::bind(function));
    }
#endif
#endif
    static struct fullscreen_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_WIN_EVENT_FULLSCREEN_CHANGED; }
        typedef bool parameter_type;
    } const fullscreen_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    fullscreen_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(fullscreen_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    fullscreen_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(fullscreen_changed_event, *this, std::bind(function));
    }
#endif
    static struct maximized_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_WIN_EVENT_MAXIMIZED_CHANGED; }
        typedef bool parameter_type;
    } const maximized_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    maximized_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(maximized_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    maximized_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(maximized_changed_event, *this, std::bind(function));
    }
#endif
#ifdef EFL_UI_WIN_BETA
    static struct indicator_prop_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_WIN_EVENT_INDICATOR_PROP_CHANGED; }
        typedef void parameter_type;
    } const indicator_prop_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    indicator_prop_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(indicator_prop_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    indicator_prop_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(indicator_prop_changed_event, *this, std::bind(function));
    }
#endif
#endif
    static struct win_rotation_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_WIN_EVENT_WIN_ROTATION_CHANGED; }
        typedef int parameter_type;
    } const win_rotation_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    win_rotation_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(win_rotation_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    win_rotation_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(win_rotation_changed_event, *this, std::bind(function));
    }
#endif
#ifdef EFL_UI_WIN_BETA
    static struct profile_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_WIN_EVENT_PROFILE_CHANGED; }
        typedef void parameter_type;
    } const profile_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    profile_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(profile_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    profile_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(profile_changed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_UI_WIN_BETA
    static struct wm_rotation_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_WIN_EVENT_WM_ROTATION_CHANGED; }
        typedef void parameter_type;
    } const wm_rotation_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    wm_rotation_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(wm_rotation_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    wm_rotation_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(wm_rotation_changed_event, *this, std::bind(function));
    }
#endif
#endif
    static struct theme_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_WIN_EVENT_THEME_CHANGED; }
        typedef void parameter_type;
    } const theme_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    theme_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(theme_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    theme_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(theme_changed_event, *this, std::bind(function));
    }
#endif
#ifdef EFL_UI_WIN_BETA
    static struct elm_action_block_menu_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_WIN_EVENT_ELM_ACTION_BLOCK_MENU; }
        typedef void parameter_type;
    } const elm_action_block_menu_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    elm_action_block_menu_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(elm_action_block_menu_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    elm_action_block_menu_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(elm_action_block_menu_event, *this, std::bind(function));
    }
#endif
#endif
    static struct pause_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_WIN_EVENT_PAUSE; }
        typedef void parameter_type;
    } const pause_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pause_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pause_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    pause_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(pause_event, *this, std::bind(function));
    }
#endif
    static struct resume_event
    {
        static Efl_Event_Description const* description()
        { return EFL_UI_WIN_EVENT_RESUME; }
        typedef void parameter_type;
    } const resume_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    resume_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(resume_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    resume_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(resume_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Win,  ::efl::Config,  ::efl::Content,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::Part,  ::efl::Screen,  ::efl::Text,  ::efl::access::Action,  ::efl::access::Component,  ::efl::access::Object,  ::efl::access::Window,  ::efl::access::widget::Action,  ::efl::canvas::Group,  ::efl::canvas::Object,  ::efl::canvas::Object_Animation,  ::efl::canvas::Pointer,  ::efl::canvas::Scene,  ::efl::gfx::Color,  ::efl::gfx::Entity,  ::efl::gfx::Filter,  ::efl::gfx::Hint,  ::efl::gfx::Mapping,  ::efl::gfx::Stack,  ::efl::input::Interface,  ::efl::input::State,  ::efl::ui::Dnd,  ::efl::ui::I18n,  ::efl::ui::L10n,  ::efl::ui::Property_Bind,  ::efl::ui::Selection,  ::efl::ui::View,  ::efl::ui::Widget,  ::efl::ui::Widget_Focus_Manager,  ::efl::ui::focus::Manager,  ::efl::ui::focus::Manager_Window_Root,  ::efl::ui::focus::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Win const ,  ::efl::Config const ,  ::efl::Content const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::Part const ,  ::efl::Screen const ,  ::efl::Text const ,  ::efl::access::Action const ,  ::efl::access::Component const ,  ::efl::access::Object const ,  ::efl::access::Window const ,  ::efl::access::widget::Action const ,  ::efl::canvas::Group const ,  ::efl::canvas::Object const ,  ::efl::canvas::Object_Animation const ,  ::efl::canvas::Pointer const ,  ::efl::canvas::Scene const ,  ::efl::gfx::Color const ,  ::efl::gfx::Entity const ,  ::efl::gfx::Filter const ,  ::efl::gfx::Hint const ,  ::efl::gfx::Mapping const ,  ::efl::gfx::Stack const ,  ::efl::input::Interface const ,  ::efl::input::State const ,  ::efl::ui::Dnd const ,  ::efl::ui::I18n const ,  ::efl::ui::L10n const ,  ::efl::ui::Property_Bind const ,  ::efl::ui::Selection const ,  ::efl::ui::View const ,  ::efl::ui::Widget const ,  ::efl::ui::Widget_Focus_Manager const ,  ::efl::ui::focus::Manager const ,  ::efl::ui::focus::Manager_Window_Root const ,  ::efl::ui::focus::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Win> _get_wref() const { return ::efl::eo::wref<Win>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Win* operator->() const { return this; }
    Win* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Win const& lhs, Win const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Win const& lhs, Win const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Win) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Win>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
