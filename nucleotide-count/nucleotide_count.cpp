#include "nucleotide_count.h"
#include <map>
#include <stdexcept>

namespace nucleotide_count {
std::map<char, int> count(std::string DNA) {
  std::map<char, int> result({{'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}});
  for (char ch : DNA) {
    if (ch == 'A') {
      result[ch]++;
    } else if (ch == 'C') {
      result[ch]++;
    } else if (ch == 'G') {
      result[ch]++;
    } else if (ch == 'T') {
      result[ch]++;
    } else {
      throw std::invalid_argument("Accept only A C G T.");
    }
  }
  return result;
}

} // namespace nucleotide_count
