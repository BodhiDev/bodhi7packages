#ifndef EFL_UI_PROPERTY_BIND_PART_EO_HH
#define EFL_UI_PROPERTY_BIND_PART_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_object.eo.h"
#include "efl_ui_property_bind.eo.h"
#include "efl_ui_property_bind_part.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#include "efl_ui_property_bind.eo.hh"
#ifndef EFL_UI_PROPERTY_BIND_PART_FWD_GUARD
#define EFL_UI_PROPERTY_BIND_PART_FWD_GUARD
namespace efl { namespace ui { 
struct Property_Bind_Part;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind_Part> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind_Part&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind_Part const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind_Part const&> : ::std::true_type {}; } }
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
#ifndef EFL_UI_PROPERTY_BIND_FWD_GUARD
#define EFL_UI_PROPERTY_BIND_FWD_GUARD
namespace efl { namespace ui { 
struct Property_Bind;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Property_Bind const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { 
struct Property_Bind_Part {
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_PROPERTY_BIND_PART_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Property_Bind_Part *>(this))); }
    operator ::efl::ui::Property_Bind_Part() const;
    operator ::efl::ui::Property_Bind_Part&();
    operator ::efl::ui::Property_Bind_Part const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Property_Bind_Part,  ::efl::Object,  ::efl::ui::Property_Bind> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Property_Bind_Part const ,  ::efl::Object const ,  ::efl::ui::Property_Bind const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace ui { 
struct Property_Bind_Part : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::ui::Property_Bind)
{
    explicit Property_Bind_Part( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Property_Bind_Part(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Property_Bind_Part() = default;
    Property_Bind_Part(Property_Bind_Part const&) = default;
    Property_Bind_Part(Property_Bind_Part&&) = default;
    Property_Bind_Part& operator=(Property_Bind_Part const&) = default;
    Property_Bind_Part& operator=(Property_Bind_Part&&) = default;
    template <typename Derived>
    Property_Bind_Part(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Property_Bind_Part, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Property_Bind_Part( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Property_Bind_Part( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Property_Bind_Part( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Property_Bind_Part >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Property_Bind_Part(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Property_Bind_Part >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_UI_PROPERTY_BIND_PART_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Property_Bind_Part *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Property_Bind_Part,  ::efl::Object,  ::efl::ui::Property_Bind> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Property_Bind_Part const ,  ::efl::Object const ,  ::efl::ui::Property_Bind const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Property_Bind_Part> _get_wref() const { return ::efl::eo::wref<Property_Bind_Part>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Property_Bind_Part* operator->() const { return this; }
    Property_Bind_Part* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Property_Bind_Part const& lhs, Property_Bind_Part const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Property_Bind_Part const& lhs, Property_Bind_Part const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Property_Bind_Part) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Property_Bind_Part>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
