#include "food_chain.h"

std::string start_intro = {"I know an old lady who swallowed a "};

std::vector<std::string> animals = {"fly", "spider", "bird", "cat",
                                    "dog", "goat",   "cow",  "horse"};

std::vector<std::string> intros = {
    "",
    "It wriggled and jiggled and tickled inside her.\n",
    "How absurd to smallow a bird!\n",
    "Imagine that, to smallow a dog!\n",
    "What a hog, to smallow a dog!\n",
    "Just opened her throat and swallowed a goat!\n",
    "I don't know how she swallowed a cow!\n",
    "She's dead, of course!\n"};

std::vector<std::string> endings = {
    "I don't know why she swallowed the fly. Perhaps she'll die.\n",
    ".\n",
    " that wriggled and jiggled and tickled inside her.\n",
    ".\n",
    ".\n",
    ".\n",
    ".\n"};
namespace food_chain {
std::string verse(std::size_t v) {
  v--;
  std::string ret = start_intro + animals[v] + ".\n" + intros[v];
  if (v >= endings.size())
    return ret;
  for (int i = v; i > 0; i++) {
    ret += "She swallowed the " + animals[i] + "to catch the " +
           animals[i - 1] + endings[i];
  }
  ret += endings[0];
  return ret;
}

std::string verses(std::size_t start, std::size_t end) {
  std::string result;
  for (size_t i = start; i <= end; i++) {
    result += verse(i) + "\n";
  }
  return result;
}
std::string sing() { return verses(1, 8); }
} // namespace food_chain
