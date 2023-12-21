#include "allergies.h"
#include <string>
std::string allergies_table[8] = {"eggs",         "peanuts",  "shellfish",
                                  "strawberries", "tomatoes", "chocolate",
                                  "pollen",       "cats"};

namespace allergies {

allergy_test::allergy_test(int score_N) { this->score = score_N; }
std::unordered_set<std::string> allergy_test::get_allergies() {
  std::unordered_set<std::string> result;
  for (int i = 0; i < 8; i++) {
    if ((score >> i) & 1) {
      result.insert(allergies_table[i]);
    }
  }
  return result;
}
bool allergy_test::is_allergic_to(const std::string allergy) {
  std::unordered_set<std::string> result = get_allergies();
  if (result.find(allergy) == result.end()) {
    return false;
  }
  return true;
}
} // namespace allergies
