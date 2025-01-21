#ifndef EFL_CANVAS_TEXTBLOCK_EO_HH
#define EFL_CANVAS_TEXTBLOCK_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_animation.eo.h"
#include "efl_canvas_filter_internal.eo.h"
#include "efl_canvas_object.eo.h"
#include "efl_canvas_object_animation.eo.h"
#include "efl_canvas_pointer.eo.h"
#include "efl_canvas_textblock.eo.h"
#include "efl_class.eo.h"
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
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_object.eo.h"
#include "efl_text.eo.h"
#include "efl_text_cursor_object.eo.h"
#include "efl_text_font_properties.eo.h"
#include "efl_text_format.eo.h"
#include "efl_text_markup.eo.h"
#include "efl_text_style.eo.h"
#include "efl_ui_i18n.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_animation.eo.hh"
#include "efl_canvas_filter_internal.eo.hh"
#include "efl_canvas_object.eo.hh"
#include "efl_canvas_object_animation.eo.hh"
#include "efl_canvas_pointer.eo.hh"
#include "efl_class.eo.hh"
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
#include "efl_loop.eo.hh"
#include "efl_loop_consumer.eo.hh"
#include "efl_object.eo.hh"
#include "efl_text.eo.hh"
#include "efl_text_cursor_object.eo.hh"
#include "efl_text_font_properties.eo.hh"
#include "efl_text_format.eo.hh"
#include "efl_text_markup.eo.hh"
#include "efl_text_style.eo.hh"
#include "efl_ui_i18n.eo.hh"
#ifndef EFL_CANVAS_TEXTBLOCK_FWD_GUARD
#define EFL_CANVAS_TEXTBLOCK_FWD_GUARD
namespace efl { namespace canvas { 
struct Textblock;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Textblock> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Textblock&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Textblock const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Textblock const&> : ::std::true_type {}; } }
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
#ifndef EFL_CANVAS_FILTER_INTERNAL_FWD_GUARD
#define EFL_CANVAS_FILTER_INTERNAL_FWD_GUARD
namespace efl { namespace canvas { namespace filter { 
struct Internal;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::filter::Internal> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::filter::Internal&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::filter::Internal const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::filter::Internal const&> : ::std::true_type {}; } }
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
#ifndef EFL_TEXT_CURSOR_OBJECT_FWD_GUARD
#define EFL_TEXT_CURSOR_OBJECT_FWD_GUARD
namespace efl { namespace text_cursor { 
struct Object;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::text_cursor::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::text_cursor::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::text_cursor::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::text_cursor::Object const&> : ::std::true_type {}; } }
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
#ifndef EFL_TEXT_FONT_PROPERTIES_FWD_GUARD
#define EFL_TEXT_FONT_PROPERTIES_FWD_GUARD
namespace efl { 
struct Text_Font_Properties;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Font_Properties> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Font_Properties&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Font_Properties const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Font_Properties const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_TEXT_FORMAT_FWD_GUARD
#define EFL_TEXT_FORMAT_FWD_GUARD
namespace efl { 
struct Text_Format;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Format> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Format&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Format const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Format const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_TEXT_MARKUP_FWD_GUARD
#define EFL_TEXT_MARKUP_FWD_GUARD
namespace efl { 
struct Text_Markup;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Markup> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Markup&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Markup const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Markup const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_TEXT_STYLE_FWD_GUARD
#define EFL_TEXT_STYLE_FWD_GUARD
namespace efl { 
struct Text_Style;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Style> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Style&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Style const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Style const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { 
struct Textblock {
    ::efl::eolian::return_traits<bool>::type is_empty_get() const;
    ::efl::eolian::return_traits<void>::type style_insets_get( ::efl::eolian::out_traits<int>::type l,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type t,  ::efl::eolian::out_traits<int>::type b) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type bidi_delimiters_get() const;
    ::efl::eolian::return_traits<void>::type bidi_delimiters_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type delim) const;
    ::efl::eolian::return_traits<bool>::type newline_as_paragraph_separator_get() const;
    ::efl::eolian::return_traits<void>::type newline_as_paragraph_separator_set( ::efl::eolian::in_traits<bool>::type mode) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type all_styles_get() const;
    ::efl::eolian::return_traits<Eina_Size2D>::type size_formatted_get() const;
    ::efl::eolian::return_traits<Eina_Size2D>::type size_native_get() const;
    ::efl::eolian::return_traits< ::efl::text_cursor::Object>::type cursor_create() const;
    ::efl::eolian::return_traits<bool>::type visible_range_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type end) const;
    ::efl::eolian::return_traits<void>::type style_apply( ::efl::eolian::in_traits< ::efl::eina::string_view>::type style) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type obstacle_add( ::efl::eolian::in_traits< ::efl::canvas::Object>::type eo_obs) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type obstacle_del( ::efl::eolian::in_traits< ::efl::canvas::Object>::type eo_obs) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type obstacles_update() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_TEXTBLOCK_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Textblock *>(this))); }
    operator ::efl::canvas::Textblock() const;
    operator ::efl::canvas::Textblock&();
    operator ::efl::canvas::Textblock const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Textblock,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::Text,  ::efl::Text_Font_Properties,  ::efl::Text_Format,  ::efl::Text_Markup,  ::efl::Text_Style,  ::efl::canvas::Object,  ::efl::canvas::Object_Animation,  ::efl::canvas::Pointer,  ::efl::canvas::filter::Internal,  ::efl::gfx::Color,  ::efl::gfx::Entity,  ::efl::gfx::Filter,  ::efl::gfx::Hint,  ::efl::gfx::Mapping,  ::efl::gfx::Stack,  ::efl::input::Interface,  ::efl::ui::I18n> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Textblock const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::Text const ,  ::efl::Text_Font_Properties const ,  ::efl::Text_Format const ,  ::efl::Text_Markup const ,  ::efl::Text_Style const ,  ::efl::canvas::Object const ,  ::efl::canvas::Object_Animation const ,  ::efl::canvas::Pointer const ,  ::efl::canvas::filter::Internal const ,  ::efl::gfx::Color const ,  ::efl::gfx::Entity const ,  ::efl::gfx::Filter const ,  ::efl::gfx::Hint const ,  ::efl::gfx::Mapping const ,  ::efl::gfx::Stack const ,  ::efl::input::Interface const ,  ::efl::ui::I18n const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Textblock : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::Text)
    , EO_CXX_INHERIT(::efl::Text_Font_Properties)
    , EO_CXX_INHERIT(::efl::Text_Format)
    , EO_CXX_INHERIT(::efl::Text_Markup)
    , EO_CXX_INHERIT(::efl::Text_Style)
    , EO_CXX_INHERIT(::efl::canvas::Object)
    , EO_CXX_INHERIT(::efl::canvas::Object_Animation)
    , EO_CXX_INHERIT(::efl::canvas::Pointer)
    , EO_CXX_INHERIT(::efl::canvas::filter::Internal)
    , EO_CXX_INHERIT(::efl::gfx::Color)
    , EO_CXX_INHERIT(::efl::gfx::Entity)
    , EO_CXX_INHERIT(::efl::gfx::Filter)
    , EO_CXX_INHERIT(::efl::gfx::Hint)
    , EO_CXX_INHERIT(::efl::gfx::Mapping)
    , EO_CXX_INHERIT(::efl::gfx::Stack)
    , EO_CXX_INHERIT(::efl::input::Interface)
    , EO_CXX_INHERIT(::efl::ui::I18n)
{
    explicit Textblock( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Textblock(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Textblock() = default;
    Textblock(Textblock const&) = default;
    Textblock(Textblock&&) = default;
    Textblock& operator=(Textblock const&) = default;
    Textblock& operator=(Textblock&&) = default;
    template <typename Derived>
    Textblock(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Textblock, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Textblock( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Textblock( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Textblock( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Textblock >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Textblock(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Textblock >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    ::efl::eolian::return_traits<bool>::type is_empty_get() const;
    ::efl::eolian::return_traits<void>::type style_insets_get( ::efl::eolian::out_traits<int>::type l,  ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type t,  ::efl::eolian::out_traits<int>::type b) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type bidi_delimiters_get() const;
    ::efl::eolian::return_traits<void>::type bidi_delimiters_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type delim) const;
    ::efl::eolian::return_traits<bool>::type newline_as_paragraph_separator_get() const;
    ::efl::eolian::return_traits<void>::type newline_as_paragraph_separator_set( ::efl::eolian::in_traits<bool>::type mode) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type all_styles_get() const;
    ::efl::eolian::return_traits<Eina_Size2D>::type size_formatted_get() const;
    ::efl::eolian::return_traits<Eina_Size2D>::type size_native_get() const;
    ::efl::eolian::return_traits< ::efl::text_cursor::Object>::type cursor_create() const;
    ::efl::eolian::return_traits<bool>::type visible_range_get( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type end) const;
    ::efl::eolian::return_traits<void>::type style_apply( ::efl::eolian::in_traits< ::efl::eina::string_view>::type style) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type obstacle_add( ::efl::eolian::in_traits< ::efl::canvas::Object>::type eo_obs) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type obstacle_del( ::efl::eolian::in_traits< ::efl::canvas::Object>::type eo_obs) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type obstacles_update() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_TEXTBLOCK_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Textblock *>(this))); }
    static struct changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CANVAS_TEXTBLOCK_EVENT_CHANGED; }
        typedef void parameter_type;
    } const changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(changed_event, *this, std::bind(function));
    }
#endif
    static struct layout_finished_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CANVAS_TEXTBLOCK_EVENT_LAYOUT_FINISHED; }
        typedef void parameter_type;
    } const layout_finished_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    layout_finished_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(layout_finished_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    layout_finished_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(layout_finished_event, *this, std::bind(function));
    }
