#ifndef EFL_CORE_COMMAND_LINE_EO_HH
#define EFL_CORE_COMMAND_LINE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_core_command_line.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_CORE_COMMAND_LINE_FWD_GUARD
#define EFL_CORE_COMMAND_LINE_FWD_GUARD
namespace efl { namespace core { 
struct Command_Line;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Command_Line> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Command_Line&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Command_Line const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::core::Command_Line const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace core { 
struct Command_Line {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type command_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type command_array_set( ::efl::eolian::in_traits<  ::efl::eina::array< ::efl::eina::stringshare>>::type array) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type command_string_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type str) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::accessor< ::efl::eina::stringshare>>::type command_access() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CORE_COMMAND_LINE_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Command_Line *>(this))); }
    operator ::efl::core::Command_Line() const;
    operator ::efl::core::Command_Line&();
    operator ::efl::core::Command_Line const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Command_Line> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Command_Line const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace core { 
struct Command_Line : private ::efl::eo::concrete
{
    explicit Command_Line( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Command_Line(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Command_Line() = default;
    Command_Line(Command_Line const&) = default;
    Command_Line(Command_Line&&) = default;
    Command_Line& operator=(Command_Line const&) = default;
    Command_Line& operator=(Command_Line&&) = default;
    template <typename Derived>
    Command_Line(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Command_Line, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type command_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type command_array_set( ::efl::eolian::in_traits<  ::efl::eina::array< ::efl::eina::stringshare>>::type array) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type command_string_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type str) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::accessor< ::efl::eina::stringshare>>::type command_access() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CORE_COMMAND_LINE_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Command_Line *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Command_Line> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Command_Line const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Command_Line> _get_wref() const { return ::efl::eo::wref<Command_Line>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Command_Line* operator->() const { return this; }
    Command_Line* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Command_Line const& lhs, Command_Line const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Command_Line const& lhs, Command_Line const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Command_Line) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Command_Line>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
