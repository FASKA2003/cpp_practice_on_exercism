#include "hamming.h"
#include <stdexcept>

namespace hamming {
int compute(std::string dna1, std::string dna2) {
  if (dna1.length() != dna2.length()) {
    throw std::domain_error("Different size of strings.");
  }
  int counter = 0;
  for (int i = 0; i < dna1.length(); i++) {
    if (dna1[i] != dna2[i]) {
      counter++;
    }
  }
  return counter;
}
} // namespace hamming