#endif
    static struct style_insets_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_CANVAS_TEXTBLOCK_EVENT_STYLE_INSETS_CHANGED; }
        typedef void parameter_type;
    } const style_insets_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    style_insets_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(style_insets_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    style_insets_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(style_insets_changed_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Textblock,  ::efl::Loop_Consumer,  ::efl::Object,  ::efl::Text,  ::efl::Text_Font_Properties,  ::efl::Text_Format,  ::efl::Text_Markup,  ::efl::Text_Style,  ::efl::canvas::Object,  ::efl::canvas::Object_Animation,  ::efl::canvas::Pointer,  ::efl::canvas::filter::Internal,  ::efl::gfx::Color,  ::efl::gfx::Entity,  ::efl::gfx::Filter,  ::efl::gfx::Hint,  ::efl::gfx::Mapping,  ::efl::gfx::Stack,  ::efl::input::Interface,  ::efl::ui::I18n> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Textblock const ,  ::efl::Loop_Consumer const ,  ::efl::Object const ,  ::efl::Text const ,  ::efl::Text_Font_Properties const ,  ::efl::Text_Format const ,  ::efl::Text_Markup const ,  ::efl::Text_Style const ,  ::efl::canvas::Object const ,  ::efl::canvas::Object_Animation const ,  ::efl::canvas::Pointer const ,  ::efl::canvas::filter::Internal const ,  ::efl::gfx::Color const ,  ::efl::gfx::Entity const ,  ::efl::gfx::Filter const ,  ::efl::gfx::Hint const ,  ::efl::gfx::Mapping const ,  ::efl::gfx::Stack const ,  ::efl::input::Interface const ,  ::efl::ui::I18n const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Textblock> _get_wref() const { return ::efl::eo::wref<Textblock>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Textblock* operator->() const { return this; }
    Textblock* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Textblock const& lhs, Textblock const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Textblock const& lhs, Textblock const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Textblock) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Textblock>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
