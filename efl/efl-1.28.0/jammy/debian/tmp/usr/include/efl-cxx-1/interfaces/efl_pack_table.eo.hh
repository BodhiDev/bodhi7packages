#ifndef EFL_PACK_TABLE_EO_HH
#define EFL_PACK_TABLE_EO_HH
#include <Eo.h>

extern "C" {
#include "efl_container.eo.h"
#include "efl_gfx_entity.eo.h"
#include "efl_pack.eo.h"
#include "efl_pack_table.eo.h"
}
#include <Eina.hh>
#include <Eo.hh>
#include "efl_container.eo.hh"
#include "efl_gfx_entity.eo.hh"
#include "efl_pack.eo.hh"
#ifndef EFL_PACK_TABLE_FWD_GUARD
#define EFL_PACK_TABLE_FWD_GUARD
namespace efl { 
struct Pack_Table;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack_Table> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack_Table&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack_Table const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack_Table const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_CONTAINER_FWD_GUARD
#define EFL_CONTAINER_FWD_GUARD
namespace efl { 
struct Container;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Container const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_GFX_ENTITY_FWD_GUARD
#define EFL_GFX_ENTITY_FWD_GUARD
namespace efl { namespace gfx { 
struct Entity;
} } 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::gfx::Entity const&> : ::std::true_type {}; } }
#endif
#ifndef EFL_PACK_FWD_GUARD
#define EFL_PACK_FWD_GUARD
namespace efl { 
struct Pack;
} 
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack&> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack const> : ::std::true_type {}; } }
namespace efl { namespace eo { template<> struct is_eolian_object< ::efl::Pack const&> : ::std::true_type {}; } }
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"


