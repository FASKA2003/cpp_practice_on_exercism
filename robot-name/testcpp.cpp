#include <random>
#include <set>
int main() {
  std::random_device rd;  // obtain a random number from hardware
  std::mt19937 gen(rd()); // seed the generator
  std::uniform_int_distribution<> distr(65, 90); // define the range
  std::set<char> result;
  while (result.size() < 2) {
    result.insert(distr(gen));
  }
}
