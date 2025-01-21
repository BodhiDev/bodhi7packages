#ifndef EFL_GFX_FRAME_CONTROLLER_EO_HH
#define EFL_GFX_FRAME_CONTROLLER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_frame_controller.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_GFX_FRAME_CONTROLLER_FWD_GUARD
#define EFL_GFX_FRAME_CONTROLLER_FWD_GUARD
namespace efl { namespace gfx { 
struct Frame_Controller;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Frame_Controller> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Frame_Controller&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Frame_Controller const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Frame_Controller const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Frame_Controller {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type animated_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type frame_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type frame_set( ::efl::eolian::in_traits<int>::type frame_index) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type frame_count_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Gfx_Frame_Controller_Loop_Hint>::type loop_type_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type loop_count_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type frame_duration_get( ::efl::eolian::in_traits<int>::type start_frame,  ::efl::eolian::in_traits<int>::type frame_num) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type sector_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::out_traits<int>::type startframe,  ::efl::eolian::out_traits<int>::type endframe) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type sector_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<int>::type startframe,  ::efl::eolian::in_traits<int>::type endframe) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_FRAME_CONTROLLER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Frame_Controller *>(this))); }
    operator ::efl::gfx::Frame_Controller() const;
    operator ::efl::gfx::Frame_Controller&();
    operator ::efl::gfx::Frame_Controller const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Frame_Controller> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Frame_Controller const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Frame_Controller : private ::efl::eo::concrete
{
    explicit Frame_Controller( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Frame_Controller(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Frame_Controller() = default;
    Frame_Controller(Frame_Controller const&) = default;
    Frame_Controller(Frame_Controller&&) = default;
    Frame_Controller& operator=(Frame_Controller const&) = default;
    Frame_Controller& operator=(Frame_Controller&&) = default;
    template <typename Derived>
    Frame_Controller(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Frame_Controller, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type animated_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type frame_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type frame_set( ::efl::eolian::in_traits<int>::type frame_index) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type frame_count_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Gfx_Frame_Controller_Loop_Hint>::type loop_type_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type loop_count_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<double>::type frame_duration_get( ::efl::eolian::in_traits<int>::type start_frame,  ::efl::eolian::in_traits<int>::type frame_num) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type sector_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::out_traits<int>::type startframe,  ::efl::eolian::out_traits<int>::type endframe) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type sector_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type name,  ::efl::eolian::in_traits<int>::type startframe,  ::efl::eolian::in_traits<int>::type endframe) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_FRAME_CONTROLLER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Frame_Controller *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Frame_Controller> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Frame_Controller const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Frame_Controller> _get_wref() const { return ::efl::eo::wref<Frame_Controller>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Frame_Controller* operator->() const { return this; }
    Frame_Controller* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Frame_Controller const& lhs, Frame_Controller const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Frame_Controller const& lhs, Frame_Controller const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Frame_Controller) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Frame_Controller>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
