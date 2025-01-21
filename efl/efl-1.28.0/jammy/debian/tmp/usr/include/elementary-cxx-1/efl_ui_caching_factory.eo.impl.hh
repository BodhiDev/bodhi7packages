#ifndef EFL_UI_CACHING_FACTORY_IMPL_HH
#define EFL_UI_CACHING_FACTORY_IMPL_HH

#include "efl_ui_caching_factory.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { namespace ui { 
inline ::efl::eolian::return_traits< unsigned int>::type Caching_Factory::memory_limit_get() const
{
    unsigned int __return_value =  ::efl_ui_caching_factory_memory_limit_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Caching_Factory::memory_limit_set( ::efl::eolian::in_traits< unsigned int>::type limit) const
{
     ::efl_ui_caching_factory_memory_limit_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(limit));
}
inline ::efl::eolian::return_traits< unsigned int>::type Caching_Factory::items_limit_get() const
{
    unsigned int __return_value =  ::efl_ui_caching_factory_items_limit_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Caching_Factory::items_limit_set( ::efl::eolian::in_traits< unsigned int>::type limit) const
{
     ::efl_ui_caching_factory_items_limit_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(limit));
}
} } 
namespace eo_cxx {
namespace efl { namespace ui { 
inline ::efl::eolian::return_traits< unsigned int>::type Caching_Factory::memory_limit_get() const
{
    unsigned int __return_value =  ::efl_ui_caching_factory_memory_limit_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Caching_Factory::memory_limit_set( ::efl::eolian::in_traits< unsigned int>::type limit) const
{
     ::efl_ui_caching_factory_memory_limit_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(limit));
}
inline ::efl::eolian::return_traits< unsigned int>::type Caching_Factory::items_limit_get() const
{
    unsigned int __return_value =  ::efl_ui_caching_factory_items_limit_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< unsigned int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Caching_Factory::items_limit_set( ::efl::eolian::in_traits< unsigned int>::type limit) const
{
     ::efl_ui_caching_factory_items_limit_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<unsigned int,  ::efl::eolian::in_traits< unsigned int>::type>(limit));
}
inline efl::ui::Caching_Factory::operator ::efl::ui::Caching_Factory() const { return *static_cast< ::efl::ui::Caching_Factory const*>(static_cast<void const*>(this)); }
inline efl::ui::Caching_Factory::operator ::efl::ui::Caching_Factory&() { return *static_cast< ::efl::ui::Caching_Factory*>(static_cast<void*>(this)); }
inline efl::ui::Caching_Factory::operator ::efl::ui::Caching_Factory const&() const { return *static_cast< ::efl::ui::Caching_Factory const*>(static_cast<void const*>(this)); }
} } }

#pragma GCC diagnostic pop

#endif
