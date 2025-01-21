#ifndef EFL_FILE_EO_HH
#define EFL_FILE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_file.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_FILE_FWD_GUARD
#define EFL_FILE_FWD_GUARD
namespace efl { 
struct File;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::File> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::File&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::File const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::File const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct File {
    ::efl::eolian::return_traits<const Eina_File*>::type mmap_get() const;
    ::efl::eolian::return_traits<Eina_Error>::type mmap_set( ::efl::eolian::in_traits<const Eina_File*>::type f) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type file_get() const;
    ::efl::eolian::return_traits<Eina_Error>::type file_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type file) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type key_get() const;
    ::efl::eolian::return_traits<void>::type key_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const;
    ::efl::eolian::return_traits<bool>::type loaded_get() const;
    ::efl::eolian::return_traits<Eina_Error>::type load() const;
    ::efl::eolian::return_traits<void>::type unload() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_FILE_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<File *>(this))); }
    operator ::efl::File() const;
    operator ::efl::File&();
    operator ::efl::File const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<File> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<File const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct File : private ::efl::eo::concrete
{
    explicit File( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    File(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit File() = default;
    File(File const&) = default;
    File(File&&) = default;
    File& operator=(File const&) = default;
    File& operator=(File&&) = default;
    template <typename Derived>
    File(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< File, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<const Eina_File*>::type mmap_get() const;
    ::efl::eolian::return_traits<Eina_Error>::type mmap_set( ::efl::eolian::in_traits<const Eina_File*>::type f) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type file_get() const;
    ::efl::eolian::return_traits<Eina_Error>::type file_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type file) const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type key_get() const;
    ::efl::eolian::return_traits<void>::type key_set( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const;
    ::efl::eolian::return_traits<bool>::type loaded_get() const;
    ::efl::eolian::return_traits<Eina_Error>::type load() const;
    ::efl::eolian::return_traits<void>::type unload() const;
    static Efl_Class const* _eo_class()
    {
        return EFL_FILE_MIXIN;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<File *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<File> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<File const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<File> _get_wref() const { return ::efl::eo::wref<File>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const File* operator->() const { return this; }
    File* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(File const& lhs, File const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(File const& lhs, File const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(File) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<File>::value, "");
} 

#pragma GCC diagnostic pop

#endif
