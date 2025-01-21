#ifndef EFL_GFX_VG_VALUE_PROVIDER_EO_HH
#define EFL_GFX_VG_VALUE_PROVIDER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_gfx_vg_value_provider.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_GFX_VG_VALUE_PROVIDER_FWD_GUARD
#define EFL_GFX_VG_VALUE_PROVIDER_FWD_GUARD
namespace efl { namespace gfx { namespace vg { 
struct Value_Provider;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::vg::Value_Provider> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::vg::Value_Provider&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::vg::Value_Provider const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::vg::Value_Provider const&> : ::std::true_type {}; } }
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { namespace vg { 
struct Value_Provider {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::stringshare>::type keypath_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type keypath_set( ::efl::eolian::in_traits< ::efl::eina::stringshare>::type keypath) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Matrix4 *>::type transform_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type transform_set( ::efl::eolian::in_traits<Eina_Matrix4 *>::type m) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type fill_color_get( ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type fill_color_set( ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_color_get( ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_color_set( ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type stroke_width_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_width_set( ::efl::eolian::in_traits<double>::type width) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Gfx_Vg_Value_Provider_Flags>::type updated_get() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_VG_VALUE_PROVIDER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Value_Provider *>(this))); }
    operator ::efl::gfx::vg::Value_Provider() const;
    operator ::efl::gfx::vg::Value_Provider&();
    operator ::efl::gfx::vg::Value_Provider const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Value_Provider,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Value_Provider const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace gfx { namespace vg { 
struct Value_Provider : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Value_Provider( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Value_Provider(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Value_Provider() = default;
    Value_Provider(Value_Provider const&) = default;
    Value_Provider(Value_Provider&&) = default;
    Value_Provider& operator=(Value_Provider const&) = default;
    Value_Provider& operator=(Value_Provider&&) = default;
    template <typename Derived>
    Value_Provider(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Value_Provider, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Value_Provider( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Value_Provider( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Value_Provider( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Value_Provider >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Value_Provider(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Value_Provider >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::stringshare>::type keypath_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type keypath_set( ::efl::eolian::in_traits< ::efl::eina::stringshare>::type keypath) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Matrix4 *>::type transform_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type transform_set( ::efl::eolian::in_traits<Eina_Matrix4 *>::type m) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type fill_color_get( ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type fill_color_set( ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_color_get( ::efl::eolian::out_traits<int>::type r,  ::efl::eolian::out_traits<int>::type g,  ::efl::eolian::out_traits<int>::type b,  ::efl::eolian::out_traits<int>::type a) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_color_set( ::efl::eolian::in_traits<int>::type r,  ::efl::eolian::in_traits<int>::type g,  ::efl::eolian::in_traits<int>::type b,  ::efl::eolian::in_traits<int>::type a) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type stroke_width_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type stroke_width_set( ::efl::eolian::in_traits<double>::type width) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Gfx_Vg_Value_Provider_Flags>::type updated_get() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_VG_VALUE_PROVIDER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Value_Provider *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Value_Provider,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Value_Provider const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Value_Provider> _get_wref() const { return ::efl::eo::wref<Value_Provider>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Value_Provider* operator->() const { return this; }
    Value_Provider* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Value_Provider const& lhs, Value_Provider const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Value_Provider const& lhs, Value_Provider const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Value_Provider) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Value_Provider>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
