#include "anagram.h"
#include <boost/algorithm/string/case_conv.hpp>
#include <iostream>

namespace anagram
{
  std::vector<std::string> anagram::matches(std::vector<std::string> const& candidates) {
    std::vector<std::string> matches;

    for(auto candidate : candidates) {
      std::string key = boost::to_lower_copy(target);
      std::string cand = boost::to_lower_copy(candidate);

      bool match = true;

      if (cand.size() == key.size() && cand != key) {
        for (auto ch : cand) {
          std::size_t found = key.find(ch);

          if (found == std::string::npos) {
            match = false;
            break;
          } else {
            key.erase(found, 1);
          }
        }

        if (match && key.size() == 0) {
          matches.push_back(candidate);
        }
      }
    }

    return matches;
  }
}

