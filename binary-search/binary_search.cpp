#include "binary_search.h"

std::size_t BST(std::vector<int> vect, int low, int high, int element) {
  if (high >= low) {
    int mid = low + (high - low) / 2;
    if (vect[mid] == element) {
      return mid;
    }
    if (vect[mid] > element) {
      return BST(vect, low, mid - 1, element);
    }
    return BST(vect, mid + 1, high, element);
  }
  return -1;
}

namespace binary_search {
std::size_t find(std::vector<int> data, int element) {
  return BST(data, 0, data.size() - 1, element);
}
} // namespace binary_search
