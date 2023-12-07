#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
  // TODO: Implement round_down_scores
  std::vector<int> vectInt;
  int intValue = 0;
  for (const auto &value : student_scores) {
    intValue = static_cast<int>(value);
    vectInt.push_back(intValue);
  }
  return vectInt;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
  // TODO: Implement count_failed_students
  int counter = 0;
  for (int value : student_scores) {
    if (value <= 40) {
      counter++;
    }
  }
  return counter;
}

// Determine how many of the provided student scores were 'the best' based on
// the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores,
                                 int threshold) {
  // TODO: Implement above_threshold
  std::vector<int> bestScores;
  for (int value : student_scores) {
    if (value >= threshold) {
      bestScores.push_back(value);
    }
  }
  return bestScores;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
  // TODO: Implement letter_grades
  int Width = (highest_score - 40) / 4;
  return {41, 41 + Width, 41 + 2 * Width, 41 + 3 * Width};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string>
student_ranking(std::vector<int> student_scores,
                std::vector<std::string> student_names) {
  // TODO: Implement student_ranking
  std::vector<std::string> result;
  int rank = 0;
  for (auto value : student_scores) {
    result.push_back(std::to_string(rank + 1) + ". " + student_names[rank] +
                     ": " + std::to_string(value));
    rank++;
  }
  return result;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
  // TODO: Implement perfect_score
  std::string result = "";
  for (int i = 0; i < student_scores.size(); i++) {
    if (student_scores[i] == 100) {
      result = student_names[i];
      break;
    }
  }
  return result;
}
