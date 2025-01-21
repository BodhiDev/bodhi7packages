#ifndef EFL_IO_MANAGER_EO_HH
#define EFL_IO_MANAGER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_class.eo.h"
#include "efl_io_manager.eo.h"
#include "efl_loop.eo.h"
#include "efl_loop_consumer.eo.h"
#include "efl_object.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_class.eo.hh"
#include "efl_loop.eo.hh"
#include "efl_loop_consumer.eo.hh"
#include "efl_object.eo.hh"
#ifndef EFL_IO_MANAGER_FWD_GUARD
#define EFL_IO_MANAGER_FWD_GUARD
namespace efl { namespace io { 
struct Manager;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Manager> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Manager&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Manager const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::io::Manager const&> : ::std::true_type {}; } }
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

#ifndef EFLIOPATH_DEFINED
#define EFLIOPATH_DEFINED
namespace efl { namespace eolian {
template <typename F>
struct function_wrapper<EflIoPath, F, struct EflIoPath__function_tag> {
    function_wrapper(F cxx_func) : _cxx_func(cxx_func) {}
    void *data_to_c() { return static_cast<void *>(this); }
    EflIoPath func_to_c() const { return &caller; }
    Eina_Free_Cb free_to_c() const { return &deleter; }
private:
    F _cxx_func;
    static void deleter(void *data) {
        delete static_cast<function_wrapper<EflIoPath, F, ::efl::eolian::EflIoPath__function_tag>*>(data);
    }
    static void caller(void *cxx_call_data, Eina_Array * paths) {
        auto fw = static_cast<function_wrapper<EflIoPath, F, ::efl::eolian::EflIoPath__function_tag>*>(cxx_call_data);
        fw->_cxx_func( ::efl::eolian::out_traits<  ::efl::eina::range_array< ::efl::eina::string_view>>::type(paths));
    }
};
} }
#endif

#ifndef EFLIODIRECTINFO_DEFINED
#define EFLIODIRECTINFO_DEFINED
namespace efl { namespace eolian {
template <typename F>
struct function_wrapper<EflIoDirectInfo, F, struct EflIoDirectInfo__function_tag> {
    function_wrapper(F cxx_func) : _cxx_func(cxx_func) {}
    void *data_to_c() { return static_cast<void *>(this); }
    EflIoDirectInfo func_to_c() const { return &caller; }
    Eina_Free_Cb free_to_c() const { return &deleter; }
private:
    F _cxx_func;
    static void deleter(void *data) {
        delete static_cast<function_wrapper<EflIoDirectInfo, F, ::efl::eolian::EflIoDirectInfo__function_tag>*>(data);
    }
    static void caller(void *cxx_call_data, Eina_Array * entries) {
        auto fw = static_cast<function_wrapper<EflIoDirectInfo, F, ::efl::eolian::EflIoDirectInfo__function_tag>*>(cxx_call_data);
        fw->_cxx_func( ::efl::eolian::out_traits<  ::efl::eina::range_array<Eina_File_Direct_Info>>::type(entries));
    }
};
} }
#endif


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace io { 
struct Manager {
    static Efl_Class const* _eo_class()
    {
        return EFL_IO_MANAGER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Manager *>(this))); }
    operator ::efl::io::Manager() const;
    operator ::efl::io::Manager&();
    operator ::efl::io::Manager const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Manager,  ::efl::Loop_Consumer,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Manager const ,  ::efl::Loop_Consumer const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace io { 
struct Manager : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Loop_Consumer)
    , EO_CXX_INHERIT(::efl::Object)
{
    explicit Manager( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Manager(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Manager() = default;
    Manager(Manager const&) = default;
    Manager(Manager&&) = default;
    Manager& operator=(Manager const&) = default;
    Manager& operator=(Manager&&) = default;
    template <typename Derived>
    Manager(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Manager, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    Manager( ::efl::eo::instantiate_t)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class());
    }
    template <typename T>
    explicit Manager( ::efl::eo::instantiate_t, T&& parent, typename std::enable_if< ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class());
    }
    template <typename F> Manager( ::efl::eo::instantiate_t, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Manager >::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, ::efl::eo::concrete{nullptr}, _eo_class(), *this, std::forward<F>(f));
    }
    template <typename T, typename F> Manager(  ::efl::eo::instantiate_t, T&& parent, F&& f, typename ::std::enable_if< ::efl::eolian::is_constructor_lambda<F, Manager >::value && ::efl::eo::is_eolian_object<T>::value>::type* = 0)
    {
        ::efl::eolian::do_eo_add( ::efl::eo::concrete::_eo_raw, parent, _eo_class(), *this, std::forward<F>(f));
    }

    static Efl_Class const* _eo_class()
    {
        return EFL_IO_MANAGER_CLASS;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Manager *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Manager,  ::efl::Loop_Consumer,  ::efl::Object> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Manager const ,  ::efl::Loop_Consumer const ,  ::efl::Object const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Manager> _get_wref() const { return ::efl::eo::wref<Manager>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Manager* operator->() const { return this; }
    Manager* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Manager const& lhs, Manager const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Manager const& lhs, Manager const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Manager) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Manager>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
