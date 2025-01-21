#ifndef EFL_CANVAS_LAYOUT_PART_TYPE_PROVIDER_EO_HH
#define EFL_CANVAS_LAYOUT_PART_TYPE_PROVIDER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_layout_part_type_provider.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_CANVAS_LAYOUT_PART_TYPE_PROVIDER_FWD_GUARD
#define EFL_CANVAS_LAYOUT_PART_TYPE_PROVIDER_FWD_GUARD
namespace efl { namespace canvas { 
struct Layout_Part_Type_Provider;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part_Type_Provider> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part_Type_Provider&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part_Type_Provider const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Layout_Part_Type_Provider const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { 
struct Layout_Part_Type_Provider {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Canvas_Layout_Part_Type>::type part_type_get() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_LAYOUT_PART_TYPE_PROVIDER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Layout_Part_Type_Provider *>(this))); }
    operator ::efl::canvas::Layout_Part_Type_Provider() const;
    operator ::efl::canvas::Layout_Part_Type_Provider&();
    operator ::efl::canvas::Layout_Part_Type_Provider const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Layout_Part_Type_Provider> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Layout_Part_Type_Provider const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Layout_Part_Type_Provider : private ::efl::eo::concrete
{
    explicit Layout_Part_Type_Provider( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Layout_Part_Type_Provider(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Layout_Part_Type_Provider() = default;
    Layout_Part_Type_Provider(Layout_Part_Type_Provider const&) = default;
    Layout_Part_Type_Provider(Layout_Part_Type_Provider&&) = default;
    Layout_Part_Type_Provider& operator=(Layout_Part_Type_Provider const&) = default;
    Layout_Part_Type_Provider& operator=(Layout_Part_Type_Provider&&) = default;
    template <typename Derived>
    Layout_Part_Type_Provider(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Layout_Part_Type_Provider, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Canvas_Layout_Part_Type>::type part_type_get() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_LAYOUT_PART_TYPE_PROVIDER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Layout_Part_Type_Provider *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Layout_Part_Type_Provider> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Layout_Part_Type_Provider const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Layout_Part_Type_Provider> _get_wref() const { return ::efl::eo::wref<Layout_Part_Type_Provider>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Layout_Part_Type_Provider* operator->() const { return this; }
    Layout_Part_Type_Provider* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Layout_Part_Type_Provider const& lhs, Layout_Part_Type_Provider const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Layout_Part_Type_Provider const& lhs, Layout_Part_Type_Provider const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Layout_Part_Type_Provider) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Layout_Part_Type_Provider>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
