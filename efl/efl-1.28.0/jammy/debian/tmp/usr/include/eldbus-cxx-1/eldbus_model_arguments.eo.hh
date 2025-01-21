#ifndef ELDBUS_MODEL_ARGUMENTS_EO_HH
#define ELDBUS_MODEL_ARGUMENTS_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_loop_model.eo.h"
#include "efl_model.eo.h"
#include "efl_object.eo.h"
#include "eldbus_model.eo.h"
#include "eldbus_model_arguments.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_loop.eo.hh"
#include "efl_loop_consumer.eo.hh"
#include "efl_loop_model.eo.hh"
#include "efl_model.eo.hh"
#include "efl_object.eo.hh"
#include "eldbus_model.eo.hh"
#ifndef ELDBUS_MODEL_ARGUMENTS_FWD_GUARD
#define ELDBUS_MODEL_ARGUMENTS_FWD_GUARD
namespace eldbus { namespace model { 
struct Arguments;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::eldbus::model::Arguments> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::eldbus::model::Arguments&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::eldbus::model::Arguments const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::eldbus::model::Arguments const&> : ::std::true_type {}; } }
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
#ifndef EFL_LOOP_FWD_GUARD
#define EFL_LOOP_FWD_GUARD
namespace efl { 
struct Loop;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_LOOP_CONSUMER_FWD_GUARD
#define EFL_LOOP_CONSUMER_FWD_GUARD
namespace efl { 
struct Loop_Consumer;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Consumer const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_LOOP_MODEL_FWD_GUARD
#define EFL_LOOP_MODEL_FWD_GUARD
namespace efl { 
struct Loop_Model;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Model> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Model&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Model const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Loop_Model const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_MODEL_FWD_GUARD
#define EFL_MODEL_FWD_GUARD
namespace efl { 
struct Model;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Model> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Model&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Model const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Model const&> : ::std::true_type {}; } }
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
#ifndef ELDBUS_MODEL_FWD_GUARD
#define ELDBUS_MODEL_FWD_GUARD
namespace eldbus { 
struct Model;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::eldbus::Model> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::eldbus::Model&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::eldbus::Model const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::eldbus::Model const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace eldbus { namespace model { 
struct Arguments {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type arg_name_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type custom_constructor( ::efl::eolian::in_traits<Eldbus_Proxy *>::type proxy,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<  ::efl::eina::range_list<Eldbus_Introspection_Argument>>::type arguments) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return ELDBUS_MODEL_ARGUMENTS_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Arguments *>(this))); }
    operator ::eldbus::model::Arguments() const;
    operator ::eldbus::model::Arguments&();
    operator ::eldbus::model::Arguments const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Arguments,  ::efl::Loop_Consumer,  ::efl::Loop_Model,  ::efl::Model,  ::efl::Object,  ::eldbus::Model> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Arguments const ,  ::efl::Loop_Consumer const ,  ::efl::Loop_Model const ,  ::efl::Model const ,  ::efl::Object const ,  ::eldbus::Model const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace eldbus { namespace model { 
struct Arguments : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Loop_Model)
    , EO_CXX_INHERIT(::efl::Model)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::eldbus::Model)
{
    explicit Arguments( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Arguments(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Arguments() = default;
    Arguments(Arguments const&) = default;
    Arguments(Arguments&&) = default;
    Arguments& operator=(Arguments const&) = default;
    Arguments& operator=(Arguments&&) = default;
    template <typename Derived>
    Arguments(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Arguments, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Arguments( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Arguments( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Arguments( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Arguments >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Arguments(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Arguments >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type arg_name_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type custom_constructor( ::efl::eolian::in_traits<Eldbus_Proxy *>::type proxy,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<  ::efl::eina::range_list<Eldbus_Introspection_Argument>>::type arguments) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return ELDBUS_MODEL_ARGUMENTS_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Arguments *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Arguments,  ::efl::Loop_Consumer,  ::efl::Loop_Model,  ::efl::Model,  ::efl::Object,  ::eldbus::Model> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Arguments const ,  ::efl::Loop_Consumer const ,  ::efl::Loop_Model const ,  ::efl::Model const ,  ::efl::Object const ,  ::eldbus::Model const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Arguments> _get_wref() const { return ::efl::eo::wref<Arguments>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Arguments* operator->() const { return this; }
    Arguments* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Arguments const& lhs, Arguments const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Arguments const& lhs, Arguments const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Arguments) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Arguments>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
