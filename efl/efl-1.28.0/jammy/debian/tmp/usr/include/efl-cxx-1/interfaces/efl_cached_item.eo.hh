#ifndef EFL_CACHED_ITEM_EO_HH
#define EFL_CACHED_ITEM_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_cached_item.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#ifndef EFL_CACHED_ITEM_FWD_GUARD
#define EFL_CACHED_ITEM_FWD_GUARD
namespace efl { namespace cached { 
struct Item;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::cached::Item> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::cached::Item&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::cached::Item const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::cached::Item const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { namespace cached { 
struct Item {
#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< unsigned int>::type memory_size_get() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CACHED_ITEM_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Item *>(this))); }
    operator ::efl::cached::Item() const;
    operator ::efl::cached::Item&();
    operator ::efl::cached::Item const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Item> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Item const > operator&() const { return {this}; }
    /// @endcond
};
} } 
}
namespace efl { namespace cached { 
struct Item : private ::efl::eo::concrete
{
    explicit Item( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Item(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Item() = default;
    Item(Item const&) = default;
    Item(Item&&) = default;
    Item& operator=(Item const&) = default;
    Item& operator=(Item&&) = default;
    template <typename Derived>
    Item(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Item, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

#ifdef EFL_BETA_API_SUPPORT
    ::efl::eolian::return_traits< unsigned int>::type memory_size_get() const;
#endif
    static Efl_Class const* _eo_class()
    {
        return EFL_CACHED_ITEM_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Item *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Item> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Item const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Item> _get_wref() const { return ::efl::eo::wref<Item>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Item* operator->() const { return this; }
    Item* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Item const& lhs, Item const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Item const& lhs, Item const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Item) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Item>::value, "");
} } 

#pragma GCC diagnostic pop

#endif
