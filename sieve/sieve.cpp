#include "sieve.h"

namespace sieve {
std::vector<int> primes(int numUpTo) {
  int size = numUpTo + 1;
  bool *prime = new bool[size];
  for (int i = 0; i < size; i++) {
    prime[i] = true;
  }
  for (int p = 2; p * p <= numUpTo; p++) {
    if (prime[p] == true) {
      for (int i = p * p; i <= numUpTo; i += p) {
        prime[i] = false;
      }
    }
  }
  std::vector<int> result;
  for (int p = 2; p <= numUpTo; p++) {
    if (prime[p]) {
      result.push_back(p);
    }
  }
  delete[] prime;
  return result;
}
} // namespace sieve
