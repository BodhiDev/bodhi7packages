#ifndef EFL_ACCESS_TEXT_EO_HH
#define EFL_ACCESS_TEXT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_access_text.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_ACCESS_TEXT_FWD_GUARD
#define EFL_ACCESS_TEXT_FWD_GUARD
namespace efl { namespace access { 
struct Text;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Text> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Text&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Text const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::Text const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace access { 
struct Text {
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<Eina_Unicode>::type character_get( ::efl::eolian::in_traits<int>::type offset) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<void>::type string_get( ::efl::eolian::in_traits<Efl_Access_Text_Granularity>::type granularity,  ::efl::eolian::out_traits<int>::type start_offset,  ::efl::eolian::out_traits<int>::type end_offset,  ::efl::eolian::out_traits< ::std::string>::type string) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits< ::std::string>::type access_text_get( ::efl::eolian::in_traits<int>::type start_offset,  ::efl::eolian::in_traits<int>::type end_offset) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<int>::type caret_offset_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type caret_offset_set( ::efl::eolian::in_traits<int>::type offset) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type attribute_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::out_traits<int>::type start_offset,  ::efl::eolian::out_traits<int>::type end_offset,  ::efl::eolian::out_traits< ::std::string>::type value) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<void>::type text_attributes_get( ::efl::eolian::out_traits<int>::type start_offset,  ::efl::eolian::out_traits<int>::type end_offset,  ::efl::eolian::out_traits<  ::efl::eina::list<Efl_Access_Text_Attribute>>::type attributes) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Text_Attribute>>::type default_attributes_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type character_extents_get( ::efl::eolian::in_traits<int>::type offset,  ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::out_traits<Eina_Rect>::type rect) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<int>::type character_count_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<int>::type offset_at_point_get( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Text_Range>>::type bounded_ranges_get( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<Eina_Rect>::type rect,  ::efl::eolian::in_traits<Efl_Access_Text_Clip_Type>::type xclip,  ::efl::eolian::in_traits<Efl_Access_Text_Clip_Type>::type yclip) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type range_extents_get( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<int>::type start_offset,  ::efl::eolian::in_traits<int>::type end_offset,  ::efl::eolian::out_traits<Eina_Rect>::type rect) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<int>::type selections_count_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<void>::type access_selection_get( ::efl::eolian::in_traits<int>::type selection_number,  ::efl::eolian::out_traits<int>::type start_offset,  ::efl::eolian::out_traits<int>::type end_offset) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type access_selection_set( ::efl::eolian::in_traits<int>::type selection_number,  ::efl::eolian::in_traits<int>::type start_offset,  ::efl::eolian::in_traits<int>::type end_offset) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type selection_add( ::efl::eolian::in_traits<int>::type start_offset,  ::efl::eolian::in_traits<int>::type end_offset) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type selection_remove( ::efl::eolian::in_traits<int>::type selection_number) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_ACCESS_TEXT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text *>(this))); }
    operator ::efl::access::Text() const;
    operator ::efl::access::Text&();
    operator ::efl::access::Text const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace access { 
struct Text : private ::efl::eo::concrete
{
    explicit Text( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Text(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Text() = default;
    Text(Text const&) = default;
    Text(Text&&) = default;
    Text& operator=(Text const&) = default;
    Text& operator=(Text&&) = default;
    template <typename Derived>
    Text(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Text, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<Eina_Unicode>::type character_get( ::efl::eolian::in_traits<int>::type offset) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<void>::type string_get( ::efl::eolian::in_traits<Efl_Access_Text_Granularity>::type granularity,  ::efl::eolian::out_traits<int>::type start_offset,  ::efl::eolian::out_traits<int>::type end_offset,  ::efl::eolian::out_traits< ::std::string>::type string) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits< ::std::string>::type access_text_get( ::efl::eolian::in_traits<int>::type start_offset,  ::efl::eolian::in_traits<int>::type end_offset) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<int>::type caret_offset_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type caret_offset_set( ::efl::eolian::in_traits<int>::type offset) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type attribute_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::out_traits<int>::type start_offset,  ::efl::eolian::out_traits<int>::type end_offset,  ::efl::eolian::out_traits< ::std::string>::type value) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<void>::type text_attributes_get( ::efl::eolian::out_traits<int>::type start_offset,  ::efl::eolian::out_traits<int>::type end_offset,  ::efl::eolian::out_traits<  ::efl::eina::list<Efl_Access_Text_Attribute>>::type attributes) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Text_Attribute>>::type default_attributes_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type character_extents_get( ::efl::eolian::in_traits<int>::type offset,  ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::out_traits<Eina_Rect>::type rect) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<int>::type character_count_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<int>::type offset_at_point_get( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<int>::type x,  ::efl::eolian::in_traits<int>::type y) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<  ::efl::eina::list<Efl_Access_Text_Range>>::type bounded_ranges_get( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<Eina_Rect>::type rect,  ::efl::eolian::in_traits<Efl_Access_Text_Clip_Type>::type xclip,  ::efl::eolian::in_traits<Efl_Access_Text_Clip_Type>::type yclip) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type range_extents_get( ::efl::eolian::in_traits<bool>::type screen_coords,  ::efl::eolian::in_traits<int>::type start_offset,  ::efl::eolian::in_traits<int>::type end_offset,  ::efl::eolian::out_traits<Eina_Rect>::type rect) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<int>::type selections_count_get() const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<void>::type access_selection_get( ::efl::eolian::in_traits<int>::type selection_number,  ::efl::eolian::out_traits<int>::type start_offset,  ::efl::eolian::out_traits<int>::type end_offset) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type access_selection_set( ::efl::eolian::in_traits<int>::type selection_number,  ::efl::eolian::in_traits<int>::type start_offset,  ::efl::eolian::in_traits<int>::type end_offset) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type selection_add( ::efl::eolian::in_traits<int>::type start_offset,  ::efl::eolian::in_traits<int>::type end_offset) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type selection_remove( ::efl::eolian::in_traits<int>::type selection_number) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_ACCESS_TEXT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text *>(this))); }
#ifdef EFL_ACCESS_TEXT_BETA
    static struct access_text_caret_moved_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_TEXT_EVENT_ACCESS_TEXT_CARET_MOVED; }
        typedef void parameter_type;
    } const access_text_caret_moved_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    access_text_caret_moved_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(access_text_caret_moved_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    access_text_caret_moved_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(access_text_caret_moved_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_ACCESS_TEXT_BETA
    static struct access_text_inserted_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_TEXT_EVENT_ACCESS_TEXT_INSERTED; }
        typedef Efl_Access_Text_Change_Info parameter_type;
    } const access_text_inserted_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    access_text_inserted_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(access_text_inserted_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    access_text_inserted_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(access_text_inserted_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_ACCESS_TEXT_BETA
    static struct access_text_removed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_TEXT_EVENT_ACCESS_TEXT_REMOVED; }
        typedef Efl_Access_Text_Change_Info parameter_type;
    } const access_text_removed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    access_text_removed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(access_text_removed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    access_text_removed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(access_text_removed_event, *this, std::bind(function));
    }
#endif
#endif
#ifdef EFL_ACCESS_TEXT_BETA
    static struct access_text_selection_changed_event
    {
        static Efl_Event_Description const* description()
        { return EFL_ACCESS_TEXT_EVENT_ACCESS_TEXT_SELECTION_CHANGED; }
        typedef void parameter_type;
    } const access_text_selection_changed_event;
#ifdef EFL_CXXPERIMENTAL
    template <typename F>
    typename std::enable_if<std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    access_text_selection_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(access_text_selection_changed_event, *this, function);
    }
    template <typename F>
    typename std::enable_if<!std::is_bind_expression<F>::value, ::efl::eolian::signal_connection>::type
    access_text_selection_changed_event_cb_add(F function)
    {
        return ::efl::eolian::event_add(access_text_selection_changed_event, *this, std::bind(function));
    }
#endif
#endif
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Text> _get_wref() const { return ::efl::eo::wref<Text>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Text* operator->() const { return this; }
    Text* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Text const& lhs, Text const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Text const& lhs, Text const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Text) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Text>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
