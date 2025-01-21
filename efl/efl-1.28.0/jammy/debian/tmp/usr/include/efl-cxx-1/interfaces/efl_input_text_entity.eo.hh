#ifndef EFL_INPUT_TEXT_ENTITY_EO_HH
#define EFL_INPUT_TEXT_ENTITY_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_input_text_entity.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_INPUT_TEXT_ENTITY_FWD_GUARD
#define EFL_INPUT_TEXT_ENTITY_FWD_GUARD
namespace efl { namespace input_text { 
struct Entity;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input_text::Entity> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input_text::Entity&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input_text::Entity const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input_text::Entity const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace input_text { 
struct Entity {
    ::efl::eolian::return_traits<bool>::type input_panel_show_on_demand_get() const;
    ::efl::eolian::return_traits<void>::type input_panel_show_on_demand_set( ::efl::eolian::in_traits<bool>::type ondemand) const;
    ::efl::eolian::return_traits<Efl_Input_Text_Panel_Language_Type>::type input_panel_language_get() const;
    ::efl::eolian::return_traits<void>::type input_panel_language_set( ::efl::eolian::in_traits<Efl_Input_Text_Panel_Language_Type>::type lang) const;
    ::efl::eolian::return_traits<int>::type input_panel_layout_variation_get() const;
    ::efl::eolian::return_traits<void>::type input_panel_layout_variation_set( ::efl::eolian::in_traits<int>::type variation) const;
    ::efl::eolian::return_traits<Efl_Input_Text_Capitalize_Type>::type autocapitalization_get() const;
    ::efl::eolian::return_traits<void>::type autocapitalization_set( ::efl::eolian::in_traits<Efl_Input_Text_Capitalize_Type>::type autocapital_type) const;
    ::efl::eolian::return_traits<bool>::type predictable_get() const;
    ::efl::eolian::return_traits<void>::type predictable_set( ::efl::eolian::in_traits<bool>::type prediction) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Input_Text_Content_Type>::type input_content_type_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type input_content_type_set( ::efl::eolian::in_traits<Efl_Input_Text_Content_Type>::type hints) const;
#endif
    ::efl::eolian::return_traits<Efl_Input_Text_Panel_Layout_Type>::type input_panel_layout_get() const;
    ::efl::eolian::return_traits<void>::type input_panel_layout_set( ::efl::eolian::in_traits<Efl_Input_Text_Panel_Layout_Type>::type layout) const;
    ::efl::eolian::return_traits<Efl_Input_Text_Panel_Return_Key_Type>::type input_panel_return_key_type_get() const;
    ::efl::eolian::return_traits<void>::type input_panel_return_key_type_set( ::efl::eolian::in_traits<Efl_Input_Text_Panel_Return_Key_Type>::type return_key_type) const;
    ::efl::eolian::return_traits<bool>::type input_panel_autoshow_get() const;
    ::efl::eolian::return_traits<void>::type input_panel_autoshow_set( ::efl::eolian::in_traits<bool>::type enabled) const;
    ::efl::eolian::return_traits<Efl_Input_Text_Panel_Return_Key_State>::type input_panel_return_key_state_get() const;
    ::efl::eolian::return_traits<void>::type input_panel_return_key_state_set( ::efl::eolian::in_traits<Efl_Input_Text_Panel_Return_Key_State>::type state) const;
    ::efl::eolian::return_traits< Eina_Slice>::type input_panel_imdata_get() const;
    ::efl::eolian::return_traits<void>::type input_panel_imdata_set( ::efl::eolian::in_traits< Eina_Slice>::type value) const;
    ::efl::eolian::return_traits<void>::type input_panel_show() const;
    ::efl::eolian::return_traits<void>::type input_panel_hide() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_INPUT_TEXT_ENTITY_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Entity *>(this))); }
    operator ::efl::input_text::Entity() const;
    operator ::efl::input_text::Entity&();
    operator ::efl::input_text::Entity const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Entity> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Entity const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace input_text { 
struct Entity : private ::efl::eo::concrete
{
    explicit Entity( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Entity(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Entity() = default;
    Entity(Entity const&) = default;
    Entity(Entity&&) = default;
    Entity& operator=(Entity const&) = default;
    Entity& operator=(Entity&&) = default;
    template <typename Derived>
    Entity(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Entity, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<bool>::type input_panel_show_on_demand_get() const;
    ::efl::eolian::return_traits<void>::type input_panel_show_on_demand_set( ::efl::eolian::in_traits<bool>::type ondemand) const;
    ::efl::eolian::return_traits<Efl_Input_Text_Panel_Language_Type>::type input_panel_language_get() const;
    ::efl::eolian::return_traits<void>::type input_panel_language_set( ::efl::eolian::in_traits<Efl_Input_Text_Panel_Language_Type>::type lang) const;
    ::efl::eolian::return_traits<int>::type input_panel_layout_variation_get() const;
    ::efl::eolian::return_traits<void>::type input_panel_layout_variation_set( ::efl::eolian::in_traits<int>::type variation) const;
    ::efl::eolian::return_traits<Efl_Input_Text_Capitalize_Type>::type autocapitalization_get() const;
    ::efl::eolian::return_traits<void>::type autocapitalization_set( ::efl::eolian::in_traits<Efl_Input_Text_Capitalize_Type>::type autocapital_type) const;
    ::efl::eolian::return_traits<bool>::type predictable_get() const;
    ::efl::eolian::return_traits<void>::type predictable_set( ::efl::eolian::in_traits<bool>::type prediction) const;
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Input_Text_Content_Type>::type input_content_type_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type input_content_type_set( ::efl::eolian::in_traits<Efl_Input_Text_Content_Type>::type hints) const;
#endif
    ::efl::eolian::return_traits<Efl_Input_Text_Panel_Layout_Type>::type input_panel_layout_get() const;
    ::efl::eolian::return_traits<void>::type input_panel_layout_set( ::efl::eolian::in_traits<Efl_Input_Text_Panel_Layout_Type>::type layout) const;
    ::efl::eolian::return_traits<Efl_Input_Text_Panel_Return_Key_Type>::type input_panel_return_key_type_get() const;
    ::efl::eolian::return_traits<void>::type input_panel_return_key_type_set( ::efl::eolian::in_traits<Efl_Input_Text_Panel_Return_Key_Type>::type return_key_type) const;
    ::efl::eolian::return_traits<bool>::type input_panel_autoshow_get() const;
    ::efl::eolian::return_traits<void>::type input_panel_autoshow_set( ::efl::eolian::in_traits<bool>::type enabled) const;
    ::efl::eolian::return_traits<Efl_Input_Text_Panel_Return_Key_State>::type input_panel_return_key_state_get() const;
    ::efl::eolian::return_traits<void>::type input_panel_return_key_state_set( ::efl::eolian::in_traits<Efl_Input_Text_Panel_Return_Key_State>::type state) const;
    ::efl::eolian::return_traits< Eina_Slice>::type input_panel_imdata_get() const;
    ::efl::eolian::return_traits<void>::type input_panel_imdata_set( ::efl::eolian::in_traits< Eina_Slice>::type value) const;
    ::efl::eolian::return_traits<void>::type input_panel_show() const;
    ::efl::eolian::return_traits<void>::type input_panel_hide() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_INPUT_TEXT_ENTITY_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Entity *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Entity> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Entity const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Entity> _get_wref() const { return ::efl::eo::wref<Entity>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Entity* operator->() const { return this; }
    Entity* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Entity const& lhs, Entity const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Entity const& lhs, Entity const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Entity) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Entity>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
