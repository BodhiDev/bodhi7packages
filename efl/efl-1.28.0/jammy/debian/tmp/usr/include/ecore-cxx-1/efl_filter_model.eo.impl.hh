#ifndef EFL_FILTER_MODEL_IMPL_HH
#define EFL_FILTER_MODEL_IMPL_HH

#include "efl_filter_model.eo.hh"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"

namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
template <typename F>
inline ::efl::eolian::return_traits<void>::type Filter_Model::filter_set(F filter) const
{
    auto fw_filter = new ::efl::eolian::function_wrapper<EflFilterModel, F, ::efl::eolian::EflFilterModel__function_tag>(filter);
     ::efl_filter_model_filter_set(_eo_ptr(),
        fw_filter->data_to_c(), fw_filter->func_to_c(), fw_filter->free_to_c());
}
#endif
} 
namespace eo_cxx {
namespace efl { 
#ifdef EFL_BETA_API_SUPPORT
template <typename F>
inline ::efl::eolian::return_traits<void>::type Filter_Model::filter_set(F filter) const
{
    auto fw_filter = new ::efl::eolian::function_wrapper<EflFilterModel, F, ::efl::eolian::EflFilterModel__function_tag>(filter);
     ::efl_filter_model_filter_set(_eo_ptr(),
        fw_filter->data_to_c(), fw_filter->func_to_c(), fw_filter->free_to_c());
}
#endif
inline efl::Filter_Model::operator ::efl::Filter_Model() const { return *static_cast< ::efl::Filter_Model const*>(static_cast<void const*>(this)); }
inline efl::Filter_Model::operator ::efl::Filter_Model&() { return *static_cast< ::efl::Filter_Model*>(static_cast<void*>(this)); }
inline efl::Filter_Model::operator ::efl::Filter_Model const&() const { return *static_cast< ::efl::Filter_Model const*>(static_cast<void const*>(this)); }
} }

#pragma GCC diagnostic pop

#endif
