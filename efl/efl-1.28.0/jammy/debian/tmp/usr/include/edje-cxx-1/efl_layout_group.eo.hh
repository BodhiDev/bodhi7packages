#ifndef EFL_LAYOUT_GROUP_EO_HH
#define EFL_LAYOUT_GROUP_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_layout_group.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_LAYOUT_GROUP_FWD_GUARD
#define EFL_LAYOUT_GROUP_FWD_GUARD
namespace efl { namespace layout { 
struct Group;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Group> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Group&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Group const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::layout::Group const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace layout { 
struct Group {
    ::efl::eolian::return_traits<Eina_Size2D>::type group_size_min_get() const;
    ::efl::eolian::return_traits<Eina_Size2D>::type group_size_max_get() const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type group_data_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const;
    ::efl::eolian::return_traits<bool>::type part_exist_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type part) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_LAYOUT_GROUP_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Group *>(this))); }
    operator ::efl::layout::Group() const;
    operator ::efl::layout::Group&();
    operator ::efl::layout::Group const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Group> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Group const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace layout { 
struct Group : private ::efl::eo::concrete
{
    explicit Group( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Group(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Group() = default;
    Group(Group const&) = default;
    Group(Group&&) = default;
    Group& operator=(Group const&) = default;
    Group& operator=(Group&&) = default;
    template <typename Derived>
    Group(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Group, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<Eina_Size2D>::type group_size_min_get() const;
    ::efl::eolian::return_traits<Eina_Size2D>::type group_size_max_get() const;
    ::efl::eolian::return_traits< ::efl::eina::string_view>::type group_data_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type key) const;
    ::efl::eolian::return_traits<bool>::type part_exist_get( ::efl::eolian::in_traits< ::efl::eina::string_view>::type part) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_LAYOUT_GROUP_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Group *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Group> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Group const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Group> _get_wref() const { return ::efl::eo::wref<Group>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Group* operator->() const { return this; }
    Group* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Group const& lhs, Group const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Group const& lhs, Group const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Group) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Group>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
