#ifndef EFL_UI_FACTORY_BIND_EO_HH
#define EFL_UI_FACTORY_BIND_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_factory.eo.h"
#include "efl_ui_factory_bind.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_ui_factory.eo.hh"
#ifndef EFL_UI_FACTORY_BIND_FWD_GUARD
#define EFL_UI_FACTORY_BIND_FWD_GUARD
namespace efl { namespace ui { 
struct Factory_Bind;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory_Bind> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory_Bind&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory_Bind const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory_Bind const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_FACTORY_FWD_GUARD
#define EFL_UI_FACTORY_FWD_GUARD
namespace efl { namespace ui { 
struct Factory;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Factory const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Factory_Bind {
    ::efl::eolian::return_traits<Eina_Error>::type factory_bind( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::ui::Factory>::type factory) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FACTORY_BIND_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Factory_Bind *>(this))); }
    operator ::efl::ui::Factory_Bind() const;
    operator ::efl::ui::Factory_Bind&();
    operator ::efl::ui::Factory_Bind const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Factory_Bind> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Factory_Bind const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Factory_Bind : private ::efl::eo::concrete
{
    explicit Factory_Bind( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Factory_Bind(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Factory_Bind() = default;
    Factory_Bind(Factory_Bind const&) = default;
    Factory_Bind(Factory_Bind&&) = default;
    Factory_Bind& operator=(Factory_Bind const&) = default;
    Factory_Bind& operator=(Factory_Bind&&) = default;
    template <typename Derived>
    Factory_Bind(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Factory_Bind, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<Eina_Error>::type factory_bind( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits< ::efl::ui::Factory>::type factory) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_FACTORY_BIND_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Factory_Bind *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Factory_Bind> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Factory_Bind const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Factory_Bind> _get_wref() const { return ::efl::eo::wref<Factory_Bind>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Factory_Bind* operator->() const { return this; }
    Factory_Bind* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Factory_Bind const& lhs, Factory_Bind const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Factory_Bind const& lhs, Factory_Bind const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Factory_Bind) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Factory_Bind>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
