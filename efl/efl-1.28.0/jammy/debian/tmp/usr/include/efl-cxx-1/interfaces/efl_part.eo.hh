#ifndef EFL_PART_EO_HH
#define EFL_PART_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_object.eo.h"
#include "efl_part.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_object.eo.hh"
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Part {
#ifdef EFL_PART_PROTECTED
    ::efl::eolian::return_traits< ::efl::Object>::type part_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_PART_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Part *>(this))); }
    operator ::efl::Part() const;
    operator ::efl::Part&();
    operator ::efl::Part const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Part> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Part const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Part : private ::efl::eo::concrete
{
    explicit Part( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Part(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Part() = default;
    Part(Part const&) = default;
    Part(Part&&) = default;
    Part& operator=(Part const&) = default;
    Part& operator=(Part&&) = default;
    template <typename Derived>
    Part(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Part, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_PART_PROTECTED
    ::efl::eolian::return_traits< ::efl::Object>::type part_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_PART_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Part *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Part> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Part const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Part> _get_wref() const { return ::efl::eo::wref<Part>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Part* operator->() const { return this; }
    Part* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Part const& lhs, Part const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Part const& lhs, Part const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Part) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Part>::value, "");
} 

#pragma GCC diagnostic pop

#endif
