#include "protein_translation.h"

std::unordered_map<std::string, std::string> codonToProtein = {
    {"AUG", "Methionine"}, {"UUU", "Phenylalanine"}, {"UUC", "Phenylalanine"},
    {"UUA", "Leucine"},    {"UUG", "Leucine"},       {"UCU", "Serine"},
    {"UCC", "Serine"},     {"UCA", "Serine"},        {"UCG", "Serine"},
    {"UAU", "Tyrosine"},   {"UAC", "Tyrosine"},      {"UGU", "Cysteine"},
    {"UGC", "Cysteine"},   {"UGG", "Tryptophan"},    {"UAA", "STOP"},
    {"UAG", "STOP"},       {"UGA", "STOP"}};

namespace protein_translation {
std::vector<std::string> proteins(std::string RNA) {
  std::vector<std::string> result;
  for (int i = 0; i < RNA.length(); i += 3) {
    std::string codon = RNA.substr(i, 3);
    auto it = codonToProtein.find(codon);
    if (it != codonToProtein.end()) {
      if (it->second == "STOP") {
        break;
      }
      result.push_back(it->second);
    }
  }
  return result;
}
} // namespace protein_translation
