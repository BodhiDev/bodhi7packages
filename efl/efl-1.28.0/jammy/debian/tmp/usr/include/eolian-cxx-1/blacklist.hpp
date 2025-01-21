/*
 * Copyright 2019 by its authors. See AUTHORS.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef EOLIAN_CXX_BLACKLIST_HH
#define EOLIAN_CXX_BLACKLIST_HH

#include <algorithm>
#include "grammar/klass_def.hpp"

namespace efl { namespace eolian { namespace grammar {

namespace blacklist {

bool is_blacklisted(attributes::type_def const& t);

struct type_blacklisted_visitor
{
   typedef type_blacklisted_visitor visitor_type;
   typedef bool result_type;

   bool operator()(attributes::regular_type_def const&) const
   {
      return false;
   }
   bool operator()(attributes::klass_name const&) const
   {
      return false;
   }
   bool operator()(attributes::complex_type_def const& c) const
   {
       if (c.outer.base_type == "future")
         return true;

       return std::any_of(c.subtypes.begin(), c.subtypes.end(), is_blacklisted);
   }
};

bool is_blacklisted(attributes::type_def const& t)
{
  return t.original_type.visit(type_blacklisted_visitor{});
}

bool is_blacklisted(attributes::function_def const& f)
{
  if (is_blacklisted(f.return_type))
    return true;

  return std::any_of(f.parameters.cbegin(), f.parameters.cend(), [](attributes::parameter_def const& p) { return is_blacklisted(p.type); });
}


} // namespace grammar
} } } // namespace efl / eolian / grammar



#endif
