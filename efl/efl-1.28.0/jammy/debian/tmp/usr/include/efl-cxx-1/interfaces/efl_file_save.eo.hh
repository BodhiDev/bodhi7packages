#ifndef EFL_FILE_SAVE_EO_HH
#define EFL_FILE_SAVE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_file_save.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_FILE_SAVE_FWD_GUARD
#define EFL_FILE_SAVE_FWD_GUARD
namespace efl { 
struct File_Save;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::File_Save> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::File_Save&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::File_Save const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::File_Save const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct File_Save {
    ::efl::eolian::return_traits<bool>::type save( ::efl::eolian::in_traits< ::efl::eina::string_view>::type file,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits<const Efl_File_Save_Info *>::type info) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_FILE_SAVE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<File_Save *>(this))); }
    operator ::efl::File_Save() const;
    operator ::efl::File_Save&();
    operator ::efl::File_Save const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<File_Save> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<File_Save const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct File_Save : private ::efl::eo::concrete
{
    explicit File_Save( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    File_Save(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit File_Save() = default;
    File_Save(File_Save const&) = default;
    File_Save(File_Save&&) = default;
    File_Save& operator=(File_Save const&) = default;
    File_Save& operator=(File_Save&&) = default;
    template <typename Derived>
    File_Save(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< File_Save, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<bool>::type save( ::efl::eolian::in_traits< ::efl::eina::string_view>::type file,  ::efl::eolian::in_traits< ::efl::eina::string_view>::type key,  ::efl::eolian::in_traits<const Efl_File_Save_Info *>::type info) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_FILE_SAVE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<File_Save *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<File_Save> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<File_Save const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<File_Save> _get_wref() const { return ::efl::eo::wref<File_Save>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const File_Save* operator->() const { return this; }
    File_Save* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(File_Save const& lhs, File_Save const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(File_Save const& lhs, File_Save const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(File_Save) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<File_Save>::value, "");
} 

#pragma GCC diagnostic pop

#endif
