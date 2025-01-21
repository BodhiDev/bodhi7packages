#ifndef EFL_CANVAS_TEXTBLOCK_FACTORY_EO_HH
#define EFL_CANVAS_TEXTBLOCK_FACTORY_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_canvas_object.eo.h"
#include "efl_canvas_textblock_factory.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_canvas_object.eo.hh"
#ifndef EFL_CANVAS_TEXTBLOCK_FACTORY_FWD_GUARD
#define EFL_CANVAS_TEXTBLOCK_FACTORY_FWD_GUARD
namespace efl { namespace canvas { 
struct Textblock_Factory;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Textblock_Factory> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Textblock_Factory&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Textblock_Factory const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::canvas::Textblock_Factory const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace canvas { 
struct Textblock_Factory {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::canvas::Object>::type create( ::efl::eolian::in_traits< ::efl::canvas::Object>::type object,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_TEXTBLOCK_FACTORY_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Textblock_Factory *>(this))); }
    operator ::efl::canvas::Textblock_Factory() const;
    operator ::efl::canvas::Textblock_Factory&();
    operator ::efl::canvas::Textblock_Factory const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Textblock_Factory> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Textblock_Factory const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace canvas { 
struct Textblock_Factory : private ::efl::eo::concrete
{
    explicit Textblock_Factory( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Textblock_Factory(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Textblock_Factory() = default;
    Textblock_Factory(Textblock_Factory const&) = default;
    Textblock_Factory(Textblock_Factory&&) = default;
    Textblock_Factory& operator=(Textblock_Factory const&) = default;
    Textblock_Factory& operator=(Textblock_Factory&&) = default;
    template <typename Derived>
    Textblock_Factory(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Textblock_Factory, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::canvas::Object>::type create( ::efl::eolian::in_traits< ::efl::canvas::Object>::type object,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CANVAS_TEXTBLOCK_FACTORY_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Textblock_Factory *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Textblock_Factory> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Textblock_Factory const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Textblock_Factory> _get_wref() const { return ::efl::eo::wref<Textblock_Factory>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Textblock_Factory* operator->() const { return this; }
    Textblock_Factory* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Textblock_Factory const& lhs, Textblock_Factory const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Textblock_Factory const& lhs, Textblock_Factory const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Textblock_Factory) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Textblock_Factory>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
