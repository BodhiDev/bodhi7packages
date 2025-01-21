#ifndef EFL_LOOP_CONSUMER_IMPL_HH
#define EFL_LOOP_CONSUMER_IMPL_HH

#include "efl_loop_consumer.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits< ::efl::Loop>::type Loop_Consumer::loop_get() const
{
     ::Efl_Loop* __return_value =  ::efl_loop_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Loop>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::std::unique_ptr<Eina_Promise, ::efl::eina::malloc_deleter>>::type Loop_Consumer::promise_new() const
{
    Eina_Promise * __return_value =  ::efl_loop_promise_new(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::std::unique_ptr<Eina_Promise, ::efl::eina::malloc_deleter>>::type>(__return_value);
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits< ::efl::Loop>::type Loop_Consumer::loop_get() const
{
     ::Efl_Loop* __return_value =  ::efl_loop_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::efl::Loop>::type>(__return_value);
}
inline ::efl::eolian::return_traits< ::std::unique_ptr<Eina_Promise, ::efl::eina::malloc_deleter>>::type Loop_Consumer::promise_new() const
{
    Eina_Promise * __return_value =  ::efl_loop_promise_new(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits< ::std::unique_ptr<Eina_Promise, ::efl::eina::malloc_deleter>>::type>(__return_value);
}
inline efl::Loop_Consumer::operator ::efl::Loop_Consumer() const { return *static_cast< ::efl::Loop_Consumer const*>(static_cast<void const*>(this)); }
inline efl::Loop_Consumer::operator ::efl::Loop_Consumer&() { return *static_cast< ::efl::Loop_Consumer*>(static_cast<void*>(this)); }
inline efl::Loop_Consumer::operator ::efl::Loop_Consumer const&() const { return *static_cast< ::efl::Loop_Consumer const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