namespace eo_cxx {
namespace efl { 
struct Pack_Table {
    ::efl::eolian::return_traits<bool>::type table_cell_column_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::out_traits<int>::type col,  ::efl::eolian::out_traits<int>::type colspan) const;
    ::efl::eolian::return_traits<void>::type table_cell_column_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type col,  ::efl::eolian::in_traits<int>::type colspan) const;
    ::efl::eolian::return_traits<bool>::type table_cell_row_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::out_traits<int>::type row,  ::efl::eolian::out_traits<int>::type rowspan) const;
    ::efl::eolian::return_traits<void>::type table_cell_row_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type row,  ::efl::eolian::in_traits<int>::type rowspan) const;
    ::efl::eolian::return_traits<void>::type table_size_get( ::efl::eolian::out_traits<int>::type cols,  ::efl::eolian::out_traits<int>::type rows) const;
    ::efl::eolian::return_traits<void>::type table_size_set( ::efl::eolian::in_traits<int>::type cols,  ::efl::eolian::in_traits<int>::type rows) const;
    ::efl::eolian::return_traits<int>::type table_columns_get() const;
    ::efl::eolian::return_traits<void>::type table_columns_set( ::efl::eolian::in_traits<int>::type cols) const;
    ::efl::eolian::return_traits<int>::type table_rows_get() const;
    ::efl::eolian::return_traits<void>::type table_rows_set( ::efl::eolian::in_traits<int>::type rows) const;
    ::efl::eolian::return_traits<bool>::type pack_table( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type col,  ::efl::eolian::in_traits<int>::type row,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type colspan,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type rowspan) const;
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type table_contents_get( ::efl::eolian::in_traits<int>::type col,  ::efl::eolian::in_traits<int>::type row,  ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type below) const;
    ::efl::eolian::return_traits< ::efl::gfx::Entity>::type table_content_get( ::efl::eolian::in_traits<int>::type col,  ::efl::eolian::in_traits<int>::type row) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_PACK_TABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Pack_Table *>(this))); }
    operator ::efl::Pack_Table() const;
    operator ::efl::Pack_Table&();
    operator ::efl::Pack_Table const&() const;
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Pack_Table,  ::efl::Container,  ::efl::Pack> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Pack_Table const ,  ::efl::Container const ,  ::efl::Pack const > operator&() const { return {this}; }
    /// @endcond
};
} 
}
namespace efl { 
struct Pack_Table : private ::efl::eo::concrete
    , EO_CXX_INHERIT(::efl::Container)
    , EO_CXX_INHERIT(::efl::Pack)
{
    explicit Pack_Table( ::Eo* eo)
        : ::efl::eo::concrete(eo) {}
    Pack_Table(std::nullptr_t)
        : ::efl::eo::concrete(nullptr) {}
    explicit Pack_Table() = default;
    Pack_Table(Pack_Table const&) = default;
    Pack_Table(Pack_Table&&) = default;
    Pack_Table& operator=(Pack_Table const&) = default;
    Pack_Table& operator=(Pack_Table&&) = default;
    template <typename Derived>
    Pack_Table(Derived&& derived
        , typename std::enable_if<
            ::efl::eo::is_eolian_object<Derived>::value
             && std::is_base_of< Pack_Table, Derived>::value>::type* = 0)
            : ::efl::eo::concrete(derived._eo_ptr()) {}

    ::efl::eolian::return_traits<bool>::type table_cell_column_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::out_traits<int>::type col,  ::efl::eolian::out_traits<int>::type colspan) const;
    ::efl::eolian::return_traits<void>::type table_cell_column_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type col,  ::efl::eolian::in_traits<int>::type colspan) const;
    ::efl::eolian::return_traits<bool>::type table_cell_row_get( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::out_traits<int>::type row,  ::efl::eolian::out_traits<int>::type rowspan) const;
    ::efl::eolian::return_traits<void>::type table_cell_row_set( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type row,  ::efl::eolian::in_traits<int>::type rowspan) const;
    ::efl::eolian::return_traits<void>::type table_size_get( ::efl::eolian::out_traits<int>::type cols,  ::efl::eolian::out_traits<int>::type rows) const;
    ::efl::eolian::return_traits<void>::type table_size_set( ::efl::eolian::in_traits<int>::type cols,  ::efl::eolian::in_traits<int>::type rows) const;
    ::efl::eolian::return_traits<int>::type table_columns_get() const;
    ::efl::eolian::return_traits<void>::type table_columns_set( ::efl::eolian::in_traits<int>::type cols) const;
    ::efl::eolian::return_traits<int>::type table_rows_get() const;
    ::efl::eolian::return_traits<void>::type table_rows_set( ::efl::eolian::in_traits<int>::type rows) const;
    ::efl::eolian::return_traits<bool>::type pack_table( ::efl::eolian::in_traits< ::efl::gfx::Entity>::type subobj,  ::efl::eolian::in_traits<int>::type col,  ::efl::eolian::in_traits<int>::type row,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type colspan,  ::efl::eolian::in_traits< ::efl::eina::optional<int>>::type rowspan) const;
    ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type table_contents_get( ::efl::eolian::in_traits<int>::type col,  ::efl::eolian::in_traits<int>::type row,  ::efl::eolian::in_traits< ::efl::eina::optional<bool>>::type below) const;
    ::efl::eolian::return_traits< ::efl::gfx::Entity>::type table_content_get( ::efl::eolian::in_traits<int>::type col,  ::efl::eolian::in_traits<int>::type row) const;
    static Efl_Class const* _eo_class()
    {
        return EFL_PACK_TABLE_INTERFACE;
    }
    Eo* _eo_ptr() const { return *(reinterpret_cast<Eo **>(const_cast<Pack_Table *>(this))); }
    /// @cond LOCAL
     ::efl::eolian::address_of_operator<Pack_Table,  ::efl::Container,  ::efl::Pack> operator&() { return {this}; }
     ::efl::eolian::address_of_operator<Pack_Table const ,  ::efl::Container const ,  ::efl::Pack const > operator&() const { return {this}; }
    /// @endcond
    ::efl::eo::wref<Pack_Table> _get_wref() const { return ::efl::eo::wref<Pack_Table>(*this); }
    ::efl::eo::concrete const& _get_concrete() const { return *this; }
    ::efl::eo::concrete& _get_concrete() { return *this; }
    using ::efl::eo::concrete::_eo_ptr;
    using ::efl::eo::concrete::_release;
    using ::efl::eo::concrete::_reset;
    using ::efl::eo::concrete::_delete;
    using ::efl::eo::concrete::operator bool;
#ifdef EFL_CXXPERIMENTAL
    const Pack_Table* operator->() const { return this; }
    Pack_Table* operator->() { return this; }
    operator Eo*() const { return _eo_ptr(); }
#endif 
    friend bool operator==(Pack_Table const& lhs, Pack_Table const& rhs)
    { return lhs._get_concrete() == rhs._get_concrete(); }
    friend bool operator!=(Pack_Table const& lhs, Pack_Table const& rhs)
    { return !(lhs == rhs); }
};
static_assert(sizeof(Pack_Table) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<Pack_Table>::value, "");
} 

#pragma GCC diagnostic pop

#endif
