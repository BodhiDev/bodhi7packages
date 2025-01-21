#ifndef ELDBUS_MODEL_OBJECT_EO_HH
#define ELDBUS_MODEL_OBJECT_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_loop_model.eo.h"
#include "efl_model.eo.h"
#include "efl_object.eo.h"
#include "eldbus_model.eo.h"
#include "eldbus_model_object.eo.h"
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
#ifndef ELDBUS_MODEL_OBJECT_FWD_GUARD
#define ELDBUS_MODEL_OBJECT_FWD_GUARD
namespace eldbus { namespace model { 
struct Object;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::eldbus::model::Object> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::eldbus::model::Object&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::eldbus::model::Object const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::eldbus::model::Object const&> : ::std::true_type {}; } }
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
struct Object {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type bus_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type bus_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type bus) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type path_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type path_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type path) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return ELDBUS_MODEL_OBJECT_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Object *>(this))); }
    operator ::eldbus::model::Object() const;
    operator ::eldbus::model::Object&();
    operator ::eldbus::model::Object const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Object,  ::efl::Loop_Consumer,  ::efl::Loop_Model,  ::efl::Model,  ::efl::Object,  ::eldbus::Model> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Object const ,  ::efl::Loop_Consumer const ,  ::efl::Loop_Model const ,  ::efl::Model const ,  ::efl::Object const ,  ::eldbus::Model const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace eldbus { namespace model { 
struct Object : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Loop_Model)
    , EO_CXX_INHERIT(::efl::Model)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::eldbus::Model)
{
    explicit Object( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Object(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Object() = default;
    Object(Object const&) = default;
    Object(Object&&) = default;
    Object& operator=(Object const&) = default;
    Object& operator=(Object&&) = default;
    template <typename Derived>
    Object(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Object, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Object( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Object( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Object( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Object >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Object(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Object >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type bus_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type bus_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type bus) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type path_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type path_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type path) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return ELDBUS_MODEL_OBJECT_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Object *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Object,  ::efl::Loop_Consumer,  ::efl::Loop_Model,  ::efl::Model,  ::efl::Object,  ::eldbus::Model> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Object const ,  ::efl::Loop_Consumer const ,  ::efl::Loop_Model const ,  ::efl::Model const ,  ::efl::Object const ,  ::eldbus::Model const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Object> _get_wref() const { return ::efl::eo::wref<Object>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Object* operator->() const { return this; }
    Object* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Object const& lhs, Object const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Object const& lhs, Object const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Object) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Object>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
