#ifndef EFL_ACCESS_EDITABLE_TEXT_EO_HH
#define EFL_ACCESS_EDITABLE_TEXT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_access_editable_text.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_ACCESS_EDITABLE_TEXT_FWD_GUARD
#define EFL_ACCESS_EDITABLE_TEXT_FWD_GUARD
namespace efl { namespace access { namespace editable { 
struct Text;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::editable::Text> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::editable::Text&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::editable::Text const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::access::editable::Text const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace access { namespace editable { 
struct Text {
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type text_content_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type string) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type insert( ::efl::eolian::in_traits< ::efl::eina::string_view>::type string,  ::efl::eolian::in_traits<int>::type position) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type copy( ::efl::eolian::in_traits<int>::type start,  ::efl::eolian::in_traits<int>::type end) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type cut( ::efl::eolian::in_traits<int>::type start,  ::efl::eolian::in_traits<int>::type end) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type cxx_delete( ::efl::eolian::in_traits<int>::type start,  ::efl::eolian::in_traits<int>::type end) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type paste( ::efl::eolian::in_traits<int>::type position) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_ACCESS_EDITABLE_TEXT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text *>(this))); }
    operator ::efl::access::editable::Text() const;
    operator ::efl::access::editable::Text&();
    operator ::efl::access::editable::Text const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace access { namespace editable { 
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
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type text_content_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type string) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type insert( ::efl::eolian::in_traits< ::efl::eina::string_view>::type string,  ::efl::eolian::in_traits<int>::type position) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type copy( ::efl::eolian::in_traits<int>::type start,  ::efl::eolian::in_traits<int>::type end) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type cut( ::efl::eolian::in_traits<int>::type start,  ::efl::eolian::in_traits<int>::type end) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type cxx_delete( ::efl::eolian::in_traits<int>::type start,  ::efl::eolian::in_traits<int>::type end) const;
#endif
#endif
#ifdef EFL_BETA_API_SUPPORT
#ifdef EFL_ACCESS_EDITABLE_TEXT_PROTECTED
    ::efl::eolian::return_traits<bool>::type paste( ::efl::eolian::in_traits<int>::type position) const;
#endif
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_ACCESS_EDITABLE_TEXT_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text *>(this))); }
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
} } } 

#pragma GCC diagnostic pop

#endif
