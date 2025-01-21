#ifndef EFL_UI_FORMAT_EO_HH
#define EFL_UI_FORMAT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_format.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_UI_FORMAT_FWD_GUARD
#define EFL_UI_FORMAT_FWD_GUARD
namespace efl { namespace ui { 
struct Format;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Format> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Format&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Format const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Format const&> : ::std::true_type {}; } }
#endif

#ifndef EFL_UI_FORMAT_FUNC_DEFINED
#define EFL_UI_FORMAT_FUNC_DEFINED
namespace efl { namespace eolian {
template <typename F>
struct function_wrapper<Efl_Ui_Format_Func, F, struct Efl_Ui_Format_Func__function_tag> {
    function_wrapper(F cxx_func) : _cxx_func(cxx_func) {}
    void *data_to_c() { return static_cast<void *>(this); }
    Efl_Ui_Format_Func func_to_c() const { return &caller; }
    Eina_Free_Cb free_to_c() const { return &deleter; }
private:
    F _cxx_func;
    static void deleter(void *data) {
        delete static_cast<function_wrapper<Efl_Ui_Format_Func, F, ::efl::eolian::Efl_Ui_Format_Func__function_tag>*>(data);
    }
    static Eina_Bool caller(void *cxx_call_data, Eina_Strbuf * str, const Eina_Value value) {
        auto fw = static_cast<function_wrapper<Efl_Ui_Format_Func, F, ::efl::eolian::Efl_Ui_Format_Func__function_tag>*>(cxx_call_data);
        auto __return_value =
        fw->_cxx_func( ::efl::eolian::out_traits< ::efl::eina::strbuf>::type(str),  ::efl::eolian::out_traits< ::efl::eina::value_view const>::type(value));
        return ::efl::eolian::convert_to_c<bool>(__return_value);
    }
};
} }
#endif


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Format {
    ::efl::eolian::return_traits<Efl_Ui_Format_Func>::type format_func_get() const;
template <typename F>     ::efl::eolian::return_traits<void>::type format_func_set(F func) const;
    ::efl::eolian::return_traits< ::efl::eina::accessor<Efl_Ui_Format_Value>>::type format_values_get() const;
    ::efl::eolian::return_traits<void>::type format_values_set( ::efl::eolian::in_traits< ::efl::eina::accessor<Efl_Ui_Format_Value>>::type values) const;
    ::efl::eolian::return_traits<void>::type format_string_get( ::efl::eolian::out_traits< ::efl::eina::string_view>::type string,  ::efl::eolian::out_traits<Efl_Ui_Format_String_Type>::type type) const;
    ::efl::eolian::return_traits<void>::type format_string_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type string,  ::efl::eolian::in_traits<Efl_Ui_Format_String_Type>::type type) const;
#ifdef EFL_UI_FORMAT_PROTECTED
    ::efl::eolian::return_traits<void>::type formatted_value_get( ::efl::eolian::in_traits< ::efl::eina::strbuf>::type str,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type value) const;
#endif
#ifdef EFL_UI_FORMAT_PROTECTED
    ::efl::eolian::return_traits<int>::type decimal_places_get() const;
#endif
#ifdef EFL_UI_FORMAT_PROTECTED
    ::efl::eolian::return_traits<void>::type apply_formatted_value() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FORMAT_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Format *>(this))); }
    operator ::efl::ui::Format() const;
    operator ::efl::ui::Format&();
    operator ::efl::ui::Format const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Format> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Format const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Format : private ::efl::eo::concrete
{
    explicit Format( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Format(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Format() = default;
    Format(Format const&) = default;
    Format(Format&&) = default;
    Format& operator=(Format const&) = default;
    Format& operator=(Format&&) = default;
    template <typename Derived>
    Format(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Format, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<Efl_Ui_Format_Func>::type format_func_get() const;
template <typename F>     ::efl::eolian::return_traits<void>::type format_func_set(F func) const;
    ::efl::eolian::return_traits< ::efl::eina::accessor<Efl_Ui_Format_Value>>::type format_values_get() const;
    ::efl::eolian::return_traits<void>::type format_values_set( ::efl::eolian::in_traits< ::efl::eina::accessor<Efl_Ui_Format_Value>>::type values) const;
    ::efl::eolian::return_traits<void>::type format_string_get( ::efl::eolian::out_traits< ::efl::eina::string_view>::type string,  ::efl::eolian::out_traits<Efl_Ui_Format_String_Type>::type type) const;
    ::efl::eolian::return_traits<void>::type format_string_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type string,  ::efl::eolian::in_traits<Efl_Ui_Format_String_Type>::type type) const;
#ifdef EFL_UI_FORMAT_PROTECTED
    ::efl::eolian::return_traits<void>::type formatted_value_get( ::efl::eolian::in_traits< ::efl::eina::strbuf>::type str,  ::efl::eolian::in_traits< ::efl::eina::value_view const>::type value) const;
#endif
#ifdef EFL_UI_FORMAT_PROTECTED
    ::efl::eolian::return_traits<int>::type decimal_places_get() const;
#endif
#ifdef EFL_UI_FORMAT_PROTECTED
    ::efl::eolian::return_traits<void>::type apply_formatted_value() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FORMAT_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Format *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Format> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Format const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Format> _get_wref() const { return ::efl::eo::wref<Format>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Format* operator->() const { return this; }
    Format* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Format const& lhs, Format const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Format const& lhs, Format const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Format) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Format>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
