#ifndef EFL_UI_POSITION_MANAGER_DATA_ACCESS_V1_EO_HH
#define EFL_UI_POSITION_MANAGER_DATA_ACCESS_V1_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_ui_position_manager_data_access_v1.eo.h"
#include "efl_ui_win.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_ui_win.eo.hh"
#ifndef EFL_UI_POSITION_MANAGER_DATA_ACCESS_V1_FWD_GUARD
#define EFL_UI_POSITION_MANAGER_DATA_ACCESS_V1_FWD_GUARD
namespace efl { namespace ui { namespace position_manager { 
struct Data_Access_V1;
} } } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Data_Access_V1> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Data_Access_V1&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Data_Access_V1 const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::position_manager::Data_Access_V1 const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_UI_WIN_FWD_GUARD
#define EFL_UI_WIN_FWD_GUARD
namespace efl { namespace ui { 
struct Win;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Win> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Win&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Win const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::ui::Win const&> : ::std::true_type {}; } }
#endif

#ifndef EFL_UI_POSITION_MANAGER_OBJECT_BATCH_CALLBACK_DEFINED
#define EFL_UI_POSITION_MANAGER_OBJECT_BATCH_CALLBACK_DEFINED
namespace efl { namespace eolian {
template <typename F>
struct function_wrapper<Efl_Ui_Position_Manager_Object_Batch_Callback, F, struct Efl_Ui_Position_Manager_Object_Batch_Callback__function_tag> {
    function_wrapper(F cxx_func) : _cxx_func(cxx_func) {}
    void *data_to_c() { return static_cast<void *>(this); }
    Efl_Ui_Position_Manager_Object_Batch_Callback func_to_c() const { return &caller; }
    Eina_Free_Cb free_to_c() const { return &deleter; }
private:
    F _cxx_func;
    static void deleter(void *data) {
        delete static_cast<function_wrapper<Efl_Ui_Position_Manager_Object_Batch_Callback, F, ::efl::eolian::Efl_Ui_Position_Manager_Object_Batch_Callback__function_tag>*>(data);
    }
    static Efl_Ui_Position_Manager_Object_Batch_Result caller(void *cxx_call_data, Efl_Ui_Position_Manager_Request_Range range, Eina_Rw_Slice memory) {
        auto fw = static_cast<function_wrapper<Efl_Ui_Position_Manager_Object_Batch_Callback, F, ::efl::eolian::Efl_Ui_Position_Manager_Object_Batch_Callback__function_tag>*>(cxx_call_data);
        auto __return_value =
        fw->_cxx_func( ::efl::eolian::out_traits<Efl_Ui_Position_Manager_Request_Range>::type(range),  ::efl::eolian::out_traits< Eina_Rw_Slice>::type(memory));
        return ::efl::eolian::convert_to_c<Efl_Ui_Position_Manager_Object_Batch_Result>(__return_value);
    }
};
} }
#endif

#ifndef EFL_UI_POSITION_MANAGER_SIZE_BATCH_CALLBACK_DEFINED
#define EFL_UI_POSITION_MANAGER_SIZE_BATCH_CALLBACK_DEFINED
namespace efl { namespace eolian {
template <typename F>
struct function_wrapper<Efl_Ui_Position_Manager_Size_Batch_Callback, F, struct Efl_Ui_Position_Manager_Size_Batch_Callback__function_tag> {
    function_wrapper(F cxx_func) : _cxx_func(cxx_func) {}
    void *data_to_c() { return static_cast<void *>(this); }
    Efl_Ui_Position_Manager_Size_Batch_Callback func_to_c() const { return &caller; }
    Eina_Free_Cb free_to_c() const { return &deleter; }
private:
    F _cxx_func;
    static void deleter(void *data) {
        delete static_cast<function_wrapper<Efl_Ui_Position_Manager_Size_Batch_Callback, F, ::efl::eolian::Efl_Ui_Position_Manager_Size_Batch_Callback__function_tag>*>(data);
    }
    static Efl_Ui_Position_Manager_Size_Batch_Result caller(void *cxx_call_data, Efl_Ui_Position_Manager_Size_Call_Config conf, Eina_Rw_Slice memory) {
        auto fw = static_cast<function_wrapper<Efl_Ui_Position_Manager_Size_Batch_Callback, F, ::efl::eolian::Efl_Ui_Position_Manager_Size_Batch_Callback__function_tag>*>(cxx_call_data);
        auto __return_value =
        fw->_cxx_func( ::efl::eolian::out_traits<Efl_Ui_Position_Manager_Size_Call_Config>::type(conf),  ::efl::eolian::out_traits< Eina_Rw_Slice>::type(memory));
        return ::efl::eolian::convert_to_c<Efl_Ui_Position_Manager_Size_Batch_Result>(__return_value);
    }
};
} }
#endif


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace ui { namespace position_manager { 
struct Data_Access_V1 {
#ifdef EFL_BETA_API_SUPPORT
template <typename F, typename G>     ::efl::eolian::return_traits<void>::type data_access_set( ::efl::eolian::in_traits< ::efl::ui::Win>::type canvas, F obj_access, F size_access,  ::efl::eolian::in_traits<int>::type size) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_POSITION_MANAGER_DATA_ACCESS_V1_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Data_Access_V1 *>(this))); }
    operator ::efl::ui::position_manager::Data_Access_V1() const;
    operator ::efl::ui::position_manager::Data_Access_V1&();
    operator ::efl::ui::position_manager::Data_Access_V1 const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Data_Access_V1> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Data_Access_V1 const > operator&() const { return {this}; }
    /// @endcond
};
} } } 
}
namespace efl { namespace ui { namespace position_manager { 
struct Data_Access_V1 : private ::efl::eo::concrete
{
    explicit Data_Access_V1( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Data_Access_V1(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Data_Access_V1() = default;
    Data_Access_V1(Data_Access_V1 const&) = default;
    Data_Access_V1(Data_Access_V1&&) = default;
    Data_Access_V1& operator=(Data_Access_V1 const&) = default;
    Data_Access_V1& operator=(Data_Access_V1&&) = default;
    template <typename Derived>
    Data_Access_V1(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Data_Access_V1, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
template <typename F, typename G>     ::efl::eolian::return_traits<void>::type data_access_set( ::efl::eolian::in_traits< ::efl::ui::Win>::type canvas, F obj_access, F size_access,  ::efl::eolian::in_traits<int>::type size) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_UI_POSITION_MANAGER_DATA_ACCESS_V1_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Data_Access_V1 *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Data_Access_V1> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Data_Access_V1 const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Data_Access_V1> _get_wref() const { return ::efl::eo::wref<Data_Access_V1>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Data_Access_V1* operator->() const { return this; }
    Data_Access_V1* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Data_Access_V1 const& lhs, Data_Access_V1 const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Data_Access_V1 const& lhs, Data_Access_V1 const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Data_Access_V1) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Data_Access_V1>::value, "");
} } } 

#pragma GCC diagnostic pop

#endif
