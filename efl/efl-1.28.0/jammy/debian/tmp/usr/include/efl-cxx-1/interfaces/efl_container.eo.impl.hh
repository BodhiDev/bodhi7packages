#ifndef EFL_CONTAINER_IMPL_HH
#define EFL_CONTAINER_IMPL_HH

#include "efl_container.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type Container::content_iterate() const
{
    Eina_Iterator * __return_value =  ::efl_content_iterate(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type>(__return_value);
}
inline ::efl::eolian::return_traits<int>::type Container::content_count() const
{
    int __return_value =  ::efl_content_count(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type Container::content_iterate() const
{
    Eina_Iterator * __return_value =  ::efl_content_iterate(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::eina::iterator< ::efl::gfx::Entity>>::type>(__return_value);
}
inline ::efl::eolian::return_traits<int>::type Container::content_count() const
{
    int __return_value =  ::efl_content_count(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline efl::Container::operator ::efl::Container() const { return *static_cast< ::efl::Container const*>(static_cast<void const*>(this)); }
inline efl::Container::operator ::efl::Container&() { return *static_cast< ::efl::Container*>(static_cast<void*>(this)); }
inline efl::Container::operator ::efl::Container const&() const { return *static_cast< ::efl::Container const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
