#ifndef EFL_TASK_IMPL_HH
#define EFL_TASK_IMPL_HH

#include "efl_task.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
inline ::efl::eolian::return_traits<Efl_Task_Priority>::type Task::priority_get() const
{
    Efl_Task_Priority __return_value =  ::efl_task_priority_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Task_Priority>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Task::priority_set( ::efl::eolian::in_traits<Efl_Task_Priority>::type priority) const
{
     ::efl_task_priority_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Task_Priority,  ::efl::eolian::in_traits<Efl_Task_Priority>::type>(priority));
}
inline ::efl::eolian::return_traits<int>::type Task::exit_code_get() const
{
    int __return_value =  ::efl_task_exit_code_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Efl_Task_Flags>::type Task::flags_get() const
{
    Efl_Task_Flags __return_value =  ::efl_task_flags_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Task_Flags>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Task::flags_set( ::efl::eolian::in_traits<Efl_Task_Flags>::type flags) const
{
     ::efl_task_flags_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Task_Flags,  ::efl::eolian::in_traits<Efl_Task_Flags>::type>(flags));
}
inline ::efl::eolian::return_traits<bool>::type Task::run() const
{
    Eina_Bool __return_value =  ::efl_task_run(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Task::end() const
{
     ::efl_task_end(_eo_ptr());
}
} 
namespace eo_cxx {
namespace efl { 
inline ::efl::eolian::return_traits<Efl_Task_Priority>::type Task::priority_get() const
{
    Efl_Task_Priority __return_value =  ::efl_task_priority_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Task_Priority>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Task::priority_set( ::efl::eolian::in_traits<Efl_Task_Priority>::type priority) const
{
     ::efl_task_priority_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Task_Priority,  ::efl::eolian::in_traits<Efl_Task_Priority>::type>(priority));
}
inline ::efl::eolian::return_traits<int>::type Task::exit_code_get() const
{
    int __return_value =  ::efl_task_exit_code_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<int>::type>(__return_value);
}
inline ::efl::eolian::return_traits<Efl_Task_Flags>::type Task::flags_get() const
{
    Efl_Task_Flags __return_value =  ::efl_task_flags_get(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<Efl_Task_Flags>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Task::flags_set( ::efl::eolian::in_traits<Efl_Task_Flags>::type flags) const
{
     ::efl_task_flags_set(_eo_ptr(),
         ::efl::eolian::convert_to_c<Efl_Task_Flags,  ::efl::eolian::in_traits<Efl_Task_Flags>::type>(flags));
}
inline ::efl::eolian::return_traits<bool>::type Task::run() const
{
    Eina_Bool __return_value =  ::efl_task_run(_eo_ptr());
    return ::efl::eolian::convert_to_return< ::efl::eolian::return_traits<bool>::type>(__return_value);
}
inline ::efl::eolian::return_traits<void>::type Task::end() const
{
     ::efl_task_end(_eo_ptr());
}
inline efl::Task::operator ::efl::Task() const { return *static_cast< ::efl::Task const*>(static_cast<void const*>(this)); }
inline efl::Task::operator ::efl::Task&() { return *static_cast< ::efl::Task*>(static_cast<void*>(this)); }
inline efl::Task::operator ::efl::Task const&() const { return *static_cast< ::efl::Task const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
