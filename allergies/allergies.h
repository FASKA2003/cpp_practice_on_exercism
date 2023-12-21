#if !defined(ALLERGIES_H)
#define ALLERGIES_H
#include <string>
#include <unordered_set>

namespace allergies {
class allergy_test {
public:
  int score;
  allergy_test(int score_N);
  std::unordered_set<std::string> get_allergies();
  bool is_allergic_to(std::string allergy);
};
} // namespace allergies

#endif // ALLERGIES_H
