#ifndef EFL_GFX_BUFFER_EO_HH
#define EFL_GFX_BUFFER_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_gfx_buffer.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_GFX_BUFFER_FWD_GUARD
#define EFL_GFX_BUFFER_FWD_GUARD
namespace efl { namespace gfx { 
struct Buffer;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Buffer> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Buffer&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Buffer const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Buffer const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace gfx { 
struct Buffer {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Size2D>::type buffer_size_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type buffer_size_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Gfx_Colorspace>::type colorspace_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type alpha_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type alpha_set( ::efl::eolian::in_traits<bool>::type alpha) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type stride_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type buffer_borders_get( ::efl::eolian::out_traits< unsigned int>::type l,  ::efl::eolian::out_traits< unsigned int>::type r,  ::efl::eolian::out_traits< unsigned int>::type t,  ::efl::eolian::out_traits< unsigned int>::type b) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type buffer_update_add( ::efl::eolian::in_traits< ::efl::eina::optional<const Eina_Rect *>>::type region) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Rw_Slice>::type buffer_map( ::efl::eolian::in_traits<Efl_Gfx_Buffer_Access_Mode>::type mode,  ::efl::eolian::in_traits< ::efl::eina::optional<const Eina_Rect *>>::type region,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Colorspace>>::type cspace,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type plane,  ::efl::eolian::out_traits<int*>::type stride) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type buffer_unmap( ::efl::eolian::in_traits<Eina_Rw_Slice>::type slice) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type buffer_copy_set( ::efl::eolian::in_traits<const Eina_Slice *>::type slice,  ::efl::eolian::in_traits<Eina_Size2D>::type size,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type stride,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Colorspace>>::type cspace,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type plane) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type buffer_managed_set( ::efl::eolian::in_traits<const Eina_Slice *>::type slice,  ::efl::eolian::in_traits<Eina_Size2D>::type size,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type stride,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Colorspace>>::type cspace,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type plane) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Slice>::type buffer_managed_get( ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type plane) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_BUFFER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Buffer *>(this))); }
    operator ::efl::gfx::Buffer() const;
    operator ::efl::gfx::Buffer&();
    operator ::efl::gfx::Buffer const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Buffer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Buffer const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace gfx { 
struct Buffer : private ::efl::eo::concrete
{
    explicit Buffer( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Buffer(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Buffer() = default;
    Buffer(Buffer const&) = default;
    Buffer(Buffer&&) = default;
    Buffer& operator=(Buffer const&) = default;
    Buffer& operator=(Buffer&&) = default;
    template <typename Derived>
    Buffer(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Buffer, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Size2D>::type buffer_size_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type buffer_size_set( ::efl::eolian::in_traits<Eina_Size2D>::type sz) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Efl_Gfx_Colorspace>::type colorspace_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type alpha_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type alpha_set( ::efl::eolian::in_traits<bool>::type alpha) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<int>::type stride_get() const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type buffer_borders_get( ::efl::eolian::out_traits< unsigned int>::type l,  ::efl::eolian::out_traits< unsigned int>::type r,  ::efl::eolian::out_traits< unsigned int>::type t,  ::efl::eolian::out_traits< unsigned int>::type b) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<void>::type buffer_update_add( ::efl::eolian::in_traits< ::efl::eina::optional<const Eina_Rect *>>::type region) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Rw_Slice>::type buffer_map( ::efl::eolian::in_traits<Efl_Gfx_Buffer_Access_Mode>::type mode,  ::efl::eolian::in_traits< ::efl::eina::optional<const Eina_Rect *>>::type region,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Colorspace>>::type cspace,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type plane,  ::efl::eolian::out_traits<int*>::type stride) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type buffer_unmap( ::efl::eolian::in_traits<Eina_Rw_Slice>::type slice) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type buffer_copy_set( ::efl::eolian::in_traits<const Eina_Slice *>::type slice,  ::efl::eolian::in_traits<Eina_Size2D>::type size,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type stride,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Colorspace>>::type cspace,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type plane) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<bool>::type buffer_managed_set( ::efl::eolian::in_traits<const Eina_Slice *>::type slice,  ::efl::eolian::in_traits<Eina_Size2D>::type size,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type stride,  ::efl::eolian::in_traits< ::efl::eina::optional<Efl_Gfx_Colorspace>>::type cspace,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type plane) const;
#endif
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits<Eina_Slice>::type buffer_managed_get( ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type plane) const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_GFX_BUFFER_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Buffer *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Buffer> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Buffer const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Buffer> _get_wref() const { return ::efl::eo::wref<Buffer>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Buffer* operator->() const { return this; }
    Buffer* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Buffer const& lhs, Buffer const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Buffer const& lhs, Buffer const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Buffer) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Buffer>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
