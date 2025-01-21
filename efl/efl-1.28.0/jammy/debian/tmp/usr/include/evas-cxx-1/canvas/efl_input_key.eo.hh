#ifndef EFL_INPUT_KEY_EO_HH
#define EFL_INPUT_KEY_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_duplicate.eo.h"
#include "efl_input_device.eo.h"
#include "efl_input_event.eo.h"
#include "efl_input_key.eo.h"
#include "efl_input_state.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_duplicate.eo.hh"
#include "efl_input_device.eo.hh"
#include "efl_input_event.eo.hh"
#include "efl_input_state.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_INPUT_KEY_FWD_GUARD
#define EFL_INPUT_KEY_FWD_GUARD
namespace efl { namespace input { 
struct Key;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Key> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Key&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Key const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Key const&> : ::std::true_type {}; } }
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
#ifndef EFL_INPUT_DEVICE_FWD_GUARD
#define EFL_INPUT_DEVICE_FWD_GUARD
namespace efl { namespace input { 
struct Device;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Device const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_DUPLICATE_FWD_GUARD
#define EFL_DUPLICATE_FWD_GUARD
namespace efl { 
struct Duplicate;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Duplicate> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Duplicate&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Duplicate const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Duplicate const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_INPUT_EVENT_FWD_GUARD
#define EFL_INPUT_EVENT_FWD_GUARD
namespace efl { namespace input { 
struct Event;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Event> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Event&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Event const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::Event const&> : ::std::true_type {}; } }
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
#ifndef EFL_INPUT_STATE_FWD_GUARD
#define EFL_INPUT_STATE_FWD_GUARD
namespace efl { namespace input { 
struct State;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::State> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::State&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::State const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::input::State const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace input { 
struct Key {
    ::efl::eolian::return_traits<bool>::type pressed_get() const;
    ::efl::eolian::return_traits<void>::type pressed_set( ::efl::eolian::in_traits<bool>::type val) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type key_name_get() const;
    ::efl::eolian::return_traits<void>::type key_name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type val) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type key_sym_get() const;
    ::efl::eolian::return_traits<void>::type key_sym_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type val) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type string_get() const;
    ::efl::eolian::return_traits<void>::type string_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type val) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type compose_string_get() const;
    ::efl::eolian::return_traits<void>::type compose_string_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type val) const;
    ::efl::eolian::return_traits<int>::type key_code_get() const;
    ::efl::eolian::return_traits<void>::type key_code_set( ::efl::eolian::in_traits<int>::type val) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_INPUT_KEY_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Key *>(this))); }
    operator ::efl::input::Key() const;
    operator ::efl::input::Key&();
    operator ::efl::input::Key const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Key,  ::efl::Duplicate,  ::efl::Object,  ::efl::input::Event,  ::efl::input::State> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Key const ,  ::efl::Duplicate const ,  ::efl::Object const ,  ::efl::input::Event const ,  ::efl::input::State const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace input { 
struct Key : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Duplicate)
    , EO_CXX_INHERIT(::efl::Object)
    , EO_CXX_INHERIT(::efl::input::Event)
    , EO_CXX_INHERIT(::efl::input::State)
{
    explicit Key( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Key(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Key() = default;
    Key(Key const&) = default;
    Key(Key&&) = default;
    Key& operator=(Key const&) = default;
    Key& operator=(Key&&) = default;
    template <typename Derived>
    Key(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Key, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Key( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Key( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Key( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Key >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Key(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Key >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    ::efl::eolian::return_traits<bool>::type pressed_get() const;
    ::efl::eolian::return_traits<void>::type pressed_set( ::efl::eolian::in_traits<bool>::type val) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type key_name_get() const;
    ::efl::eolian::return_traits<void>::type key_name_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type val) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type key_sym_get() const;
    ::efl::eolian::return_traits<void>::type key_sym_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type val) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type string_get() const;
    ::efl::eolian::return_traits<void>::type string_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type val) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type compose_string_get() const;
    ::efl::eolian::return_traits<void>::type compose_string_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type val) const;
    ::efl::eolian::return_traits<int>::type key_code_get() const;
    ::efl::eolian::return_traits<void>::type key_code_set( ::efl::eolian::in_traits<int>::type val) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_INPUT_KEY_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Key *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Key,  ::efl::Duplicate,  ::efl::Object,  ::efl::input::Event,  ::efl::input::State> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Key const ,  ::efl::Duplicate const ,  ::efl::Object const ,  ::efl::input::Event const ,  ::efl::input::State const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Key> _get_wref() const { return ::efl::eo::wref<Key>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Key* operator->() const { return this; }
    Key* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Key const& lhs, Key const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Key const& lhs, Key const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Key) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Key>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
