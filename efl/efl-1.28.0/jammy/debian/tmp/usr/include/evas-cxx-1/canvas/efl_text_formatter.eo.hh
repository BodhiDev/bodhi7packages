#ifndef EFL_TEXT_FORMATTER_EO_HH
#define EFL_TEXT_FORMATTER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_object.eo.h"
#include "efl_text_cursor_object.eo.h"
#include "efl_text_formatter.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#include "efl_text_cursor_object.eo.hh"
#ifndef EFL_TEXT_FORMATTER_FWD_GUARD
#define EFL_TEXT_FORMATTER_FWD_GUARD
namespace efl { 
struct Text_Formatter;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Formatter> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Formatter&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Formatter const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Text_Formatter const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Text_Formatter {
    static ::efl::eolian::return_traits<void>::type attribute_insert( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type end,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type format);
    static ::efl::eolian::return_traits< unsigned int>::type attribute_clear( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type end);
    static Efl_Class const* _eo_class()
    {
        return EFL_TEXT_FORMATTER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text_Formatter *>(this))); }
    operator ::efl::Text_Formatter() const;
    operator ::efl::Text_Formatter&();
    operator ::efl::Text_Formatter const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text_Formatter,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text_Formatter const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Text_Formatter : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Text_Formatter( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Text_Formatter(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Text_Formatter() = default;
    Text_Formatter(Text_Formatter const&) = default;
    Text_Formatter(Text_Formatter&&) = default;
    Text_Formatter& operator=(Text_Formatter const&) = default;
    Text_Formatter& operator=(Text_Formatter&&) = default;
    template <typename Derived>
    Text_Formatter(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Text_Formatter, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    static ::efl::eolian::return_traits<void>::type attribute_insert( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type end,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type format);
    static ::efl::eolian::return_traits< unsigned int>::type attribute_clear( ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type start,  ::efl::eolian::in_traits< ::efl::text_cursor::Object>::type end);
    static Efl_Class const* _eo_class()
    {
        return EFL_TEXT_FORMATTER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Text_Formatter *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Text_Formatter,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Text_Formatter const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Text_Formatter> _get_wref() const { return ::efl::eo::wref<Text_Formatter>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Text_Formatter* operator->() const { return this; }
    Text_Formatter* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Text_Formatter const& lhs, Text_Formatter const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Text_Formatter const& lhs, Text_Formatter const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Text_Formatter) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Text_Formatter>::value, "");
} 

#pragma GCC diagnostic pop

#endif
