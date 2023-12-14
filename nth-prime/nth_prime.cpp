#include "nth_prime.h"
#include <cstring>

std::vector<int> primes;
bool ret = false;

namespace nth_prime {
int nth(int num) {
  if (ret == false) {
    GetPrimes();
    ret = true;
  }
  return primes[num + 1];
}
void GetPrimes() {
  bool IsPrime[MAX_SIZE];
  memset(IsPrime, true, sizeof(IsPrime));
  for (int p = 2; p * p < MAX_SIZE; p++) {
    if (IsPrime[p] == true) {
      for (int i = p * p; i < MAX_SIZE; i += p) {
        IsPrime[i] = false;
      }
    }
  }
  for (int p = 2; p < MAX_SIZE; p++) {
    if (IsPrime[p]) {
      primes.push_back(p);
    }
  }
}
} // namespace nth_prime
