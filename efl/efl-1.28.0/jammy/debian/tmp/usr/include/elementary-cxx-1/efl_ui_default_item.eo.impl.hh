#ifndef EFL_UI_DEFAULT_ITEM_IMPL_HH
#define EFL_UI_DEFAULT_ITEM_IMPL_HH

#include "efl_ui_default_item.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Layout_Part_Content>::type Default_Item::extra() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "extra");
    return ::efl::ui::Layout_Part_Content{__return_value};
}
#endif
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Layout_Part_Content>::type Default_Item::icon() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "icon");
    return ::efl::ui::Layout_Part_Content{__return_value};
}
#endif
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Layout_Part_Text>::type Default_Item::text() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "text");
    return ::efl::ui::Layout_Part_Text{__return_value};
}
#endif
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Layout_Part_Content>::type Default_Item::extra() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "extra");
    return ::efl::ui::Layout_Part_Content{__return_value};
}
#endif
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Layout_Part_Content>::type Default_Item::icon() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "icon");
    return ::efl::ui::Layout_Part_Content{__return_value};
}
#endif
#ifdef EFL_CXXPERIMENTAL
::efl::eolian::return_traits<::efl::ui::Layout_Part_Text>::type Default_Item::text() const
{
    ::Eo *__return_value = ::efl_part_get(this->_eo_ptr(), "text");
    return ::efl::ui::Layout_Part_Text{__return_value};
}
#endif
inline efl::ui::Default_Item::operator ::efl::ui::Default_Item() const { return *static_cast< ::efl::ui::Default_Item const*>(static_cast<void const*>(this)); }
inline efl::ui::Default_Item::operator ::efl::ui::Default_Item&() { return *static_cast< ::efl::ui::Default_Item*>(static_cast<void*>(this)); }
inline efl::ui::Default_Item::operator ::efl::ui::Default_Item const&() const { return *static_cast< ::efl::ui::Default_Item const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
