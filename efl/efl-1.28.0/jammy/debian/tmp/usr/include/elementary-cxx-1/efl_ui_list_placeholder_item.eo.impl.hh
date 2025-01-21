#ifndef EFL_UI_LIST_PLACEHOLDER_ITEM_IMPL_HH
#define EFL_UI_LIST_PLACEHOLDER_ITEM_IMPL_HH

#include "efl_ui_list_placeholder_item.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Layout_Part_Content>::type List_Placeholder_Item::content() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "content");
    return ::efl::ui::Layout_Part_Content{__return_value};
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Layout_Part_Content>::type List_Placeholder_Item::content() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "content");
    return ::efl::ui::Layout_Part_Content{__return_value};
}
#endif
inline efl::ui::List_Placeholder_Item::operator ::efl::ui::List_Placeholder_Item() const { return *static_cast< ::efl::ui::List_Placeholder_Item const*>(static_cast<void const*>(this)); }
inline efl::ui::List_Placeholder_Item::operator ::efl::ui::List_Placeholder_Item&() { return *static_cast< ::efl::ui::List_Placeholder_Item*>(static_cast<void*>(this)); }
inline efl::ui::List_Placeholder_Item::operator ::efl::ui::List_Placeholder_Item const&() const { return *static_cast< ::efl::ui::List_Placeholder_Item const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
