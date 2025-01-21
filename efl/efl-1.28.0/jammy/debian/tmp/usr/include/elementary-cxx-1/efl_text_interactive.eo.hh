#ifndef EFL_TEXT_INTERACTIVE_EO_HH
#define EFL_TEXT_INTERACTIVE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_text.eo.h"
#include "efl_text_cursor_object.eo.h"
#include "efl_text_font_properties.eo.h"
#include "efl_text_format.eo.h"
#include "efl_text_interactive.eo.h"
#include "efl_text_style.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_text.eo.hh"
#include "efl_text_cursor_object.eo.hh"
#include "efl_text_font_properties.eo.hh"
#include "efl_text_format.eo.hh"
#include "efl_text_style.eo.hh"
#ifndef EFL_TEXT_INTERACTIVE_FWD_GUARD
#define EFL_TEXT_INTERACTIVE_FWD_GUARD
namespace efl { 
struct Text_Interactive;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Interactive> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Interactive&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Interactive const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Interactive const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Text_Interactive {
    ::efl::eolian::return_traits< ::efl::text_cursor::Object>::type main_cursor_get() const;
    ::efl::eolian::return_traits<bool>::type selection_allowed_get() const;
    ::efl::eolian::return_traits<void>::type selection_allowed_set( ::efl::eolian::in_traits<bool>::type allowed) const;
    ::efl::eolian::return_traits<void>::type selection_cursors_get( ::efl::eolian::out_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::out_traits< ::efl::text_cursor::Object>::type end) const;
    ::efl::eolian::return_traits<void>::type selection_cursors_set( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type end) const;
    ::efl::eolian::return_traits<bool>::type editable_get() const;
    ::efl::eolian::return_traits<void>::type editable_set( ::efl::eolian::in_traits<bool>::type editable) const;
    ::efl::eolian::return_traits<bool>::type have_selection_get() const;
    ::efl::eolian::return_traits<void>::type all_unselect() const;
    ::efl::eolian::return_traits<void>::type all_select() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_TEXT_INTERACTIVE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text_Interactive *>(this))); }
    operator ::efl::Text_Interactive() const;
    operator ::efl::Text_Interactive&();
    operator ::efl::Text_Interactive const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text_Interactive,  ::efl::Text,  ::efl::Text_Font_Properties,  ::efl::Text_Format,  ::efl::Text_Style> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text_Interactive const ,  ::efl::Text const ,  ::efl::Text_Font_Properties const ,  ::efl::Text_Format const ,  ::efl::Text_Style const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Text_Interactive : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Text)
    , EO_CXX_INHERIT(::efl::Text_Font_Properties)
    , EO_CXX_INHERIT(::efl::Text_Format)
    , EO_CXX_INHERIT(::efl::Text_Style)
{
    explicit Text_Interactive( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Text_Interactive(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Text_Interactive() = default;
    Text_Interactive(Text_Interactive const&) = default;
    Text_Interactive(Text_Interactive&&) = default;
    Text_Interactive& operator=(Text_Interactive const&) = default;
    Text_Interactive& operator=(Text_Interactive&&) = default;
    template <typename Derived>
    Text_Interactive(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Text_Interactive, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits< ::efl::text_cursor::Object>::type main_cursor_get() const;
    ::efl::eolian::return_traits<bool>::type selection_allowed_get() const;
    ::efl::eolian::return_traits<void>::type selection_allowed_set( ::efl::eolian::in_traits<bool>::type allowed) const;
    ::efl::eolian::return_traits<void>::type selection_cursors_get( ::efl::eolian::out_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::out_traits< ::efl::text_cursor::Object>::type end) const;
    ::efl::eolian::return_traits<void>::type selection_cursors_set( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type end) const;
    ::efl::eolian::return_traits<bool>::type editable_get() const;
    ::efl::eolian::return_traits<void>::type editable_set( ::efl::eolian::in_traits<bool>::type editable) const;
    ::efl::eolian::return_traits<bool>::type have_selection_get() const;
    ::efl::eolian::return_traits<void>::type all_unselect() const;
    ::efl::eolian::return_traits<void>::type all_select() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_TEXT_INTERACTIVE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text_Interactive *>(this))); }
    static struct preedit_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_TEXT_INTERACTIVE_EVENT_PREEDIT_CHANGED; }
        typedef void parameter_type;
    } const preedit_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    preedit_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(preedit_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    preedit_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(preedit_changed_event, *this, std::bind(function));
    }
#endif
    static struct have_selection_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_TEXT_INTERACTIVE_EVENT_HAVE_SELECTION_CHANGED; }
        typedef bool parameter_type;
    } const have_selection_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    have_selection_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(have_selection_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    have_selection_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(have_selection_changed_event, *this, std::bind(function));
    }
#endif
    static struct selection_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_TEXT_INTERACTIVE_EVENT_SELECTION_CHANGED; }
        typedef Eina_Range parameter_type;
    } const selection_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    selection_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(selection_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    selection_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(selection_changed_event, *this, std::bind(function));
    }
#endif
    static struct redo_request_event
    {
        static Efl_Event_Description const* description()
        { return EFL_TEXT_INTERACTIVE_EVENT_REDO_REQUEST; }
        typedef void parameter_type;
    } const redo_request_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    redo_request_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(redo_request_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    redo_request_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(redo_request_event, *this, std::bind(function));
    }
#endif
    static struct undo_request_event
    {
        static Efl_Event_Description const* description()
        { return EFL_TEXT_INTERACTIVE_EVENT_UNDO_REQUEST; }
        typedef void parameter_type;
    } const undo_request_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    undo_request_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(undo_request_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    undo_request_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(undo_request_event, *this, std::bind(function));
    }
#endif
    static struct changed_user_event
    {
        static Efl_Event_Description const* description()
        { return EFL_TEXT_INTERACTIVE_EVENT_CHANGED_USER; }
        typedef Efl_Text_Change_Info parameter_type;
    } const changed_user_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    changed_user_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(changed_user_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    changed_user_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(changed_user_event, *this, std::bind(function));
    }
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text_Interactive,  ::efl::Text,  ::efl::Text_Font_Properties,  ::efl::Text_Format,  ::efl::Text_Style> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text_Interactive const ,  ::efl::Text const ,  ::efl::Text_Font_Properties const ,  ::efl::Text_Format const ,  ::efl::Text_Style const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Text_Interactive> _get_wref() const { return ::efl::eo::wref<Text_Interactive>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Text_Interactive* operator->() const { return this; }
    Text_Interactive* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Text_Interactive const& lhs, Text_Interactive const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Text_Interactive const& lhs, Text_Interactive const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Text_Interactive) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Text_Interactive>::value, "");
} 

#pragma GCC diagnostic pop

#endif
