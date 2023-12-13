#include "grade_school.h"

namespace grade_school {
void school::add(const std::string &name, int grade) {
  if (rosterSt.find(grade) == rosterSt.end()) {
    rosterSt[grade] = std::vector<std::string>();
  }
  rosterSt[grade].push_back(name);
  // Optionally, you can sort the vector after each addition
  std::sort(rosterSt[grade].begin(), rosterSt[grade].end());
}

std::map<int, std::vector<std::string>> school::roster() const {
  return rosterSt;
}

std::vector<std::string> school::grade(int grade) const {
  if (rosterSt.find(grade) == rosterSt.end()) {
    return std::vector<std::string>(); // Return an empty vector if the grade
                                       // doesn't exist
  }
  return rosterSt.at(grade);
}
} // namespace grade_school
